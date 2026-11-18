#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int IGIPHAMJHPB_TypeDefinitionIndex = 86832;

enum class IGIPHAMJHPB : ::System::Int32
{
	UseCustomTarget = 10,
	HasConfigPosRot = 3,
	NeedCheckUnAttachParticleSystem = 2,
	DetachEffectFromAttachTargetWhenFinish = 1,
	InParryMode = 9,
	IkEffectFirstTime = 5,
	PosRotNeedRaycastGround = 7,
	None = 0,
	CheckGround = 6,
	ParticleFollow = 4,
	NotOptimize = 8,
};
