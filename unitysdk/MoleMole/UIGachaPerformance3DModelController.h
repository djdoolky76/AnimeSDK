#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/MoleMole/UIGachaPerformance3DModelController_CameraInfo.h"
#include "unitysdk/MoleMole/UIGachaPerformance3DModelController_GachaSkipAllType.h"
#include "unitysdk/MoleMole/UIGachaPerformance3DModelController_GachaStageType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AGJFDPBLDDF;
class AIGOEPPCAGH;
class DNGEKLMPBAC;
class GHICACFMBNP;
class KJJCCIDOONA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGachaPerformance3DModelController_CharacterColorCorrectionParams; }
namespace MoleMole { class UIGachaStage3DModelControllerBase; }
namespace MoleMole::Config { class ConfigGachaPerformMisc; }
namespace MoleMole::Config { class ConfigHollowChessboardCamera; }
namespace MoleMole::EffectSimulate { class NapEffectSimulatorMgr; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Rendering::Universal { class GaussianBlur; }

#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ALLOWTONEXTITEM_OFFSET UNITYSDK_OFFSET(0x199A8AF0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_BECDMGAJNOE_OFFSET UNITYSDK_OFFSET(0x199A96C0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_BGJBLDHEMMH_OFFSET UNITYSDK_OFFSET(0x199B3360)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_BHPOAOINEPP_OFFSET UNITYSDK_OFFSET(0x199AA640)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_BKJMDPIMECP_OFFSET UNITYSDK_OFFSET(0x199AEC80)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_BODENBNFNPI_OFFSET UNITYSDK_OFFSET(0x199B3280)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_CHADJBMLAFG_OFFSET UNITYSDK_OFFSET(0x199B3C60)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_DHPPJNPFPOE_OFFSET UNITYSDK_OFFSET(0x199B3EF0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_DIDHDONGNHB_OFFSET UNITYSDK_OFFSET(0x199B2FC0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_EAHCAEPOIAF_OFFSET UNITYSDK_OFFSET(0x199A3C80)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_EOEHOBGONAF_OFFSET UNITYSDK_OFFSET(0x199B2BD0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_EPCCFCPDCJN_OFFSET UNITYSDK_OFFSET(0x199AFD10)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FADEOUTEFFECT_OFFSET UNITYSDK_OFFSET(0x199AF8D0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FAOCBEKNEDJ_OFFSET UNITYSDK_OFFSET(0x199B3370)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FDAOAHAFFGP_OFFSET UNITYSDK_OFFSET(0x199AAD90)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FIRECAMERAEFFECT_OFFSET UNITYSDK_OFFSET(0x199AF700)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FIRESTAGEEFFECT_OFFSET UNITYSDK_OFFSET(0x199AEAB0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FIRETVEFFECT_OFFSET UNITYSDK_OFFSET(0x199AE960)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FMHGJDAILMG_OFFSET UNITYSDK_OFFSET(0x199B2FD0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GDNANNCLNNC_OFFSET UNITYSDK_OFFSET(0x199A37A0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_CAMERATRANSFORM_OFFSET UNITYSDK_OFFSET(0x199B2570)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_CURITEMSTAGECTRLER_OFFSET UNITYSDK_OFFSET(0x199B22F0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISENDINGPERFORMING_OFFSET UNITYSDK_OFFSET(0x199B24D0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISFIRSTITEMPERFORMING_OFFSET UNITYSDK_OFFSET(0x199B11E0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISLASTITEMPERFORMING_OFFSET UNITYSDK_OFFSET(0x199B2520)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISMUTESPEEDUP_OFFSET UNITYSDK_OFFSET(0x199B2310)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_NEXTITEMPROTECTTIMER_OFFSET UNITYSDK_OFFSET(0x199B2300)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_PERFORMEDPHASECOUNT_OFFSET UNITYSDK_OFFSET(0x199B22E0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GJLIEGBEAKL_OFFSET UNITYSDK_OFFSET(0x199AAC60)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GMFLPLDAMIK_OFFSET UNITYSDK_OFFSET(0x199A4450)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLEITEMSTAGERARITYPERFORM_OFFSET UNITYSDK_OFFSET(0x199B0360)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLEITEMSTAGERARITYSPERFORM_OFFSET UNITYSDK_OFFSET(0x199B1250)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLEPLAYTEXTSHOTTIMELINE_OFFSET UNITYSDK_OFFSET(0x199B17C0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLERESETGAUSSIANBLURPARAMS_OFFSET UNITYSDK_OFFSET(0x199B1290)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLETVRARITYSPERFORM_OFFSET UNITYSDK_OFFSET(0x199B00A0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HBKKHJLBKAI_OFFSET UNITYSDK_OFFSET(0x199B46C0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HBMJDAIHJDK_OFFSET UNITYSDK_OFFSET(0x199A6610)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HCMECGHMPHF_OFFSET UNITYSDK_OFFSET(0x199A53B0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HIGPMAHJMDP_OFFSET UNITYSDK_OFFSET(0x199AA770)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HMKLPMLLKAL_OFFSET UNITYSDK_OFFSET(0x199A84B0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HNPOHPINNFB_OFFSET UNITYSDK_OFFSET(0x199B3150)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_IAJICINNMMM_OFFSET UNITYSDK_OFFSET(0x199A5FD0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ICBEALMPJCF_OFFSET UNITYSDK_OFFSET(0x199A5860)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_INBFGBEBAHF_OFFSET UNITYSDK_OFFSET(0x199B3140)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_JFFCKHGFFAO_OFFSET UNITYSDK_OFFSET(0x199ABBE0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_KHBJJFMDEKA_OFFSET UNITYSDK_OFFSET(0x199A5D90)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_KLGBBFMKPKG_OFFSET UNITYSDK_OFFSET(0x199B3130)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x199A6140)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_LDEHIJOMPJF_OFFSET UNITYSDK_OFFSET(0x199AAF30)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_LDJJGHKGKPC_OFFSET UNITYSDK_OFFSET(0x199B2A10)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_MIOJEJKNEAH_OFFSET UNITYSDK_OFFSET(0x199AA520)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_MNCNMMNFBCL_OFFSET UNITYSDK_OFFSET(0x199B36D0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_NHIJECHFDJL_OFFSET UNITYSDK_OFFSET(0x199B3610)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_NHJHJDHFKDP_OFFSET UNITYSDK_OFFSET(0x199B3F00)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ODMCJPLFPOK_OFFSET UNITYSDK_OFFSET(0x199B3790)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_OJMBFOPAGDE_OFFSET UNITYSDK_OFFSET(0x199B3020)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x199A3E60)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONSCREENEFFECTEND_OFFSET UNITYSDK_OFFSET(0x199B1500)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x199A3F10)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x199A4490)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x199A1980)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x199A38B0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_OONEJJONHHL_OFFSET UNITYSDK_OFFSET(0x199B36E0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_OPFMAHEMEDI_OFFSET UNITYSDK_OFFSET(0x199B46D0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PDPMEPIBFDB_OFFSET UNITYSDK_OFFSET(0x199A3730)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYCAMERASHAKE_OFFSET UNITYSDK_OFFSET(0x199A8670)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYCHARACTERLIGHTSTL_OFFSET UNITYSDK_OFFSET(0x199ACF00)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYCLOSEUPTL_OFFSET UNITYSDK_OFFSET(0x199AB2D0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYITEMSHAKE_OFFSET UNITYSDK_OFFSET(0x199B15A0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYNONGACHACAMFOV_OFFSET UNITYSDK_OFFSET(0x199AB210)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSCENELIGHTSTL_OFFSET UNITYSDK_OFFSET(0x199AD4C0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSHOWLIGHTSTL_OFFSET UNITYSDK_OFFSET(0x199ACF80)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSTAGEROTATESCREENEFFECTS_OFFSET UNITYSDK_OFFSET(0x199B1710)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSTAGETEXSHEETBYBLACKBOARD_OFFSET UNITYSDK_OFFSET(0x199A7E90)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSTAGETEXSHEET_OFFSET UNITYSDK_OFFSET(0x199A8020)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYTVEFFECTANIM_OFFSET UNITYSDK_OFFSET(0x199AFE40)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYTVSCENELIGHTSTL_OFFSET UNITYSDK_OFFSET(0x199AE3F0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ROTATECAMERA_OFFSET UNITYSDK_OFFSET(0x199A81B0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ROTATEWEAPON_OFFSET UNITYSDK_OFFSET(0x199A8950)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SETTVMATPROPERTY_OFFSET UNITYSDK_OFFSET(0x199B1600)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SKIPALL_OFFSET UNITYSDK_OFFSET(0x199A8E10)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STARTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x199A3D90)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPCAMERATL_OFFSET UNITYSDK_OFFSET(0x199A9F60)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPEFFECT_OFFSET UNITYSDK_OFFSET(0x199AFC10)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPTVEFFECTANIM_OFFSET UNITYSDK_OFFSET(0x199AFF70)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x199A4F10)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x199B25D0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x199B2890)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x199B2920)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x199B29E0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x199B29F0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x199B2A00)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPerformance3DModelController_TypeDefinitionIndex = 52558;

	class UIGachaPerformance3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::System::Single* StaticGet_StartRotateCamTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIGachaPerformance3DModelController_TypeDefinitionIndex)->GetStaticField(0xDCE0);
		}
		// static const ::System::Int32 KBNJFLIGINK = 0xC; // 0x0
		// static const ::System::Int32 DKOJJJPILPN = 0x8; // 0x0
		// static const ::System::String* LFLBMFHDOJG; // 0x0
		// static const ::System::String* ENDPDLBJGMM; // 0x0
		// static const ::System::String* PCPHCJBHEJB; // 0x0
		::KJJCCIDOONA* _view; // 0x368
		::System::String* CJHAOGEAAIF; // 0x370
		::System::String* OIDNLBKCFAN; // 0x378
		::System::String* HMJGGKLGHEO; // 0x380
		::System::String* EGCKEPDEHGB; // 0x388
		::System::String* LHGGLAHOCDM; // 0x390
		::DNGEKLMPBAC* _player; // 0x398
		::System::Action* IBEFJGNKMEM; // 0x3A0
		::System::Collections::Generic::List_1<::System::Int32>* FMGFLAIHHIH; // 0x3A8
		::System::Boolean CJPDIDKEKNO; // 0x3B0
		::System::Byte _padding0[0x3];
		::System::Int32 HNCGDMDIMAN; // 0x3B4
		::System::Int32 LAFFOEGPDEA; // 0x3B8
		::System::Int32 IOHHEJJDOJK; // 0x3BC
		::MoleMole::Config::ConfigGachaPerformMisc* KDNFAKPDDEK; // 0x3C0
		::AIGOEPPCAGH* KHCCDHPBHKG; // 0x3C8
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::MoleMole::UIGachaStage3DModelControllerBase*>* LEKBHKOIEKF; // 0x3D0
		::MoleMole::UIGachaStage3DModelControllerBase* NIANMDEBLJL; // 0x3D8
		::MoleMole::UIGachaStage3DModelControllerBase* DNJFMPFCJLH; // 0x3E0
		::MoleMole::UIGachaStage3DModelControllerBase* NEADLOPJCJA; // 0x3E8
		::System::Boolean INNDAMEOCHO; // 0x3F0
		::System::Byte _padding1[0x3];
		::System::Single CEGAGOICMKL; // 0x3F4
		::System::Single IONGMPEHAAA; // 0x3F8
		::System::Single BJPOGIPIMCL; // 0x3FC
		::System::Single DPLKOEEJFBC; // 0x400
		::System::Byte _padding2[0x4];
		::UnityEngine::AnimationCurve* LCHFODCGOEB; // 0x408
		::System::Single MAGOJNEINGF; // 0x410
		::System::Single ELJIBMEHMOF; // 0x414
		::System::Single HDJCINEHJMP; // 0x418
		::System::Boolean JKPCJGNPDLH; // 0x41C
		::System::Byte _padding3[0x3];
		::UnityEngine::Vector3 JMILKPHDEIA; // 0x420
		::System::Byte _padding4[0x4];
		::MoleMole::Config::ConfigHollowChessboardCamera* MKJOCJGECKG; // 0x430
		::GHICACFMBNP* LKNOCPCJINI; // 0x438
		::UnityEngine::Camera* OIFDMOPOIAI; // 0x440
		::System::Single _FFGOLAINCAL_k__BackingField; // 0x448
		::System::Boolean FJGGDKGCIBA; // 0x44C
		::System::Byte _padding5[0x3];
		::MoleMole::UIGachaPerformance3DModelController_GachaSkipAllType ADIEDLIMJOG; // 0x450
		::System::Int32 AOJGBIPIAFF; // 0x454
		::System::Boolean HBCPDBOIHCN; // 0x458
		::System::Boolean IAKPPOIMNLN; // 0x459
		::System::Byte _padding6[0x2];
		::System::Single MHEIFBBPHAI; // 0x45C
		::UnityEngine::AnimationCurve* OGGNFNLLAJL; // 0x460
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* CDDDDLECIDG; // 0x468
		::UnityEngine::Playables::PlayableDirector* APEKKKNDBHM; // 0x470
		::MoleMole::UIGachaPerformance3DModelController_CameraInfo PHCENIEHJCO; // 0x478
		::System::Boolean NANGOKEIFMD; // 0x4A0
		::System::Byte _padding7[0x7];
		::Il2CppArray<::UnityEngine::GameObject*>* IABAJIBJFJJ; // 0x4A8
		::Il2CppArray<::UnityEngine::GameObject*>* HCGAKIFBHJH; // 0x4B0
		::Il2CppArray<::UnityEngine::Color>* BAJLDPOGCKI; // 0x4B8
		::UnityEngine::Playables::PlayableDirector* EDCGLHLJEPP; // 0x4C0
		::UnityEngine::Playables::PlayableDirector* OMPOLMDAHAO; // 0x4C8
		::System::Int32 ACAKGPKLINE; // 0x4D0
		::Foundation::Coroutine::CoroutineHandle ADGKDJKNHOE; // 0x4D4
		::UnityEngine::Rendering::Universal::GaussianBlur* GOJBMEEELBD; // 0x4D8
		::MoleMole::UIGachaPerformance3DModelController_CharacterColorCorrectionParams* IPKIFNBBIEJ; // 0x4E0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* AIDNIPPLCJO; // 0x4E8
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::GameObject*>* BOIKDLDBJOI; // 0x4F0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::EffectSimulate::NapEffectSimulatorMgr*>* BIFLIPGLLHC; // 0x4F8
		::MoleMole::UIGachaPerformance3DModelController_GachaStageType CFEKGNBHKHA; // 0x500
		::System::Byte _padding8[0x4];
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Light*, ::System::Boolean>* BNONLENKDOC; // 0x508
		::AGJFDPBLDDF* MPPNJMFPLDP; // 0x510
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>* JCFBMHDEICI; // 0x518
		::UnityEngine::Playables::PlayableDirector* KPMIODFMAJM; // 0x520
		::UnityEngine::Playables::PlayableDirector* MFKPMDLPMFD; // 0x528
		::UnityEngine::Playables::PlayableDirector* ENOFHABCENO; // 0x530
		::System::Collections::Generic::HashSet_1<::System::String*>* KBCIEADABAK; // 0x538
		::System::Collections::Generic::HashSet_1<::System::String*>* JEMGPIPKOGD; // 0x540

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void StartPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STARTPERFORMANCE_OFFSET))(this);
		}

		::System::Void PlayStageTexSheetByBlackboard(::MoleMole::UIGachaPerformance3DModelController_GachaStageType stageType, ::System::Int32 tvIndex, ::System::String* startTexSheetBlackboard, ::System::Boolean isStartTexSheetVideo, ::System::String* loopTexSheetBlackboard, ::System::Boolean isLoopTexSheetVideo, ::System::String* endTexSheetBlackboard, ::System::Boolean isEndTexSheetVideo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::System::Int32, ::System::String*, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSTAGETEXSHEETBYBLACKBOARD_OFFSET))(this, stageType, tvIndex, startTexSheetBlackboard, isStartTexSheetVideo, loopTexSheetBlackboard, isLoopTexSheetVideo, endTexSheetBlackboard, isEndTexSheetVideo);
		}

		::System::Void PlayStageTexSheet(::MoleMole::UIGachaPerformance3DModelController_GachaStageType stageType, ::System::Int32 tvIndex, ::System::String* startTexSheet, ::System::Boolean isStartTexSheetVideo, ::System::String* loopTexSheet, ::System::Boolean isLoopTexSheetVideo, ::System::String* endTexSheet, ::System::Boolean isEndTexSheetVideo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::System::Int32, ::System::String*, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSTAGETEXSHEET_OFFSET))(this, stageType, tvIndex, startTexSheet, isStartTexSheetVideo, loopTexSheet, isLoopTexSheetVideo, endTexSheet, isEndTexSheetVideo);
		}

		::System::Void RotateCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ROTATECAMERA_OFFSET))(this);
		}

		::System::Void PlayCameraShake(::System::String* camShakeKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYCAMERASHAKE_OFFSET))(this, camShakeKey);
		}

		::System::Void RotateWeapon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ROTATEWEAPON_OFFSET))(this);
		}

		::System::Void AllowToNextItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ALLOWTONEXTITEM_OFFSET))(this);
		}

		::System::Void SkipAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SKIPALL_OFFSET))(this);
		}

		::System::Void PlayNonGachaCamFov()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYNONGACHACAMFOV_OFFSET))(this);
		}

		::System::Void PlayCloseupTL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYCLOSEUPTL_OFFSET))(this);
		}

		::System::Void StopCameraTL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPCAMERATL_OFFSET))(this);
		}

		::System::Void PlayCharacterLightsTL(::System::Boolean isOpen, ::System::Single startOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYCHARACTERLIGHTSTL_OFFSET))(this, isOpen, startOffset);
		}

		::System::Void PlayShowLightsTL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSHOWLIGHTSTL_OFFSET))(this);
		}

		::System::Void PlaySceneLightsTL(::System::Boolean isOpen, ::System::Single startOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSCENELIGHTSTL_OFFSET))(this, isOpen, startOffset);
		}

		::System::Void PlayTvSceneLightsTL(::System::Boolean isOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYTVSCENELIGHTSTL_OFFSET))(this, isOpen);
		}

		::System::Void FireTvEffect(::MoleMole::UIGachaPerformance3DModelController_GachaStageType stageType, ::System::Int32 tvIndex, ::System::String* effectPattern)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FIRETVEFFECT_OFFSET))(this, stageType, tvIndex, effectPattern);
		}

		::System::Void FireStageEffect(::System::String* effectPattern)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FIRESTAGEEFFECT_OFFSET))(this, effectPattern);
		}

		::System::Void FireCameraEffect(::System::String* effectPattern)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FIRECAMERAEFFECT_OFFSET))(this, effectPattern);
		}

		::System::Void FadeoutEffect(::System::String* effectPattern)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FADEOUTEFFECT_OFFSET))(this, effectPattern);
		}

		::System::Void StopEffect(::System::String* effectPattern)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPEFFECT_OFFSET))(this, effectPattern);
		}

		::System::Void PlayTvEffectAnim(::MoleMole::UIGachaPerformance3DModelController_GachaStageType stageType, ::System::Int32 tvIndex, ::System::String* animClipName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYTVEFFECTANIM_OFFSET))(this, stageType, tvIndex, animClipName);
		}

		::System::Void StopTvEffectAnim(::MoleMole::UIGachaPerformance3DModelController_GachaStageType stageType, ::System::Int32 tvIndex, ::System::String* animClipName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_STOPTVEFFECTANIM_OFFSET))(this, stageType, tvIndex, animClipName);
		}

		::System::Void HandleTvRaritySPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLETVRARITYSPERFORM_OFFSET))(this);
		}

		::System::Void HandleItemStageRarityPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLEITEMSTAGERARITYPERFORM_OFFSET))(this);
		}

		::System::Void HandleItemStageRaritySPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLEITEMSTAGERARITYSPERFORM_OFFSET))(this);
		}

		::System::Void HandleResetGaussianBlurParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLERESETGAUSSIANBLURPARAMS_OFFSET))(this);
		}

		::System::Void OnScreenEffectEnd(::MoleMole::Config::ScreenEffectType screenEffType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ONSCREENEFFECTEND_OFFSET))(this, screenEffType);
		}

		::System::Void PlayItemShake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYITEMSHAKE_OFFSET))(this);
		}

		::System::Void SetTvMatProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_SETTVMATPROPERTY_OFFSET))(this);
		}

		::System::Void PlayStageRotateScreenEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PLAYSTAGEROTATESCREENEFFECTS_OFFSET))(this);
		}

		::System::Void HandlePlayTextShotTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HANDLEPLAYTEXTSHOTTIMELINE_OFFSET))(this);
		}

		::System::Int32 get_PerformedPhaseCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_PERFORMEDPHASECOUNT_OFFSET))(this);
		}

		::MoleMole::UIGachaStage3DModelControllerBase* get_CurItemStageCtrler()
		{
			return ((::MoleMole::UIGachaStage3DModelControllerBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_CURITEMSTAGECTRLER_OFFSET))(this);
		}

		::System::Single get_NextItemProtectTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_NEXTITEMPROTECTTIMER_OFFSET))(this);
		}

		::System::Boolean get_IsMuteSpeedUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISMUTESPEEDUP_OFFSET))(this);
		}

		::System::Boolean get_IsEndingPerforming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISENDINGPERFORMING_OFFSET))(this);
		}

		::System::Boolean get_IsFirstItemPerforming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISFIRSTITEMPERFORMING_OFFSET))(this);
		}

		::System::Boolean get_IsLastItemPerforming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_ISLASTITEMPERFORMING_OFFSET))(this);
		}

		::UnityEngine::Transform* get_CameraTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GET_CAMERATRANSFORM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void ICBEALMPJCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ICBEALMPJCF_OFFSET))(this);
		}

		::System::Void LDJJGHKGKPC(::System::Int32 OIKFFGKDHME)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_LDJJGHKGKPC_OFFSET))(this, OIKFFGKDHME);
		}

		::System::Void EOEHOBGONAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_EOEHOBGONAF_OFFSET))(this);
		}

		::MoleMole::Config::ConfigGachaPerformMisc* PDPMEPIBFDB()
		{
			return ((::MoleMole::Config::ConfigGachaPerformMisc*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_PDPMEPIBFDB_OFFSET))(this);
		}

		::System::Boolean DIDHDONGNHB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_DIDHDONGNHB_OFFSET))(this);
		}

		::System::Boolean GDNANNCLNNC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GDNANNCLNNC_OFFSET))(this);
		}

		::System::Boolean FMHGJDAILMG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FMHGJDAILMG_OFFSET))(this);
		}

		::System::Void BECDMGAJNOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_BECDMGAJNOE_OFFSET))(this);
		}

		::System::Void IAJICINNMMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_IAJICINNMMM_OFFSET))(this);
		}

		::System::Void OJMBFOPAGDE(::UnityEngine::GameObject* FECMPPCMOLK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_OJMBFOPAGDE_OFFSET))(this, FECMPPCMOLK);
		}

		::System::Void HIGPMAHJMDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HIGPMAHJMDP_OFFSET))(this);
		}

		::System::Void KLGBBFMKPKG(::MoleMole::Config::ConfigGachaPerformMisc* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformMisc*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_KLGBBFMKPKG_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void INBFGBEBAHF(::UnityEngine::Playables::PlayableDirector* KIPCDJGNKEP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_INBFGBEBAHF_OFFSET))(this, KIPCDJGNKEP);
		}

		::System::Void BODENBNFNPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_BODENBNFNPI_OFFSET))(this);
		}

		::System::Boolean EAHCAEPOIAF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_EAHCAEPOIAF_OFFSET))(this);
		}

		::System::Void BGJBLDHEMMH(::UnityEngine::Playables::PlayableDirector* GALAOBFOBFA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_BGJBLDHEMMH_OFFSET))(this, GALAOBFOBFA);
		}

		::System::Void JFFCKHGFFAO(::System::String* PFJCAEHJCNF, ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* PIGEGPBINIB)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_JFFCKHGFFAO_OFFSET))(this, PFJCAEHJCNF, PIGEGPBINIB);
		}

		::System::Single KHBJJFMDEKA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_KHBJJFMDEKA_OFFSET))(this);
		}

		::System::Void BHPOAOINEPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_BHPOAOINEPP_OFFSET))(this);
		}

		::System::Void FAOCBEKNEDJ(::System::Single CAOPDAMCNCN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FAOCBEKNEDJ_OFFSET))(this, CAOPDAMCNCN);
		}

		::System::Void EPCCFCPDCJN(::UnityEngine::GameObject* FECMPPCMOLK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_EPCCFCPDCJN_OFFSET))(this, FECMPPCMOLK);
		}

		::System::Single NHIJECHFDJL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_NHIJECHFDJL_OFFSET))(this);
		}

		::System::Void LDEHIJOMPJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_LDEHIJOMPJF_OFFSET))(this);
		}

		::System::Void BKJMDPIMECP(::System::String* IDOPOGOMOBE, ::UnityEngine::Transform* JNLBPMKIFNK, ::System::Boolean ODECEIMEHEE)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_BKJMDPIMECP_OFFSET))(this, IDOPOGOMOBE, JNLBPMKIFNK, ODECEIMEHEE);
		}

		::System::Void MNCNMMNFBCL(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_MNCNMMNFBCL_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void OONEJJONHHL(::UnityEngine::Playables::PlayableDirector* GALAOBFOBFA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_OONEJJONHHL_OFFSET))(this, GALAOBFOBFA);
		}

		::System::Void GJLIEGBEAKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GJLIEGBEAKL_OFFSET))(this);
		}

		::System::String* GMFLPLDAMIK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_GMFLPLDAMIK_OFFSET))(this);
		}

		::System::Void HCMECGHMPHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HCMECGHMPHF_OFFSET))(this);
		}

		::System::Void CHADJBMLAFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_CHADJBMLAFG_OFFSET))(this);
		}

		::System::Void FDAOAHAFFGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_FDAOAHAFFGP_OFFSET))(this);
		}

		::System::Void HNPOHPINNFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HNPOHPINNFB_OFFSET))(this);
		}

		::System::Void DHPPJNPFPOE(::UnityEngine::Playables::PlayableDirector* GALAOBFOBFA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_DHPPJNPFPOE_OFFSET))(this, GALAOBFOBFA);
		}

		::System::Void NHJHJDHFKDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_NHJHJDHFKDP_OFFSET))(this);
		}

		::System::Int32 MIOJEJKNEAH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_MIOJEJKNEAH_OFFSET))(this);
		}

		::System::Void HMKLPMLLKAL(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HMKLPMLLKAL_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void HBKKHJLBKAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HBKKHJLBKAI_OFFSET))(this);
		}

		::System::Void HBMJDAIHJDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_HBMJDAIHJDK_OFFSET))(this);
		}

		::System::Void ODMCJPLFPOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_ODMCJPLFPOK_OFFSET))(this);
		}

		::System::Void OPFMAHEMEDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_OPFMAHEMEDI_OFFSET))(this);
		}
	};
}
