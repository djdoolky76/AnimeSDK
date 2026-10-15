#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AxisType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerWalkingEffect; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERWALKINGEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC32910)
#define RPG_GAMECORE_TRIGGERWALKINGEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC32930)
#define RPG_GAMECORE_TRIGGERWALKINGEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC328C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerWalkingEffect_TypeDefinitionIndex = 22431;

	class TriggerWalkingEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* FootName; // 0x18
		::System::String* EffectPrefab; // 0x20
		::System::Boolean UseFootScale; // 0x28
		::System::Byte _padding0[0x3];
		::RPG::GameCore::AxisType RotationAxis; // 0x2C
		::System::Boolean UseLocalRotationSpace; // 0x30
		::System::Boolean TriggerWaveEffect; // 0x31
		::System::Byte _padding1[0x2];
		::System::Single WalkingEffectMaxDepth; // 0x34
		::System::String* WalkingEffectScaleCurveName; // 0x38
		::RPG::MVector3 LocalOffset; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERWALKINGEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerWalkingEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerWalkingEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERWALKINGEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerWalkingEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerWalkingEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERWALKINGEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
