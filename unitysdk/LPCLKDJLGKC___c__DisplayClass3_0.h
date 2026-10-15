#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define LPCLKDJLGKC___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB819160)
#define LPCLKDJLGKC___C__DISPLAYCLASS3_0__FOREACHPETID_B__0_OFFSET UNITYSDK_OFFSET(0xB819350)

	class LPCLKDJLGKC___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Action* action; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCLKDJLGKC___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _ForeachPetId_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LPCLKDJLGKC___C__DISPLAYCLASS3_0__FOREACHPETID_B__0_OFFSET))(this, a1);
		}

	};
