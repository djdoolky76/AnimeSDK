#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBKDBJPNCGI;
namespace RPG::Client::DiceCombat { class DiceCombatPVPStartMatchParam; }
namespace System { class Exception; }

#define LBKDBJPNCGI___C__DISPLAYCLASS37_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1B2A2E40)
#define LBKDBJPNCGI___C__DISPLAYCLASS37_0__STARTPVPMATCH_B__0_OFFSET UNITYSDK_OFFSET(0x1B2A4B20)
#define LBKDBJPNCGI___C__DISPLAYCLASS37_0__STARTPVPMATCH_B__1_OFFSET UNITYSDK_OFFSET(0x1B2A4C40)

inline static constexpr unsigned int LBKDBJPNCGI___c__DisplayClass37_0_TypeDefinitionIndex = 78440;

	class LBKDBJPNCGI___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::LBKDBJPNCGI* __4__this; // 0x10
		::RPG::Client::DiceCombat::DiceCombatPVPStartMatchParam* param; // 0x18
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
