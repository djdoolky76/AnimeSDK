#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }

#define KCMILMCIDIO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB83140)
#define KCMILMCIDIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB832D0)
#define KCMILMCIDIO_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CB831B0)
#define KCMILMCIDIO_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CB83290)

inline static constexpr unsigned int KCMILMCIDIO_TypeDefinitionIndex = 43269;

	class KCMILMCIDIO : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::System::Int32, ::System::Boolean>* KKKPKGEMAIL; // 0x10
		::RPG::PoolDictionary_2<::System::Int32, ::System::Boolean>* FNDGMFKFBIF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMILMCIDIO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMILMCIDIO_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMILMCIDIO_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMILMCIDIO_ONRECYCLE_OFFSET))(this);
		}

	};
