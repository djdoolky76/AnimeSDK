#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECNEEKNHIOE;

#define LDMBNFAMCOI___C__DISPLAYCLASS6_1_CTOR_OFFSET UNITYSDK_OFFSET(0xB63DE70)
#define LDMBNFAMCOI___C__DISPLAYCLASS6_1___REFRESHSUMMONLINK_B__1_OFFSET UNITYSDK_OFFSET(0xB63E080)

	template <typename T>
	class LDMBNFAMCOI___c__DisplayClass6_1 : public ::System::Object
	{
	public:
		::ECNEEKNHIOE* enemy; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMBNFAMCOI___C__DISPLAYCLASS6_1_CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshSummonLink_b__1(::ECNEEKNHIOE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ECNEEKNHIOE*))((::PBYTE)hIl2Cpp + LDMBNFAMCOI___C__DISPLAYCLASS6_1___REFRESHSUMMONLINK_B__1_OFFSET))(this, a1);
		}

	};
