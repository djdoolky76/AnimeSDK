#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAILIPBNAJL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HAILIPBNAJL___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C623850)
#define HAILIPBNAJL___C__DISPLAYCLASS8_0___AICHECKNEEDUSELIMITEDDICE_B__0_OFFSET UNITYSDK_OFFSET(0x1C62CD40)

inline static constexpr unsigned int HAILIPBNAJL___c__DisplayClass8_0_TypeDefinitionIndex = 36418;

	class HAILIPBNAJL___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::HAILIPBNAJL* __4__this; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* diceResults; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAILIPBNAJL___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Int32 __AICheckNeedUseLimitedDice_b__0(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HAILIPBNAJL___C__DISPLAYCLASS8_0___AICHECKNEEDUSELIMITEDDICE_B__0_OFFSET))(this, a1, a2);
		}

	};
