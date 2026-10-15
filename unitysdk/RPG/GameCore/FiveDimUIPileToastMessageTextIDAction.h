#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimUIPileToastMessageTextIDAction; }

#define RPG_GAMECORE_FIVEDIMUIPILETOASTMESSAGETEXTIDACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E24E0)
#define RPG_GAMECORE_FIVEDIMUIPILETOASTMESSAGETEXTIDACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E24F0)
#define RPG_GAMECORE_FIVEDIMUIPILETOASTMESSAGETEXTIDACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E23E0)

namespace RPG::GameCore
{
	class FiveDimUIPileToastMessageTextIDAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::Client::TextID TextID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMUIPILETOASTMESSAGETEXTIDACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimUIPileToastMessageTextIDAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimUIPileToastMessageTextIDAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMUIPILETOASTMESSAGETEXTIDACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimUIPileToastMessageTextIDAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimUIPileToastMessageTextIDAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMUIPILETOASTMESSAGETEXTIDACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
