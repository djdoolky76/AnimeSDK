#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKNHOGCDNHH;
namespace RPG::Client { class EditorAssetHash2BundleIndexItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JGLKGLDJBGH_CBEKBCHPJDN_OFFSET UNITYSDK_OFFSET(0x1C4783F0)
#define JGLKGLDJBGH_CCHGDGHMJLH_OFFSET UNITYSDK_OFFSET(0x1C477780)
#define JGLKGLDJBGH_CFCMKAJLHMB_OFFSET UNITYSDK_OFFSET(0x1C477320)
#define JGLKGLDJBGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C476C40)
#define JGLKGLDJBGH_DMADGDPOEPH_OFFSET UNITYSDK_OFFSET(0x1C476DE0)
#define JGLKGLDJBGH_GGNEGJNIAIJ_OFFSET UNITYSDK_OFFSET(0x1C477D50)
#define JGLKGLDJBGH_GJEOGPOHIHD_OFFSET UNITYSDK_OFFSET(0x1C477C10)
#define JGLKGLDJBGH_GPECPPAEIBE_OFFSET UNITYSDK_OFFSET(0x1C4780A0)
#define JGLKGLDJBGH_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C476D50)
#define JGLKGLDJBGH_JLBNLICJEBM_OFFSET UNITYSDK_OFFSET(0x1C477370)
#define JGLKGLDJBGH_KHFHNDEBGDH_OFFSET UNITYSDK_OFFSET(0x1C476D90)
#define JGLKGLDJBGH_KNEBFJDHKBE_OFFSET UNITYSDK_OFFSET(0x1C478620)
#define JGLKGLDJBGH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C476D10)
#define JGLKGLDJBGH_MALJNFNKMGL_OFFSET UNITYSDK_OFFSET(0x1C4772E0)
#define JGLKGLDJBGH_MLIGLGFDBDB_OFFSET UNITYSDK_OFFSET(0x1C477240)
#define JGLKGLDJBGH_OKJJGAECLEO_OFFSET UNITYSDK_OFFSET(0x1C4770E0)

inline static constexpr unsigned int JGLKGLDJBGH_TypeDefinitionIndex = 41448;

	class JGLKGLDJBGH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::EditorAssetHash2BundleIndexItem*>* MKFLEJIFBLL; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::EditorAssetHash2BundleIndexItem*>* GDEDBDJCDJE; // 0x18
		::System::Collections::Generic::List_1<::DKNHOGCDNHH*>* FJJDAOLHNGG; // 0x20
		::System::String* OABJJKPOMBJ; // 0x28
		::System::String* OBJMDFOHCGD; // 0x30
		static ::System::Int32* StaticGet_FHPFOFMPENJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JGLKGLDJBGH")->GetStaticField(0x5E40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLKGLDJBGH_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLKGLDJBGH_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLKGLDJBGH_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KHFHNDEBGDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLKGLDJBGH_KHFHNDEBGDH_OFFSET))(this);
		}

		::System::Void MLIGLGFDBDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLKGLDJBGH_MLIGLGFDBDB_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EditorAssetHash2BundleIndexItem*>* MALJNFNKMGL()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EditorAssetHash2BundleIndexItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLKGLDJBGH_MALJNFNKMGL_OFFSET))(this);
		}

		::System::Void CFCMKAJLHMB(::System::Collections::Generic::List_1<::DKNHOGCDNHH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DKNHOGCDNHH*>*))((::PBYTE)hIl2Cpp + JGLKGLDJBGH_CFCMKAJLHMB_OFFSET))(this, a1);
		}

		::System::Void JLBNLICJEBM(::System::Collections::Generic::List_1<::DKNHOGCDNHH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DKNHOGCDNHH*>*))((::PBYTE)hIl2Cpp + JGLKGLDJBGH_JLBNLICJEBM_OFFSET))(this, a1);
		}

		::System::Void CCHGDGHMJLH(::System::Collections::Generic::List_1<::RPG::Client::EditorAssetHash2BundleIndexItem*>* a1, ::RPG::Client::EditorAssetHash2BundleIndexItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EditorAssetHash2BundleIndexItem*>*, ::RPG::Client::EditorAssetHash2BundleIndexItem*))((::PBYTE)hIl2Cpp + JGLKGLDJBGH_CCHGDGHMJLH_OFFSET))(this, a1, a2);
		}

		::System::Void OKJJGAECLEO(::System::Collections::Generic::List_1<::RPG::Client::EditorAssetHash2BundleIndexItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EditorAssetHash2BundleIndexItem*>*))((::PBYTE)hIl2Cpp + JGLKGLDJBGH_OKJJGAECLEO_OFFSET))(this, a1);
		}

		::System::Void DMADGDPOEPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLKGLDJBGH_DMADGDPOEPH_OFFSET))(this);
		}

		static ::System::Void GJEOGPOHIHD(::System::Collections::Generic::List_1<::DKNHOGCDNHH*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::DKNHOGCDNHH*>*))((::PBYTE)hIl2Cpp + JGLKGLDJBGH_GJEOGPOHIHD_OFFSET))(a1);
		}

		static ::System::Int32 CBEKBCHPJDN(::DKNHOGCDNHH* a1, ::DKNHOGCDNHH* a2)
		{
			return ((::System::Int32(*)(::DKNHOGCDNHH*, ::DKNHOGCDNHH*))((::PBYTE)hIl2Cpp + JGLKGLDJBGH_CBEKBCHPJDN_OFFSET))(a1, a2);
		}

		::System::Void KNEBFJDHKBE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JGLKGLDJBGH_KNEBFJDHKBE_OFFSET))(this, a1);
		}

		::System::Void GPECPPAEIBE(::System::Collections::Generic::List_1<::DKNHOGCDNHH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DKNHOGCDNHH*>*))((::PBYTE)hIl2Cpp + JGLKGLDJBGH_GPECPPAEIBE_OFFSET))(this, a1);
		}

		::System::Void GGNEGJNIAIJ(::System::Collections::Generic::List_1<::RPG::Client::EditorAssetHash2BundleIndexItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EditorAssetHash2BundleIndexItem*>*))((::PBYTE)hIl2Cpp + JGLKGLDJBGH_GGNEGJNIAIJ_OFFSET))(this, a1);
		}

	};
