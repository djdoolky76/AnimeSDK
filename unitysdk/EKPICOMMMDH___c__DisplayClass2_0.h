#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKPICOMMMDH;
class INMMPMDELKE;

#define EKPICOMMMDH___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1550CAA0)
#define EKPICOMMMDH___C__DISPLAYCLASS2_0___CREATETRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x1550CCA0)
#define EKPICOMMMDH___C__DISPLAYCLASS2_0___CREATETRIGGER_B__1_OFFSET UNITYSDK_OFFSET(0x1550CD60)

inline static constexpr unsigned int EKPICOMMMDH___c__DisplayClass2_0_TypeDefinitionIndex = 76804;

	class EKPICOMMMDH___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::INMMPMDELKE* entity; // 0x10
		::EKPICOMMMDH* __4__this; // 0x18
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
