#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCGBBFBJLIE.h"
#include "unitysdk/FILEPLOOCPI.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }

#define BMAGFPDPEDN_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8BC3F0)
#define BMAGFPDPEDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8BC760)
#define BMAGFPDPEDN_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C8BC5A0)
#define BMAGFPDPEDN_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C8BC710)

inline static constexpr unsigned int BMAGFPDPEDN_TypeDefinitionIndex = 43354;

	class BMAGFPDPEDN : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::System::UInt32, ::FILEPLOOCPI>* DDJCGFMFNEM; // 0x10
		::RPG::PoolDictionary_2<::System::Int32, ::CCGBBFBJLIE>* HGKHABKBFIF; // 0x18
		::RPG::PoolDictionary_2<::System::UInt32, ::RPG::PoolList_1<::System::UInt32>*>* LHOFEGLDGKN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMAGFPDPEDN_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMAGFPDPEDN_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMAGFPDPEDN_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMAGFPDPEDN_ONRECYCLE_OFFSET))(this);
		}

	};
