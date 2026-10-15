#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKPICOMMMDH;
class INMMPMDELKE;

#define EKPICOMMMDH___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15518730)
#define EKPICOMMMDH___C__DISPLAYCLASS2_0___CREATETRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x15518930)
#define EKPICOMMMDH___C__DISPLAYCLASS2_0___CREATETRIGGER_B__1_OFFSET UNITYSDK_OFFSET(0x155189F0)

	class EKPICOMMMDH___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::EKPICOMMMDH* __4__this; // 0x10
		::INMMPMDELKE* entity; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPICOMMMDH___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void __CreateTrigger_b__0(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + EKPICOMMMDH___C__DISPLAYCLASS2_0___CREATETRIGGER_B__0_OFFSET))(this, a1);
		}

		::System::Void __CreateTrigger_b__1(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + EKPICOMMMDH___C__DISPLAYCLASS2_0___CREATETRIGGER_B__1_OFFSET))(this, a1);
		}

	};
