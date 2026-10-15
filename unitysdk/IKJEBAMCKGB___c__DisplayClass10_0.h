#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKJEBAMCKGB;

#define IKJEBAMCKGB___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1648EAB0)
#define IKJEBAMCKGB___C__DISPLAYCLASS10_0__SETVIEWACTIVE_B__0_OFFSET UNITYSDK_OFFSET(0x1648FC50)

inline static constexpr unsigned int IKJEBAMCKGB___c__DisplayClass10_0_TypeDefinitionIndex = 72148;

	class IKJEBAMCKGB___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::IKJEBAMCKGB* __4__this; // 0x10
		::System::Boolean needNotify; // 0x18
		::System::Boolean active; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Void _SetViewActive_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB___C__DISPLAYCLASS10_0__SETVIEWACTIVE_B__0_OFFSET))(this);
		}

	};
