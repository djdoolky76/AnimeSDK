#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IPKGHGJPNKB.h"
#include "unitysdk/System/ValueTuple.h"
class BOCEFFDMFPM;
class BOPECJBFFNJ;
class HPCHMNEMDIF;
class JNLPFBDFNIJ;
class OPKFBCJBJLH;
namespace RPG::Client::AssetSystem { class AssetLoader; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class AssetBundle; }

#define LPPHFFMPNCH_ACDFJMIBCAH_OFFSET UNITYSDK_OFFSET(0x1C4AFF80)
#define LPPHFFMPNCH_AEDMFLGDNNH_1_OFFSET UNITYSDK_OFFSET(0x1C4B1380)
#define LPPHFFMPNCH_AEDMFLGDNNH_2_OFFSET UNITYSDK_OFFSET(0x1C4B19A0)
#define LPPHFFMPNCH_AEDMFLGDNNH_OFFSET UNITYSDK_OFFSET(0x1C4B0CF0)
#define LPPHFFMPNCH_AIBKIOILBJC_OFFSET UNITYSDK_OFFSET(0x1C4B5010)
#define LPPHFFMPNCH_AJBLEOFJHFB_OFFSET UNITYSDK_OFFSET(0x1C4B5570)
#define LPPHFFMPNCH_BBEKGDPHFLN_OFFSET UNITYSDK_OFFSET(0x1C4B3210)
#define LPPHFFMPNCH_BIBOPJDPCHE_OFFSET UNITYSDK_OFFSET(0x1C4B54B0)
#define LPPHFFMPNCH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4B7A20)
#define LPPHFFMPNCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4B7A10)
#define LPPHFFMPNCH_DEMABBOOLKE_1_OFFSET UNITYSDK_OFFSET(0x1C4B0660)
#define LPPHFFMPNCH_DEMABBOOLKE_OFFSET UNITYSDK_OFFSET(0x1C4B0520)
#define LPPHFFMPNCH_DJJBNDDBKIH_OFFSET UNITYSDK_OFFSET(0x1C4B0380)
#define LPPHFFMPNCH_DPJLEKDEPHJ_OFFSET UNITYSDK_OFFSET(0x1C4B24D0)
#define LPPHFFMPNCH_EHPMDNDMLJN_OFFSET UNITYSDK_OFFSET(0x1C4B08A0)
#define LPPHFFMPNCH_EIPGAPDGJOE_OFFSET UNITYSDK_OFFSET(0x1C4B5AC0)
#define LPPHFFMPNCH_GET_BUNDLEINDEXINFO_OFFSET UNITYSDK_OFFSET(0x1C4AFF90)
#define LPPHFFMPNCH_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C4B0100)
#define LPPHFFMPNCH_HIGMFJKILKD_OFFSET UNITYSDK_OFFSET(0x1C4B2700)
#define LPPHFFMPNCH_ICEJGGJEBDM_OFFSET UNITYSDK_OFFSET(0x1C4B26C0)
#define LPPHFFMPNCH_IIIJICBENNM_OFFSET UNITYSDK_OFFSET(0x1C4B5C90)
#define LPPHFFMPNCH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C4B79D0)
#define LPPHFFMPNCH_KEHIHFJELEH_OFFSET UNITYSDK_OFFSET(0x1C4B5600)
#define LPPHFFMPNCH_KMLGBHHBPAB_OFFSET UNITYSDK_OFFSET(0x1C4B2C80)
#define LPPHFFMPNCH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C4AFFB0)
#define LPPHFFMPNCH_MCDPMJFKGEC_1_OFFSET UNITYSDK_OFFSET(0x1C4B2110)
#define LPPHFFMPNCH_MCDPMJFKGEC_OFFSET UNITYSDK_OFFSET(0x1C4B1F50)
#define LPPHFFMPNCH_NKECLAJKCDH_OFFSET UNITYSDK_OFFSET(0x1C4B7390)
#define LPPHFFMPNCH_OIMDADKCHCB_OFFSET UNITYSDK_OFFSET(0x1C4B22D0)
#define LPPHFFMPNCH_PAGMKMMFDIP_OFFSET UNITYSDK_OFFSET(0x1C4B0A50)
#define LPPHFFMPNCH_PINHNGBJDBI_OFFSET UNITYSDK_OFFSET(0x1C4B0330)
#define LPPHFFMPNCH_PODLKOGHGMA_OFFSET UNITYSDK_OFFSET(0x1C4B6200)
#define LPPHFFMPNCH_PPKGLBODDKD_OFFSET UNITYSDK_OFFSET(0x1C4B4850)
#define LPPHFFMPNCH_SET_BUNDLEINDEXINFO_OFFSET UNITYSDK_OFFSET(0x1C4AFFA0)

inline static constexpr unsigned int LPPHFFMPNCH_TypeDefinitionIndex = 41580;

	class LPPHFFMPNCH : public ::System::Object
	{
	public:
		::JNLPFBDFNIJ* _BundleIndexInfo_k__BackingField; // 0x10
		::HPCHMNEMDIF* EGJPKJOKPNC; // 0x18
		::BOPECJBFFNJ* JPJEDEIOBAH; // 0x20
		static ::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<::BOCEFFDMFPM*>*>** StaticGet_JCFMOHGDJDD()
		{
			return (::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<::BOCEFFDMFPM*>*>**)UnitySDK::FromName("", "LPPHFFMPNCH")->GetStaticField(0x13EA0);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::AssetBundle*>** StaticGet_GODDALPLAGF()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::AssetBundle*>**)UnitySDK::FromName("", "LPPHFFMPNCH")->GetStaticField(0x13EA8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPPHFFMPNCH_CCTOR_OFFSET))();
		}

		::System::Boolean ACDFJMIBCAH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_ACDFJMIBCAH_OFFSET))(this);
		}

		::JNLPFBDFNIJ* get_BundleIndexInfo()
		{
			return ((::JNLPFBDFNIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_GET_BUNDLEINDEXINFO_OFFSET))(this);
		}

		::System::Void set_BundleIndexInfo(::JNLPFBDFNIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNLPFBDFNIJ*))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_SET_BUNDLEINDEXINFO_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void PINHNGBJDBI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_PINHNGBJDBI_OFFSET))(this, a1);
		}

		::System::Boolean DJJBNDDBKIH(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_DJJBNDDBKIH_OFFSET))(this, a1);
		}

		::System::UInt64 DEMABBOOLKE(::System::String* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_DEMABBOOLKE_OFFSET))(this, a1);
		}

		::System::UInt64 DEMABBOOLKE_1(::System::UInt64 a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_DEMABBOOLKE_1_OFFSET))(this, a1);
		}

		::System::UInt64 EHPMDNDMLJN(::System::String* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_EHPMDNDMLJN_OFFSET))(this, a1);
		}

		::System::UInt32 PAGMKMMFDIP(::System::UInt64 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_PAGMKMMFDIP_OFFSET))(this, a1);
		}

		::System::Boolean AEDMFLGDNNH(::System::UInt64 a1, ::System::Collections::Generic::List_1<::System::ValueTuple>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Collections::Generic::List_1<::System::ValueTuple>*))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_AEDMFLGDNNH_OFFSET))(this, a1, a2);
		}

		::System::Boolean AEDMFLGDNNH_1(::System::UInt64 a1, ::System::Collections::Generic::List_1<::System::ValueTuple>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Collections::Generic::List_1<::System::ValueTuple>*))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_AEDMFLGDNNH_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean AEDMFLGDNNH_2(::System::UInt64 a1, ::System::Collections::Generic::List_1<::System::UInt64>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Collections::Generic::List_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_AEDMFLGDNNH_2_OFFSET))(this, a1, a2);
		}

		::BOCEFFDMFPM* MCDPMJFKGEC(::System::String* a1)
		{
			return ((::BOCEFFDMFPM*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_MCDPMJFKGEC_OFFSET))(this, a1);
		}

		::BOCEFFDMFPM* MCDPMJFKGEC_1(::System::UInt64 a1)
		{
			return ((::BOCEFFDMFPM*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_MCDPMJFKGEC_1_OFFSET))(this, a1);
		}

		::BOCEFFDMFPM* OIMDADKCHCB(::System::String* a1, ::IPKGHGJPNKB a2)
		{
			return ((::BOCEFFDMFPM*(*)(::PVOID, ::System::String*, ::IPKGHGJPNKB))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_OIMDADKCHCB_OFFSET))(this, a1, a2);
		}

		::BOCEFFDMFPM* DPJLEKDEPHJ(::System::String* a1, ::IPKGHGJPNKB a2)
		{
			return ((::BOCEFFDMFPM*(*)(::PVOID, ::System::String*, ::IPKGHGJPNKB))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_DPJLEKDEPHJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean ICEJGGJEBDM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_ICEJGGJEBDM_OFFSET))(this);
		}

		::System::Void HIGMFJKILKD(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_HIGMFJKILKD_OFFSET))(this, a1, a2);
		}

		::System::Void KMLGBHHBPAB(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_KMLGBHHBPAB_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean BBEKGDPHFLN(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_BBEKGDPHFLN_OFFSET))(this, a1);
		}

		::System::Void PPKGLBODDKD(::System::String* a1, ::OPKFBCJBJLH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::OPKFBCJBJLH*))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_PPKGLBODDKD_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::Generic::List_1<::BOCEFFDMFPM*>* AIBKIOILBJC(::System::Collections::Generic::IList_1<::BOCEFFDMFPM*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::BOCEFFDMFPM*>*(*)(::System::Collections::Generic::IList_1<::BOCEFFDMFPM*>*))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_AIBKIOILBJC_OFFSET))(a1);
		}

		static ::System::Void BIBOPJDPCHE(::System::Collections::Generic::List_1<::BOCEFFDMFPM*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::BOCEFFDMFPM*>*))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_BIBOPJDPCHE_OFFSET))(a1);
		}

		static ::System::Int32 AJBLEOFJHFB(::BOCEFFDMFPM* a1, ::BOCEFFDMFPM* a2)
		{
			return ((::System::Int32(*)(::BOCEFFDMFPM*, ::BOCEFFDMFPM*))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_AJBLEOFJHFB_OFFSET))(a1, a2);
		}

		::System::Void KEHIHFJELEH(::System::Collections::Generic::IList_1<::BOCEFFDMFPM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::BOCEFFDMFPM*>*))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_KEHIHFJELEH_OFFSET))(this, a1);
		}

		::System::Void IIIJICBENNM(::System::Collections::Generic::IList_1<::BOCEFFDMFPM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::BOCEFFDMFPM*>*))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_IIIJICBENNM_OFFSET))(this, a1);
		}

		::System::Void PODLKOGHGMA(::RPG::Client::AssetSystem::AssetLoader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetSystem::AssetLoader*))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_PODLKOGHGMA_OFFSET))(this, a1);
		}

		::System::Void NKECLAJKCDH(::RPG::Client::AssetSystem::AssetLoader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetSystem::AssetLoader*))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_NKECLAJKCDH_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void EIPGAPDGJOE(::System::Int32 a1, ::PVOID a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LPPHFFMPNCH_EIPGAPDGJOE_OFFSET))(this, a1, a2);
		}

	};
