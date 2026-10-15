#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConvinceMoveCurrTurnOption; }

#define RPG_GAMECORE_CONVINCEMOVECURRTURNOPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B12C0)
#define RPG_GAMECORE_CONVINCEMOVECURRTURNOPTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B12D0)
#define RPG_GAMECORE_CONVINCEMOVECURRTURNOPTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B1200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceMoveCurrTurnOption_TypeDefinitionIndex = 21841;

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
