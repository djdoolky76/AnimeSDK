#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJGEHPBJKDM.h"
#include "unitysdk/Foundation/ViewObject/Container/SparseElementHandle_1.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"

class ADEFGFOLCNC;
class CDILMBABHHJ;
class EKHEOJOFLLA;
class FLDPBAPLICI;
class HLGHMFKACOB;
class HNLACBJDCGI;
class HOBAOAJAEKP;
class JGALJALGFFC;
class JHAEDNPFIGC;
class OHDHAGLCAEB;
namespace Foundation::ViewObject::Container { template <typename T> class TSparseList_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CAKCIIFLNDK_DICNCIKAHIB_OFFSET UNITYSDK_OFFSET(0x14C70630)
#define CAKCIIFLNDK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14C6EC80)
#define CAKCIIFLNDK_ECANMIBDCAM_OFFSET UNITYSDK_OFFSET(0x14C71D30)
#define CAKCIIFLNDK_EDHIIGAHBOF_OFFSET UNITYSDK_OFFSET(0x14C70E00)
#define CAKCIIFLNDK_FKKGLPACAHP_OFFSET UNITYSDK_OFFSET(0x14C70500)
#define CAKCIIFLNDK_HMMOPDIPIOJ_OFFSET UNITYSDK_OFFSET(0x14C70350)
#define CAKCIIFLNDK_IGADJNPGGGJ_OFFSET UNITYSDK_OFFSET(0x14C71190)
#define CAKCIIFLNDK_IIEJLDPNBFO_OFFSET UNITYSDK_OFFSET(0x14C701C0)
#define CAKCIIFLNDK_IMPBLCDLLEK_OFFSET UNITYSDK_OFFSET(0x14C700B0)
#define CAKCIIFLNDK_JCFNEIGCKFO_OFFSET UNITYSDK_OFFSET(0x14C70B10)
#define CAKCIIFLNDK_JLBCINPLBJA_OFFSET UNITYSDK_OFFSET(0x14C6F7E0)
#define CAKCIIFLNDK_KKDPAHDGFOC_OFFSET UNITYSDK_OFFSET(0x14C71310)
#define CAKCIIFLNDK_LKDHPKPEOCL_OFFSET UNITYSDK_OFFSET(0x14C70F50)
#define CAKCIIFLNDK_MFBKFDHFOEP_OFFSET UNITYSDK_OFFSET(0x14C70870)
#define CAKCIIFLNDK_NAHMCMAJHME_1_OFFSET UNITYSDK_OFFSET(0x14C6FEF0)
#define CAKCIIFLNDK_NAHMCMAJHME_2_OFFSET UNITYSDK_OFFSET(0x14C70930)
#define CAKCIIFLNDK_NAHMCMAJHME_OFFSET UNITYSDK_OFFSET(0x14C6FA20)
#define CAKCIIFLNDK_NDAKBJDNJMJ_OFFSET UNITYSDK_OFFSET(0x14C6F4A0)
#define CAKCIIFLNDK_NDBBBKLDMJO_OFFSET UNITYSDK_OFFSET(0x14C719B0)
#define CAKCIIFLNDK_NFPEEFDDANA_OFFSET UNITYSDK_OFFSET(0x14C70DC0)
#define CAKCIIFLNDK_ODAGCPGBMFM_OFFSET UNITYSDK_OFFSET(0x14C70CD0)
#define CAKCIIFLNDK_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x14C71E50)
#define CAKCIIFLNDK_ONCREATE_OFFSET UNITYSDK_OFFSET(0x14C6EBA0)
#define CAKCIIFLNDK_ONSTART_OFFSET UNITYSDK_OFFSET(0x14C6EC40)
#define CAKCIIFLNDK_PDLLCIIEEKH_OFFSET UNITYSDK_OFFSET(0x14C6F100)
#define CAKCIIFLNDK_POGAOEDPIFD_OFFSET UNITYSDK_OFFSET(0x14C71770)
#define CAKCIIFLNDK__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C6EAC0)
#define CAKCIIFLNDK__CTOR_OFFSET UNITYSDK_OFFSET(0x14C6F310)

inline static constexpr unsigned int CAKCIIFLNDK_TypeDefinitionIndex = 76208;

class CAKCIIFLNDK
{
public:
	::HNLACBJDCGI* FOLOGOFJHED; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::JHAEDNPFIGC*>* KJMMIKLINHI; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::JHAEDNPFIGC*>* OJLFLAJKBHG; // 0x20
	::Foundation::ViewObject::Container::TSparseList_1<::ADEFGFOLCNC*>* EJCBAPBOKMC; // 0x28
	::System::Boolean BALLLKCDOBB; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAKCIIFLNDK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKCIIFLNDK__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_ONCREATE_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_ONSTART_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_DISPOSE_OFFSET))(this);
	}

	::System::Boolean NDAKBJDNJMJ(::System::String* EOIHAAJAAJO, ::System::Action_1<::JHAEDNPFIGC*>* EDNJGMKPFHG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Action_1<::JHAEDNPFIGC*>*))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_NDAKBJDNJMJ_OFFSET))(this, EOIHAAJAAJO, EDNJGMKPFHG);
	}

	::System::Boolean JLBCINPLBJA(::System::String* HIAIKHDFCLN, ::System::Int32 HBBIGJLGJGI, ::FLDPBAPLICI*& BAIHKLNIOHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::FLDPBAPLICI*&))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_JLBCINPLBJA_OFFSET))(this, HIAIKHDFCLN, HBBIGJLGJGI, BAIHKLNIOHN);
	}

	::System::Boolean NAHMCMAJHME(::FJGEHPBJKDM EKOHIHINMMO, ::System::String* IMOAKEGINJP, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* PILELGPBCLL)
	{
		return ((::System::Boolean(*)(::PVOID, ::FJGEHPBJKDM, ::System::String*, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_NAHMCMAJHME_OFFSET))(this, EKOHIHINMMO, IMOAKEGINJP, PILELGPBCLL);
	}

	::System::Void IMPBLCDLLEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_IMPBLCDLLEK_OFFSET))(this);
	}

	::System::Void IIEJLDPNBFO(::System::Int32 EHNLDCHNBII, ::System::Action_1<::FJGEHPBJKDM>* EDNJGMKPFHG, ::OHDHAGLCAEB* OLIEBCOFFCB, ::System::Action_1<::EKHEOJOFLLA*>* MKDDGJDNFKP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::FJGEHPBJKDM>*, ::OHDHAGLCAEB*, ::System::Action_1<::EKHEOJOFLLA*>*))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_IIEJLDPNBFO_OFFSET))(this, EHNLDCHNBII, EDNJGMKPFHG, OLIEBCOFFCB, MKDDGJDNFKP);
	}

	::System::Boolean FKKGLPACAHP(::System::String* HIAIKHDFCLN, ::JHAEDNPFIGC*& KEFDNGODJFE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::JHAEDNPFIGC*&))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_FKKGLPACAHP_OFFSET))(this, HIAIKHDFCLN, KEFDNGODJFE);
	}

	::System::Void PDLLCIIEEKH(::FJGEHPBJKDM PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::FJGEHPBJKDM))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_PDLLCIIEEKH_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Boolean NAHMCMAJHME_1(::FJGEHPBJKDM EKOHIHINMMO, ::HLGHMFKACOB* EHJFKODGGBM, ::Foundation::ViewObject::ViewObjectHandle& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::FJGEHPBJKDM, ::HLGHMFKACOB*, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_NAHMCMAJHME_1_OFFSET))(this, EKOHIHINMMO, EHJFKODGGBM, IGAAKDOIPNN);
	}

	::FJGEHPBJKDM HMMOPDIPIOJ(::System::Int32 JNKLBCDNBID, ::FLDPBAPLICI* BMNCHNFJFGE, ::OHDHAGLCAEB* JNBJNLKOKCN, ::System::Action_1<::EKHEOJOFLLA*>* IKLJINPLNJA, ::System::Boolean JIPOIHGGHFD)
	{
		return ((::FJGEHPBJKDM(*)(::PVOID, ::System::Int32, ::FLDPBAPLICI*, ::OHDHAGLCAEB*, ::System::Action_1<::EKHEOJOFLLA*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_HMMOPDIPIOJ_OFFSET))(this, JNKLBCDNBID, BMNCHNFJFGE, JNBJNLKOKCN, IKLJINPLNJA, JIPOIHGGHFD);
	}

	::System::Boolean NAHMCMAJHME_2(::FJGEHPBJKDM EKOHIHINMMO, ::System::Int32 HBBIGJLGJGI, ::Foundation::ViewObject::ViewObjectHandle& IGAAKDOIPNN, ::CDILMBABHHJ* AKPCJMPOPPG, ::System::Action_1<::EKHEOJOFLLA*>* IKLJINPLNJA, ::System::Boolean JIPOIHGGHFD)
	{
		return ((::System::Boolean(*)(::PVOID, ::FJGEHPBJKDM, ::System::Int32, ::Foundation::ViewObject::ViewObjectHandle&, ::CDILMBABHHJ*, ::System::Action_1<::EKHEOJOFLLA*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_NAHMCMAJHME_2_OFFSET))(this, EKOHIHINMMO, HBBIGJLGJGI, IGAAKDOIPNN, AKPCJMPOPPG, IKLJINPLNJA, JIPOIHGGHFD);
	}

	::System::Void JCFNEIGCKFO(::FJGEHPBJKDM EKOHIHINMMO, ::Foundation::ViewObject::ViewObjectHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::FJGEHPBJKDM, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_JCFNEIGCKFO_OFFSET))(this, EKOHIHINMMO, PHHDHIBOCKA);
	}

	::Foundation::ViewObject::ViewObjectHandle ODAGCPGBMFM(::FJGEHPBJKDM EKOHIHINMMO)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID, ::FJGEHPBJKDM))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_ODAGCPGBMFM_OFFSET))(this, EKOHIHINMMO);
	}

	::System::Collections::Generic::IEnumerable_1<::ADEFGFOLCNC*>* NFPEEFDDANA()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::ADEFGFOLCNC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_NFPEEFDDANA_OFFSET))(this);
	}

	::System::Boolean EDHIIGAHBOF(::FJGEHPBJKDM EKOHIHINMMO, ::System::Int32 FIBDPKNCDHJ, ::Foundation::ViewObject::ViewObjectHandle& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::FJGEHPBJKDM, ::System::Int32, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_EDHIIGAHBOF_OFFSET))(this, EKOHIHINMMO, FIBDPKNCDHJ, IGAAKDOIPNN);
	}

	::ADEFGFOLCNC* MFBKFDHFOEP(::Foundation::ViewObject::Container::SparseElementHandle_1<::ADEFGFOLCNC*> PHHDHIBOCKA)
	{
		return ((::ADEFGFOLCNC*(*)(::PVOID, ::Foundation::ViewObject::Container::SparseElementHandle_1<::ADEFGFOLCNC*>))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_MFBKFDHFOEP_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Boolean DICNCIKAHIB(::System::String* HIAIKHDFCLN, ::HLGHMFKACOB* EHJFKODGGBM, ::FLDPBAPLICI*& BAIHKLNIOHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::HLGHMFKACOB*, ::FLDPBAPLICI*&))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_DICNCIKAHIB_OFFSET))(this, HIAIKHDFCLN, EHJFKODGGBM, BAIHKLNIOHN);
	}

	::System::Void IGADJNPGGGJ(::System::String* HIAIKHDFCLN, ::System::Action* EDNJGMKPFHG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_IGADJNPGGGJ_OFFSET))(this, HIAIKHDFCLN, EDNJGMKPFHG);
	}

	::System::Boolean POGAOEDPIFD(::System::String* HIAIKHDFCLN, ::System::Int32 FALJABIBPNH, ::JGALJALGFFC*& IGJKNMGMLCN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::JGALJALGFFC*&))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_POGAOEDPIFD_OFFSET))(this, HIAIKHDFCLN, FALJABIBPNH, IGJKNMGMLCN);
	}

	::System::Boolean NDBBBKLDMJO(::System::String* EOIHAAJAAJO, ::HOBAOAJAEKP* PPFGMNAAHDC, ::System::Collections::Generic::List_1<::HLGHMFKACOB*>*& PILELGPBCLL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::HOBAOAJAEKP*, ::System::Collections::Generic::List_1<::HLGHMFKACOB*>*&))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_NDBBBKLDMJO_OFFSET))(this, EOIHAAJAAJO, PPFGMNAAHDC, PILELGPBCLL);
	}

	::System::Void ECANMIBDCAM(::System::String* HIAIKHDFCLN, ::System::Int32 FALJABIBPNH, ::System::Action_1<::FJGEHPBJKDM>* EDNJGMKPFHG, ::OHDHAGLCAEB* OLIEBCOFFCB, ::System::Action_1<::EKHEOJOFLLA*>* MKDDGJDNFKP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Action_1<::FJGEHPBJKDM>*, ::OHDHAGLCAEB*, ::System::Action_1<::EKHEOJOFLLA*>*))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_ECANMIBDCAM_OFFSET))(this, HIAIKHDFCLN, FALJABIBPNH, EDNJGMKPFHG, OLIEBCOFFCB, MKDDGJDNFKP);
	}

	::System::Void KKDPAHDGFOC(::System::Collections::Generic::IList_1<::System::String*>* EKBBCJKIAED, ::System::Action* GHPOLOHGGKM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_KKDPAHDGFOC_OFFSET))(this, EKBBCJKIAED, GHPOLOHGGKM);
	}

	::System::Boolean LKDHPKPEOCL(::System::String* HIAIKHDFCLN, ::System::Int32 IHDCGPLNEBJ, ::HLGHMFKACOB*& EHJFKODGGBM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::HLGHMFKACOB*&))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_LKDHPKPEOCL_OFFSET))(this, HIAIKHDFCLN, IHDCGPLNEBJ, EHJFKODGGBM);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}
};
