#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }

#define KJLGHJCHJFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF2810)
#define KJLGHJCHJFJ_GET_CURRENTCYCLEID_OFFSET UNITYSDK_OFFSET(0xBCF27D0)
#define KJLGHJCHJFJ_GET_FINISHEDLEVELIDS_OFFSET UNITYSDK_OFFSET(0xBCF27F0)
#define KJLGHJCHJFJ_SET_CURRENTCYCLEID_OFFSET UNITYSDK_OFFSET(0xBCF27E0)
#define KJLGHJCHJFJ_SET_FINISHEDLEVELIDS_OFFSET UNITYSDK_OFFSET(0xBCF2800)

inline static constexpr unsigned int KJLGHJCHJFJ_TypeDefinitionIndex = 77016;

	class KJLGHJCHJFJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyCollection_1<::System::UInt32>* _FinishedLevelIds_k__BackingField; // 0x10
		::System::UInt32 _CurrentCycleId_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJLGHJCHJFJ_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_CurrentCycleId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJLGHJCHJFJ_GET_CURRENTCYCLEID_OFFSET))(this);
		}

		::System::Void set_CurrentCycleId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJLGHJCHJFJ_SET_CURRENTCYCLEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyCollection_1<::System::UInt32>* get_FinishedLevelIds()
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJLGHJCHJFJ_GET_FINISHEDLEVELIDS_OFFSET))(this);
		}

		::System::Void set_FinishedLevelIds(::System::Collections::Generic::IReadOnlyCollection_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyCollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + KJLGHJCHJFJ_SET_FINISHEDLEVELIDS_OFFSET))(this, a1);
		}

	};
