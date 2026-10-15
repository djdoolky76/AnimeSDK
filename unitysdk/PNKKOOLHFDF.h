#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDILEMALGNC.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class AJDAJPHJBME;
class CJADIOHCKFH;
class EHHDNOGALBJ;
class FCJECGJKGBA;
class FPBJFMDMJIO;
class GNPKFEMELOI;
class JMHEMBCIHCE;
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFreelook3rdConfigData; }
namespace RPG::Client { class CameraLookAtConfigData; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class Freelook3rdModuleConfig; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::GameCore { class CameraLookAtScreenRange; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Transform; }

#define PNKKOOLHFDF_ADAFGPEACAG_OFFSET UNITYSDK_OFFSET(0xC33C8A0)
#define PNKKOOLHFDF_AKNPHHGECMM_OFFSET UNITYSDK_OFFSET(0xC344790)
#define PNKKOOLHFDF_BKHGBMHFGDG_OFFSET UNITYSDK_OFFSET(0xC33C820)
#define PNKKOOLHFDF_CDADBHNPHAE_OFFSET UNITYSDK_OFFSET(0xC340560)
#define PNKKOOLHFDF_CFPHIMJFEMF_OFFSET UNITYSDK_OFFSET(0xC341790)
#define PNKKOOLHFDF_CLMJFEJIBBE_OFFSET UNITYSDK_OFFSET(0xC33F1C0)
#define PNKKOOLHFDF_CNKICKFHMND_OFFSET UNITYSDK_OFFSET(0xC3379F0)
#define PNKKOOLHFDF_CTOR_1_OFFSET UNITYSDK_OFFSET(0xC337510)
#define PNKKOOLHFDF_CTOR_OFFSET UNITYSDK_OFFSET(0xC337480)
#define PNKKOOLHFDF_ECGKOKJGAOC_OFFSET UNITYSDK_OFFSET(0xC3432D0)
#define PNKKOOLHFDF_EDPHKKIEMLB_OFFSET UNITYSDK_OFFSET(0xC344610)
#define PNKKOOLHFDF_EJEILNIJOEF_OFFSET UNITYSDK_OFFSET(0xC33C4A0)
#define PNKKOOLHFDF_EODGLAPLNAD_OFFSET UNITYSDK_OFFSET(0xC3427F0)
#define PNKKOOLHFDF_FELCIEINEAI_OFFSET UNITYSDK_OFFSET(0xC344540)
#define PNKKOOLHFDF_FJGAJHFDADC_OFFSET UNITYSDK_OFFSET(0xC3433A0)
#define PNKKOOLHFDF_FMLAODJELFJ_OFFSET UNITYSDK_OFFSET(0xC33BCF0)
#define PNKKOOLHFDF_HGHNAHEPDMI_OFFSET UNITYSDK_OFFSET(0xC3446B0)
#define PNKKOOLHFDF_HHOAEKNLFLK_OFFSET UNITYSDK_OFFSET(0xC344740)
#define PNKKOOLHFDF_HLGGCFOBELP_OFFSET UNITYSDK_OFFSET(0xC33F0F0)
#define PNKKOOLHFDF_HLJIKJNLBIF_OFFSET UNITYSDK_OFFSET(0xC342770)
#define PNKKOOLHFDF_HMCHKMFMDIF_OFFSET UNITYSDK_OFFSET(0xC340F90)
#define PNKKOOLHFDF_HONGPFJAFLC_OFFSET UNITYSDK_OFFSET(0xC342E20)
#define PNKKOOLHFDF_IMCAHBGOIDC_OFFSET UNITYSDK_OFFSET(0xC33DD40)
#define PNKKOOLHFDF_IMIMNMPLFNC_OFFSET UNITYSDK_OFFSET(0xC343550)
#define PNKKOOLHFDF_JADCIAHCPHE_OFFSET UNITYSDK_OFFSET(0xC341870)
#define PNKKOOLHFDF_JAGCGLBKAAG_OFFSET UNITYSDK_OFFSET(0xC343A50)
#define PNKKOOLHFDF_JBIKAAECIEL_OFFSET UNITYSDK_OFFSET(0xC33B300)
#define PNKKOOLHFDF_JIFGFGKKHNN_OFFSET UNITYSDK_OFFSET(0xC33F810)
#define PNKKOOLHFDF_KFOPKEFOHFE_OFFSET UNITYSDK_OFFSET(0xC337E70)
#define PNKKOOLHFDF_KOKHGIFGKGK_OFFSET UNITYSDK_OFFSET(0xC33B6D0)
#define PNKKOOLHFDF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC3376E0)
#define PNKKOOLHFDF_LDKOKDMDDCG_OFFSET UNITYSDK_OFFSET(0xC342B50)
#define PNKKOOLHFDF_LEJFJDLKIEO_OFFSET UNITYSDK_OFFSET(0xC340310)
#define PNKKOOLHFDF_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xC337EC0)
#define PNKKOOLHFDF_LOLOJGFFCIB_OFFSET UNITYSDK_OFFSET(0xC3438A0)
#define PNKKOOLHFDF_MIHOKDAFDPN_OFFSET UNITYSDK_OFFSET(0xC341090)
#define PNKKOOLHFDF_MLPONGKIFJG_OFFSET UNITYSDK_OFFSET(0xC33BC70)
#define PNKKOOLHFDF_MPADPBCEKGD_OFFSET UNITYSDK_OFFSET(0xC33C680)
#define PNKKOOLHFDF_MPAHAADDJOC_OFFSET UNITYSDK_OFFSET(0xC33E450)
#define PNKKOOLHFDF_NBJDLAELNIG_OFFSET UNITYSDK_OFFSET(0xC3439F0)
#define PNKKOOLHFDF_NEBAOBGPAAM_OFFSET UNITYSDK_OFFSET(0xC33D6D0)
#define PNKKOOLHFDF_NEFNNCJFFDH_OFFSET UNITYSDK_OFFSET(0xC340440)
#define PNKKOOLHFDF_NHEDINBLOIH_OFFSET UNITYSDK_OFFSET(0xC337920)
#define PNKKOOLHFDF_NJDKMGJAEAK_OFFSET UNITYSDK_OFFSET(0xC33CE50)
#define PNKKOOLHFDF_NLIKFLFCGLJ_OFFSET UNITYSDK_OFFSET(0xC33C3B0)
#define PNKKOOLHFDF_NLLENJINOFI_OFFSET UNITYSDK_OFFSET(0xC340610)
#define PNKKOOLHFDF_NMPNLIPJFBC_OFFSET UNITYSDK_OFFSET(0xC33F8F0)
#define PNKKOOLHFDF_NNKGGHEPLCD_OFFSET UNITYSDK_OFFSET(0xC33D790)
#define PNKKOOLHFDF_OBPKIEGGBDF_OFFSET UNITYSDK_OFFSET(0xC33F590)
#define PNKKOOLHFDF_OIIGDCMFMAB_OFFSET UNITYSDK_OFFSET(0xC33E9C0)
#define PNKKOOLHFDF_OMIGBBMKANP_OFFSET UNITYSDK_OFFSET(0xC33DE90)
#define PNKKOOLHFDF_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xC33B8E0)

inline static constexpr unsigned int PNKKOOLHFDF_TypeDefinitionIndex = 69624;

	class PNKKOOLHFDF : public ::MDILEMALGNC
	{
	public:
		::FPBJFMDMJIO* LNGLOECCBNN; // 0x38
		::RPG::GameCore::GameEntity* OHNGADEAIID; // 0x40
		::RPG::Client::CameraBlendCurve* PEMGKBNOBIN; // 0x48
		::JMHEMBCIHCE* INEBCEELFPO; // 0x50
		::EHHDNOGALBJ* HGJOPLMHPDJ; // 0x58
		::RPG::Client::Freelook3rdModuleConfig* HEGMHCKPMHE; // 0x60
		::RPG::Client::CameraLookAtConfigData* CPFMMJAJHKI; // 0x68
		::RPG::Client::CameraFreelook3rdConfigData* BNEIMCEOFCN; // 0x70
		::FCJECGJKGBA* AMEHGFFDFJH; // 0x78
		::AJDAJPHJBME* EMHKDLAOMHI; // 0x80
		::Il2CppArray<::UnityEngine::RaycastHit>* JHHEFEJOKLK; // 0x88
		::AJDAJPHJBME* ABGBLPMCJAL; // 0x90
		::System::Single COPDHEOMBCJ; // 0x98
		::System::Single POGEKPMFGDM; // 0x9C
		::System::Single NLPLGIIJOAH; // 0xA0
		::UnityEngine::Vector2 OCAACIPNMPG; // 0xA4
		::System::Nullable_1<::UnityEngine::Vector3> ICLEIANBBDB; // 0xAC
		::System::Byte _padding0[0x8];
		::System::Nullable_1<::UnityEngine::Vector3> JENNOFNOJKP; // 0xBC
		::System::Byte _padding1[0x8];
		::System::Single ANNDLHEEEPN; // 0xCC
		::System::Nullable_1<::UnityEngine::Vector3> FFCMIHDOPMG; // 0xD0
		::System::Byte _padding2[0x8];
		::System::Boolean HDJOGGDMCIO; // 0xE0
		::System::Boolean KHCIHBFOGLL; // 0xE1
		::System::Boolean LGPHALNBIOK; // 0xE2
		::System::Boolean GMJHAFPLHJK; // 0xE3
		::System::Nullable_1<::System::Single> OHIBIHBOLCD; // 0xE4
		::System::Nullable_1<::UnityEngine::Vector3> MPELHKKHEKK; // 0xEC
		::System::Byte _padding3[0x8];
		::System::Boolean KPFHGALMEEC; // 0xFC
		::System::Boolean AMNGDPBKHGE; // 0xFD
		::System::Byte _padding4[0x2];
		::System::Nullable_1<::System::Single> HBKLMHBGDED; // 0x100
		::System::Boolean OHNOJCJJKCI; // 0x108
		::System::Boolean MNKCNHKKFNF; // 0x109
		::System::Boolean HHLNFCDJCNN; // 0x10A
		::System::Boolean MKNAHFDFLKG; // 0x10B
		::UnityEngine::Vector3 IFCIKDIAEJI; // 0x10C
		::System::Single BBPBALFKOHJ; // 0x118
		::System::Single AIKGBIGEAHA; // 0x11C
		::UnityEngine::Vector3 FPJBNBPODIM; // 0x120
		::UnityEngine::Vector2 BAFBMONEKFK; // 0x12C
		::System::Nullable_1<::UnityEngine::Vector3> LENOGLFFFEH; // 0x134
		::System::Byte _padding5[0x8];
		::System::Nullable_1<::UnityEngine::Vector3> IDCDAFOGKOM; // 0x144
		::System::Byte _padding6[0x8];
		::System::Single HKJAMEOACDH; // 0x154
		::System::Nullable_1<::UnityEngine::Vector3> KJGLNGABFDD; // 0x158
		::System::Byte _padding7[0x8];
		::System::Nullable_1<::UnityEngine::Vector3> AMOLNHCPMPM; // 0x168
		::System::Byte _padding8[0x8];
		::System::Single KGDNDAABJCB; // 0x178
		::UnityEngine::Vector3 HLIPOOBEBPF; // 0x17C
		::System::Nullable_1<::System::Single> HKHNIHJLCKL; // 0x188
		::System::Boolean OKCOFFAODLP; // 0x190
		::System::Boolean KDDOHHAAMMM; // 0x191
		::System::Boolean JFPBBHGKGCE; // 0x192
		::System::Boolean FPENLPOEIEK; // 0x193
		::System::Single KJBHJKNKNIJ; // 0x194
		// static const ::System::Object CMJFBNNPGJM; // 0x0
		// static const ::System::Object MFLFAEKOJIH; // 0x0
		// static const ::System::Object MFKPKJILHOJ; // 0x0
		// static const ::System::Object JOBMJJFCLIP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean NHEDINBLOIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_NHEDINBLOIH_OFFSET))(this);
		}

		::System::Void KFOPKEFOHFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_KFOPKEFOHFE_OFFSET))(this);
		}

		::System::Void JBIKAAECIEL(::CJADIOHCKFH* a1, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CJADIOHCKFH*, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>*))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_JBIKAAECIEL_OFFSET))(this, a1, a2);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void FMLAODJELFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_FMLAODJELFJ_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_LJBCDJNNBJH_OFFSET))(this);
		}

		::System::Void LEJFJDLKIEO(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_LEJFJDLKIEO_OFFSET))(this, a1, a2);
		}

		::System::Void NEFNNCJFFDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_NEFNNCJFFDH_OFFSET))(this);
		}

		::System::Void CDADBHNPHAE(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_CDADBHNPHAE_OFFSET))(this, a1, a2);
		}

		::System::Void CNKICKFHMND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_CNKICKFHMND_OFFSET))(this);
		}

		::System::Void KOKHGIFGKGK(::AJDAJPHJBME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJDAJPHJBME*))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_KOKHGIFGKGK_OFFSET))(this, a1);
		}

		::System::Void NLIKFLFCGLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_NLIKFLFCGLJ_OFFSET))(this);
		}

		::RPG::Client::CameraFreelook3rdConfigData* BKHGBMHFGDG()
		{
			return ((::RPG::Client::CameraFreelook3rdConfigData*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_BKHGBMHFGDG_OFFSET))(this);
		}

		::System::Void ADAFGPEACAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_ADAFGPEACAG_OFFSET))(this);
		}

		::System::Void NJDKMGJAEAK(::RPG::Client::CameraFreelook3rdConfigData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraFreelook3rdConfigData*))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_NJDKMGJAEAK_OFFSET))(this, a1);
		}

		::System::Void NEBAOBGPAAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_NEBAOBGPAAM_OFFSET))(this);
		}

		::System::Void NNKGGHEPLCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_NNKGGHEPLCD_OFFSET))(this);
		}

		::System::Void HMCHKMFMDIF(::RPG::Client::CameraFreelook3rdConfigData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraFreelook3rdConfigData*))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_HMCHKMFMDIF_OFFSET))(this, a1);
		}

		::System::Void MPADPBCEKGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_MPADPBCEKGD_OFFSET))(this);
		}

		::System::Void IMCAHBGOIDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_IMCAHBGOIDC_OFFSET))(this);
		}

		::System::Void JIFGFGKKHNN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_JIFGFGKKHNN_OFFSET))(this, a1, a2);
		}

		::System::Void CLMJFEJIBBE(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_CLMJFEJIBBE_OFFSET))(this, a1, a2);
		}

		::System::Void HLGGCFOBELP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_HLGGCFOBELP_OFFSET))(this);
		}

		::System::Void MIHOKDAFDPN(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_MIHOKDAFDPN_OFFSET))(this, a1, a2);
		}

		::System::Void OMIGBBMKANP(::GNPKFEMELOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNPKFEMELOI*))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_OMIGBBMKANP_OFFSET))(this, a1);
		}

		::System::Void MPAHAADDJOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_MPAHAADDJOC_OFFSET))(this);
		}

		::System::Void CFPHIMJFEMF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_CFPHIMJFEMF_OFFSET))(this, a1);
		}

		::System::Void JADCIAHCPHE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_JADCIAHCPHE_OFFSET))(this, a1);
		}

		::System::Void NMPNLIPJFBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_NMPNLIPJFBC_OFFSET))(this);
		}

		::System::Void ECGKOKJGAOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_ECGKOKJGAOC_OFFSET))(this);
		}

		::System::Void HONGPFJAFLC(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_HONGPFJAFLC_OFFSET))(this, a1);
		}

		::System::Void LDKOKDMDDCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_LDKOKDMDDCG_OFFSET))(this);
		}

		::System::Void MLPONGKIFJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_MLPONGKIFJG_OFFSET))(this);
		}

		::RPG::Client::CameraLookAtConfigData* HLJIKJNLBIF()
		{
			return ((::RPG::Client::CameraLookAtConfigData*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_HLJIKJNLBIF_OFFSET))(this);
		}

		::System::Boolean EODGLAPLNAD(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_EODGLAPLNAD_OFFSET))(this, a1, a2);
		}

		::System::Boolean FJGAJHFDADC(::RPG::GameCore::CameraLookAtScreenRange* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CameraLookAtScreenRange*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_FJGAJHFDADC_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 IMIMNMPLFNC(::RPG::GameCore::CameraLookAtScreenRange* a1, ::RPG::GameCore::CameraLookAtScreenRange* a2, ::RPG::Client::CameraBlendCurve* a3, ::UnityEngine::Vector3 a4)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::GameCore::CameraLookAtScreenRange*, ::RPG::GameCore::CameraLookAtScreenRange*, ::RPG::Client::CameraBlendCurve*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_IMIMNMPLFNC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NLLENJINOFI(::AJDAJPHJBME* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RPG::Client::CameraBlendCurve* a4, ::System::Single a5, ::System::Boolean a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::AJDAJPHJBME*, ::UnityEngine::Vector3, ::System::Single, ::RPG::Client::CameraBlendCurve*, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_NLLENJINOFI_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void LOLOJGFFCIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_LOLOJGFFCIB_OFFSET))(this);
		}

		::System::Void OIIGDCMFMAB(::System::Boolean a1, ::System::Boolean a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_OIIGDCMFMAB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EDPHKKIEMLB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_EDPHKKIEMLB_OFFSET))(this, a1);
		}

		::System::Void HGHNAHEPDMI(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_HGHNAHEPDMI_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Vector3 OBPKIEGGBDF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_OBPKIEGGBDF_OFFSET))(a1, a2, a3);
		}

		::System::Void NBJDLAELNIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_NBJDLAELNIG_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> JAGCGLBKAAG(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::LayerMask a5)
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_JAGCGLBKAAG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Single FELCIEINEAI(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_FELCIEINEAI_OFFSET))(this, a1);
		}

		::System::Void HHOAEKNLFLK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_HHOAEKNLFLK_OFFSET))(this, a1);
		}

		::System::Void EJEILNIJOEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_EJEILNIJOEF_OFFSET))(this);
		}

		::UnityEngine::Vector3 AKNPHHGECMM(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + PNKKOOLHFDF_AKNPHHGECMM_OFFSET))(this, a1, a2, a3);
		}

	};
