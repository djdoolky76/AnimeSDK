#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KLJGNBBMJCM_ACGBIOICLEO_OFFSET UNITYSDK_OFFSET(0xB52B6D0)
#define KLJGNBBMJCM_CTOR_OFFSET UNITYSDK_OFFSET(0xB52B800)
#define KLJGNBBMJCM_EEJFPHJHDNC_OFFSET UNITYSDK_OFFSET(0xB52B730)
#define KLJGNBBMJCM_GET_BATTLETIME_OFFSET UNITYSDK_OFFSET(0xB52B620)
#define KLJGNBBMJCM_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0xB52B640)
#define KLJGNBBMJCM_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xB52B660)
#define KLJGNBBMJCM_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB52B680)
#define KLJGNBBMJCM_SET_BATTLETIME_OFFSET UNITYSDK_OFFSET(0xB52B630)
#define KLJGNBBMJCM_SET_DELTATIME_OFFSET UNITYSDK_OFFSET(0xB52B650)
#define KLJGNBBMJCM_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xB52B670)

	class KLJGNBBMJCM : public ::System::Object
	{
	public:
		::System::Single _BattleTime_k__BackingField; // 0x10
		::System::Single _TimeScale_k__BackingField; // 0x14
		::System::Single _DeltaTime_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJGNBBMJCM_CTOR_OFFSET))(this);
		}

		::System::Single get_BattleTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJGNBBMJCM_GET_BATTLETIME_OFFSET))(this);
		}

		::System::Void set_BattleTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLJGNBBMJCM_SET_BATTLETIME_OFFSET))(this, a1);
		}

		::System::Single get_DeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJGNBBMJCM_GET_DELTATIME_OFFSET))(this);
		}

		::System::Void set_DeltaTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLJGNBBMJCM_SET_DELTATIME_OFFSET))(this, a1);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJGNBBMJCM_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Void set_TimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLJGNBBMJCM_SET_TIMESCALE_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJGNBBMJCM_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void ACGBIOICLEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJGNBBMJCM_ACGBIOICLEO_OFFSET))(this);
		}

		::System::Void EEJFPHJHDNC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLJGNBBMJCM_EEJFPHJHDNC_OFFSET))(this, a1);
		}

	};
