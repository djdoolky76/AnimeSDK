#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define PLLPNJOEDHF___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC30B730)
#define PLLPNJOEDHF___C__DISPLAYCLASS3_0__ADDHANDLER_B__0_OFFSET UNITYSDK_OFFSET(0xC30B860)

	class PLLPNJOEDHF___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Action* handler; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLLPNJOEDHF___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void _AddHandler_b__0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PLLPNJOEDHF___C__DISPLAYCLASS3_0__ADDHANDLER_B__0_OFFSET))(this, a1);
		}

	};
