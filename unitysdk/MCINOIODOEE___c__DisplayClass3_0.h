#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPCIPPHCLGD;

#define MCINOIODOEE___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB8812D0)
#define MCINOIODOEE___C__DISPLAYCLASS3_0__ENTER_B__0_OFFSET UNITYSDK_OFFSET(0xB881AD0)

	class MCINOIODOEE___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::FPCIPPHCLGD* pSoundComponent; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCINOIODOEE___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void _Enter_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCINOIODOEE___C__DISPLAYCLASS3_0__ENTER_B__0_OFFSET))(this);
		}

	};
