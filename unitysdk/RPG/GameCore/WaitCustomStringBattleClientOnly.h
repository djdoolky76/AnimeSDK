#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/WaitCustomString.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitCustomStringBattleClientOnly; }

#define RPG_GAMECORE_WAITCUSTOMSTRINGBATTLECLIENTONLY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC95AF0)
#define RPG_GAMECORE_WAITCUSTOMSTRINGBATTLECLIENTONLY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC95B00)
#define RPG_GAMECORE_WAITCUSTOMSTRINGBATTLECLIENTONLY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC95E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitCustomStringBattleClientOnly_TypeDefinitionIndex = 22906;

	class WaitCustomStringBattleClientOnly : public ::RPG::GameCore::WaitCustomString
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCUSTOMSTRINGBATTLECLIENTONLY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitCustomStringBattleClientOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitCustomStringBattleClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCUSTOMSTRINGBATTLECLIENTONLY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitCustomStringBattleClientOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitCustomStringBattleClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCUSTOMSTRINGBATTLECLIENTONLY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
