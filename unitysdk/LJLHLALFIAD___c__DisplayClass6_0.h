#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::FateRin::View::Battle { class FateRinBattleHudHandCardLayout; }

#define LJLHLALFIAD___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB7189F0)
#define LJLHLALFIAD___C__DISPLAYCLASS6_0__CREATEREFLOWCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0xB719E30)

inline static constexpr unsigned int LJLHLALFIAD___c__DisplayClass6_0_TypeDefinitionIndex = 80845;

	class LJLHLALFIAD___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* handCardLayout; // 0x10
		::System::Single duration; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLHLALFIAD___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Void _CreateReflowCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLHLALFIAD___C__DISPLAYCLASS6_0__CREATEREFLOWCOMMAND_B__0_OFFSET))(this);
		}

	};
