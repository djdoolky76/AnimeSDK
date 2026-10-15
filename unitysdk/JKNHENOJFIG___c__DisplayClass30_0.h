#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJPBKMBIGNC;

#define JKNHENOJFIG___C__DISPLAYCLASS30_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB228140)
#define JKNHENOJFIG___C__DISPLAYCLASS30_0__GETAGENDA_B__0_OFFSET UNITYSDK_OFFSET(0xB2293D0)

	class JKNHENOJFIG___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::UInt32 day; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNHENOJFIG___C__DISPLAYCLASS30_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAgenda_b__0(::AJPBKMBIGNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJPBKMBIGNC*))((::PBYTE)hIl2Cpp + JKNHENOJFIG___C__DISPLAYCLASS30_0__GETAGENDA_B__0_OFFSET))(this, a1);
		}

	};
