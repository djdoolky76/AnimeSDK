#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKNHOGCDNHH;
class DMFCABLGEMP;
namespace RPG::Client { class EditorAssetHash2BundleIndexItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DMFCABLGEMP_CCHGDGHMJLH_OFFSET UNITYSDK_OFFSET(0x1C431310)
#define DMFCABLGEMP_CEIFGLABLFM_OFFSET UNITYSDK_OFFSET(0x1C430600)
#define DMFCABLGEMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C430950)
#define DMFCABLGEMP_DFIPCEGIFOJ_OFFSET UNITYSDK_OFFSET(0x1C431770)
#define DMFCABLGEMP_DHIFHDKMEJE_OFFSET UNITYSDK_OFFSET(0x1C4320B0)
#define DMFCABLGEMP_DMADGDPOEPH_OFFSET UNITYSDK_OFFSET(0x1C430AE0)
#define DMFCABLGEMP_EKCMCBKOFDP_OFFSET UNITYSDK_OFFSET(0x1C432010)
#define DMFCABLGEMP_EMJOPODDIBI_OFFSET UNITYSDK_OFFSET(0x1C432060)
#define DMFCABLGEMP_FNKOJEAFGBA_OFFSET UNITYSDK_OFFSET(0x1C431500)
#define DMFCABLGEMP_FOHJNDEDCLA_OFFSET UNITYSDK_OFFSET(0x1C4320F0)
#define DMFCABLGEMP_GPECPPAEIBE_OFFSET UNITYSDK_OFFSET(0x1C431B50)
#define DMFCABLGEMP_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C430A40)
#define DMFCABLGEMP_HDFLOIFNDJI_OFFSET UNITYSDK_OFFSET(0x1C431A30)
#define DMFCABLGEMP_ILGLPIBJCAJ_OFFSET UNITYSDK_OFFSET(0x1C432200)
#define DMFCABLGEMP_KHFHNDEBGDH_OFFSET UNITYSDK_OFFSET(0x1C430A80)
#define DMFCABLGEMP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C430A00)
#define DMFCABLGEMP_LABBNOBOAAH_OFFSET UNITYSDK_OFFSET(0x1C431630)
#define DMFCABLGEMP_LHAGNEIHCNM_OFFSET UNITYSDK_OFFSET(0x1C4318F0)
#define DMFCABLGEMP_MFADMFOIMKH_OFFSET UNITYSDK_OFFSET(0x1C431EC0)
#define DMFCABLGEMP_NNBLMEJPJNJ_OFFSET UNITYSDK_OFFSET(0x1C431FC0)
#define DMFCABLGEMP_OKPEJGLNLLH_OFFSET UNITYSDK_OFFSET(0x1C430D40)

inline static constexpr unsigned int DMFCABLGEMP_TypeDefinitionIndex = 41465;

	class DMFCABLGEMP : public ::System::Object
	{
	public:
		::System::String* COONMDHDKFJ; // 0x10
		::System::Collections::Generic::List_1<::DKNHOGCDNHH*>* GJAIFNEIEIG; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::EditorAssetHash2BundleIndexItem*>* GDEDBDJCDJE; // 0x20
		::System::String* FHJLAKOHCLG; // 0x28
		::System::String* GCKNBEHBCOE; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::EditorAssetHash2BundleIndexItem*>* GOHOGBBGLHL; // 0x38
		::System::Boolean IMGPHHLDLNE; // 0x40
		::System::Byte _padding0[0x3];
		::System::Int32 LCOMHACOGGD; // 0x44
		static ::DMFCABLGEMP** StaticGet_PNCOOJNKJJO()
		{
			return (::DMFCABLGEMP**)UnitySDK::FromName("", "DMFCABLGEMP")->GetStaticField(0x14C00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFCABLGEMP_CTOR_OFFSET))(this);
		}

		static ::DMFCABLGEMP* CEIFGLABLFM()
		{
			return ((::DMFCABLGEMP*(*)())((::PBYTE)hIl2Cpp + DMFCABLGEMP_CEIFGLABLFM_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFCABLGEMP_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFCABLGEMP_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KHFHNDEBGDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFCABLGEMP_KHFHNDEBGDH_OFFSET))(this);
		}

		::System::Void OKPEJGLNLLH(::System::Collections::Generic::List_1<::DKNHOGCDNHH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DKNHOGCDNHH*>*))((::PBYTE)hIl2Cpp + DMFCABLGEMP_OKPEJGLNLLH_OFFSET))(this, a1);
		}

		::System::Void CCHGDGHMJLH(::System::Collections::Generic::List_1<::RPG::Client::EditorAssetHash2BundleIndexItem*>* a1, ::RPG::Client::EditorAssetHash2BundleIndexItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EditorAssetHash2BundleIndexItem*>*, ::RPG::Client::EditorAssetHash2BundleIndexItem*))((::PBYTE)hIl2Cpp + DMFCABLGEMP_CCHGDGHMJLH_OFFSET))(this, a1, a2);
		}

		::System::Void FNKOJEAFGBA(::System::Collections::Generic::List_1<::RPG::Client::EditorAssetHash2BundleIndexItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EditorAssetHash2BundleIndexItem*>*))((::PBYTE)hIl2Cpp + DMFCABLGEMP_FNKOJEAFGBA_OFFSET))(this, a1);
		}

		::System::Int32 LABBNOBOAAH(::RPG::Client::EditorAssetHash2BundleIndexItem* a1, ::RPG::Client::EditorAssetHash2BundleIndexItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EditorAssetHash2BundleIndexItem*, ::RPG::Client::EditorAssetHash2BundleIndexItem*))((::PBYTE)hIl2Cpp + DMFCABLGEMP_LABBNOBOAAH_OFFSET))(this, a1, a2);
		}

		::System::Void DMADGDPOEPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFCABLGEMP_DMADGDPOEPH_OFFSET))(this);
		}

		::System::Void GPECPPAEIBE(::System::Collections::Generic::List_1<::DKNHOGCDNHH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DKNHOGCDNHH*>*))((::PBYTE)hIl2Cpp + DMFCABLGEMP_GPECPPAEIBE_OFFSET))(this, a1);
		}

		::System::Void MFADMFOIMKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFCABLGEMP_MFADMFOIMKH_OFFSET))(this);
		}

		::System::Void HDFLOIFNDJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFCABLGEMP_HDFLOIFNDJI_OFFSET))(this);
		}

		::System::Void LHAGNEIHCNM(::System::Collections::Generic::List_1<::RPG::Client::EditorAssetHash2BundleIndexItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EditorAssetHash2BundleIndexItem*>*))((::PBYTE)hIl2Cpp + DMFCABLGEMP_LHAGNEIHCNM_OFFSET))(this, a1);
		}

		::System::Void DFIPCEGIFOJ(::System::Collections::Generic::List_1<::DKNHOGCDNHH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DKNHOGCDNHH*>*))((::PBYTE)hIl2Cpp + DMFCABLGEMP_DFIPCEGIFOJ_OFFSET))(this, a1);
		}

		::System::Void NNBLMEJPJNJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DMFCABLGEMP_NNBLMEJPJNJ_OFFSET))(this, a1);
		}

		::System::Void EKCMCBKOFDP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DMFCABLGEMP_EKCMCBKOFDP_OFFSET))(this, a1);
		}

		::System::Void EMJOPODDIBI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DMFCABLGEMP_EMJOPODDIBI_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EditorAssetHash2BundleIndexItem*>* DHIFHDKMEJE()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EditorAssetHash2BundleIndexItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFCABLGEMP_DHIFHDKMEJE_OFFSET))(this);
		}

		::System::Void FOHJNDEDCLA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DMFCABLGEMP_FOHJNDEDCLA_OFFSET))(this, a1);
		}

		::System::Void ILGLPIBJCAJ(::System::Collections::Generic::List_1<::DKNHOGCDNHH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DKNHOGCDNHH*>*))((::PBYTE)hIl2Cpp + DMFCABLGEMP_ILGLPIBJCAJ_OFFSET))(this, a1);
		}

	};
