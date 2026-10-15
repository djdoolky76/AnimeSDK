#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyCondCardIdxBetweenConfig; }

#define RPG_GAMECORE_TRAINPARTYCONDCARDIDXBETWEENCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2F980)
#define RPG_GAMECORE_TRAINPARTYCONDCARDIDXBETWEENCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC2F990)
#define RPG_GAMECORE_TRAINPARTYCONDCARDIDXBETWEENCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC2F940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCondCardIdxBetweenConfig_TypeDefinitionIndex = 18090;

	class TrainPartyCondCardIdxBetweenConfig : public ::RPG::GameCore::TrainPartyConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDCARDIDXBETWEENCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyCondCardIdxBetweenConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyCondCardIdxBetweenConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDCARDIDXBETWEENCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyCondCardIdxBetweenConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyCondCardIdxBetweenConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDCARDIDXBETWEENCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
