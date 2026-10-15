#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MCLHMGFGEFK.h"

#define LJFHKAJPFNE___C__DISPLAYCLASS46_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB711BB0)
#define LJFHKAJPFNE___C__DISPLAYCLASS46_0__LOADUNIFIEDBATTLEAREA_B__0_OFFSET UNITYSDK_OFFSET(0xB711BC0)

inline static constexpr unsigned int LJFHKAJPFNE___c__DisplayClass46_0_TypeDefinitionIndex = 73862;

	class LJFHKAJPFNE___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::System::UInt32 unifiedBattleAreaID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFHKAJPFNE___C__DISPLAYCLASS46_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _LoadUnifiedBattleArea_b__0(::MCLHMGFGEFK a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MCLHMGFGEFK))((::PBYTE)hIl2Cpp + LJFHKAJPFNE___C__DISPLAYCLASS46_0__LOADUNIFIEDBATTLEAREA_B__0_OFFSET))(this, a1);
		}

	};
