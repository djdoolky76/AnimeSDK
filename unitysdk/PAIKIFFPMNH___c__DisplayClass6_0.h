#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJNIEDDIKOI;
class OLLGLJCHNDI;

#define PAIKIFFPMNH___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBFCA9A0)
#define PAIKIFFPMNH___C__DISPLAYCLASS6_0__REGISTEREVENT_B__0_OFFSET UNITYSDK_OFFSET(0xBFCB390)

	class PAIKIFFPMNH___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::OLLGLJCHNDI* handler; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAIKIFFPMNH___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _RegisterEvent_b__0(::AJNIEDDIKOI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJNIEDDIKOI*))((::PBYTE)hIl2Cpp + PAIKIFFPMNH___C__DISPLAYCLASS6_0__REGISTEREVENT_B__0_OFFSET))(this, a1);
		}

	};
