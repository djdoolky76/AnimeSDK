#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECPGBDINBAB;
class NJCHGIHCBAC;

#define ECPGBDINBAB___C__DISPLAYCLASS74_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1330BB60)
#define ECPGBDINBAB___C__DISPLAYCLASS74_0__SYNCAOEDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1330CE20)

inline static constexpr unsigned int ECPGBDINBAB___c__DisplayClass74_0_TypeDefinitionIndex = 78016;

	class ECPGBDINBAB___c__DisplayClass74_0 : public ::System::Object
	{
	public:
		::NJCHGIHCBAC* aoeDataMessage; // 0x10
		::ECPGBDINBAB* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB___C__DISPLAYCLASS74_0_CTOR_OFFSET))(this);
		}

		::System::Void _SyncAoeData_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB___C__DISPLAYCLASS74_0__SYNCAOEDATA_B__0_OFFSET))(this);
		}

	};
