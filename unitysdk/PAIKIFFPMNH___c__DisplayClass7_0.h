#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJNIEDDIKOI;
class OLLGLJCHNDI;

#define PAIKIFFPMNH___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBFC3650)
#define PAIKIFFPMNH___C__DISPLAYCLASS7_0__UNREGISTEREVENT_B__0_OFFSET UNITYSDK_OFFSET(0xBFC3EB0)

inline static constexpr unsigned int PAIKIFFPMNH___c__DisplayClass7_0_TypeDefinitionIndex = 78038;

	class PAIKIFFPMNH___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::OLLGLJCHNDI* handler; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAIKIFFPMNH___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _UnregisterEvent_b__0(::AJNIEDDIKOI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJNIEDDIKOI*))((::PBYTE)hIl2Cpp + PAIKIFFPMNH___C__DISPLAYCLASS7_0__UNREGISTEREVENT_B__0_OFFSET))(this, a1);
		}

	};
