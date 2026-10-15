#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMIIPKCBNIE;

#define KMIIPKCBNIE___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB554D40)
#define KMIIPKCBNIE___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0xB5551A0)

inline static constexpr unsigned int KMIIPKCBNIE___c__DisplayClass1_0_TypeDefinitionIndex = 52724;

	class KMIIPKCBNIE___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::KMIIPKCBNIE* __4__this; // 0x10
		::System::UInt32 opCount; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIIPKCBNIE___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIIPKCBNIE___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET))(this);
		}

	};
