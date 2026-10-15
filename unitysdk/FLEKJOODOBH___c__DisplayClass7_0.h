#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLEKJOODOBH;
class INMMPMDELKE;

#define FLEKJOODOBH___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1582F4F0)
#define FLEKJOODOBH___C__DISPLAYCLASS7_0___ADDEVENTEMITTER_B__0_OFFSET UNITYSDK_OFFSET(0x1582F6C0)
#define FLEKJOODOBH___C__DISPLAYCLASS7_0___ADDEVENTEMITTER_B__1_OFFSET UNITYSDK_OFFSET(0x1582F6F0)

inline static constexpr unsigned int FLEKJOODOBH___c__DisplayClass7_0_TypeDefinitionIndex = 76757;

	class FLEKJOODOBH___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::INMMPMDELKE* entity; // 0x10
		::FLEKJOODOBH* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEKJOODOBH___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void __AddEventEmitter_b__0(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + FLEKJOODOBH___C__DISPLAYCLASS7_0___ADDEVENTEMITTER_B__0_OFFSET))(this, a1);
		}

		::System::Void __AddEventEmitter_b__1(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + FLEKJOODOBH___C__DISPLAYCLASS7_0___ADDEVENTEMITTER_B__1_OFFSET))(this, a1);
		}

	};
