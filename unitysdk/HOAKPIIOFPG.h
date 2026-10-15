#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EKLOIAPFODE.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoTrackType.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOAKPIIOFPG_AIOHKBDAGLD_OFFSET UNITYSDK_OFFSET(0x2E7F1F0)
#define HOAKPIIOFPG_CTOR_OFFSET UNITYSDK_OFFSET(0x2E7F1E0)
#define HOAKPIIOFPG_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x2E7F240)

	struct alignas(8) HOAKPIIOFPG
	{
		::RPGTools::Timeline::Emotion::EmoTrackType KHNBIBLIEGF; // 0x10
		::System::Single GOGBMGGPCAH; // 0x14
		::System::Collections::Generic::List_1<::EKLOIAPFODE>* PEPGBAEDMMO; // 0x18
		::System::Boolean ALDKMCNOJKB; // 0x20
		::System::Void _ctor(::RPGTools::Timeline::Emotion::EmoTrackType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Emotion::EmoTrackType))((::PBYTE)hIl2Cpp + HOAKPIIOFPG_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean AIOHKBDAGLD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAKPIIOFPG_AIOHKBDAGLD_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAKPIIOFPG_KHGIKBFDLFB_OFFSET))(this);
		}

	};
