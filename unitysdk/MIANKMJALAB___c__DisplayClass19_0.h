#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MIANKMJALAB;

#define MIANKMJALAB___C__DISPLAYCLASS19_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB94CF40)
#define MIANKMJALAB___C__DISPLAYCLASS19_0__SETMINUSSHOWBUFFCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0xB94CF50)

inline static constexpr unsigned int MIANKMJALAB___c__DisplayClass19_0_TypeDefinitionIndex = 71390;

	class MIANKMJALAB___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::MIANKMJALAB* __4__this; // 0x10
		::System::Int32 count; // 0x18
		::System::Boolean isDirty; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIANKMJALAB___C__DISPLAYCLASS19_0_CTOR_OFFSET))(this);
		}

		::System::Void _SetMinusShowBuffCount_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIANKMJALAB___C__DISPLAYCLASS19_0__SETMINUSSHOWBUFFCOUNT_B__0_OFFSET))(this);
		}

	};
