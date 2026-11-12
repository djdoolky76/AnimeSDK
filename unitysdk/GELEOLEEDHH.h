#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }

#define GELEOLEEDHH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DC4CFB0)
#define GELEOLEEDHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC4D040)
#define GELEOLEEDHH_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1DC4CE10)
#define GELEOLEEDHH_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1DC4CF70)

inline static constexpr unsigned int GELEOLEEDHH_TypeDefinitionIndex = 44299;

	class GELEOLEEDHH : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::System::Int32, ::System::Boolean>* OHOBDOJJKEE; // 0x10
		::RPG::PoolDictionary_2<::System::Int32, ::System::Boolean>* JKNPFKEAJPE; // 0x18
		::RPG::PoolDictionary_2<::System::Int32, ::System::Boolean>* DJDDDPCHCCP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELEOLEEDHH_CTOR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELEOLEEDHH_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELEOLEEDHH_ONRECYCLE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELEOLEEDHH_CLEAR_OFFSET))(this);
		}

	};
