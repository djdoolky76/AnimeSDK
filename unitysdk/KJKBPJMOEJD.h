#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFMOKAKOEEJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KJKBPJMOEJD_CTOR_OFFSET UNITYSDK_OFFSET(0xB4537F0)
#define KJKBPJMOEJD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB453830)
#define KJKBPJMOEJD_GET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0xB453B40)
#define KJKBPJMOEJD_GET_SORTFILTERITEMS_OFFSET UNITYSDK_OFFSET(0xB453B60)
#define KJKBPJMOEJD_PKAEDHCMPHF_OFFSET UNITYSDK_OFFSET(0xB453980)
#define KJKBPJMOEJD_PLBNAHCOCMG_OFFSET UNITYSDK_OFFSET(0xB4538D0)
#define KJKBPJMOEJD_SET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0xB453B50)
#define KJKBPJMOEJD_SET_SORTFILTERITEMS_OFFSET UNITYSDK_OFFSET(0xB453B70)

inline static constexpr unsigned int KJKBPJMOEJD_TypeDefinitionIndex = 65741;

	class KJKBPJMOEJD : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::JFMOKAKOEEJ*>* _SortFilterItems_k__BackingField; // 0x10
		::System::UInt32 _GroupIndex_k__BackingField; // 0x18
		static ::System::Int32* StaticGet_OLKNEKFFNBG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KJKBPJMOEJD")->GetStaticField(0x12760);
		}

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJKBPJMOEJD_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKBPJMOEJD_DISPOSE_OFFSET))(this);
		}

		::System::Void PLBNAHCOCMG(::JFMOKAKOEEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFMOKAKOEEJ*))((::PBYTE)hIl2Cpp + KJKBPJMOEJD_PLBNAHCOCMG_OFFSET))(this, a1);
		}

		::System::Int32 PKAEDHCMPHF(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJKBPJMOEJD_PKAEDHCMPHF_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKBPJMOEJD_GET_GROUPINDEX_OFFSET))(this);
		}

		::System::Void set_GroupIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJKBPJMOEJD_SET_GROUPINDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::JFMOKAKOEEJ*>* get_SortFilterItems()
		{
			return ((::System::Collections::Generic::List_1<::JFMOKAKOEEJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKBPJMOEJD_GET_SORTFILTERITEMS_OFFSET))(this);
		}

		::System::Void set_SortFilterItems(::System::Collections::Generic::List_1<::JFMOKAKOEEJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::JFMOKAKOEEJ*>*))((::PBYTE)hIl2Cpp + KJKBPJMOEJD_SET_SORTFILTERITEMS_OFFSET))(this, a1);
		}

	};
