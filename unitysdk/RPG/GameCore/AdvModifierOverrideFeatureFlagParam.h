#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureBehaviorClampAlertLevel.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvModifierOverrideFeatureFlagParam; }

#define RPG_GAMECORE_ADVMODIFIEROVERRIDEFEATUREFLAGPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A37D0)
#define RPG_GAMECORE_ADVMODIFIEROVERRIDEFEATUREFLAGPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A37E0)
#define RPG_GAMECORE_ADVMODIFIEROVERRIDEFEATUREFLAGPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A37A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvModifierOverrideFeatureFlagParam_TypeDefinitionIndex = 21809;

	class AdvModifierOverrideFeatureFlagParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AdventureBehaviorClampAlertLevel OverrideAlertLevelClamp; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMODIFIEROVERRIDEFEATUREFLAGPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvModifierOverrideFeatureFlagParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvModifierOverrideFeatureFlagParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMODIFIEROVERRIDEFEATUREFLAGPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvModifierOverrideFeatureFlagParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvModifierOverrideFeatureFlagParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMODIFIEROVERRIDEFEATUREFLAGPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
