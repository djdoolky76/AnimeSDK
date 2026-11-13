#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EOOIJAGNMHI.h"
#include "unitysdk/UnityEngine/Vector3.h"
class APLEMBNFLAA;
class CCDBFIGFKFB;
class DCFAECMKIEF;
class FECDLDCCHPN;
class GICDNFMMKMN;
class HNKCGLEOGJM;
class KOCDPFMMHIN;
class LJONMOGLMIB;
class OJMGONHMBLC;
namespace RPG::Client { class Stage; }
namespace RPG::Client::OpenWorld { class Volume; }
namespace RPG::GameCore { class StageVolumeComponentData; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OJMGONHMBLC_ALPBFFMDHDK_OFFSET UNITYSDK_OFFSET(0x194BDC30)
#define OJMGONHMBLC_AMDFBCMPFPE_OFFSET UNITYSDK_OFFSET(0x194C3300)
#define OJMGONHMBLC_AOHEFJAEJMO_OFFSET UNITYSDK_OFFSET(0x194C1B70)
#define OJMGONHMBLC_BHEMHJCIAKM_OFFSET UNITYSDK_OFFSET(0x194C2290)
#define OJMGONHMBLC_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0x194C1900)
#define OJMGONHMBLC_BNFILLLFCKE_OFFSET UNITYSDK_OFFSET(0x194BF710)
#define OJMGONHMBLC_CBONBAJGGBI_OFFSET UNITYSDK_OFFSET(0x194C0E80)
#define OJMGONHMBLC_CCTOR_OFFSET UNITYSDK_OFFSET(0x194C4E50)
#define OJMGONHMBLC_CTOR_OFFSET UNITYSDK_OFFSET(0x194BF400)
#define OJMGONHMBLC_DBIDGCMNPKO_OFFSET UNITYSDK_OFFSET(0x194BDBD0)
#define OJMGONHMBLC_DGJCJHKNPPB_OFFSET UNITYSDK_OFFSET(0x194BFC00)
#define OJMGONHMBLC_DJPPJINGOLD_OFFSET UNITYSDK_OFFSET(0x194C1700)
#define OJMGONHMBLC_DNEPOGPKLGN_OFFSET UNITYSDK_OFFSET(0x194BBEA0)
#define OJMGONHMBLC_DPGJINAGGLN_OFFSET UNITYSDK_OFFSET(0x194C4430)
#define OJMGONHMBLC_EJJPLGCLGOF_OFFSET UNITYSDK_OFFSET(0x194BDC90)
#define OJMGONHMBLC_EMCEHPHHFBP_OFFSET UNITYSDK_OFFSET(0x194BE9B0)
#define OJMGONHMBLC_FOFJMKNNBIO_OFFSET UNITYSDK_OFFSET(0x194C2380)
#define OJMGONHMBLC_GCDIEIEEFEN_OFFSET UNITYSDK_OFFSET(0x194C0100)
#define OJMGONHMBLC_GET_BLOCKCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0x194BFBA0)
#define OJMGONHMBLC_GET_GLOBALCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0x194BFB80)
#define OJMGONHMBLC_GET__ALLSOURCEPROXY_OFFSET UNITYSDK_OFFSET(0x194BFBE0)
#define OJMGONHMBLC_GET__ALLSOURCESTACK_OFFSET UNITYSDK_OFFSET(0x194BFBC0)
#define OJMGONHMBLC_GFACNADHJNP_OFFSET UNITYSDK_OFFSET(0x194BDA10)
#define OJMGONHMBLC_GNCJAGHKEPO_OFFSET UNITYSDK_OFFSET(0x194C19E0)
#define OJMGONHMBLC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x194C1280)
#define OJMGONHMBLC_HBNBMJNOPFE_OFFSET UNITYSDK_OFFSET(0x194C4CD0)
#define OJMGONHMBLC_HEEDILJNECD_OFFSET UNITYSDK_OFFSET(0x194BD440)
#define OJMGONHMBLC_HHLIJNJIKKG_OFFSET UNITYSDK_OFFSET(0x194C0EF0)
#define OJMGONHMBLC_HMHANCPPMKE_OFFSET UNITYSDK_OFFSET(0x194BFEB0)
#define OJMGONHMBLC_IEFDLJPDCPK_OFFSET UNITYSDK_OFFSET(0x194BE2A0)
#define OJMGONHMBLC_IKCBBHNHABJ_OFFSET UNITYSDK_OFFSET(0x194BF360)
#define OJMGONHMBLC_IMLACMBCMPI_OFFSET UNITYSDK_OFFSET(0x194BD970)
#define OJMGONHMBLC_KCBNJCCJNDF_OFFSET UNITYSDK_OFFSET(0x194BDE20)
#define OJMGONHMBLC_KDBGAOPLFIB_OFFSET UNITYSDK_OFFSET(0x194C3910)
#define OJMGONHMBLC_KMGGACLNMOK_OFFSET UNITYSDK_OFFSET(0x194BDAB0)
#define OJMGONHMBLC_MMILEPPMNME_OFFSET UNITYSDK_OFFSET(0x194C1770)
#define OJMGONHMBLC_MPDMBMKDIHD_OFFSET UNITYSDK_OFFSET(0x194BCEB0)
#define OJMGONHMBLC_NPGLOONKMHG_OFFSET UNITYSDK_OFFSET(0x194C1220)
#define OJMGONHMBLC_OIJOELHEHKB_OFFSET UNITYSDK_OFFSET(0x194BE6D0)
#define OJMGONHMBLC_OJKOIBIKKNJ_OFFSET UNITYSDK_OFFSET(0x194BED40)
#define OJMGONHMBLC_OLDBJPCCEAC_OFFSET UNITYSDK_OFFSET(0x1949DFD0)
#define OJMGONHMBLC_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x194C2410)
#define OJMGONHMBLC_PHLDPDBLPIA_OFFSET UNITYSDK_OFFSET(0x194BEDA0)
#define OJMGONHMBLC_PLMJHPEAJKK_OFFSET UNITYSDK_OFFSET(0x194C4A30)
#define OJMGONHMBLC_POAANJPOGIO_OFFSET UNITYSDK_OFFSET(0x194C4B20)
#define OJMGONHMBLC_SET_BLOCKCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0x194BFBB0)
#define OJMGONHMBLC_SET_GLOBALCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0x194BFB90)
#define OJMGONHMBLC_SET__ALLSOURCEPROXY_OFFSET UNITYSDK_OFFSET(0x194BFBF0)
#define OJMGONHMBLC_SET__ALLSOURCESTACK_OFFSET UNITYSDK_OFFSET(0x194BFBD0)

inline static constexpr unsigned int OJMGONHMBLC_TypeDefinitionIndex = 76135;

	class OJMGONHMBLC : public ::System::Object
	{
	public:
		::DCFAECMKIEF* JKFAJECFNBN; // 0x10
		::GICDNFMMKMN* __AllSourceStack_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::FECDLDCCHPN*>* NFNCPOAHIGG; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* PJKIDLNGJMN; // 0x28
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::FECDLDCCHPN*>*>* FHHHGCPFMLO; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::CCDBFIGFKFB*>* DJKHAFIIIBA; // 0x38
		::System::Collections::Generic::List_1<::System::Boolean>* PGFFKGFCBDB; // 0x40
		::System::Collections::Generic::List_1<::CCDBFIGFKFB*>* GLHELNNMBDD; // 0x48
		::System::Collections::Generic::List_1<::System::Int32>* FFHJOFLNCNN; // 0x50
		::LJONMOGLMIB* NAPMNEDACMI; // 0x58
		::System::Collections::Generic::IEnumerable_1<::System::Type*>* _GlobalComponentTypes_k__BackingField; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::HNKCGLEOGJM*>* INMKDKJGIAD; // 0x68
		::System::Collections::Generic::List_1<::FECDLDCCHPN*>* OIPGKHOKLOM; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::Volume*>* NJMLLOFPDAE; // 0x78
		::GICDNFMMKMN* __AllSourceProxy_k__BackingField; // 0x80
		::System::Collections::Generic::List_1<::GICDNFMMKMN*>* EDOKMFCKAJE; // 0x88
		::System::Collections::Generic::List_1<::System::String*>* LMFPOIBGDFP; // 0x90
		::System::Collections::Generic::List_1<::HNKCGLEOGJM*>* IFMBEIBDHMK; // 0x98
		::System::Collections::Generic::List_1<::FECDLDCCHPN*>* FJKDCDHFGJM; // 0xA0
		::APLEMBNFLAA* GCBGJCMFIBK; // 0xA8
		::CCDBFIGFKFB* BFHBIBBNLLM; // 0xB0
		::System::Collections::Generic::List_1<::System::Int32>* KEGHIIFKBCA; // 0xB8
		::System::Collections::Generic::IEnumerable_1<::System::Type*>* _BlockComponentTypes_k__BackingField; // 0xC0
		::System::Boolean PCDKNIADJOD; // 0xC8
		::System::Boolean BIFGOPGOOOF; // 0xC9
		::System::Boolean OHOEEOHKDLE; // 0xCA
		::System::Boolean JCFBJKMCHGH; // 0xCB
		static ::System::Collections::Generic::List_1<::GICDNFMMKMN*>** StaticGet_PAKICPPHBBI()
		{
			return (::System::Collections::Generic::List_1<::GICDNFMMKMN*>**)UnitySDK::FromName("", "OJMGONHMBLC")->GetStaticField(0x57B80);
		}

		static ::OJMGONHMBLC** StaticGet_IPGKOOHKCEG()
		{
			return (::OJMGONHMBLC**)UnitySDK::FromName("", "OJMGONHMBLC")->GetStaticField(0x57B88);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMGONHMBLC_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJMGONHMBLC_CCTOR_OFFSET))();
		}

		::System::Void DNEPOGPKLGN(::RPG::Client::OpenWorld::Volume* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*))((::PBYTE)hIl2Cpp + OJMGONHMBLC_DNEPOGPKLGN_OFFSET))(this, a1);
		}

		::System::Void MPDMBMKDIHD(::System::String* a1, ::RPG::Client::Stage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + OJMGONHMBLC_MPDMBMKDIHD_OFFSET))(this, a1, a2);
		}

		::System::Void HEEDILJNECD(::System::String* a1, ::RPG::Client::Stage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + OJMGONHMBLC_HEEDILJNECD_OFFSET))(this, a1, a2);
		}

		::System::Void IMLACMBCMPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMGONHMBLC_IMLACMBCMPI_OFFSET))(this);
		}

		::System::Void GFACNADHJNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMGONHMBLC_GFACNADHJNP_OFFSET))(this);
		}

		::System::Void KMGGACLNMOK(::System::Int32 a1, ::EOOIJAGNMHI a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::EOOIJAGNMHI))((::PBYTE)hIl2Cpp + OJMGONHMBLC_KMGGACLNMOK_OFFSET))(this, a1, a2);
		}

		::System::Boolean DBIDGCMNPKO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMGONHMBLC_DBIDGCMNPKO_OFFSET))(this);
		}

		::System::Boolean ALPBFFMDHDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMGONHMBLC_ALPBFFMDHDK_OFFSET))(this);
		}

		::System::Void EJJPLGCLGOF(::KOCDPFMMHIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOCDPFMMHIN*))((::PBYTE)hIl2Cpp + OJMGONHMBLC_EJJPLGCLGOF_OFFSET))(this, a1);
		}

		::System::Void KCBNJCCJNDF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OJMGONHMBLC_KCBNJCCJNDF_OFFSET))(this, a1);
		}

		::System::Void OIJOELHEHKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMGONHMBLC_OIJOELHEHKB_OFFSET))(this);
		}

		::System::Void EMCEHPHHFBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMGONHMBLC_EMCEHPHHFBP_OFFSET))(this);
		}

		::System::Void PHLDPDBLPIA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OJMGONHMBLC_PHLDPDBLPIA_OFFSET))(this, a1);
		}

		::System::Void IKCBBHNHABJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OJMGONHMBLC_IKCBBHNHABJ_OFFSET))(this, a1);
		}

		static ::OJMGONHMBLC* OLDBJPCCEAC()
		{
			return ((::OJMGONHMBLC*(*)())((::PBYTE)hIl2Cpp + OJMGONHMBLC_OLDBJPCCEAC_OFFSET))();
		}

		::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_GlobalComponentTypes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMGONHMBLC_GET_GLOBALCOMPONENTTYPES_OFFSET))(this);
		}

		::System::Void set_GlobalComponentTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + OJMGONHMBLC_SET_GLOBALCOMPONENTTYPES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_BlockComponentTypes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMGONHMBLC_GET_BLOCKCOMPONENTTYPES_OFFSET))(this);
		}

		::System::Void set_BlockComponentTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + OJMGONHMBLC_SET_BLOCKCOMPONENTTYPES_OFFSET))(this, a1);
		}

		::GICDNFMMKMN* get__AllSourceStack()
		{
			return ((::GICDNFMMKMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMGONHMBLC_GET__ALLSOURCESTACK_OFFSET))(this);
		}

		::System::Void set__AllSourceStack(::GICDNFMMKMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GICDNFMMKMN*))((::PBYTE)hIl2Cpp + OJMGONHMBLC_SET__ALLSOURCESTACK_OFFSET))(this, a1);
		}

		::GICDNFMMKMN* get__AllSourceProxy()
		{
			return ((::GICDNFMMKMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMGONHMBLC_GET__ALLSOURCEPROXY_OFFSET))(this);
		}

		::System::Void set__AllSourceProxy(::GICDNFMMKMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GICDNFMMKMN*))((::PBYTE)hIl2Cpp + OJMGONHMBLC_SET__ALLSOURCEPROXY_OFFSET))(this, a1);
		}

		::GICDNFMMKMN* OJKOIBIKKNJ()
		{
			return ((::GICDNFMMKMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMGONHMBLC_OJKOIBIKKNJ_OFFSET))(this);
		}

		::System::Void DGJCJHKNPPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMGONHMBLC_DGJCJHKNPPB_OFFSET))(this);
		}

		::System::Void HMHANCPPMKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMGONHMBLC_HMHANCPPMKE_OFFSET))(this);
		}

		::System::Void BNFILLLFCKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMGONHMBLC_BNFILLLFCKE_OFFSET))(this);
		}

		::System::Void HHLIJNJIKKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMGONHMBLC_HHLIJNJIKKG_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMGONHMBLC_HADOHLNHHGB_OFFSET))(this);
		}

		::GICDNFMMKMN* CBONBAJGGBI()
		{
			return ((::GICDNFMMKMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMGONHMBLC_CBONBAJGGBI_OFFSET))(this);
		}

		::GICDNFMMKMN* DJPPJINGOLD()
		{
			return ((::GICDNFMMKMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMGONHMBLC_DJPPJINGOLD_OFFSET))(this);
		}

		::FECDLDCCHPN* MMILEPPMNME(::System::Type* a1, ::RPG::GameCore::StageVolumeComponentData* a2)
		{
			return ((::FECDLDCCHPN*(*)(::PVOID, ::System::Type*, ::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + OJMGONHMBLC_MMILEPPMNME_OFFSET))(this, a1, a2);
		}

		::System::Void NPGLOONKMHG(::GICDNFMMKMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GICDNFMMKMN*))((::PBYTE)hIl2Cpp + OJMGONHMBLC_NPGLOONKMHG_OFFSET))(this, a1);
		}

		::System::Void GCDIEIEEFEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMGONHMBLC_GCDIEIEEFEN_OFFSET))(this);
		}

		::System::Void BKJGMFOKKKN(::RPG::Client::OpenWorld::Volume* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*))((::PBYTE)hIl2Cpp + OJMGONHMBLC_BKJGMFOKKKN_OFFSET))(this, a1);
		}

		::System::Void GNCJAGHKEPO(::RPG::Client::OpenWorld::Volume* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*))((::PBYTE)hIl2Cpp + OJMGONHMBLC_GNCJAGHKEPO_OFFSET))(this, a1);
		}

		::System::Void AOHEFJAEJMO(::RPG::Client::OpenWorld::Volume* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*))((::PBYTE)hIl2Cpp + OJMGONHMBLC_AOHEFJAEJMO_OFFSET))(this, a1);
		}

		::System::Void BHEMHJCIAKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMGONHMBLC_BHEMHJCIAKM_OFFSET))(this);
		}

		::System::Int32 FOFJMKNNBIO(::RPG::Client::OpenWorld::Volume* a1, ::RPG::Client::OpenWorld::Volume* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*, ::RPG::Client::OpenWorld::Volume*))((::PBYTE)hIl2Cpp + OJMGONHMBLC_FOFJMKNNBIO_OFFSET))(this, a1, a2);
		}

		::System::Void IEFDLJPDCPK(::GICDNFMMKMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GICDNFMMKMN*))((::PBYTE)hIl2Cpp + OJMGONHMBLC_IEFDLJPDCPK_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::APLEMBNFLAA* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*, ::System::Boolean))((::PBYTE)hIl2Cpp + OJMGONHMBLC_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::GICDNFMMKMN* AMDFBCMPFPE(::APLEMBNFLAA* a1)
		{
			return ((::GICDNFMMKMN*(*)(::PVOID, ::APLEMBNFLAA*))((::PBYTE)hIl2Cpp + OJMGONHMBLC_AMDFBCMPFPE_OFFSET))(this, a1);
		}

		::System::Void KDBGAOPLFIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMGONHMBLC_KDBGAOPLFIB_OFFSET))(this);
		}

		::System::Void PLMJHPEAJKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMGONHMBLC_PLMJHPEAJKK_OFFSET))(this);
		}

		::System::Void DPGJINAGGLN(::APLEMBNFLAA* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*, ::System::Int32))((::PBYTE)hIl2Cpp + OJMGONHMBLC_DPGJINAGGLN_OFFSET))(this, a1, a2);
		}

		::RPG::Client::OpenWorld::Volume* POAANJPOGIO(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::OpenWorld::Volume*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + OJMGONHMBLC_POAANJPOGIO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::OpenWorld::Volume* HBNBMJNOPFE(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::Client::OpenWorld::Volume*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OJMGONHMBLC_HBNBMJNOPFE_OFFSET))(this, a1);
		}

	};
