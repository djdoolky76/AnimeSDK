#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HAILIPBNAJL___C__DISPLAYCLASS37_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1C65B0E0)
#define HAILIPBNAJL___C__DISPLAYCLASS37_1___CALCDICESCOREBYAILEVEL_B__2_OFFSET UNITYSDK_OFFSET(0x1C65B0F0)

	template <typename T>
	class HAILIPBNAJL___c__DisplayClass37_1 : public ::System::Object
	{
	public:
		::System::UInt64 mask; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAILIPBNAJL___C__DISPLAYCLASS37_1_CTOR_OFFSET))(this);
		}

		::System::Boolean __calcDiceScoreByAILevel_b__2(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HAILIPBNAJL___C__DISPLAYCLASS37_1___CALCDICESCOREBYAILEVEL_B__2_OFFSET))(this, a1);
		}

	};
