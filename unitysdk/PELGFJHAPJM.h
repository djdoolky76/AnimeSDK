#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolHashSet_1; }

#define PELGFJHAPJM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9E77C0)
#define PELGFJHAPJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E79D0)
#define PELGFJHAPJM_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C9E7820)
#define PELGFJHAPJM_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C9E7990)

	class PELGFJHAPJM : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::UnityEngine::Vector3Int, ::RPG::PoolHashSet_1<::System::Int32>*>* LDHFDCDJODJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PELGFJHAPJM_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PELGFJHAPJM_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PELGFJHAPJM_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PELGFJHAPJM_ONRECYCLE_OFFSET))(this);
		}

	};
