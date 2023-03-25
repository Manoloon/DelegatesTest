#include "UTestSpringComponent.h"


void UTestSpringComponent::PostInitProperties()
{
	Super::PostInitProperties();
}

void UTestSpringComponent::UpdateDesiredArmLocation(bool bDoTrace, bool bDoLocationLag, bool bDoRotationLag,
                                                    float DeltaTime)
{
	Super::UpdateDesiredArmLocation(bDoTrace, bDoLocationLag, bDoRotationLag, DeltaTime);
	CalcDistance();
}

void UTestSpringComponent::CalcDistance() const
{
	if(GetChildComponent(0))
	{
		const float Distance = FVector::Distance(GetChildComponent(0)->GetComponentLocation(),GetOwner()->GetActorLocation());
		if(Distance < 100)
		{
			OnChangedDistance.Execute(true,Distance);
		}
	}
}
