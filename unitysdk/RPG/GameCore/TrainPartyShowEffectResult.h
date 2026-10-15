#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyShowEffectResult; }

#define RPG_GAMECORE_TRAINPARTYSHOWEFFECTRESULT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC07310)
#define RPG_GAMECORE_TRAINPARTYSHOWEFFECTRESULT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC07320)
#define RPG_GAMECORE_TRAINPARTYSHOWEFFECTRESULT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC07250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyShowEffectResult_TypeDefinitionIndex = 22364;

	class TrainPartyShowEffectResult : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSHOWEFFECTRESULT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyShowEffectResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyShowEffectResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSHOWEFFECTRESULT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyShowEffectResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyShowEffectResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSHOWEFFECTRESULT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
