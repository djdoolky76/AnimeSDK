#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T> class PoolList_1; }

#define JBPDHHAHKJP_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB5EEC0)
#define JBPDHHAHKJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB5EFF0)
#define JBPDHHAHKJP_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CB5EF20)
#define JBPDHHAHKJP_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CB5EFB0)

inline static constexpr unsigned int JBPDHHAHKJP_TypeDefinitionIndex = 43337;

	class JBPDHHAHKJP : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::System::Int32>* IDFAGECBIOP; // 0x10
		::System::Boolean FLFCNGBOCEK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPDHHAHKJP_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPDHHAHKJP_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPDHHAHKJP_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPDHHAHKJP_ONRECYCLE_OFFSET))(this);
		}

	};
