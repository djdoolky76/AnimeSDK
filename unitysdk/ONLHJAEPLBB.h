#pragma once
#include "unitysdk/unitysdk.h"
class CEBMNLPNKFL;
class JHMBGNKOIJH;

#define ONLHJAEPLBB_BBNEHDGPGGH_OFFSET UNITYSDK_OFFSET(0x25980)
#define ONLHJAEPLBB_COIEGKLDGEB_OFFSET UNITYSDK_OFFSET(0x25A40)
#define ONLHJAEPLBB_CTOR_OFFSET UNITYSDK_OFFSET(0x25920)
#define ONLHJAEPLBB_ECLMCGJODNC_OFFSET UNITYSDK_OFFSET(0x259E0)
#define ONLHJAEPLBB_GET_ID_OFFSET UNITYSDK_OFFSET(0xE620)
#define ONLHJAEPLBB_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x25930)
#define ONLHJAEPLBB_SET_ID_OFFSET UNITYSDK_OFFSET(0xAF40)

	struct alignas(8) ONLHJAEPLBB
	{
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::Byte _padding0[0x4];
		::JHMBGNKOIJH* DMFLAOLAGIL; // 0x18
		::System::Void _ctor(::JHMBGNKOIJH* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::JHMBGNKOIJH*, ::System::UInt32))((::PBYTE)hIl2Cpp + ONLHJAEPLBB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLHJAEPLBB_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Boolean BBNEHDGPGGH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLHJAEPLBB_BBNEHDGPGGH_OFFSET))(this);
		}

		::System::Boolean ECLMCGJODNC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLHJAEPLBB_ECLMCGJODNC_OFFSET))(this);
		}

		::CEBMNLPNKFL* COIEGKLDGEB()
		{
			return ((::CEBMNLPNKFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLHJAEPLBB_COIEGKLDGEB_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLHJAEPLBB_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ONLHJAEPLBB_SET_ID_OFFSET))(this, a1);
		}

	};
