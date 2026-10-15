#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MIMCAGPCALM;
class PCBNCBNOAAE;

#define MIMCAGPCALM___C__DISPLAYCLASS42_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB95D1E0)
#define MIMCAGPCALM___C__DISPLAYCLASS42_0__SYNCSNAPSHOT_B__0_OFFSET UNITYSDK_OFFSET(0xB95E560)

inline static constexpr unsigned int MIMCAGPCALM___c__DisplayClass42_0_TypeDefinitionIndex = 78113;

	class MIMCAGPCALM___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::PCBNCBNOAAE* snapShot; // 0x10
		::MIMCAGPCALM* __4__this; // 0x18
		::System::UInt64 timeStamp; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMCAGPCALM___C__DISPLAYCLASS42_0_CTOR_OFFSET))(this);
		}

		::System::Void _SyncSnapShot_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMCAGPCALM___C__DISPLAYCLASS42_0__SYNCSNAPSHOT_B__0_OFFSET))(this);
		}

	};
