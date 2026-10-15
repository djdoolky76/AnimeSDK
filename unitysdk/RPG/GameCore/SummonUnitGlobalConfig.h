#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/UnitTriggerDetectColliderType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SummonUnitGameplayConfig; }
namespace RPG::GameCore { class SummonUnitGlobalConfig; }
namespace RPG::GameCore { class SummonUnitGroupConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SUMMONUNITGLOBALCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3E2B0)
#define RPG_GAMECORE_SUMMONUNITGLOBALCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB3DFF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitGlobalConfig_TypeDefinitionIndex = 17609;

	class SummonUnitGlobalConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::UnitTriggerDetectColliderType TriggerDefaultDetectColliderType; // 0x10
		::System::Single TriggerRaycastItvl; // 0x14
		::System::Single TriggerRaycastUpperBound; // 0x18
		::System::Single TriggerRaycastLowerBound; // 0x1C
		::System::Single TriggerPathCheckDistRatio; // 0x20
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SummonUnitGroupConfig*>* SummonUnitGroup; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SummonUnitGameplayConfig*>* GameplayConfigMap; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITGLOBALCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SummonUnitGlobalConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SummonUnitGlobalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITGLOBALCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
