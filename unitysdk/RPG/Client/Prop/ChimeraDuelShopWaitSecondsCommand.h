#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICCLDNDNHPD;
namespace System { class Action; }

#define RPG_CLIENT_PROP_CHIMERADUELSHOPWAITSECONDSCOMMAND_CTOR_OFFSET UNITYSDK_OFFSET(0xDC74110)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPWAITSECONDSCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xDC74120)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPWAITSECONDSCOMMAND_TICK_OFFSET UNITYSDK_OFFSET(0xDC74180)

namespace RPG::Client::Prop
{
	class ChimeraDuelShopWaitSecondsCommand : public ::System::Object
	{
	public:
		::System::Action* _OnComplete; // 0x10
		::System::Single _Elapsed; // 0x18
		::System::Single _Total; // 0x1C
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPWAITSECONDSCOMMAND_CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute(::ICCLDNDNHPD* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ICCLDNDNHPD*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPWAITSECONDSCOMMAND_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPWAITSECONDSCOMMAND_TICK_OFFSET))(this, a1);
		}

	};
}
