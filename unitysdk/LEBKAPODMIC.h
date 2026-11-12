#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }

#define LEBKAPODMIC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DAB9570)
#define LEBKAPODMIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB9810)
#define LEBKAPODMIC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1DAB9710)
#define LEBKAPODMIC_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1DAB95F0)
#define LEBKAPODMIC_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1DAB96D0)

inline static constexpr unsigned int LEBKAPODMIC_TypeDefinitionIndex = 44359;

	class LEBKAPODMIC : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::System::UInt32, ::System::UInt32>* OFNBGNCFIHG; // 0x10
		::RPG::PoolDictionary_2<::System::UInt32, ::System::UInt32>* GKEJJMPKKKO; // 0x18
		::System::Single ADKLGJDCKGM; // 0x20
		::System::UInt32 FJNHFEFFJOJ; // 0x24
		::System::Single AAPADBHKBBH; // 0x28
		::System::Single LJPNPDFOEMP; // 0x2C
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
