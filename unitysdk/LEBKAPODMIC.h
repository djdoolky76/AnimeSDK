#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }

#define LEBKAPODMIC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C90D120)
#define LEBKAPODMIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C90D3C0)
#define LEBKAPODMIC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1C90D2C0)
#define LEBKAPODMIC_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C90D1A0)
#define LEBKAPODMIC_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C90D280)

	class LEBKAPODMIC : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::System::UInt32, ::System::UInt32>* OFNBGNCFIHG; // 0x10
		::RPG::PoolDictionary_2<::System::UInt32, ::System::UInt32>* GKEJJMPKKKO; // 0x18
		::System::UInt32 FJNHFEFFJOJ; // 0x20
		::System::Single LJPNPDFOEMP; // 0x24
		::System::Single ADKLGJDCKGM; // 0x28
		::System::Single AAPADBHKBBH; // 0x2C
		::System::Single KIBGIABPHCF; // 0x30
		::System::Single CPJBIFJCENK; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBKAPODMIC_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBKAPODMIC_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBKAPODMIC_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBKAPODMIC_ONRECYCLE_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBKAPODMIC_KHGIKBFDLFB_OFFSET))(this);
		}

	};
