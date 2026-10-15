#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyModifierModifyCardStepOnGridIdxBetweenConfig; }

#define RPG_GAMECORE_TRAINPARTYMODIFIERMODIFYCARDSTEPONGRIDIDXBETWEENCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC32630)
#define RPG_GAMECORE_TRAINPARTYMODIFIERMODIFYCARDSTEPONGRIDIDXBETWEENCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC32640)
#define RPG_GAMECORE_TRAINPARTYMODIFIERMODIFYCARDSTEPONGRIDIDXBETWEENCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC328A0)

namespace RPG::GameCore
{
	class TrainPartyModifierModifyCardStepOnGridIdxBetweenConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERMODIFYCARDSTEPONGRIDIDXBETWEENCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierModifyCardStepOnGridIdxBetweenConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierModifyCardStepOnGridIdxBetweenConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERMODIFYCARDSTEPONGRIDIDXBETWEENCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierModifyCardStepOnGridIdxBetweenConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierModifyCardStepOnGridIdxBetweenConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERMODIFYCARDSTEPONGRIDIDXBETWEENCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
