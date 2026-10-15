#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGAGNDEHIOI;

#define AGAGNDEHIOI___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCF24610)
#define AGAGNDEHIOI___C__DISPLAYCLASS9_0__SETMINUSSHOWBUFFCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0xCF25370)

	class AGAGNDEHIOI___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::AGAGNDEHIOI* __4__this; // 0x10
		::System::Int32 count; // 0x18
		::System::Boolean isDirty; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAGNDEHIOI___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Void _SetMinusShowBuffCount_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAGNDEHIOI___C__DISPLAYCLASS9_0__SETMINUSSHOWBUFFCOUNT_B__0_OFFSET))(this);
		}

	};
