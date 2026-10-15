#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIEDDEJLAOD;
class GAHPNAEGACM;

#define DIEDDEJLAOD___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0xEBEB900)
#define DIEDDEJLAOD___C__DISPLAYCLASS13_0__ONDETAILCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0xEBEC360)

inline static constexpr unsigned int DIEDDEJLAOD___c__DisplayClass13_0_TypeDefinitionIndex = 71283;

	class DIEDDEJLAOD___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::DIEDDEJLAOD* __4__this; // 0x10
		::GAHPNAEGACM* detail; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEDDEJLAOD___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnDetailChange_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEDDEJLAOD___C__DISPLAYCLASS13_0__ONDETAILCHANGE_B__0_OFFSET))(this);
		}

	};
