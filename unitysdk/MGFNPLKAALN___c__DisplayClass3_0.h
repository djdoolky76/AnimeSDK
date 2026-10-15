#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDCJIIKHHHB;
class MGFNPLKAALN;

#define MGFNPLKAALN___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB91AE70)
#define MGFNPLKAALN___C__DISPLAYCLASS3_0__FINISHREPORT_B__0_OFFSET UNITYSDK_OFFSET(0xB91AE80)

	class MGFNPLKAALN___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::MGFNPLKAALN* __4__this; // 0x10
		::System::UInt32 reportID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFNPLKAALN___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void _FinishReport_b__0(::FDCJIIKHHHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDCJIIKHHHB*))((::PBYTE)hIl2Cpp + MGFNPLKAALN___C__DISPLAYCLASS3_0__FINISHREPORT_B__0_OFFSET))(this, a1);
		}

	};
