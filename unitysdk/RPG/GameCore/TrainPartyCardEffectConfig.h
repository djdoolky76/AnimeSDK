#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyActionConfigBase; }
namespace RPG::GameCore { class TrainPartyCardEffectConfig; }

#define RPG_GAMECORE_TRAINPARTYCARDEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC01D90)
#define RPG_GAMECORE_TRAINPARTYCARDEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC01CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCardEffectConfig_TypeDefinitionIndex = 18084;

	class TrainPartyCardEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TrainPartyActionConfigBase*>* ActionList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCARDEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyCardEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyCardEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCARDEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
