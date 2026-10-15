#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class JNJKCEIJENA;

#define JNJKCEIJENA___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB287A50)
#define JNJKCEIJENA___C__DISPLAYCLASS9_0___CREATETRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0xB288CC0)

	class JNJKCEIJENA___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::HIOEAKHGILF* portalEntity; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJKCEIJENA___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Void __CreateTrigger_b__0(::JNJKCEIJENA* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JNJKCEIJENA*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + JNJKCEIJENA___C__DISPLAYCLASS9_0___CREATETRIGGER_B__0_OFFSET))(this, a1, a2);
		}

	};
