#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/WaitConditionString.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitConditionStringBattleClientOnly; }

#define RPG_GAMECORE_WAITCONDITIONSTRINGBATTLECLIENTONLY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC95540)
#define RPG_GAMECORE_WAITCONDITIONSTRINGBATTLECLIENTONLY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC95550)
#define RPG_GAMECORE_WAITCONDITIONSTRINGBATTLECLIENTONLY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC956D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitConditionStringBattleClientOnly_TypeDefinitionIndex = 24067;

	class WaitConditionStringBattleClientOnly : public ::RPG::GameCore::WaitConditionString
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCONDITIONSTRINGBATTLECLIENTONLY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitConditionStringBattleClientOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitConditionStringBattleClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCONDITIONSTRINGBATTLECLIENTONLY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitConditionStringBattleClientOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitConditionStringBattleClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCONDITIONSTRINGBATTLECLIENTONLY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
