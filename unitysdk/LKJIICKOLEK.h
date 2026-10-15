#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCNCJLPFPBE;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Animator; }

#define LKJIICKOLEK_AEGMLJMJBDO_OFFSET UNITYSDK_OFFSET(0x1C90FB80)
#define LKJIICKOLEK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C90F6A0)
#define LKJIICKOLEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C90FEB0)
#define LKJIICKOLEK_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C90F5D0)
#define LKJIICKOLEK_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C90F660)

	class LKJIICKOLEK : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::System::Int32, ::CCNCJLPFPBE*>* ICPHLMNMKBI; // 0x10
		::RPG::PoolDictionary_2<::System::Int32, ::CCNCJLPFPBE*>* LDCIOFKJHKG; // 0x18
		::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>* CLLACKFPJKG; // 0x20
		::System::Boolean MJIPOJPBKNB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJIICKOLEK_CTOR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJIICKOLEK_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJIICKOLEK_ONRECYCLE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJIICKOLEK_CLEAR_OFFSET))(this);
		}

		::System::Void AEGMLJMJBDO(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + LKJIICKOLEK_AEGMLJMJBDO_OFFSET))(this, a1);
		}

	};
