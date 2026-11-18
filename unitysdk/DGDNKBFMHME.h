#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/AspectRatioFitter_AspectMode.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole { class IVideoPlayer; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class RawImage; }

#define DGDNKBFMHME_AAAFCNDPCKA_OFFSET UNITYSDK_OFFSET(0x1833C630)
#define DGDNKBFMHME_AJCMBABIOHG_OFFSET UNITYSDK_OFFSET(0x1833CB20)
#define DGDNKBFMHME_BBCIGHJCMGF_OFFSET UNITYSDK_OFFSET(0x1833A0D0)
#define DGDNKBFMHME_BFODBPKICCG_OFFSET UNITYSDK_OFFSET(0x1833B540)
#define DGDNKBFMHME_CFFBPGBOIFO_OFFSET UNITYSDK_OFFSET(0x1833B3F0)
#define DGDNKBFMHME_CLIGAFFECKA_OFFSET UNITYSDK_OFFSET(0x1833C460)
#define DGDNKBFMHME_DHGGCEIFGFN_OFFSET UNITYSDK_OFFSET(0x1833BA20)
#define DGDNKBFMHME_DLEGHENHIDE_OFFSET UNITYSDK_OFFSET(0x1833C320)
#define DGDNKBFMHME_DOCGMAIMGNJ_OFFSET UNITYSDK_OFFSET(0x1833C9C0)
#define DGDNKBFMHME_ECDLPCHACPG_OFFSET UNITYSDK_OFFSET(0x1833B2A0)
#define DGDNKBFMHME_ECEBDPJEKNN_OFFSET UNITYSDK_OFFSET(0x1833C960)
#define DGDNKBFMHME_EGKJMPADKOJ_OFFSET UNITYSDK_OFFSET(0x1833A760)
#define DGDNKBFMHME_EKGKBJBDGKO_OFFSET UNITYSDK_OFFSET(0x1833B7D0)
#define DGDNKBFMHME_FBIHGJFAHJC_OFFSET UNITYSDK_OFFSET(0x1833B860)
#define DGDNKBFMHME_FHEMBACODFE_OFFSET UNITYSDK_OFFSET(0x1833CE10)
#define DGDNKBFMHME_FNDHBCGCHNE_OFFSET UNITYSDK_OFFSET(0x1833AB10)
#define DGDNKBFMHME_FNDIDHOMGCO_OFFSET UNITYSDK_OFFSET(0x1833C3E0)
#define DGDNKBFMHME_GFNEJOJAMKF_OFFSET UNITYSDK_OFFSET(0x1833C380)
#define DGDNKBFMHME_GNLOBCNCKKM_OFFSET UNITYSDK_OFFSET(0x18339BC0)
#define DGDNKBFMHME_HBLPHLOICGA_OFFSET UNITYSDK_OFFSET(0x1833CCD0)
#define DGDNKBFMHME_HFBGGDHFFPN_OFFSET UNITYSDK_OFFSET(0x1833A410)
#define DGDNKBFMHME_HGBOEPOKGNF_OFFSET UNITYSDK_OFFSET(0x1833A000)
#define DGDNKBFMHME_HHLPPKOJDPD_OFFSET UNITYSDK_OFFSET(0x1833CA20)
#define DGDNKBFMHME_HIAIMBFMBNK_OFFSET UNITYSDK_OFFSET(0x1833CA80)
#define DGDNKBFMHME_HKBAFPIBOKD_OFFSET UNITYSDK_OFFSET(0x1833C3F0)
#define DGDNKBFMHME_HLPIIJGHIDO_OFFSET UNITYSDK_OFFSET(0x1833B2D0)
#define DGDNKBFMHME_HMAMICOPIPL_OFFSET UNITYSDK_OFFSET(0x1833CAE0)
#define DGDNKBFMHME_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x1833CDB0)
#define DGDNKBFMHME_HOMFFJAFBBB_OFFSET UNITYSDK_OFFSET(0x1833A5C0)
#define DGDNKBFMHME_JKADGKCDMHB_OFFSET UNITYSDK_OFFSET(0x1833B800)
#define DGDNKBFMHME_JMNEBFMHIGB_OFFSET UNITYSDK_OFFSET(0x1833CAF0)
#define DGDNKBFMHME_JNLEIJGGDJK_OFFSET UNITYSDK_OFFSET(0x1833AB00)
#define DGDNKBFMHME_KAPKIPGFKHC_OFFSET UNITYSDK_OFFSET(0x1833AEC0)
#define DGDNKBFMHME_KMODHMLCNOO_OFFSET UNITYSDK_OFFSET(0x1833ACD0)
#define DGDNKBFMHME_KPBMIBNJCCM_OFFSET UNITYSDK_OFFSET(0x1833BA30)
#define DGDNKBFMHME_KPKDIDNKHKO_OFFSET UNITYSDK_OFFSET(0x1833C680)
#define DGDNKBFMHME_LBGEHIPAHLO_OFFSET UNITYSDK_OFFSET(0x1833B600)
#define DGDNKBFMHME_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x1833B480)
#define DGDNKBFMHME_LIMCAJOBNPG_OFFSET UNITYSDK_OFFSET(0x1833ABA0)
#define DGDNKBFMHME_MBNCLCDGNHI_OFFSET UNITYSDK_OFFSET(0x1833BC90)
#define DGDNKBFMHME_MDPHMLKMMFH_OFFSET UNITYSDK_OFFSET(0x1833C730)
#define DGDNKBFMHME_MHCJHFCKOEF_OFFSET UNITYSDK_OFFSET(0x1833C6E0)
#define DGDNKBFMHME_NDGKEKCOBPK_OFFSET UNITYSDK_OFFSET(0x1833BCA0)
#define DGDNKBFMHME_OAJOGONNPDL_OFFSET UNITYSDK_OFFSET(0x1833C020)
#define DGDNKBFMHME_ODBKFNNBDKN_OFFSET UNITYSDK_OFFSET(0x1833CD50)
#define DGDNKBFMHME_OFPFIJKHPCC_OFFSET UNITYSDK_OFFSET(0x1833ACC0)
#define DGDNKBFMHME_OKBBEFMKCLJ_OFFSET UNITYSDK_OFFSET(0x1833B590)
#define DGDNKBFMHME_PADOJNMFNFL_OFFSET UNITYSDK_OFFSET(0x1833C450)
#define DGDNKBFMHME_PDAADHDFGKP_OFFSET UNITYSDK_OFFSET(0x1833C540)
#define DGDNKBFMHME_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x1833ABB0)
#define DGDNKBFMHME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18339F40)
#define DGDNKBFMHME__CTOR_OFFSET UNITYSDK_OFFSET(0x18339A80)

inline static constexpr unsigned int DGDNKBFMHME_TypeDefinitionIndex = 70205;

class DGDNKBFMHME : public ::System::Object
{
public:
	::UnityEngine::Events::UnityEvent* HKPIJHPONCG; // 0x10
	::UnityEngine::Texture* GAPPHPODIBD; // 0x18
	::UnityEngine::UI::RawImage* FHCNHOBIMOD; // 0x20
	::UnityEngine::Events::UnityEvent* NPEIBJBNKJN; // 0x28
	::UnityEngine::Events::UnityEvent* PDHAKPMLEED; // 0x30
	::UnityEngine::UI::Graphic* OLHHFMKKALO; // 0x38
	::Foundation::AssetRequestHandle OELFBNHPJDO; // 0x40
	::MoleMole::IVideoPlayer* CCDMEKCLPPJ; // 0x60
	::UnityEngine::Events::UnityEvent* CLNPAGKEKDL; // 0x68
	::System::Boolean _GMKFGFLNCMJ_k__BackingField; // 0x70
	::System::Boolean OGGEJNEKPBH; // 0x71
	::System::Byte _padding0[0x2];
	::System::Int32 _NGGEMAIAPOG_k__BackingField; // 0x74
	::System::Int32 _MEIBLAHJBFJ_k__BackingField; // 0x78
	::UnityEngine::UI::AspectRatioFitter_AspectMode _ENABLHLJLBP_k__BackingField; // 0x7C

	::System::Void _ctor(::MoleMole::IVideoPlayer* JGPIGFLIDOJ, ::UnityEngine::UI::Graphic* NMLFCMIKDOL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + DGDNKBFMHME__CTOR_OFFSET))(this, JGPIGFLIDOJ, NMLFCMIKDOL);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME__CTOR_1_OFFSET))(this);
	}

	::System::Void HGBOEPOKGNF(::System::Action* NHIJMEGJIAM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DGDNKBFMHME_HGBOEPOKGNF_OFFSET))(this, NHIJMEGJIAM);
	}

	::System::Void BBCIGHJCMGF(::System::String* OLOMNNBBHPJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DGDNKBFMHME_BBCIGHJCMGF_OFFSET))(this, OLOMNNBBHPJ);
	}

	::System::Void HOMFFJAFBBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_HOMFFJAFBBB_OFFSET))(this);
	}

	::System::Void EGKJMPADKOJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_EGKJMPADKOJ_OFFSET))(this);
	}

	::System::Void JNLEIJGGDJK(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DGDNKBFMHME_JNLEIJGGDJK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean FNDHBCGCHNE(::System::Boolean HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DGDNKBFMHME_FNDHBCGCHNE_OFFSET))(this, HFMHOELKCAJ);
	}

	::System::Void LIMCAJOBNPG(::UnityEngine::UI::AspectRatioFitter_AspectMode EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::AspectRatioFitter_AspectMode))((::PBYTE)hIl2Cpp + DGDNKBFMHME_LIMCAJOBNPG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Boolean OFPFIJKHPCC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_OFPFIJKHPCC_OFFSET))(this);
	}

	::System::Void KMODHMLCNOO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_KMODHMLCNOO_OFFSET))(this);
	}

	::System::Void KAPKIPGFKHC(::System::String* OLOMNNBBHPJ, ::System::Boolean HAFDIMGJBHC, ::System::Action_1<::DGDNKBFMHME*>* OHDLKCEJNAM, ::System::Action_1<::DGDNKBFMHME*>* LEGHIDIHIHM, ::System::Action_1<::DGDNKBFMHME*>* DKGJKOPELMD, ::System::Boolean IKOFEMGODOE, ::System::Boolean JPJIDJNLMNI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::DGDNKBFMHME*>*, ::System::Action_1<::DGDNKBFMHME*>*, ::System::Action_1<::DGDNKBFMHME*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DGDNKBFMHME_KAPKIPGFKHC_OFFSET))(this, OLOMNNBBHPJ, HAFDIMGJBHC, OHDLKCEJNAM, LEGHIDIHIHM, DKGJKOPELMD, IKOFEMGODOE, JPJIDJNLMNI);
	}

	::System::Int32 ECDLPCHACPG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_ECDLPCHACPG_OFFSET))(this);
	}

	::System::Void HLPIIJGHIDO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_HLPIIJGHIDO_OFFSET))(this);
	}

	::System::Boolean CFFBPGBOIFO(::System::Single FOOBONOEPGD, ::System::Action* IHLBALNBGKM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + DGDNKBFMHME_CFFBPGBOIFO_OFFSET))(this, FOOBONOEPGD, IHLBALNBGKM);
	}

	::System::Void BFODBPKICCG(::System::String* NGHLLDAJJJE)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DGDNKBFMHME_BFODBPKICCG_OFFSET))(this, NGHLLDAJJJE);
	}

	::System::Void OKBBEFMKCLJ(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DGDNKBFMHME_OKBBEFMKCLJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LBGEHIPAHLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_LBGEHIPAHLO_OFFSET))(this);
	}

	::System::Boolean EKGKBJBDGKO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_EKGKBJBDGKO_OFFSET))(this);
	}

	::System::Void JKADGKCDMHB(::MoleMole::IVideoPlayer* KHGFAKJKDGG, ::System::String* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*, ::System::String*))((::PBYTE)hIl2Cpp + DGDNKBFMHME_JKADGKCDMHB_OFFSET))(this, KHGFAKJKDGG, NAPFALLANDL);
	}

	::UnityEngine::Texture* FBIHGJFAHJC()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_FBIHGJFAHJC_OFFSET))(this);
	}

	::System::String* HFBGGDHFFPN(::System::String* NJJICGLACLH)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DGDNKBFMHME_HFBGGDHFFPN_OFFSET))(this, NJJICGLACLH);
	}

	::MoleMole::IVideoPlayer* DHGGCEIFGFN()
	{
		return ((::MoleMole::IVideoPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_DHGGCEIFGFN_OFFSET))(this);
	}

	::System::Void KPBMIBNJCCM(::MoleMole::IVideoPlayer* KHGFAKJKDGG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + DGDNKBFMHME_KPBMIBNJCCM_OFFSET))(this, KHGFAKJKDGG);
	}

	::System::Void MBNCLCDGNHI(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DGDNKBFMHME_MBNCLCDGNHI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NDGKEKCOBPK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_NDGKEKCOBPK_OFFSET))(this);
	}

	::System::Void OAJOGONNPDL(::MoleMole::IVideoPlayer* JGPIGFLIDOJ, ::System::String* OLOMNNBBHPJ, ::System::Boolean HAFDIMGJBHC, ::System::Action_1<::DGDNKBFMHME*>* OHDLKCEJNAM, ::System::Action_1<::DGDNKBFMHME*>* LEGHIDIHIHM, ::System::Action_1<::DGDNKBFMHME*>* DKGJKOPELMD, ::System::Action_1<::DGDNKBFMHME*>* OLBAKFLBNIG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*, ::System::String*, ::System::Boolean, ::System::Action_1<::DGDNKBFMHME*>*, ::System::Action_1<::DGDNKBFMHME*>*, ::System::Action_1<::DGDNKBFMHME*>*, ::System::Action_1<::DGDNKBFMHME*>*))((::PBYTE)hIl2Cpp + DGDNKBFMHME_OAJOGONNPDL_OFFSET))(this, JGPIGFLIDOJ, OLOMNNBBHPJ, HAFDIMGJBHC, OHDLKCEJNAM, LEGHIDIHIHM, DKGJKOPELMD, OLBAKFLBNIG);
	}

	::System::Void GFNEJOJAMKF(::MoleMole::IVideoPlayer* KHGFAKJKDGG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + DGDNKBFMHME_GFNEJOJAMKF_OFFSET))(this, KHGFAKJKDGG);
	}

	::System::Int32 FNDIDHOMGCO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_FNDIDHOMGCO_OFFSET))(this);
	}

	::System::Boolean HKBAFPIBOKD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_HKBAFPIBOKD_OFFSET))(this);
	}

	::System::Void PADOJNMFNFL(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DGDNKBFMHME_PADOJNMFNFL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CLIGAFFECKA(::System::Single FNIOPKPHDEH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DGDNKBFMHME_CLIGAFFECKA_OFFSET))(this, FNIOPKPHDEH);
	}

	::System::Void AAAFCNDPCKA(::MoleMole::IVideoPlayer* KHGFAKJKDGG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + DGDNKBFMHME_AAAFCNDPCKA_OFFSET))(this, KHGFAKJKDGG);
	}

	::System::Boolean KPKDIDNKHKO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_KPKDIDNKHKO_OFFSET))(this);
	}

	::UnityEngine::Vector4 MHCJHFCKOEF()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_MHCJHFCKOEF_OFFSET))(this);
	}

	::System::Void ECEBDPJEKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_ECEBDPJEKNN_OFFSET))(this);
	}

	::System::UInt64 PDAADHDFGKP()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_PDAADHDFGKP_OFFSET))(this);
	}

	::System::Boolean DOCGMAIMGNJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_DOCGMAIMGNJ_OFFSET))(this);
	}

	::System::Void HHLPPKOJDPD(::MoleMole::IVideoPlayer* KHGFAKJKDGG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + DGDNKBFMHME_HHLPPKOJDPD_OFFSET))(this, KHGFAKJKDGG);
	}

	::System::Double HIAIMBFMBNK()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_HIAIMBFMBNK_OFFSET))(this);
	}

	::UnityEngine::UI::AspectRatioFitter_AspectMode HMAMICOPIPL()
	{
		return ((::UnityEngine::UI::AspectRatioFitter_AspectMode(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_HMAMICOPIPL_OFFSET))(this);
	}

	::System::UInt64 JMNEBFMHIGB()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_JMNEBFMHIGB_OFFSET))(this);
	}

	::System::Void GNLOBCNCKKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_GNLOBCNCKKM_OFFSET))(this);
	}

	::System::Void AJCMBABIOHG(::UnityEngine::UI::RawImage* DNKEKDIEAMH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::RawImage*))((::PBYTE)hIl2Cpp + DGDNKBFMHME_AJCMBABIOHG_OFFSET))(this, DNKEKDIEAMH);
	}

	::System::Void DLEGHENHIDE(::MoleMole::IVideoPlayer* JGPIGFLIDOJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + DGDNKBFMHME_DLEGHENHIDE_OFFSET))(this, JGPIGFLIDOJ);
	}

	::UnityEngine::Vector4 MDPHMLKMMFH(::System::Int32 PJJBMKPPBAB)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DGDNKBFMHME_MDPHMLKMMFH_OFFSET))(this, PJJBMKPPBAB);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void HBLPHLOICGA(::System::Single IAKPGBCAAKM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DGDNKBFMHME_HBLPHLOICGA_OFFSET))(this, IAKPGBCAAKM);
	}

	::System::Void ODBKFNNBDKN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_ODBKFNNBDKN_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Int32 FHEMBACODFE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDNKBFMHME_FHEMBACODFE_OFFSET))(this);
	}
};
