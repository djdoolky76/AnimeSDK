#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropSoundConfig; }
namespace RPG::GameCore { class SummonUnitTriggerConfig; }
namespace RPG::GameCore { class UnitCustomTriggerConfig; }
namespace RPG::GameCore { class UnitHintTriggerConfig; }

#define RPG_GAMECORE_SUMMONUNITTRIGGERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3EA60)
#define RPG_GAMECORE_SUMMONUNITTRIGGERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB3CA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitTriggerConfig_TypeDefinitionIndex = 17603;

	class SummonUnitTriggerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::UnitHintTriggerConfig* HintTrigger; // 0x10
		::RPG::GameCore::PropSoundConfig* SoundTrigger; // 0x18
		::Il2CppArray<::RPG::GameCore::UnitCustomTriggerConfig*>* CustomTriggers; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITTRIGGERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SummonUnitTriggerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SummonUnitTriggerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITTRIGGERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
