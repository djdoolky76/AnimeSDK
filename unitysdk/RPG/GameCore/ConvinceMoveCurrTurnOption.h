#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConvinceMoveCurrTurnOption; }

#define RPG_GAMECORE_CONVINCEMOVECURRTURNOPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DED50)
#define RPG_GAMECORE_CONVINCEMOVECURRTURNOPTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5DED60)
#define RPG_GAMECORE_CONVINCEMOVECURRTURNOPTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5DEC90)

namespace RPG::GameCore
{
	class ConvinceMoveCurrTurnOption : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVECURRTURNOPTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConvinceMoveCurrTurnOption* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConvinceMoveCurrTurnOption*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVECURRTURNOPTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConvinceMoveCurrTurnOption* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConvinceMoveCurrTurnOption*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVECURRTURNOPTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
