#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/GMDAEPNIIEE.h"
#include "unitysdk/MHOIKLKNAKI.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"

class COHHJKODKDN;
class DLJLLKJEMEN;
class FBAMLABJMKF;
class FCPJLMBAAJD;
class FHKBOKPDCBC;
class GCAEBFDGNEN;
class GHICACFMBNP;
class GHOMKECPKCL;
class HJPFEPFPNNN;
class LGDFBAHLIOA;
class NGNHKLFHDEG;
class PNKJAAKFDDJ;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace MoleMole::Cameras { class VCameraCustomTargetGroup; }
namespace MoleMole::Cameras { class VCameraTargetGroup; }
namespace MoleMole::Config { class ConfigHollowCameraBounce; }
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace MoleMole::Config { class ConfigHollowCameraStretchV2; }
namespace MoleMole::Config { class ConfigHollowChessboardCamera; }
namespace Share { class CVector2; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define KLFOBDFJFJE_AFHKKKHJNBJ_OFFSET UNITYSDK_OFFSET(0x13C83D00)
#define KLFOBDFJFJE_AGGMBMHCLNL_OFFSET UNITYSDK_OFFSET(0x13C7D220)
#define KLFOBDFJFJE_AHGECFGJGEJ_OFFSET UNITYSDK_OFFSET(0x13C7F6E0)
#define KLFOBDFJFJE_AIGEBHJJAGD_OFFSET UNITYSDK_OFFSET(0x13C84760)
#define KLFOBDFJFJE_AMIMAIBDENM_OFFSET UNITYSDK_OFFSET(0x13C736D0)
#define KLFOBDFJFJE_BBDODDEFGKG_OFFSET UNITYSDK_OFFSET(0x13C7F7E0)
#define KLFOBDFJFJE_BIMEDDJBFII_OFFSET UNITYSDK_OFFSET(0x13C75770)
#define KLFOBDFJFJE_BMGNDJPBONE_OFFSET UNITYSDK_OFFSET(0x13C81660)
#define KLFOBDFJFJE_BNFDOJPKBMO_OFFSET UNITYSDK_OFFSET(0x13C81DD0)
#define KLFOBDFJFJE_CAHGLNOAIBJ_OFFSET UNITYSDK_OFFSET(0x13C7C370)
#define KLFOBDFJFJE_CCCPBAMAEEN_OFFSET UNITYSDK_OFFSET(0x13C82E90)
#define KLFOBDFJFJE_CECKKCOLLKN_OFFSET UNITYSDK_OFFSET(0x13C81930)
#define KLFOBDFJFJE_CPFCGHKDJOP_OFFSET UNITYSDK_OFFSET(0x13C769C0)
#define KLFOBDFJFJE_DIPMMMDCFGG_OFFSET UNITYSDK_OFFSET(0x13C73E30)
#define KLFOBDFJFJE_DMECNIHILIO_OFFSET UNITYSDK_OFFSET(0x13C76D10)
#define KLFOBDFJFJE_ELCAFHHEIED_OFFSET UNITYSDK_OFFSET(0x13C81460)
#define KLFOBDFJFJE_EMMCLFNINAA_OFFSET UNITYSDK_OFFSET(0x13C71D60)
#define KLFOBDFJFJE_FGCLFCNNBFI_OFFSET UNITYSDK_OFFSET(0x13C780E0)
#define KLFOBDFJFJE_FIEPHOPOMFF_OFFSET UNITYSDK_OFFSET(0x13C75B10)
#define KLFOBDFJFJE_FINOBBFOJEB_OFFSET UNITYSDK_OFFSET(0x13C78E00)
#define KLFOBDFJFJE_FMBHNCHBBLD_OFFSET UNITYSDK_OFFSET(0x13C82D70)
#define KLFOBDFJFJE_FPKAHDEEDCF_OFFSET UNITYSDK_OFFSET(0x13C82C10)
#define KLFOBDFJFJE_GAHIIJIJOIK_OFFSET UNITYSDK_OFFSET(0x13C84800)
#define KLFOBDFJFJE_GEEBMNDBBPH_OFFSET UNITYSDK_OFFSET(0x13C80AA0)
#define KLFOBDFJFJE_GGILMDOCPBG_OFFSET UNITYSDK_OFFSET(0x13C7EF90)
#define KLFOBDFJFJE_GMIKLPAAEDM_OFFSET UNITYSDK_OFFSET(0x13C7C1E0)
#define KLFOBDFJFJE_GNGFHLBHIMC_1_OFFSET UNITYSDK_OFFSET(0x13C81FF0)
#define KLFOBDFJFJE_GNGFHLBHIMC_OFFSET UNITYSDK_OFFSET(0x13C77C60)
#define KLFOBDFJFJE_GNPKECGFCIK_OFFSET UNITYSDK_OFFSET(0x13C84920)
#define KLFOBDFJFJE_HEFFOKOHGFO_OFFSET UNITYSDK_OFFSET(0x13C7F170)
#define KLFOBDFJFJE_HFKLHAJAOAF_OFFSET UNITYSDK_OFFSET(0x13C81C70)
#define KLFOBDFJFJE_HGGAIPDODAE_OFFSET UNITYSDK_OFFSET(0x13C84750)
#define KLFOBDFJFJE_HLBKDLLLHEB_OFFSET UNITYSDK_OFFSET(0x13C77710)
#define KLFOBDFJFJE_HNFJNOOGNBN_OFFSET UNITYSDK_OFFSET(0x13C81DC0)
#define KLFOBDFJFJE_IBJKMMNBLOO_OFFSET UNITYSDK_OFFSET(0x13C7A2B0)
#define KLFOBDFJFJE_ICBDDPCPOBI_OFFSET UNITYSDK_OFFSET(0x13C7BC40)
#define KLFOBDFJFJE_IDJEJPLGDCI_OFFSET UNITYSDK_OFFSET(0x13C7C940)
#define KLFOBDFJFJE_IFHLJGACOHF_OFFSET UNITYSDK_OFFSET(0x13C7D210)
#define KLFOBDFJFJE_IGILAMMNOEC_OFFSET UNITYSDK_OFFSET(0x13C7F060)
#define KLFOBDFJFJE_IJNGHHAFPLA_OFFSET UNITYSDK_OFFSET(0x13C800E0)
#define KLFOBDFJFJE_IKJCCBDEGCN_OFFSET UNITYSDK_OFFSET(0x13C7BA50)
#define KLFOBDFJFJE_IPNLEEBELLD_OFFSET UNITYSDK_OFFSET(0x13C731D0)
#define KLFOBDFJFJE_JCMPNHKJMNG_OFFSET UNITYSDK_OFFSET(0x13C81580)
#define KLFOBDFJFJE_JDKIGJKDPMM_OFFSET UNITYSDK_OFFSET(0x13C7CA10)
#define KLFOBDFJFJE_JEBLCNJGIEH_OFFSET UNITYSDK_OFFSET(0x13C7E810)
#define KLFOBDFJFJE_JIKFPJPIBPO_OFFSET UNITYSDK_OFFSET(0x13C77B60)
#define KLFOBDFJFJE_JPLMPBGGHMN_OFFSET UNITYSDK_OFFSET(0x13C76D60)
#define KLFOBDFJFJE_KFMIEOFEKLJ_OFFSET UNITYSDK_OFFSET(0x13C84770)
#define KLFOBDFJFJE_KICBPINBIJP_OFFSET UNITYSDK_OFFSET(0x13C80920)
#define KLFOBDFJFJE_KNAFLCABJEF_OFFSET UNITYSDK_OFFSET(0x13C73600)
#define KLFOBDFJFJE_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x13C81670)
#define KLFOBDFJFJE_LKMBBLFABOC_OFFSET UNITYSDK_OFFSET(0x13C81940)
#define KLFOBDFJFJE_MBCIMIBMOKN_OFFSET UNITYSDK_OFFSET(0x13C7BBE0)
#define KLFOBDFJFJE_MGHKINEJENJ_OFFSET UNITYSDK_OFFSET(0x13C82150)
#define KLFOBDFJFJE_MGMIOFBPLJJ_OFFSET UNITYSDK_OFFSET(0x13C75C30)
#define KLFOBDFJFJE_MHHHHHLPEGB_1_OFFSET UNITYSDK_OFFSET(0x13C82460)
#define KLFOBDFJFJE_MHHHHHLPEGB_OFFSET UNITYSDK_OFFSET(0x13C783D0)
#define KLFOBDFJFJE_MHOJJIAOPND_OFFSET UNITYSDK_OFFSET(0x13C7E8F0)
#define KLFOBDFJFJE_MIALMIGIDNH_OFFSET UNITYSDK_OFFSET(0x13C80A90)
#define KLFOBDFJFJE_MJGCNGFMJAI_OFFSET UNITYSDK_OFFSET(0x13C7D130)
#define KLFOBDFJFJE_NBCIHGLOHPC_OFFSET UNITYSDK_OFFSET(0x13C73570)
#define KLFOBDFJFJE_NBNGENNAIHG_1_OFFSET UNITYSDK_OFFSET(0x13C84180)
#define KLFOBDFJFJE_NBNGENNAIHG_OFFSET UNITYSDK_OFFSET(0x13C7AB30)
#define KLFOBDFJFJE_NFNMIEFMIHM_OFFSET UNITYSDK_OFFSET(0x13C75F70)
#define KLFOBDFJFJE_NJPNDCJFANF_OFFSET UNITYSDK_OFFSET(0x13C81C60)
#define KLFOBDFJFJE_NMKELLCBDBK_OFFSET UNITYSDK_OFFSET(0x13C80010)
#define KLFOBDFJFJE_OADMLLIJICD_OFFSET UNITYSDK_OFFSET(0x13C7CF70)
#define KLFOBDFJFJE_ODLGNNLJMHB_OFFSET UNITYSDK_OFFSET(0x13C762B0)
#define KLFOBDFJFJE_OEENOPMIINA_OFFSET UNITYSDK_OFFSET(0x13C79C70)
#define KLFOBDFJFJE_OELIPCPHECD_OFFSET UNITYSDK_OFFSET(0x13C81F70)
#define KLFOBDFJFJE_ONDRAG_OFFSET UNITYSDK_OFFSET(0x13C720B0)
#define KLFOBDFJFJE_ONOGOIAKPAO_OFFSET UNITYSDK_OFFSET(0x13C74340)
#define KLFOBDFJFJE_OPDAHLCJEGC_OFFSET UNITYSDK_OFFSET(0x13C77930)
#define KLFOBDFJFJE_PAGKCNBIIEK_OFFSET UNITYSDK_OFFSET(0x13C76850)
#define KLFOBDFJFJE_PCGBHJLFOPO_OFFSET UNITYSDK_OFFSET(0x13C77530)
#define KLFOBDFJFJE_PCOEGLMHDFH_OFFSET UNITYSDK_OFFSET(0x13C74140)
#define KLFOBDFJFJE_PDCNAJPGEIO_OFFSET UNITYSDK_OFFSET(0x13C82B80)
#define KLFOBDFJFJE_PDIBNIPHAFB_OFFSET UNITYSDK_OFFSET(0x13C76D70)
#define KLFOBDFJFJE_PIHMECPNLNO_OFFSET UNITYSDK_OFFSET(0x13C78DF0)
#define KLFOBDFJFJE_PJHLIMLFOHJ_OFFSET UNITYSDK_OFFSET(0x13C81C80)
#define KLFOBDFJFJE_PLCJNBHECGC_OFFSET UNITYSDK_OFFSET(0x13C77010)
#define KLFOBDFJFJE__CTOR_OFFSET UNITYSDK_OFFSET(0x13C710B0)

inline static constexpr unsigned int KLFOBDFJFJE_TypeDefinitionIndex = 58476;

class KLFOBDFJFJE : public ::System::Object
{
public:
	// static const ::System::Single BEHBBOMHDNO; // 0x0
	// static const ::System::Single BBOCPNEDHFF; // 0x0
	// static const ::System::Single JNJPGCJFEPP; // 0x0
	// static const ::System::Single JJGGDMEHOHP; // 0x0
	::MoleMole::Cameras::VCameraTargetGroup* OCKBINEDKEM; // 0x10
	::LGDFBAHLIOA* NJJPIHFGLME; // 0x18
	::Cinemachine::CameraState JKBLDFBGBPK; // 0x20
	::UnityEngine::GameObject* ANPJIMHDMAH; // 0x108
	::MoleMole::Cameras::VCameraCustomTargetGroup* ELHDHAFLMFC; // 0x110
	::UnityEngine::Camera* CEGKFLHNIMN; // 0x118
	::FHKBOKPDCBC* JHGEJLMHNNB; // 0x120
	::COHHJKODKDN* LGHIBODGGCB; // 0x128
	::UnityEngine::GameObject* DDOCHDHBADB; // 0x130
	::UnityEngine::GameObject* DIKOIPFJIJL; // 0x138
	::GCAEBFDGNEN* HFDNEJLGNJK; // 0x140
	::MoleMole::Config::ConfigHollowChessboardCamera* CEJENBBHBBG; // 0x148
	::HJPFEPFPNNN* CNCFMENCMAH; // 0x150
	::MoleMole::Config::ConfigHollowCameraStretchV2* HDKEPEEDPPO; // 0x158
	::UnityEngine::Camera* IEFIGNGGKMK; // 0x160
	::PNKJAAKFDDJ* LHOPCIMKOFH; // 0x168
	::NGNHKLFHDEG* CKIOLKKNBMO; // 0x170
	::System::String* FIDEDMMOGJE; // 0x178
	::MoleMole::UIHollowChessboard3DModelController* EPCNMMGABIP; // 0x180
	::GHOMKECPKCL* JMJFJFLPBCD; // 0x188
	::System::Action_2<::System::Single, ::System::Single>* _OKLHOCKKPKE_k__BackingField; // 0x190
	::System::Action* PIKHOFAFGJM; // 0x198
	::GHICACFMBNP* LOBDJHGKIIF; // 0x1A0
	::DLJLLKJEMEN* LIPEOGFIPBB; // 0x1A8
	::System::Single EEIGIBJHCON; // 0x1B0
	::System::Single NHPNCFBPNBP; // 0x1B4
	::UnityEngine::Vector3 CHIKJDMBALO; // 0x1B8
	::UnityEngine::Quaternion AOHDCICAANJ; // 0x1C4
	::UnityEngine::Vector2 DGOPMMGPJFI; // 0x1D4
	::UnityEngine::Vector3 GOEICPFNIPD; // 0x1DC
	::System::Boolean AEFOEDDFCGO; // 0x1E8
	::System::Boolean KDNOAHNJBKP; // 0x1E9
	::System::Boolean BDOEJHHLOJB; // 0x1EA
	::System::Boolean DCHJHCDMBAD; // 0x1EB
	::UnityEngine::Vector3 BGIEBCMKDAK; // 0x1EC
	::System::Nullable_1<::System::Single> DDDKFNGNMEF; // 0x1F8
	::System::Single _PGCJIHEEHGN_k__BackingField; // 0x200
	::UnityEngine::Vector3 KFBMIDGCAHF; // 0x204
	::UnityEngine::Vector3 FONGDECLAGG; // 0x210
	::UnityEngine::Vector3 NHFOCFDGPAL; // 0x21C
	::UnityEngine::Vector3 KCLLLBENIOO; // 0x228
	::UnityEngine::Vector3 PJILCBKHDFB; // 0x234
	::Foundation::Coroutine::CoroutineHandle BFCFPHHDFNB; // 0x240
	::System::Single AIMKNHINHHL; // 0x244

	::System::Void _ctor(::UnityEngine::Camera* KONLMDBCDCK, ::MoleMole::Config::ConfigHollowChessboardCamera* DFMKILICPFB, ::MoleMole::UIHollowChessboard3DModelController* JOLDOMEIKEF, ::UnityEngine::GameObject* BEKAGNFAFGI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::MoleMole::Config::ConfigHollowChessboardCamera*, ::MoleMole::UIHollowChessboard3DModelController*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + KLFOBDFJFJE__CTOR_OFFSET))(this, KONLMDBCDCK, DFMKILICPFB, JOLDOMEIKEF, BEKAGNFAFGI);
	}

	::System::Void OnDrag(::UnityEngine::Vector2 NHODGOCLALJ, ::System::Single KEPOFHHIMMD, ::System::Single NOCHEGECIHL, ::UnityEngine::Vector2 OHGNGPOPJHE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_ONDRAG_OFFSET))(this, NHODGOCLALJ, KEPOFHHIMMD, NOCHEGECIHL, OHGNGPOPJHE);
	}

	::System::Void AMIMAIBDENM(::GMDAEPNIIEE DKOFFFNEFJC, ::System::String* BAENNHHMHNC, ::System::Action* NHIJMEGJIAM)
	{
		return ((::System::Void(*)(::PVOID, ::GMDAEPNIIEE, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_AMIMAIBDENM_OFFSET))(this, DKOFFFNEFJC, BAENNHHMHNC, NHIJMEGJIAM);
	}

	::System::Void ONOGOIAKPAO(::UnityEngine::Vector3 IACKHFCLPJI, ::System::Action_1<::UnityEngine::Vector3>* CPCOHPHKOGA, ::System::Action* MKLPLBFGGAD, ::System::String* DFKIKOOCMFH, ::System::Boolean JMDJEGHIOHO, ::System::ValueTuple_3<::System::Boolean, ::System::Boolean, ::System::Boolean> KMMHABHJPDH, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> HDCAHNDNKNK, ::Share::CVector2* ALCIJMBGIDO, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> EPGHKPAIMEL, ::MHOIKLKNAKI GJDNILBDJFJ, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* NKIAOJNGGMA, ::GMDAEPNIIEE DKOFFFNEFJC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Action_1<::UnityEngine::Vector3>*, ::System::Action*, ::System::String*, ::System::Boolean, ::System::ValueTuple_3<::System::Boolean, ::System::Boolean, ::System::Boolean>, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::Share::CVector2*, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell>, ::MHOIKLKNAKI, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*, ::GMDAEPNIIEE))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_ONOGOIAKPAO_OFFSET))(this, IACKHFCLPJI, CPCOHPHKOGA, MKLPLBFGGAD, DFKIKOOCMFH, JMDJEGHIOHO, KMMHABHJPDH, HDCAHNDNKNK, ALCIJMBGIDO, EPGHKPAIMEL, GJDNILBDJFJ, NKIAOJNGGMA, DKOFFFNEFJC);
	}

	::UnityEngine::Vector3 MGMIOFBPLJJ(::UnityEngine::Vector3 IACKHFCLPJI, ::MoleMole::Config::ConfigHollowCameraStretchV2* DFMKILICPFB, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> HDCAHNDNKNK, ::Share::CVector2* ALCIJMBGIDO, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> EPGHKPAIMEL)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::Config::ConfigHollowCameraStretchV2*, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::Share::CVector2*, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell>))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_MGMIOFBPLJJ_OFFSET))(this, IACKHFCLPJI, DFMKILICPFB, HDCAHNDNKNK, ALCIJMBGIDO, EPGHKPAIMEL);
	}

	::System::Void DMECNIHILIO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_DMECNIHILIO_OFFSET))(this);
	}

	static ::System::Single PAGKCNBIIEK(::MoleMole::Config::ConfigHollowCameraStretchV2* NNBCKFDEAGC)
	{
		return ((::System::Single(*)(::MoleMole::Config::ConfigHollowCameraStretchV2*))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_PAGKCNBIIEK_OFFSET))(NNBCKFDEAGC);
	}

	::MoleMole::UICameraAtom DIPMMMDCFGG()
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_DIPMMMDCFGG_OFFSET))(this);
	}

	::System::Void JPLMPBGGHMN(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_JPLMPBGGHMN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PDIBNIPHAFB(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_PDIBNIPHAFB_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void PLCJNBHECGC(::System::Single PMNLNNGEIFM, ::System::Single BEKLCLFIDKF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_PLCJNBHECGC_OFFSET))(this, PMNLNNGEIFM, BEKLCLFIDKF);
	}

	::System::Void EMMCLFNINAA(::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_EMMCLFNINAA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HLBKDLLLHEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_HLBKDLLLHEB_OFFSET))(this);
	}

	::UnityEngine::Vector3 OPDAHLCJEGC(::UnityEngine::Vector3 IACKHFCLPJI, ::System::Nullable_1<::System::Single> EIHFKAJIJCB, ::System::Nullable_1<::System::Single> NEBAIPMHMED)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_OPDAHLCJEGC_OFFSET))(this, IACKHFCLPJI, EIHFKAJIJCB, NEBAIPMHMED);
	}

	static ::UnityEngine::Vector3 JIKFPJPIBPO(::UnityEngine::Vector3 IACKHFCLPJI, ::UnityEngine::Vector2 CKDOIENECHB, ::MoleMole::UICameraAtom EPJMPBNAHEO, ::UnityEngine::Camera* KONLMDBCDCK)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector2, ::MoleMole::UICameraAtom, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_JIKFPJPIBPO_OFFSET))(IACKHFCLPJI, CKDOIENECHB, EPJMPBNAHEO, KONLMDBCDCK);
	}

	::System::Boolean GNGFHLBHIMC(::MoleMole::Config::ConfigHollowCameraShake* DFMKILICPFB, ::System::Action* IHLBALNBGKM)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Action*))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_GNGFHLBHIMC_OFFSET))(this, DFMKILICPFB, IHLBALNBGKM);
	}

	::System::Void FGCLFCNNBFI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_FGCLFCNNBFI_OFFSET))(this);
	}

	::System::Boolean MHHHHHLPEGB(::GMDAEPNIIEE DKOFFFNEFJC, ::UnityEngine::Vector3 IACKHFCLPJI, ::System::Action* MKLPLBFGGAD, ::System::String* DFKIKOOCMFH, ::System::Boolean BCBGEBDMIDH, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> HDCAHNDNKNK, ::Share::CVector2* ALCIJMBGIDO, ::System::Boolean OEIKOAMMKOH, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> CJCHMGMHPPF, ::System::Boolean LHFDEPKACLK, ::System::Boolean CKPDHEIDDMH, ::System::Action* ALKCJPKFHNL)
	{
		return ((::System::Boolean(*)(::PVOID, ::GMDAEPNIIEE, ::UnityEngine::Vector3, ::System::Action*, ::System::String*, ::System::Boolean, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::Share::CVector2*, ::System::Boolean, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell>, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_MHHHHHLPEGB_OFFSET))(this, DKOFFFNEFJC, IACKHFCLPJI, MKLPLBFGGAD, DFKIKOOCMFH, BCBGEBDMIDH, HDCAHNDNKNK, ALCIJMBGIDO, OEIKOAMMKOH, CJCHMGMHPPF, LHFDEPKACLK, CKPDHEIDDMH, ALKCJPKFHNL);
	}

	::System::Boolean PCOEGLMHDFH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_PCOEGLMHDFH_OFFSET))(this);
	}

	::UnityEngine::Camera* PIHMECPNLNO()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_PIHMECPNLNO_OFFSET))(this);
	}

	::UnityEngine::Vector3 FINOBBFOJEB(::FBAMLABJMKF* IHHHIDMPIFD, ::Share::CVector2* ALCIJMBGIDO, ::System::Single EAJKEBDFAKI, ::MoleMole::UICameraAtom& BMGBBMGAPLL, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> CJCHMGMHPPF, ::UnityEngine::Vector2 HHIEHNIHHCE)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::FBAMLABJMKF*, ::Share::CVector2*, ::System::Single, ::MoleMole::UICameraAtom&, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell>, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_FINOBBFOJEB_OFFSET))(this, IHHHIDMPIFD, ALCIJMBGIDO, EAJKEBDFAKI, BMGBBMGAPLL, CJCHMGMHPPF, HHIEHNIHHCE);
	}

	::System::Boolean NBNGENNAIHG(::GMDAEPNIIEE DKOFFFNEFJC, ::System::Action* CPCOHPHKOGA, ::System::Action* MKLPLBFGGAD, ::System::Nullable_1<::UnityEngine::Vector3> DMDPLJIMIMM, ::System::Boolean CBDANCGJBIK, ::System::Boolean LHFDEPKACLK)
	{
		return ((::System::Boolean(*)(::PVOID, ::GMDAEPNIIEE, ::System::Action*, ::System::Action*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_NBNGENNAIHG_OFFSET))(this, DKOFFFNEFJC, CPCOHPHKOGA, MKLPLBFGGAD, DMDPLJIMIMM, CBDANCGJBIK, LHFDEPKACLK);
	}

	::System::Void MBCIMIBMOKN(::System::Int32 MONEHIFPAOC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_MBCIMIBMOKN_OFFSET))(this, MONEHIFPAOC);
	}

	::System::Void ICBDDPCPOBI(::UnityEngine::Vector3 DCGJJFGLEPM, ::System::Single OIDHNKDLFDL, ::System::Single MJGNEPALMAJ, ::System::Func_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* ENNNPGCECKB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Func_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_ICBDDPCPOBI_OFFSET))(this, DCGJJFGLEPM, OIDHNKDLFDL, MJGNEPALMAJ, ENNNPGCECKB);
	}

	::System::Single KNAFLCABJEF(::System::Single EJCBEJMGFAJ, ::System::Single EBFCACIEKBC, ::System::Single ECDELIEOAHB, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_KNAFLCABJEF_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC, ECDELIEOAHB, PBCAAADNEPK);
	}

	::System::Single CPFCGHKDJOP(::UnityEngine::Vector2 OHGNGPOPJHE)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_CPFCGHKDJOP_OFFSET))(this, OHGNGPOPJHE);
	}

	::System::Void CAHGLNOAIBJ(::UnityEngine::Vector3 EBHCPFADODA, ::MoleMole::Config::ConfigHollowCameraBounce* DFMKILICPFB, ::System::Action* IHLBALNBGKM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::Config::ConfigHollowCameraBounce*, ::System::Action*))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_CAHGLNOAIBJ_OFFSET))(this, EBHCPFADODA, DFMKILICPFB, IHLBALNBGKM);
	}

	::System::Void JDKIGJKDPMM(::UnityEngine::Vector2 KEFDLPJBGIK, ::UnityEngine::Vector3 DCGJJFGLEPM, ::System::Single OIDHNKDLFDL, ::System::Single MJGNEPALMAJ, ::System::Func_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* ENNNPGCECKB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Func_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_JDKIGJKDPMM_OFFSET))(this, KEFDLPJBGIK, DCGJJFGLEPM, OIDHNKDLFDL, MJGNEPALMAJ, ENNNPGCECKB);
	}

	::System::Void OADMLLIJICD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_OADMLLIJICD_OFFSET))(this);
	}

	::UnityEngine::Rect MJGCNGFMJAI()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_MJGCNGFMJAI_OFFSET))(this);
	}

	::System::Boolean IFHLJGACOHF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_IFHLJGACOHF_OFFSET))(this);
	}

	::UnityEngine::Vector3 GMIKLPAAEDM(::System::Single LPNLLJJLCFM, ::System::Single DFLCCFMNIIB)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_GMIKLPAAEDM_OFFSET))(this, LPNLLJJLCFM, DFLCCFMNIIB);
	}

	::UnityEngine::Vector3 AGGMBMHCLNL(::FBAMLABJMKF* IHHHIDMPIFD, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> HDCAHNDNKNK, ::System::Single EAJKEBDFAKI, ::MoleMole::UICameraAtom& BMGBBMGAPLL, ::UnityEngine::Vector2 HHIEHNIHHCE)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::FBAMLABJMKF*, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::System::Single, ::MoleMole::UICameraAtom&, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_AGGMBMHCLNL_OFFSET))(this, IHHHIDMPIFD, HDCAHNDNKNK, EAJKEBDFAKI, BMGBBMGAPLL, HHIEHNIHHCE);
	}

	::System::Void JEBLCNJGIEH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_JEBLCNJGIEH_OFFSET))(this);
	}

	::System::Void MHOJJIAOPND(::System::Single OLJIGDBINFJ, ::System::Action* LJHJGPGGBOH, ::System::Action* CGAEEDNPJHP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_MHOJJIAOPND_OFFSET))(this, OLJIGDBINFJ, LJHJGPGGBOH, CGAEEDNPJHP);
	}

	::System::Void IGILAMMNOEC(::System::String* BBMMMHNDHKC, ::UnityEngine::Vector3 IACKHFCLPJI, ::System::Action* CPCOHPHKOGA, ::System::Action* MKLPLBFGGAD, ::System::Boolean LHFDEPKACLK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Action*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_IGILAMMNOEC_OFFSET))(this, BBMMMHNDHKC, IACKHFCLPJI, CPCOHPHKOGA, MKLPLBFGGAD, LHFDEPKACLK);
	}

	::UnityEngine::Vector3 AHGECFGJGEJ(::UnityEngine::Vector3 HJFMMCLBMHH, ::UnityEngine::Rect HCKPEJGPCFA)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_AHGECFGJGEJ_OFFSET))(this, HJFMMCLBMHH, HCKPEJGPCFA);
	}

	::UnityEngine::Bounds BBDODDEFGKG(::FCPJLMBAAJD* KPNIHKEKDOC, ::UnityEngine::Vector3& CKPGOKHECCH, ::UnityEngine::Quaternion ONKNFLAKGJM)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::FCPJLMBAAJD*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_BBDODDEFGKG_OFFSET))(this, KPNIHKEKDOC, CKPGOKHECCH, ONKNFLAKGJM);
	}

	::System::Void NMKELLCBDBK(::UnityEngine::Vector3 IACKHFCLPJI, ::System::Boolean BELLOOJADKI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_NMKELLCBDBK_OFFSET))(this, IACKHFCLPJI, BELLOOJADKI);
	}

	::System::Void IJNGHHAFPLA(::UnityEngine::Vector3 IACKHFCLPJI, ::System::Boolean EKFHPCMLHDD, ::System::Boolean IEDDJFNPIEG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_IJNGHHAFPLA_OFFSET))(this, IACKHFCLPJI, EKFHPCMLHDD, IEDDJFNPIEG);
	}

	::System::Void KICBPINBIJP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_KICBPINBIJP_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector3> BIMEDDJBFII(::UnityEngine::Vector3 IACKHFCLPJI, ::System::String* DFKIKOOCMFH, ::System::Boolean JMDJEGHIOHO, ::System::ValueTuple_3<::System::Boolean, ::System::Boolean, ::System::Boolean> KMMHABHJPDH, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> HDCAHNDNKNK, ::Share::CVector2* ALCIJMBGIDO, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> EPGHKPAIMEL)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID, ::UnityEngine::Vector3, ::System::String*, ::System::Boolean, ::System::ValueTuple_3<::System::Boolean, ::System::Boolean, ::System::Boolean>, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::Share::CVector2*, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell>))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_BIMEDDJBFII_OFFSET))(this, IACKHFCLPJI, DFKIKOOCMFH, JMDJEGHIOHO, KMMHABHJPDH, HDCAHNDNKNK, ALCIJMBGIDO, EPGHKPAIMEL);
	}

	::System::Void MIALMIGIDNH(::System::Action_2<::System::Single, ::System::Single>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_MIALMIGIDNH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* FIEPHOPOMFF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_FIEPHOPOMFF_OFFSET))(this);
	}

	::System::Void GEEBMNDBBPH(::GMDAEPNIIEE DKOFFFNEFJC, ::UnityEngine::Vector3 IACKHFCLPJI, ::System::Action* FGJDIENAHFD, ::System::Boolean OIMNDHJAAAE, ::System::Single BJDGKCALDJK, ::UnityEngine::AnimationCurve* CPINBFCKLIL, ::System::Boolean NDGNCJLJCPB)
	{
		return ((::System::Void(*)(::PVOID, ::GMDAEPNIIEE, ::UnityEngine::Vector3, ::System::Action*, ::System::Boolean, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_GEEBMNDBBPH_OFFSET))(this, DKOFFFNEFJC, IACKHFCLPJI, FGJDIENAHFD, OIMNDHJAAAE, BJDGKCALDJK, CPINBFCKLIL, NDGNCJLJCPB);
	}

	::UnityEngine::Rect ELCAFHHEIED(::UnityEngine::Rect EFJIJAKONMI, ::System::Single LIMONMIDKFB, ::System::Single KHPPKNBOGIB)
	{
		return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_ELCAFHHEIED_OFFSET))(this, EFJIJAKONMI, LIMONMIDKFB, KHPPKNBOGIB);
	}

	::System::Void JCMPNHKJMNG(::System::Int32 MONEHIFPAOC, ::System::Func_1<::UnityEngine::Vector3>* DPADKDMPPFE, ::UnityEngine::Quaternion PCKMNHBPJLN, ::System::UInt32 IECOJPMPJMP, ::System::Single NCCDJLDKFGA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_1<::UnityEngine::Vector3>*, ::UnityEngine::Quaternion, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_JCMPNHKJMNG_OFFSET))(this, MONEHIFPAOC, DPADKDMPPFE, PCKMNHBPJLN, IECOJPMPJMP, NCCDJLDKFGA);
	}

	::System::Void NFNMIEFMIHM(::System::Boolean MMAICCNKMED, ::FBAMLABJMKF* COBEJJHGMPO, ::System::Single NCCDJLDKFGA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::FBAMLABJMKF*, ::System::Single))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_NFNMIEFMIHM_OFFSET))(this, MMAICCNKMED, COBEJJHGMPO, NCCDJLDKFGA);
	}

	::System::Void BMGNDJPBONE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_BMGNDJPBONE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IDJEJPLGDCI(::UnityEngine::Vector2 KEFDLPJBGIK, ::UnityEngine::Vector3 DCGJJFGLEPM, ::System::Single OIDHNKDLFDL, ::System::Single MJGNEPALMAJ, ::System::Func_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* ENNNPGCECKB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Func_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_IDJEJPLGDCI_OFFSET))(this, KEFDLPJBGIK, DCGJJFGLEPM, OIDHNKDLFDL, MJGNEPALMAJ, ENNNPGCECKB);
	}

	::System::Void IKJCCBDEGCN(::System::Int32 FKFEGMOBDOJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_IKJCCBDEGCN_OFFSET))(this, FKFEGMOBDOJ);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_LJMIPGJJELP_OFFSET))(this);
	}

	::UnityEngine::Camera* CECKKCOLLKN()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_CECKKCOLLKN_OFFSET))(this);
	}

	::System::Boolean LKMBBLFABOC(::UnityEngine::Vector3 OPMPKFEHOBM)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_LKMBBLFABOC_OFFSET))(this, OPMPKFEHOBM);
	}

	::System::Action_2<::System::Single, ::System::Single>* NJPNDCJFANF()
	{
		return ((::System::Action_2<::System::Single, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_NJPNDCJFANF_OFFSET))(this);
	}

	::System::Boolean HFKLHAJAOAF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_HFKLHAJAOAF_OFFSET))(this);
	}

	::System::Void GGILMDOCPBG(::System::Single GNHOCNHLCCA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_GGILMDOCPBG_OFFSET))(this, GNHOCNHLCCA);
	}

	::UnityEngine::Vector2 PCGBHJLFOPO()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_PCGBHJLFOPO_OFFSET))(this);
	}

	::UnityEngine::Vector3 PJHLIMLFOHJ(::FCPJLMBAAJD* KPNIHKEKDOC, ::System::Single EAJKEBDFAKI, ::MoleMole::UICameraAtom& BMGBBMGAPLL, ::UnityEngine::Vector2 HHIEHNIHHCE)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::FCPJLMBAAJD*, ::System::Single, ::MoleMole::UICameraAtom&, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_PJHLIMLFOHJ_OFFSET))(this, KPNIHKEKDOC, EAJKEBDFAKI, BMGBBMGAPLL, HHIEHNIHHCE);
	}

	::System::Boolean HNFJNOOGNBN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_HNFJNOOGNBN_OFFSET))(this);
	}

	::System::Boolean BNFDOJPKBMO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_BNFDOJPKBMO_OFFSET))(this);
	}

	::System::Void OELIPCPHECD(::UnityEngine::Vector3 IACKHFCLPJI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_OELIPCPHECD_OFFSET))(this, IACKHFCLPJI);
	}

	::System::Void GNGFHLBHIMC_1(::System::String* MCOHLHMKLIP, ::System::Action* IHLBALNBGKM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_GNGFHLBHIMC_1_OFFSET))(this, MCOHLHMKLIP, IHLBALNBGKM);
	}

	::System::Void MGHKINEJENJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_MGHKINEJENJ_OFFSET))(this);
	}

	::System::Void HEFFOKOHGFO(::GMDAEPNIIEE DKOFFFNEFJC, ::UnityEngine::Vector3 IACKHFCLPJI, ::System::Action* MKLPLBFGGAD, ::System::String* DFKIKOOCMFH, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> HDCAHNDNKNK, ::Share::CVector2* ALCIJMBGIDO, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> CJCHMGMHPPF, ::System::Boolean NDGNCJLJCPB, ::System::Boolean LHFDEPKACLK)
	{
		return ((::System::Void(*)(::PVOID, ::GMDAEPNIIEE, ::UnityEngine::Vector3, ::System::Action*, ::System::String*, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::Share::CVector2*, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell>, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_HEFFOKOHGFO_OFFSET))(this, DKOFFFNEFJC, IACKHFCLPJI, MKLPLBFGGAD, DFKIKOOCMFH, HDCAHNDNKNK, ALCIJMBGIDO, CJCHMGMHPPF, NDGNCJLJCPB, LHFDEPKACLK);
	}

	::System::Boolean MHHHHHLPEGB_1(::MoleMole::Config::ConfigHollowCameraStretchV2* DFMKILICPFB, ::UnityEngine::Vector3 IACKHFCLPJI, ::System::Action* MKLPLBFGGAD, ::System::Boolean BCBGEBDMIDH, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> HDCAHNDNKNK, ::Share::CVector2* ALCIJMBGIDO, ::System::Boolean OEIKOAMMKOH, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> CJCHMGMHPPF, ::System::Boolean LHFDEPKACLK)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowCameraStretchV2*, ::UnityEngine::Vector3, ::System::Action*, ::System::Boolean, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::Share::CVector2*, ::System::Boolean, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell>, ::System::Boolean))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_MHHHHHLPEGB_1_OFFSET))(this, DFMKILICPFB, IACKHFCLPJI, MKLPLBFGGAD, BCBGEBDMIDH, HDCAHNDNKNK, ALCIJMBGIDO, OEIKOAMMKOH, CJCHMGMHPPF, LHFDEPKACLK);
	}

	::System::Single PDCNAJPGEIO(::System::Single GANEDLLMPKD, ::UnityEngine::Vector2 OKHOPLJJECG)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_PDCNAJPGEIO_OFFSET))(this, GANEDLLMPKD, OKHOPLJJECG);
	}

	::System::Void FPKAHDEEDCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_FPKAHDEEDCF_OFFSET))(this);
	}

	static ::System::Boolean FMBHNCHBBLD(::System::Single CAOPDAMCNCN)
	{
		return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_FMBHNCHBBLD_OFFSET))(CAOPDAMCNCN);
	}

	::Share::GridDir NBCIHGLOHPC(::UnityEngine::Vector2 NHODGOCLALJ)
	{
		return ((::Share::GridDir(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_NBCIHGLOHPC_OFFSET))(this, NHODGOCLALJ);
	}

	::UnityEngine::Vector3 OEENOPMIINA(::FCPJLMBAAJD* KPNIHKEKDOC, ::MoleMole::UICameraAtom& BMGBBMGAPLL, ::UnityEngine::Bounds& HBGFHGEPCOM)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::FCPJLMBAAJD*, ::MoleMole::UICameraAtom&, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_OEENOPMIINA_OFFSET))(this, KPNIHKEKDOC, BMGBBMGAPLL, HBGFHGEPCOM);
	}

	::UnityEngine::Vector3 IBJKMMNBLOO(::UnityEngine::Vector3 JIBJMDGCNFB, ::System::Single EAJKEBDFAKI, ::MoleMole::UICameraAtom& BMGBBMGAPLL, ::UnityEngine::Bounds& HBGFHGEPCOM, ::UnityEngine::Vector2 HHIEHNIHHCE)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::UICameraAtom&, ::UnityEngine::Bounds&, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_IBJKMMNBLOO_OFFSET))(this, JIBJMDGCNFB, EAJKEBDFAKI, BMGBBMGAPLL, HBGFHGEPCOM, HHIEHNIHHCE);
	}

	::System::Single IPNLEEBELLD(::UnityEngine::AnimationCurve* BKHOGAOODGK, ::UnityEngine::Vector2 OHGNGPOPJHE)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_IPNLEEBELLD_OFFSET))(this, BKHOGAOODGK, OHGNGPOPJHE);
	}

	::System::Void CCCPBAMAEEN(::GMDAEPNIIEE DKOFFFNEFJC, ::UnityEngine::Vector3 IACKHFCLPJI, ::System::Single MDPPNMIPDMP, ::UnityEngine::AnimationCurve* FAJHPKBELMF, ::System::Action* NHIJMEGJIAM, ::System::Boolean MBEMOHDDEMA, ::System::Nullable_1<::System::Single> EIHFKAJIJCB)
	{
		return ((::System::Void(*)(::PVOID, ::GMDAEPNIIEE, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Action*, ::System::Boolean, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_CCCPBAMAEEN_OFFSET))(this, DKOFFFNEFJC, IACKHFCLPJI, MDPPNMIPDMP, FAJHPKBELMF, NHIJMEGJIAM, MBEMOHDDEMA, EIHFKAJIJCB);
	}

	::System::Void AFHKKKHJNBJ(::UnityEngine::Vector3 IACKHFCLPJI, ::System::Boolean EKFHPCMLHDD, ::System::Boolean IEDDJFNPIEG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_AFHKKKHJNBJ_OFFSET))(this, IACKHFCLPJI, EKFHPCMLHDD, IEDDJFNPIEG);
	}

	::System::Void NBNGENNAIHG_1(::GMDAEPNIIEE DKOFFFNEFJC, ::System::Action* CPCOHPHKOGA, ::System::Action* MKLPLBFGGAD, ::UnityEngine::Vector3 IACKHFCLPJI, ::UnityEngine::Vector2 CKDOIENECHB)
	{
		return ((::System::Void(*)(::PVOID, ::GMDAEPNIIEE, ::System::Action*, ::System::Action*, ::UnityEngine::Vector3, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_NBNGENNAIHG_1_OFFSET))(this, DKOFFFNEFJC, CPCOHPHKOGA, MKLPLBFGGAD, IACKHFCLPJI, CKDOIENECHB);
	}

	::System::Single HGGAIPDODAE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_HGGAIPDODAE_OFFSET))(this);
	}

	::UnityEngine::Vector3 ODLGNNLJMHB(::FBAMLABJMKF* IHHHIDMPIFD, ::MoleMole::UICameraAtom DEJPOOKIEJI, ::MoleMole::Config::ConfigHollowCameraStretchV2* NNBCKFDEAGC, ::UnityEngine::Vector3 NMHPLODDIED, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> HDCAHNDNKNK, ::Share::CVector2* ALCIJMBGIDO, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> EPGHKPAIMEL)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::FBAMLABJMKF*, ::MoleMole::UICameraAtom, ::MoleMole::Config::ConfigHollowCameraStretchV2*, ::UnityEngine::Vector3, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::Share::CVector2*, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell>))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_ODLGNNLJMHB_OFFSET))(this, IHHHIDMPIFD, DEJPOOKIEJI, NNBCKFDEAGC, NMHPLODDIED, HDCAHNDNKNK, ALCIJMBGIDO, EPGHKPAIMEL);
	}

	::System::Void AIGEBHJJAGD(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_AIGEBHJJAGD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KFMIEOFEKLJ(::System::Single ALPANKAJAGK, ::System::Single DMIAICJPPDL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_KFMIEOFEKLJ_OFFSET))(this, ALPANKAJAGK, DMIAICJPPDL);
	}

	::System::Void GAHIIJIJOIK(::UnityEngine::Vector3 IACKHFCLPJI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_GAHIIJIJOIK_OFFSET))(this, IACKHFCLPJI);
	}

	::System::Void GNPKECGFCIK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_GNPKECGFCIK_OFFSET))(this);
	}
};
