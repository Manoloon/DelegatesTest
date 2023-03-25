#pragma once
#include "GameFramework/SpringArmComponent.h"
#include "UTestSpringComponent.generated.h"

DECLARE_DELEGATE_TwoParams(FOnChangedDistance,bool /*bActive*/,float /*Value*/);

UCLASS()
class UTestSpringComponent : public USpringArmComponent
{
	GENERATED_BODY()
public:
	FOnChangedDistance OnChangedDistance;
	virtual void PostInitProperties() override;
	virtual void UpdateDesiredArmLocation(bool bDoTrace, bool bDoLocationLag, bool bDoRotationLag, float DeltaTime) override;
	void CalcDistance() const;
};
