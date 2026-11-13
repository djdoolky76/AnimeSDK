#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAHPNAEGACM;
class IBIIMGJDFOC;

#define IBIIMGJDFOC___C__DISPLAYCLASS21_0_CTOR_OFFSET UNITYSDK_OFFSET(0x188B6D50)
#define IBIIMGJDFOC___C__DISPLAYCLASS21_0__ONDETAILCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0x188B78F0)

inline static constexpr unsigned int IBIIMGJDFOC___c__DisplayClass21_0_TypeDefinitionIndex = 73254;

	class IBIIMGJDFOC___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::IBIIMGJDFOC* __4__this; // 0x10
		::GAHPNAEGACM* detail; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIIMGJDFOC___C__DISPLAYCLASS21_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnDetailChange_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIIMGJDFOC___C__DISPLAYCLASS21_0__ONDETAILCHANGE_B__0_OFFSET))(this);
		}

	};
