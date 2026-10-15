#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyCondGridIdxBetweenConfig; }

#define RPG_GAMECORE_TRAINPARTYCONDGRIDIDXBETWEENCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC021A0)
#define RPG_GAMECORE_TRAINPARTYCONDGRIDIDXBETWEENCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC021B0)
#define RPG_GAMECORE_TRAINPARTYCONDGRIDIDXBETWEENCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC02160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCondGridIdxBetweenConfig_TypeDefinitionIndex = 18089;

	class TrainPartyCondGridIdxBetweenConfig : public ::RPG::GameCore::TrainPartyConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDGRIDIDXBETWEENCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyCondGridIdxBetweenConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyCondGridIdxBetweenConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDGRIDIDXBETWEENCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyCondGridIdxBetweenConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyCondGridIdxBetweenConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDGRIDIDXBETWEENCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
