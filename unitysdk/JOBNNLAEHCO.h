#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define JOBNNLAEHCO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DD78020)
#define JOBNNLAEHCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD781E0)
#define JOBNNLAEHCO_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1DD780C0)
#define JOBNNLAEHCO_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1DD781A0)

inline static constexpr unsigned int JOBNNLAEHCO_TypeDefinitionIndex = 44493;

	class JOBNNLAEHCO : public ::System::Object
	{
	public:
		::System::String* LOPPEGGELBJ; // 0x10
		::RPG::PoolList_1<::System::Int32>* OPOCBLDANJG; // 0x18
		::RPG::PoolDictionary_2<::System::Int32, ::System::Boolean>* KEHMJBHPNKG; // 0x20
		::System::String* ODMGJKCAICF; // 0x28
		::System::Boolean KMGIHDHMBJB; // 0x30
		::System::Boolean CAGCHKJHMPD; // 0x31
		::System::Byte _padding0[0x2];
		::System::Int32 MNMHMECGDAK; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBNNLAEHCO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBNNLAEHCO_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBNNLAEHCO_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBNNLAEHCO_ONRECYCLE_OFFSET))(this);
		}

	};
