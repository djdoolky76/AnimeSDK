#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAHPNAEGACM;
class IBIIMGJDFOC;

#define IBIIMGJDFOC___C__DISPLAYCLASS21_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15E39B20)
#define IBIIMGJDFOC___C__DISPLAYCLASS21_0__ONDETAILCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0x15E3A6C0)

	class IBIIMGJDFOC___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::GAHPNAEGACM* detail; // 0x10
		::IBIIMGJDFOC* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIIMGJDFOC___C__DISPLAYCLASS21_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnDetailChange_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIIMGJDFOC___C__DISPLAYCLASS21_0__ONDETAILCHANGE_B__0_OFFSET))(this);
		}

	};
