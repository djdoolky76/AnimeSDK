#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HAILIPBNAJL___C__DISPLAYCLASS41_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C62BC70)
#define HAILIPBNAJL___C__DISPLAYCLASS41_0___GETDICECONTENTWEIGHTLISTMAP_B__1_OFFSET UNITYSDK_OFFSET(0x1C62CD20)

inline static constexpr unsigned int HAILIPBNAJL___c__DisplayClass41_0_TypeDefinitionIndex = 36417;

	class HAILIPBNAJL___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::System::Int64 totalWeight; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAILIPBNAJL___C__DISPLAYCLASS41_0_CTOR_OFFSET))(this);
		}

		::System::Single __GetDiceContentWeightListMap_b__1(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HAILIPBNAJL___C__DISPLAYCLASS41_0___GETDICECONTENTWEIGHTLISTMAP_B__1_OFFSET))(this, a1);
		}

	};
