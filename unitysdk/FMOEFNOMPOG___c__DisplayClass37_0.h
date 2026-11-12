#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMOEFNOMPOG;

#define FMOEFNOMPOG___C__DISPLAYCLASS37_0_CTOR_OFFSET UNITYSDK_OFFSET(0x167D4B10)
#define FMOEFNOMPOG___C__DISPLAYCLASS37_0___TRYAUTOREMOVEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x167D4F00)

inline static constexpr unsigned int FMOEFNOMPOG___c__DisplayClass37_0_TypeDefinitionIndex = 80769;

	class FMOEFNOMPOG___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::FMOEFNOMPOG* __4__this; // 0x10
		::System::Int32 effectEntityRuntimeID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOEFNOMPOG___C__DISPLAYCLASS37_0_CTOR_OFFSET))(this);
		}

		::System::Void __TryAutoRemoveEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOEFNOMPOG___C__DISPLAYCLASS37_0___TRYAUTOREMOVEEFFECT_B__0_OFFSET))(this);
		}

	};
