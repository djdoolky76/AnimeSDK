#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MPHPFDEODIG.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/Foundation/AssetPath.h"

class ECBFCDFFPBI;
class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace Foundation { template <typename T> class ObjectPool_1; }
namespace System { class String; }
namespace System { template <typename T> class WeakReference_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define LGINJIKKBJA_AFCMAPBCDLK_OFFSET UNITYSDK_OFFSET(0x158D53B0)
#define LGINJIKKBJA_AKBKGEIAHAK_OFFSET UNITYSDK_OFFSET(0x158D6DA0)
#define LGINJIKKBJA_AOLACMOGILH_OFFSET UNITYSDK_OFFSET(0x158D63C0)
#define LGINJIKKBJA_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x158D5070)
#define LGINJIKKBJA_BDLDLDBHAFE_OFFSET UNITYSDK_OFFSET(0x158D6300)
#define LGINJIKKBJA_BEJMKEGKEJH_OFFSET UNITYSDK_OFFSET(0x158D4960)
#define LGINJIKKBJA_BHABHMFGGNC_OFFSET UNITYSDK_OFFSET(0x158D2730)
#define LGINJIKKBJA_BLKJDELBNNB_OFFSET UNITYSDK_OFFSET(0x158D75E0)
#define LGINJIKKBJA_BMPBKGIEMCO_OFFSET UNITYSDK_OFFSET(0x158D5680)
#define LGINJIKKBJA_BOIAINBDJFG_OFFSET UNITYSDK_OFFSET(0x158D3830)
#define LGINJIKKBJA_CFFLHGIAGIN_OFFSET UNITYSDK_OFFSET(0x158D7690)
#define LGINJIKKBJA_CHHDCNHHCLL_OFFSET UNITYSDK_OFFSET(0x158D7DD0)
#define LGINJIKKBJA_CJGKDAIMJHL_OFFSET UNITYSDK_OFFSET(0x158D3360)
#define LGINJIKKBJA_CLEAN_OFFSET UNITYSDK_OFFSET(0x158D2830)
#define LGINJIKKBJA_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x158CFCB0)
#define LGINJIKKBJA_DBLOAHCIGNN_OFFSET UNITYSDK_OFFSET(0x158D7090)
#define LGINJIKKBJA_DFJGCGNPGOG_OFFSET UNITYSDK_OFFSET(0x158D43B0)
#define LGINJIKKBJA_DGDKCIKFAFD_OFFSET UNITYSDK_OFFSET(0x158D83F0)
#define LGINJIKKBJA_DHPFBIDCMIO_OFFSET UNITYSDK_OFFSET(0x158D57A0)
#define LGINJIKKBJA_DILHADGGIKN_OFFSET UNITYSDK_OFFSET(0x158D5E60)
#define LGINJIKKBJA_DNDBFAPFBPO_OFFSET UNITYSDK_OFFSET(0x158D58C0)
#define LGINJIKKBJA_EAHIMEPLBHD_OFFSET UNITYSDK_OFFSET(0x158D7210)
#define LGINJIKKBJA_EAIANNCCPNB_OFFSET UNITYSDK_OFFSET(0x158D3C80)
#define LGINJIKKBJA_EDBDPDJAIEB_OFFSET UNITYSDK_OFFSET(0x158D38F0)
#define LGINJIKKBJA_EGHBMCOKHOH_OFFSET UNITYSDK_OFFSET(0x158D7A20)
#define LGINJIKKBJA_EGMAJEHMAKD_OFFSET UNITYSDK_OFFSET(0x158D3FB0)
#define LGINJIKKBJA_EHKHIGKALBD_OFFSET UNITYSDK_OFFSET(0x158D6C10)
#define LGINJIKKBJA_EJFLJELDLML_OFFSET UNITYSDK_OFFSET(0x158D5B70)
#define LGINJIKKBJA_EKDOIOOBLBO_OFFSET UNITYSDK_OFFSET(0x158D6D90)
#define LGINJIKKBJA_FCEGHDDBPII_OFFSET UNITYSDK_OFFSET(0x158D86D0)
#define LGINJIKKBJA_HADFFGFLGOF_1_OFFSET UNITYSDK_OFFSET(0x158D4B10)
#define LGINJIKKBJA_HADFFGFLGOF_OFFSET UNITYSDK_OFFSET(0x158D3150)
#define LGINJIKKBJA_HFBPPHNDJHG_OFFSET UNITYSDK_OFFSET(0x158D4290)
#define LGINJIKKBJA_HFGFLBAPMGA_OFFSET UNITYSDK_OFFSET(0x158D69D0)
#define LGINJIKKBJA_HKJCMPOOKAM_OFFSET UNITYSDK_OFFSET(0x158D5970)
#define LGINJIKKBJA_HPMKILAKMBN_OFFSET UNITYSDK_OFFSET(0x158D8550)
#define LGINJIKKBJA_IBDAGCHCKLJ_OFFSET UNITYSDK_OFFSET(0x158D6740)
#define LGINJIKKBJA_IBPFFBPKJFE_1_OFFSET UNITYSDK_OFFSET(0x158D7220)
#define LGINJIKKBJA_IBPFFBPKJFE_OFFSET UNITYSDK_OFFSET(0x158D4400)
#define LGINJIKKBJA_JHHAHBMAGNO_OFFSET UNITYSDK_OFFSET(0x158D6690)
#define LGINJIKKBJA_JOPMJALGJGE_OFFSET UNITYSDK_OFFSET(0x158D3660)
#define LGINJIKKBJA_KGOPKJNFECE_OFFSET UNITYSDK_OFFSET(0x158D4730)
#define LGINJIKKBJA_KHOHPDMFLLO_OFFSET UNITYSDK_OFFSET(0x158D8810)
#define LGINJIKKBJA_KIKCFPEGPIA_OFFSET UNITYSDK_OFFSET(0x158D3B20)
#define LGINJIKKBJA_KLMHLAOOOKL_OFFSET UNITYSDK_OFFSET(0x158D3DC0)
#define LGINJIKKBJA_KLODBPHIHOM_OFFSET UNITYSDK_OFFSET(0x158D2DE0)
#define LGINJIKKBJA_KOHIBNIDPEO_OFFSET UNITYSDK_OFFSET(0x158D2BA0)
#define LGINJIKKBJA_LALMGBDDCFH_OFFSET UNITYSDK_OFFSET(0x158D7E90)
#define LGINJIKKBJA_LEMBNLPAMOP_OFFSET UNITYSDK_OFFSET(0x158D2FD0)
#define LGINJIKKBJA_LFDIGOCJMBI_OFFSET UNITYSDK_OFFSET(0x158D5020)
#define LGINJIKKBJA_LFJKELLDJPA_OFFSET UNITYSDK_OFFSET(0x158D3AC0)
#define LGINJIKKBJA_LIPEGBMCMJE_OFFSET UNITYSDK_OFFSET(0x158D76D0)
#define LGINJIKKBJA_LJNFANAEHHA_OFFSET UNITYSDK_OFFSET(0x158D2F40)
#define LGINJIKKBJA_LLHFKOIFLKL_OFFSET UNITYSDK_OFFSET(0x158D6F70)
#define LGINJIKKBJA_LNJFAOCLDKK_OFFSET UNITYSDK_OFFSET(0x158D7860)
#define LGINJIKKBJA_LPOJGICGNEN_OFFSET UNITYSDK_OFFSET(0x158D3E30)
#define LGINJIKKBJA_MCHACMNIJLI_OFFSET UNITYSDK_OFFSET(0x158D64E0)
#define LGINJIKKBJA_MJCCHLNJNOA_OFFSET UNITYSDK_OFFSET(0x158D7FF0)
#define LGINJIKKBJA_NAFAMONDLCM_1_OFFSET UNITYSDK_OFFSET(0x158D7430)
#define LGINJIKKBJA_NAFAMONDLCM_OFFSET UNITYSDK_OFFSET(0x158D5C50)
#define LGINJIKKBJA_NBOMMJDCEKD_OFFSET UNITYSDK_OFFSET(0x158D4CC0)
#define LGINJIKKBJA_NCGHAMKBGGC_OFFSET UNITYSDK_OFFSET(0x158D8290)
#define LGINJIKKBJA_NNJMKPNACHD_OFFSET UNITYSDK_OFFSET(0x158D4170)
#define LGINJIKKBJA_OBNCAJBIFII_OFFSET UNITYSDK_OFFSET(0x158D4E70)
#define LGINJIKKBJA_OCHALLJODNM_1_OFFSET UNITYSDK_OFFSET(0x158D54D0)
#define LGINJIKKBJA_OCHALLJODNM_OFFSET UNITYSDK_OFFSET(0x158D3450)
#define LGINJIKKBJA_ODLLAHNHCDD_OFFSET UNITYSDK_OFFSET(0x158D2550)
#define LGINJIKKBJA_OIPMBBFNPDI_OFFSET UNITYSDK_OFFSET(0x158D8170)
#define LGINJIKKBJA_ONIAHMKDPBJ_OFFSET UNITYSDK_OFFSET(0x158D7F30)
#define LGINJIKKBJA_OPAEIJFNAIM_1_OFFSET UNITYSDK_OFFSET(0x158D6B50)
#define LGINJIKKBJA_OPAEIJFNAIM_OFFSET UNITYSDK_OFFSET(0x158D4890)
#define LGINJIKKBJA_PDLBILACJDN_OFFSET UNITYSDK_OFFSET(0x158D45B0)
#define LGINJIKKBJA_PEDANHBGIGE_OFFSET UNITYSDK_OFFSET(0x158D6910)
#define LGINJIKKBJA_SETGREY_OFFSET UNITYSDK_OFFSET(0x158D27E0)
#define LGINJIKKBJA__CCTOR_OFFSET UNITYSDK_OFFSET(0x158D2D40)
#define LGINJIKKBJA__CTOR_OFFSET UNITYSDK_OFFSET(0x158D2C80)

inline static constexpr unsigned int LGINJIKKBJA_TypeDefinitionIndex = 92951;

class LGINJIKKBJA : public ::MPHPFDEODIG
{
public:
	static ::Foundation::ObjectPool_1<::LGINJIKKBJA*>** StaticGet_HKHFCCEMOIH()
	{
		return (::Foundation::ObjectPool_1<::LGINJIKKBJA*>**)Il2CppClass::FromTypeDefinitionIndex(LGINJIKKBJA_TypeDefinitionIndex)->GetStaticField(0x38460);
	}
	::System::WeakReference_1<::UnityEngine::UI::Extension::UIButtonEx*>* ENGGGCLGFAA; // 0x20
	::UnityEngine::UI::Text* MIDLNNFPBCL; // 0x28
	::UnityEngine::Events::UnityAction* OPMCNBFLMNK; // 0x30
	::ECBFCDFFPBI* EMADKLEDGKE; // 0x38
	::FGCOIBFFCHB* LLCOGDLNOMM; // 0x40
	::UnityEngine::Events::UnityAction* LLCGCHIOHJI; // 0x48
	::System::Single FJJAILEHFMA; // 0x50
	::Foundation::Coroutine::CoroutineHandle BFKDFFOIHJA; // 0x54
	::System::Boolean CKMENBHGNNC; // 0x58
	::System::Boolean IMKMCODJGDD; // 0x59
	::System::Boolean _DGNLLOMFECG_k__BackingField; // 0x5A
	::System::Byte _padding0[0x1];
	::System::Single FHBAMPKNLPD; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGINJIKKBJA__CCTOR_OFFSET))();
	}

	::System::Void ODLLAHNHCDD(::System::Boolean EGEGIMGMJHN, ::System::Boolean HHBFNJMGNGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LGINJIKKBJA_ODLLAHNHCDD_OFFSET))(this, EGEGIMGMJHN, HHBFNJMGNGD);
	}

	::System::Void SetGrey(::System::Boolean EHGKMECNECN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LGINJIKKBJA_SETGREY_OFFSET))(this, EHGKMECNECN);
	}

	::System::Void Clean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_CLEAN_OFFSET))(this);
	}

	::System::Void KLODBPHIHOM(::UnityEngine::Events::UnityAction* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_KLODBPHIHOM_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void LJNFANAEHHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_LJNFANAEHHA_OFFSET))(this);
	}

	::System::Void LEMBNLPAMOP(::Share::ENotificationBadgeType FGIIPKDELND)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + LGINJIKKBJA_LEMBNLPAMOP_OFFSET))(this, FGIIPKDELND);
	}

	::System::Void HADFFGFLGOF(::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_HADFFGFLGOF_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Boolean CJGKDAIMJHL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_CJGKDAIMJHL_OFFSET))(this);
	}

	::System::Void OCHALLJODNM(::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_OCHALLJODNM_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void JOPMJALGJGE(::UnityEngine::Events::UnityAction* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_JOPMJALGJGE_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void LFJKELLDJPA(::System::Single HPCILAJBBHH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LGINJIKKBJA_LFJKELLDJPA_OFFSET))(this, HPCILAJBBHH);
	}

	::System::Void KIKCFPEGPIA(::UnityEngine::Events::UnityAction* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_KIKCFPEGPIA_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void EAIANNCCPNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_EAIANNCCPNB_OFFSET))(this);
	}

	::System::Void KLMHLAOOOKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_KLMHLAOOOKL_OFFSET))(this);
	}

	::System::Boolean LPOJGICGNEN(::UnityEngine::Events::UnityAction* EJGDHCIBCJH)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_LPOJGICGNEN_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void NNJMKPNACHD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_NNJMKPNACHD_OFFSET))(this);
	}

	::System::Void HFBPPHNDJHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_HFBPPHNDJHG_OFFSET))(this);
	}

	::System::Single DFJGCGNPGOG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_DFJGCGNPGOG_OFFSET))(this);
	}

	::System::Void IBPFFBPKJFE(::UnityEngine::Events::UnityAction* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_IBPFFBPKJFE_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void PDLBILACJDN(::System::String* FCCLIEJAKLI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_PDLBILACJDN_OFFSET))(this, FCCLIEJAKLI);
	}

	::System::Void KGOPKJNFECE(::UnityEngine::Events::UnityAction* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_KGOPKJNFECE_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void OPAEIJFNAIM(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + LGINJIKKBJA_OPAEIJFNAIM_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Void BEJMKEGKEJH(::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_BEJMKEGKEJH_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void HADFFGFLGOF_1(::UnityEngine::Events::UnityAction* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_HADFFGFLGOF_1_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void NBOMMJDCEKD(::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_NBOMMJDCEKD_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void OBNCAJBIFII(::System::Boolean PFPJFCGFNFL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LGINJIKKBJA_OBNCAJBIFII_OFFSET))(this, PFPJFCGFNFL);
	}

	::System::Void EGMAJEHMAKD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_EGMAJEHMAKD_OFFSET))(this);
	}

	::System::Void LFDIGOCJMBI(::LGINJIKKBJA* MOLNKGBDEIJ)
	{
		return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_LFDIGOCJMBI_OFFSET))(this, MOLNKGBDEIJ);
	}

	::System::Void BBOMJDBNHIC(::HNLACBJDCGI* JMJGHFAOMNH, ::UnityEngine::UI::Extension::UIButtonEx* LGKKLKFMGAJ)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::UnityEngine::UI::Extension::UIButtonEx*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_BBOMJDBNHIC_OFFSET))(this, JMJGHFAOMNH, LGKKLKFMGAJ);
	}

	::System::Void AFCMAPBCDLK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_AFCMAPBCDLK_OFFSET))(this);
	}

	::System::Void OCHALLJODNM_1(::UnityEngine::Events::UnityAction* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_OCHALLJODNM_1_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMPBKGIEMCO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_BMPBKGIEMCO_OFFSET))(this);
	}

	::System::Void DHPFBIDCMIO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_DHPFBIDCMIO_OFFSET))(this);
	}

	::System::Void DNDBFAPFBPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_DNDBFAPFBPO_OFFSET))(this);
	}

	::System::Void EDBDPDJAIEB(::UnityEngine::Events::UnityAction* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_EDBDPDJAIEB_OFFSET))(this, EJGDHCIBCJH);
	}

	static ::LGINJIKKBJA* COKNIICCODC(::HNLACBJDCGI* JMJGHFAOMNH, ::UnityEngine::UI::Extension::UIButtonEx* LGKKLKFMGAJ)
	{
		return ((::LGINJIKKBJA*(*)(::HNLACBJDCGI*, ::UnityEngine::UI::Extension::UIButtonEx*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_COKNIICCODC_OFFSET))(JMJGHFAOMNH, LGKKLKFMGAJ);
	}

	::System::Boolean HKJCMPOOKAM(::UnityEngine::Events::UnityAction* EJGDHCIBCJH)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_HKJCMPOOKAM_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void EJFLJELDLML(::System::Single CMANEJIMLBJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LGINJIKKBJA_EJFLJELDLML_OFFSET))(this, CMANEJIMLBJ);
	}

	::System::Void NAFAMONDLCM(::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_NAFAMONDLCM_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void DILHADGGIKN(::System::String* FCCLIEJAKLI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_DILHADGGIKN_OFFSET))(this, FCCLIEJAKLI);
	}

	::System::Boolean BDLDLDBHAFE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_BDLDLDBHAFE_OFFSET))(this);
	}

	::System::Void AOLACMOGILH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_AOLACMOGILH_OFFSET))(this);
	}

	::UnityEngine::UI::Extension::UIButtonEx* BHABHMFGGNC()
	{
		return ((::UnityEngine::UI::Extension::UIButtonEx*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_BHABHMFGGNC_OFFSET))(this);
	}

	::System::Void MCHACMNIJLI(::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_MCHACMNIJLI_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void JHHAHBMAGNO(::UnityEngine::Events::UnityAction* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_JHHAHBMAGNO_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void IBDAGCHCKLJ(::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LGINJIKKBJA_IBDAGCHCKLJ_OFFSET))(this, FBILHHBPEHD);
	}

	::System::Void PEDANHBGIGE(::System::Boolean AHEAEIMIJJK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LGINJIKKBJA_PEDANHBGIGE_OFFSET))(this, AHEAEIMIJJK);
	}

	::System::Void HFGFLBAPMGA(::System::Int32 EHDLEOPFKDN, ::UnityEngine::Events::UnityAction* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_HFGFLBAPMGA_OFFSET))(this, EHDLEOPFKDN, EJGDHCIBCJH);
	}

	::System::Void OPAEIJFNAIM_1(::System::String* CJBJONJDOLI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_OPAEIJFNAIM_1_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Void EHKHIGKALBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_EHKHIGKALBD_OFFSET))(this);
	}

	::System::Void EKDOIOOBLBO(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LGINJIKKBJA_EKDOIOOBLBO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void AKBKGEIAHAK(::UnityEngine::Events::UnityAction* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_AKBKGEIAHAK_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void LLHFKOIFLKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_LLHFKOIFLKL_OFFSET))(this);
	}

	::System::Void DBLOAHCIGNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_DBLOAHCIGNN_OFFSET))(this);
	}

	::System::Boolean EAHIMEPLBHD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_EAHIMEPLBHD_OFFSET))(this);
	}

	::System::Void IBPFFBPKJFE_1(::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_IBPFFBPKJFE_1_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void NAFAMONDLCM_1(::UnityEngine::Events::UnityAction* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_NAFAMONDLCM_1_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BOIAINBDJFG(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LGINJIKKBJA_BOIAINBDJFG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean BLKJDELBNNB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_BLKJDELBNNB_OFFSET))(this);
	}

	::System::Boolean CFFLHGIAGIN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_CFFLHGIAGIN_OFFSET))(this);
	}

	::System::String* LIPEGBMCMJE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_LIPEGBMCMJE_OFFSET))(this);
	}

	::System::Void LNJFAOCLDKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_LNJFAOCLDKK_OFFSET))(this);
	}

	::System::Void EGHBMCOKHOH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_EGHBMCOKHOH_OFFSET))(this);
	}

	::System::Boolean CHHDCNHHCLL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_CHHDCNHHCLL_OFFSET))(this);
	}

	::System::Void LALMGBDDCFH(::System::Boolean MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LGINJIKKBJA_LALMGBDDCFH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void ONIAHMKDPBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_ONIAHMKDPBJ_OFFSET))(this);
	}

	::System::Void MJCCHLNJNOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_MJCCHLNJNOA_OFFSET))(this);
	}

	::System::Void OIPMBBFNPDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_OIPMBBFNPDI_OFFSET))(this);
	}

	::System::Void NCGHAMKBGGC(::UnityEngine::Events::UnityAction* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_NCGHAMKBGGC_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void KOHIBNIDPEO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_KOHIBNIDPEO_OFFSET))(this);
	}

	::System::Void DGDKCIKFAFD(::UnityEngine::Events::UnityAction* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + LGINJIKKBJA_DGDKCIKFAFD_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void HPMKILAKMBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINJIKKBJA_HPMKILAKMBN_OFFSET))(this);
	}

	static ::LGINJIKKBJA* FCEGHDDBPII()
	{
		return ((::LGINJIKKBJA*(*)())((::PBYTE)hIl2Cpp + LGINJIKKBJA_FCEGHDDBPII_OFFSET))();
	}

	::System::Void KHOHPDMFLLO(::System::Boolean PFPJFCGFNFL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LGINJIKKBJA_KHOHPDMFLLO_OFFSET))(this, PFPJFCGFNFL);
	}
};
