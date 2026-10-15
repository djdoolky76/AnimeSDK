#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBMMGODFEEO;
namespace System { class String; }

#define HPPNAAGGAMP___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15DE18B0)
#define HPPNAAGGAMP___C__DISPLAYCLASS4_0__BORROW_B__0_OFFSET UNITYSDK_OFFSET(0x15DE18C0)

	class HPPNAAGGAMP___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::String* timelinePath; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPNAAGGAMP___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Borrow_b__0(::EBMMGODFEEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EBMMGODFEEO*))((::PBYTE)hIl2Cpp + HPPNAAGGAMP___C__DISPLAYCLASS4_0__BORROW_B__0_OFFSET))(this, a1);
		}

	};
