#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T> class PoolHashSet_1; }

#define MHDGKLOHHFJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C92AAE0)
#define MHDGKLOHHFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C92AD20)
#define MHDGKLOHHFJ_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C92AB80)
#define MHDGKLOHHFJ_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C92ACE0)

inline static constexpr unsigned int MHDGKLOHHFJ_TypeDefinitionIndex = 43455;

	class MHDGKLOHHFJ : public ::System::Object
	{
	public:
		::RPG::PoolHashSet_1<::System::Int32>* PKIMKNGFFHJ; // 0x10
		::RPG::PoolHashSet_1<::System::Int32>* HEFGMLHIFDG; // 0x18
		::RPG::PoolHashSet_1<::System::Int32>* BBEODDICNEN; // 0x20
		::System::Int32 MNMHMECGDAK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDGKLOHHFJ_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDGKLOHHFJ_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDGKLOHHFJ_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDGKLOHHFJ_ONRECYCLE_OFFSET))(this);
		}

	};
