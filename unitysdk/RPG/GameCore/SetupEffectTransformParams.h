#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetupEffectTransformParamsOffsetType.h"
#include "unitysdk/RPG/GameCore/SetupEffectTransformParamsRotateType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetupEffectTransformParams; }

#define RPG_GAMECORE_SETUPEFFECTTRANSFORMPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9F330)
#define RPG_GAMECORE_SETUPEFFECTTRANSFORMPARAMS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9F340)
#define RPG_GAMECORE_SETUPEFFECTTRANSFORMPARAMS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9F300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetupEffectTransformParams_TypeDefinitionIndex = 22238;

	class SetupEffectTransformParams : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean OverrideFloating; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::SetupEffectTransformParamsOffsetType OffsetType; // 0x1C
		::RPG::GameCore::DynamicFloat* FloatingFrequency; // 0x20
		::RPG::GameCore::DynamicFloat* FloatingDistance; // 0x28
		::RPG::GameCore::DynamicFloat* OffsetNoise3DSpeed; // 0x30
		::RPG::GameCore::DynamicFloat* RandomMove3DBoxSize; // 0x38
		::System::Boolean OverrideRotating; // 0x40
		::System::Byte _padding1[0x3];
		::RPG::GameCore::SetupEffectTransformParamsRotateType RotateType; // 0x44
		::RPG::GameCore::DynamicFloat* RotatingFrequency; // 0x48
		::RPG::GameCore::DynamicFloat* RotatingSpeed; // 0x50
		::RPG::GameCore::DynamicFloat* RotateNoise3DSpeed; // 0x58
		::RPG::GameCore::DynamicFloat* WobbyScale; // 0x60
		::RPG::MVector3 WobbyCenterOffset; // 0x68
		::System::Byte _padding2[0x4];
		::RPG::GameCore::DynamicFloat* SwingAngle; // 0x78
		::RPG::GameCore::DynamicFloat* SwingFrequency; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPEFFECTTRANSFORMPARAMS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetupEffectTransformParams* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetupEffectTransformParams*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPEFFECTTRANSFORMPARAMS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetupEffectTransformParams* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetupEffectTransformParams*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPEFFECTTRANSFORMPARAMS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
