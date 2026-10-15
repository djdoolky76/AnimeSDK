#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ACEPKKPFMKI_AHIPGHDEOOG_OFFSET UNITYSDK_OFFSET(0xB11C370)
#define ACEPKKPFMKI_CTOR_OFFSET UNITYSDK_OFFSET(0xB11C9D0)
#define ACEPKKPFMKI_FGHLAGJJMKC_OFFSET UNITYSDK_OFFSET(0xB11BE90)
#define ACEPKKPFMKI_HNPOGLCAHPK_OFFSET UNITYSDK_OFFSET(0xB11C300)
#define ACEPKKPFMKI_HOOKHOIKLKC_OFFSET UNITYSDK_OFFSET(0xB11BD80)
#define ACEPKKPFMKI_MAOPNFBKLEI_OFFSET UNITYSDK_OFFSET(0xB11C7B0)
#define ACEPKKPFMKI_NHOJDNPKECD_OFFSET UNITYSDK_OFFSET(0xB11C440)
#define ACEPKKPFMKI_OADLABMHFHK_OFFSET UNITYSDK_OFFSET(0xB11C550)
#define ACEPKKPFMKI_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB11C4D0)
#define ACEPKKPFMKI_PONEEDOGAFL_OFFSET UNITYSDK_OFFSET(0xB11C080)
#define ACEPKKPFMKI_PPCHOKBEHJJ_OFFSET UNITYSDK_OFFSET(0xB11C280)

inline static constexpr unsigned int ACEPKKPFMKI_TypeDefinitionIndex = 69574;

	class ACEPKKPFMKI : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::System::Int32, ::System::ValueTuple>* NNGFDODICCO; // 0x10
		::RPG::PoolList_1<::System::Int32>* CBEHDOLKMEC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEPKKPFMKI_CTOR_OFFSET))(this);
		}

		::System::Void HOOKHOIKLKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEPKKPFMKI_HOOKHOIKLKC_OFFSET))(this);
		}

		::System::Void FGHLAGJJMKC(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ACEPKKPFMKI_FGHLAGJJMKC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PONEEDOGAFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEPKKPFMKI_PONEEDOGAFL_OFFSET))(this);
		}

		::System::Boolean PPCHOKBEHJJ(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ACEPKKPFMKI_PPCHOKBEHJJ_OFFSET))(this, a1);
		}

		::System::Int32 HNPOGLCAHPK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEPKKPFMKI_HNPOGLCAHPK_OFFSET))(this);
		}

		::System::ValueTuple AHIPGHDEOOG()
		{
			return ((::System::ValueTuple(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEPKKPFMKI_AHIPGHDEOOG_OFFSET))(this);
		}

		::System::Boolean NHOJDNPKECD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEPKKPFMKI_NHOJDNPKECD_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEPKKPFMKI_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple>* OADLABMHFHK()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEPKKPFMKI_OADLABMHFHK_OFFSET))(this);
		}

		::System::Void MAOPNFBKLEI(::System::Collections::Generic::List_1<::System::ValueTuple>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple>*))((::PBYTE)hIl2Cpp + ACEPKKPFMKI_MAOPNFBKLEI_OFFSET))(this, a1);
		}

	};
