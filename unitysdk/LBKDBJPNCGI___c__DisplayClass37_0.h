#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBKDBJPNCGI;
namespace RPG::Client::DiceCombat { class DiceCombatPVPStartMatchParam; }
namespace System { class Exception; }

#define LBKDBJPNCGI___C__DISPLAYCLASS37_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB604BD0)
#define LBKDBJPNCGI___C__DISPLAYCLASS37_0__STARTPVPMATCH_B__0_OFFSET UNITYSDK_OFFSET(0xB6068A0)
#define LBKDBJPNCGI___C__DISPLAYCLASS37_0__STARTPVPMATCH_B__1_OFFSET UNITYSDK_OFFSET(0xB6069C0)

inline static constexpr unsigned int LBKDBJPNCGI___c__DisplayClass37_0_TypeDefinitionIndex = 76114;

	class LBKDBJPNCGI___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::DiceCombatPVPStartMatchParam* param; // 0x10
		::LBKDBJPNCGI* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKDBJPNCGI___C__DISPLAYCLASS37_0_CTOR_OFFSET))(this);
		}

		::System::Void _StartPVPMatch_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKDBJPNCGI___C__DISPLAYCLASS37_0__STARTPVPMATCH_B__0_OFFSET))(this);
		}

		::System::Void _StartPVPMatch_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + LBKDBJPNCGI___C__DISPLAYCLASS37_0__STARTPVPMATCH_B__1_OFFSET))(this, a1);
		}

	};
