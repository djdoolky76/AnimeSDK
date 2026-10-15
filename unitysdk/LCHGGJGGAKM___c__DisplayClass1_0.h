#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define LCHGGJGGAKM___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB6150A0)
#define LCHGGJGGAKM___C__DISPLAYCLASS1_0__SUBSCRIBEANYITEMQUANTITYCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0xB6152F0)

	class LCHGGJGGAKM___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Action* observer; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCHGGJGGAKM___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _SubscribeAnyItemQuantityChange_b__0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LCHGGJGGAKM___C__DISPLAYCLASS1_0__SUBSCRIBEANYITEMQUANTITYCHANGE_B__0_OFFSET))(this, a1);
		}

	};
