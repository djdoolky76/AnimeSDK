#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/UIGachaStage3DModelControllerBase_UITextInfo.h"

class AIGOEPPCAGH;
class DNGEKLMPBAC;
class GHICACFMBNP;
class GIOPLKCJHMP;
class NJNMJAPABKB;
class TextureFrameScreenPlayData;
class VideoScreenPlayData;
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityTimeSlow; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_BGPMINKEGOC_OFFSET UNITYSDK_OFFSET(0x1803B9F0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_BHLHMINHIKM_OFFSET UNITYSDK_OFFSET(0x18033630)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_BOADICFPIHE_OFFSET UNITYSDK_OFFSET(0x1803ACE0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_CHECKRARITYTV_OFFSET UNITYSDK_OFFSET(0x1803A050)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_DGKFHJMJNHG_OFFSET UNITYSDK_OFFSET(0x18033740)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_EAPBJFMMIMG_OFFSET UNITYSDK_OFFSET(0x1803BA70)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_EGJLIDAGLAK_OFFSET UNITYSDK_OFFSET(0x1802F9A0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_EIDKHDPOHDD_OFFSET UNITYSDK_OFFSET(0x18037620)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_FAOCBEKNEDJ_OFFSET UNITYSDK_OFFSET(0x1803AF70)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_FIRETVEFFECT_OFFSET UNITYSDK_OFFSET(0x18038AC0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_FPNOIMGJBND_OFFSET UNITYSDK_OFFSET(0x1802FA40)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GBAHFEMFGMJ_OFFSET UNITYSDK_OFFSET(0x1803B400)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GETCURPLAYERCONDITION_OFFSET UNITYSDK_OFFSET(0x18037200)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GETLIGHTCUTSCENEATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x18035520)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GETRARITYEFFDELAY_OFFSET UNITYSDK_OFFSET(0x18039150)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GETUITEXTMOVEDISTANE_OFFSET UNITYSDK_OFFSET(0x18035430)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_ANIMACHECKMODE_OFFSET UNITYSDK_OFFSET(0x18035010)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_BLUEPRINT_NAME_OFFSET UNITYSDK_OFFSET(0x1803A640)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_CURCHARACTERLIGHTTIMELINEGO_OFFSET UNITYSDK_OFFSET(0x18038940)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_CURMODEL_OFFSET UNITYSDK_OFFSET(0x1803A660)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_CURTIMESCALE_OFFSET UNITYSDK_OFFSET(0x18033C80)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1803A670)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_ISANIMATORSPEEDCTRLED_OFFSET UNITYSDK_OFFSET(0x18033A60)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1803A650)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_RARITY_TV_INDEX_OFFSET UNITYSDK_OFFSET(0x1803A630)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_TOTAL_TV_NUM_OFFSET UNITYSDK_OFFSET(0x1803A620)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GFDOPOKEFME_OFFSET UNITYSDK_OFFSET(0x18033EC0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_HANDLEONOPEN_OFFSET UNITYSDK_OFFSET(0x1802FC40)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_HANDLEUPDATE_OFFSET UNITYSDK_OFFSET(0x1802F9F0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_HDJIPLACJIK_OFFSET UNITYSDK_OFFSET(0x1803BA00)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_HJJCHNHHDKK_OFFSET UNITYSDK_OFFSET(0x1803A150)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_IAKOMONHLNM_1_OFFSET UNITYSDK_OFFSET(0x18035C50)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_IAKOMONHLNM_OFFSET UNITYSDK_OFFSET(0x18035B30)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_IIJNJFICLGE_OFFSET UNITYSDK_OFFSET(0x18037B50)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ISVIDEOTVINDEX_OFFSET UNITYSDK_OFFSET(0x18030160)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1802F420)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_LBDEOEJADHA_OFFSET UNITYSDK_OFFSET(0x18035120)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_MIAOHIDKGJF_OFFSET UNITYSDK_OFFSET(0x1803AE00)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_NEXTITEM_OFFSET UNITYSDK_OFFSET(0x18036DD0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_NJDFNJNGBHL_OFFSET UNITYSDK_OFFSET(0x18033130)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONCAMERASHAKE_OFFSET UNITYSDK_OFFSET(0x1803A0C0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONCLOSEUPTLEND_OFFSET UNITYSDK_OFFSET(0x1803A2E0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONCLOSEUPTLSTART_OFFSET UNITYSDK_OFFSET(0x1803A100)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1802E360)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1802EBF0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1802DF50)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1802E000)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYBLUEPRINT_OFFSET UNITYSDK_OFFSET(0x18036010)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYCHARACTERLIGHTSTL_OFFSET UNITYSDK_OFFSET(0x18037580)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYITEMSHAKE_OFFSET UNITYSDK_OFFSET(0x18039980)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYSTAGETEXSHEETBYBLACKBOARD_OFFSET UNITYSDK_OFFSET(0x18035560)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYSTAGETEXSHEET_OFFSET UNITYSDK_OFFSET(0x18035730)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYSUMMONSBORNANIMATION_OFFSET UNITYSDK_OFFSET(0x18029850)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYTVEFFECTANIMLASTFRAME_OFFSET UNITYSDK_OFFSET(0x18039600)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYTVEFFECTANIM_OFFSET UNITYSDK_OFFSET(0x18039400)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PRELOADITEMSTAGE_OFFSET UNITYSDK_OFFSET(0x180301B0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_REFRESHITEMSTAGE_1_OFFSET UNITYSDK_OFFSET(0x18034980)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_REFRESHITEMSTAGE_OFFSET UNITYSDK_OFFSET(0x18030240)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_REFRESHSTAGE_OFFSET UNITYSDK_OFFSET(0x180364D0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_RESETUITEXT_1_OFFSET UNITYSDK_OFFSET(0x18034C60)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_RESETUITEXT_OFFSET UNITYSDK_OFFSET(0x18034B30)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_SETSUMMONSTIMESCALE_OFFSET UNITYSDK_OFFSET(0x18034710)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_SETTVMATPROPERTY_OFFSET UNITYSDK_OFFSET(0x18039F90)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_STOPALLTVS_OFFSET UNITYSDK_OFFSET(0x18035EE0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_STOPPLAY_OFFSET UNITYSDK_OFFSET(0x18037270)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_STOPSOUND_OFFSET UNITYSDK_OFFSET(0x18037540)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_STOPTVEFFECTANIM_OFFSET UNITYSDK_OFFSET(0x18039790)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_STOPTV_OFFSET UNITYSDK_OFFSET(0x18035E10)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_UPDATESUMMONSANIMATORMANUALLY_OFFSET UNITYSDK_OFFSET(0x1803A330)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1802DFA0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1803A680)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1803ABF0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1803ACB0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1803ACC0)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1803ACD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaStage3DModelControllerBase_TypeDefinitionIndex = 87919;

	class UIGachaStage3DModelControllerBase : public ::MoleMole::UIBase3DModelController
	{
	public:
		// static const ::System::String* NJCEPADPBEI; // 0x0
		// static const ::System::String* KFPCCEMNCPK; // 0x0
		// static const ::System::String* LFLBMFHDOJG; // 0x0
		// static const ::System::String* ENDPDLBJGMM; // 0x0
		// static const ::System::String* ENLKHFKBEHI; // 0x0
		// static const ::System::String* APNPMNNGNOA; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GLAFCELDBKD; // 0x368
		::System::Int32 DALCBBKPILK; // 0x370
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* PAABCILGFON; // 0x378
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* JNNDHOMNIED; // 0x380
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* AOGKNBKGJNP; // 0x388
		::MoleMole::Config::ConfigEntityTimeSlow* MAONDLOLGIK; // 0x390
		::NJNMJAPABKB* OJKELNMPHJO; // 0x398
		::System::String* PreTexSheetStart_Tv; // 0x3A0
		::System::String* PreTexSheetLoop_Tv; // 0x3A8
		::System::String* PreTexSheetEnd_Tv; // 0x3B0
		::System::String* TexSheetStart_Tv; // 0x3B8
		::System::String* TexSheetLoop_Tv; // 0x3C0
		::System::String* TexSheetEnd_Tv; // 0x3C8
		::System::String* AnimationKeyDelay; // 0x3D0
		::System::String* ModelAnimatorCom; // 0x3D8
		::System::String* CamShakeKey; // 0x3E0
		::System::String* CJHAOGEAAIF; // 0x3E8
		::System::String* BKCCLOEAHBP; // 0x3F0
		::System::String* IKEAHMPBADB; // 0x3F8
		::System::String* IHHFELHNMLI; // 0x400
		::System::String* OBPECBOIAEC; // 0x408
		::System::String* MJNEOGIBEII; // 0x410
		::System::String* BOJICLAABBH; // 0x418
		::System::String* PIDLKCNCIPN; // 0x420
		::System::String* JNKJFEGAHGM; // 0x428
		::System::String* EEDGPCPJMGA; // 0x430
		::System::String* LLMILPNDNOJ; // 0x438
		::System::String* KFGEMIFDHFP; // 0x440
		::System::String* AENGMMFHMGL; // 0x448
		::System::String* NHEOEANHCBG; // 0x450
		::System::String* FLBGNIJLEKG; // 0x458
		::System::String* IABNHDFGDEG; // 0x460
		::System::String* BMJDGHKDAIA; // 0x468
		::System::String* MGEIJNOBBKJ; // 0x470
		::System::String* UITextUpGo; // 0x478
		::System::String* UITextLeftGo; // 0x480
		::System::String* UITextRightGo; // 0x488
		::System::String* UITextMidGo; // 0x490
		::System::String* RarityEffectPattern; // 0x498
		::System::String* RarityEffectPatternSpecial; // 0x4A0
		::System::String* StageRarityEffectPattern; // 0x4A8
		::System::String* CamRarityEffectPattern_Openning; // 0x4B0
		::System::String* CamRarityEffectPattern_ItemStage; // 0x4B8
		::System::String* CamRarityEffectPattern_Common; // 0x4C0
		::System::String* MonoCGCustomGlobalAnimationGo; // 0x4C8
		::System::String* MonoCGCustomGlobalAnimationGo1; // 0x4D0
		::System::String* MonoCGCustomGlobalAnimationGo2; // 0x4D8
		::System::String* CGCustomGlobalAnimationOpenCurve; // 0x4E0
		::System::String* CGCustomGlobalAnimationOpenDuration; // 0x4E8
		::System::String* CGCustomGlobalAnimationCloseCurve; // 0x4F0
		::System::String* CGCustomGlobalAnimationCloseDuration; // 0x4F8
		::System::String* IsRarityS; // 0x500
		::System::String* TvRarityEffShowInterval; // 0x508
		::System::String* TvRarityEffAnimShowInterval; // 0x510
		::System::String* RaritySPerformInterval; // 0x518
		::System::String* IsRarityTv; // 0x520
		::System::String* TvRarityEffAnim; // 0x528
		::System::String* TvCommonEffAnim_ItemStage; // 0x530
		::System::String* LAFKIBELFFE; // 0x538
		::System::String* BIPLOKDICPP; // 0x540
		::System::String* ALBOGOJHNLF; // 0x548
		::System::String* FDBAGGFDFFH; // 0x550
		::System::String* HasRarityS; // 0x558
		::System::String* JBGJIEDLAKG; // 0x560
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* _tvRenders; // 0x568
		::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>* _screenPlayers; // 0x570
		::System::Collections::Generic::List_1<::System::Object*>* _startScreenDatas; // 0x578
		::System::Collections::Generic::List_1<::System::Object*>* _loopScreenDatas; // 0x580
		::System::Collections::Generic::List_1<::System::Object*>* _endScreenDatas; // 0x588
		::System::Collections::Generic::List_1<::VideoScreenPlayData*>* _startVideoScreenDatas; // 0x590
		::System::Collections::Generic::List_1<::VideoScreenPlayData*>* _loopVideoScreenDatas; // 0x598
		::System::Collections::Generic::List_1<::VideoScreenPlayData*>* _endVideoScreenDatas; // 0x5A0
		::DNGEKLMPBAC* _player; // 0x5A8
		::UnityEngine::Transform* _characterLightsTimelineRoot; // 0x5B0
		::GIOPLKCJHMP* _itemPerformTemplate; // 0x5B8
		::UnityEngine::GameObject* _curModel; // 0x5C0
		::UnityEngine::Vector3 _startLocalPos; // 0x5C8
		::System::Byte _padding1[0x4];
		::MoleMole::Battle::Entity* _curEntity; // 0x5D8
		::UnityEngine::GameObject* _contentRootGo; // 0x5E0
		::System::Boolean _CAHFNLLPHML_k__BackingField; // 0x5E8
		::System::Byte _padding2[0x7];
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* FJHNGFBKPGF; // 0x5F0
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* _loadedUITextModels; // 0x5F8
		::System::String* KEJFPPBLNBN; // 0x600
		::System::String* IFOJIEHGPPK; // 0x608
		::AIGOEPPCAGH* KHCCDHPBHKG; // 0x610
		::System::Collections::Generic::List_1<::UnityEngine::Light*>* _allLights; // 0x618
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* NLPKADPDPMG; // 0x620
		::UnityEngine::Playables::PlayableDirector* NKFHDBNKCIM; // 0x628
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* CJAAAFGLJAB; // 0x630
		::GHICACFMBNP* LKNOCPCJINI; // 0x638
		::Foundation::AssetPath IKOIGBLIAGF; // 0x640

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_UPDATE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void HandleUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_HANDLEUPDATE_OFFSET))(this);
		}

		::System::Void HandleOnOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_HANDLEONOPEN_OFFSET))(this);
		}

		::System::Boolean IsVideoTvIndex(::System::Int32 tvIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ISVIDEOTVINDEX_OFFSET))(this, tvIndex);
		}

		::System::Collections::IEnumerator* PreloadItemStage(::System::Action* completeCb, ::Il2CppArray<::Foundation::AssetPath>* preloadAssets)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action*, ::Il2CppArray<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PRELOADITEMSTAGE_OFFSET))(this, completeCb, preloadAssets);
		}

		::System::Void RefreshItemStage(::System::String* tvVideo, ::System::String* tvTextureSheet, ::Foundation::AssetPath modelPrefabPath, ::UnityEngine::Transform* parent, ::UnityEngine::Vector3 localPos, ::UnityEngine::Vector3 localEulerAngle, ::System::Single size, ::System::Int32 templateID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Foundation::AssetPath, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_REFRESHITEMSTAGE_OFFSET))(this, tvVideo, tvTextureSheet, modelPrefabPath, parent, localPos, localEulerAngle, size, templateID);
		}

		::System::Void RefreshItemStage_1(::System::String* tvVideo, ::System::String* tvTextureSheet, ::System::String* modelPrefabPath, ::UnityEngine::Transform* parent, ::UnityEngine::Vector3 localPos, ::UnityEngine::Vector3 localEulerAngle, ::System::Single size, ::System::Int32 templateID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_REFRESHITEMSTAGE_1_OFFSET))(this, tvVideo, tvTextureSheet, modelPrefabPath, parent, localPos, localEulerAngle, size, templateID);
		}

		::System::Void ResetUIText(::System::Collections::Generic::List_1<::System::String*>* paths, ::System::Collections::Generic::List_1<::System::Object*>* textInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_RESETUITEXT_OFFSET))(this, paths, textInfos);
		}

		::System::Void ResetUIText_1(::System::String* curPath, ::MoleMole::UIGachaStage3DModelControllerBase_UITextInfo curTextInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::UIGachaStage3DModelControllerBase_UITextInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_RESETUITEXT_1_OFFSET))(this, curPath, curTextInfo);
		}

		::System::Single GetUITextMoveDistane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GETUITEXTMOVEDISTANE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetLightCutSceneAttachPoint()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GETLIGHTCUTSCENEATTACHPOINT_OFFSET))(this);
		}

		::System::Void PlayStageTexSheetByBlackboard(::System::Int32 index, ::System::String* startTexSheetBlackboard, ::System::Boolean isStartTexSheetVideo, ::System::String* loopTexSheetBlackboard, ::System::Boolean isLoopTexSheetVideo, ::System::String* endTexSheetBlackboard, ::System::Boolean isEndTexSheetVideo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYSTAGETEXSHEETBYBLACKBOARD_OFFSET))(this, index, startTexSheetBlackboard, isStartTexSheetVideo, loopTexSheetBlackboard, isLoopTexSheetVideo, endTexSheetBlackboard, isEndTexSheetVideo);
		}

		::System::Void PlayStageTexSheet(::System::Int32 index, ::System::String* startTextureSheet, ::System::Boolean isStartTexSheetVideo, ::System::String* loopTextureSheet, ::System::Boolean isLoopTexSheetVideo, ::System::String* endTextureSheet, ::System::Boolean isEndTexSheetVideo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYSTAGETEXSHEET_OFFSET))(this, index, startTextureSheet, isStartTexSheetVideo, loopTextureSheet, isLoopTexSheetVideo, endTextureSheet, isEndTexSheetVideo);
		}

		::System::Void StopTv(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_STOPTV_OFFSET))(this, index);
		}

		::System::Void StopAllTvs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_STOPALLTVS_OFFSET))(this);
		}

		::System::Void PlayBlueprint(::System::Single camRotateDuration, ::GIOPLKCJHMP* tamplate, ::System::Action* blueprintEndCb, ::System::Int32 performedPhaseCount, ::System::Int32 totalPhaseCount, ::System::String* overrideBlueprint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::GIOPLKCJHMP*, ::System::Action*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYBLUEPRINT_OFFSET))(this, camRotateDuration, tamplate, blueprintEndCb, performedPhaseCount, totalPhaseCount, overrideBlueprint);
		}

		::System::Void RefreshStage(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_REFRESHSTAGE_OFFSET))(this, active);
		}

		::System::Void NextItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_NEXTITEM_OFFSET))(this);
		}

		::System::Boolean GetCurPlayerCondition(::System::String* conditionKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GETCURPLAYERCONDITION_OFFSET))(this, conditionKey);
		}

		::System::Void StopPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_STOPPLAY_OFFSET))(this);
		}

		::System::Void StopSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_STOPSOUND_OFFSET))(this);
		}

		::System::Void PlayCharacterLightsTL(::System::Boolean isOpen, ::System::Single startOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYCHARACTERLIGHTSTL_OFFSET))(this, isOpen, startOffset);
		}

		::UnityEngine::GameObject* get_CurCharacterLightTimelineGo()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_CURCHARACTERLIGHTTIMELINEGO_OFFSET))(this);
		}

		::System::Void FireTvEffect(::System::Int32 index, ::System::String* effectPattern)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_FIRETVEFFECT_OFFSET))(this, index, effectPattern);
		}

		::System::Void GetRarityEffDelay(::System::Int32 tvIndex, ::System::Single& effDelay, ::System::Single& effAnimDelay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GETRARITYEFFDELAY_OFFSET))(this, tvIndex, effDelay, effAnimDelay);
		}

		::System::Void PlayTvEffectAnim(::System::Int32 tvIndex, ::System::String* animClipName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYTVEFFECTANIM_OFFSET))(this, tvIndex, animClipName);
		}

		::System::Void PlayTvEffectAnimLastFrame(::System::Int32 tvIndex, ::System::String* animClipName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYTVEFFECTANIMLASTFRAME_OFFSET))(this, tvIndex, animClipName);
		}

		::System::Void StopTvEffectAnim(::System::Int32 tvIndex, ::System::String* animClipName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_STOPTVEFFECTANIM_OFFSET))(this, tvIndex, animClipName);
		}

		::System::Void PlayItemShake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYITEMSHAKE_OFFSET))(this);
		}

		::System::Void SetTvMatProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_SETTVMATPROPERTY_OFFSET))(this);
		}

		::System::Boolean CheckRarityTv(::System::Int32 tvIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_CHECKRARITYTV_OFFSET))(this, tvIndex);
		}

		::System::Void OnCameraShake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONCAMERASHAKE_OFFSET))(this);
		}

		::System::Void OnCloseupTLStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONCLOSEUPTLSTART_OFFSET))(this);
		}

		::System::Void OnCloseupTLEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_ONCLOSEUPTLEND_OFFSET))(this);
		}

		::System::Void PlaySummonsBornAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_PLAYSUMMONSBORNANIMATION_OFFSET))(this);
		}

		::System::Void SetSummonsTimeScale(::System::Single timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_SETSUMMONSTIMESCALE_OFFSET))(this, timeScale);
		}

		::System::Void UpdateSummonsAnimatorManually(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_UPDATESUMMONSANIMATORMANUALLY_OFFSET))(this, deltaTime);
		}

		::System::Int32 get_TOTAL_TV_NUM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_TOTAL_TV_NUM_OFFSET))(this);
		}

		::System::Int32 get_RARITY_TV_INDEX()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_RARITY_TV_INDEX_OFFSET))(this);
		}

		::System::String* get_BLUEPRINT_NAME()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_BLUEPRINT_NAME_OFFSET))(this);
		}

		::DNGEKLMPBAC* get_Player()
		{
			return ((::DNGEKLMPBAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_PLAYER_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_curModel()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_CURMODEL_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Single get_curTimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_CURTIMESCALE_OFFSET))(this);
		}

		::System::Boolean get_isAnimatorSpeedCtrled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_ISANIMATORSPEEDCTRLED_OFFSET))(this);
		}

		::System::Boolean get_AnimaCheckMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GET_ANIMACHECKMODE_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void LBDEOEJADHA(::UnityEngine::GameObject* MBPHEIMPLOM, ::System::String* GINPFCHNJOL)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_LBDEOEJADHA_OFFSET))(this, MBPHEIMPLOM, GINPFCHNJOL);
		}

		::System::Void HJJCHNHHDKK(::System::Boolean HPINBCPMHJE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_HJJCHNHHDKK_OFFSET))(this, HPINBCPMHJE);
		}

		::Foundation::AssetPath BOADICFPIHE(::System::Int32 AJNFMBFOGJA, ::MoleMole::Config::EntityType MOBALFHFMNJ)
		{
			return ((::Foundation::AssetPath(*)(::PVOID, ::System::Int32, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_BOADICFPIHE_OFFSET))(this, AJNFMBFOGJA, MOBALFHFMNJ);
		}

		::System::Void EIDKHDPOHDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_EIDKHDPOHDD_OFFSET))(this);
		}

		::UnityEngine::GameObject* EGJLIDAGLAK()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_EGJLIDAGLAK_OFFSET))(this);
		}

		::System::Void NJDFNJNGBHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_NJDFNJNGBHL_OFFSET))(this);
		}

		::System::Boolean BHLHMINHIKM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_BHLHMINHIKM_OFFSET))(this);
		}

		static ::System::Boolean MIAOHIDKGJF()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_MIAOHIDKGJF_OFFSET))();
		}

		::System::Void IIJNJFICLGE(::System::Boolean CGEMLHFPINP, ::System::Single JPOHIDLDKEN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_IIJNJFICLGE_OFFSET))(this, CGEMLHFPINP, JPOHIDLDKEN);
		}

		::System::Void FAOCBEKNEDJ(::System::Single CAOPDAMCNCN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_FAOCBEKNEDJ_OFFSET))(this, CAOPDAMCNCN);
		}

		::System::Void GBAHFEMFGMJ(::System::Boolean FIPHFGHNNBE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GBAHFEMFGMJ_OFFSET))(this, FIPHFGHNNBE);
		}

		::VideoScreenPlayData* IAKOMONHLNM(::System::Int32 ABHBKFJKINO, ::System::Collections::Generic::List_1<::VideoScreenPlayData*>* DJLOKMMLFJC)
		{
			return ((::VideoScreenPlayData*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::VideoScreenPlayData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_IAKOMONHLNM_OFFSET))(this, ABHBKFJKINO, DJLOKMMLFJC);
		}

		::System::Void DGKFHJMJNHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_DGKFHJMJNHG_OFFSET))(this);
		}

		::System::Void BGPMINKEGOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_BGPMINKEGOC_OFFSET))(this);
		}

		::System::Void GFDOPOKEFME(::System::Int32 NGCOIPGHCGA, ::UnityEngine::Transform* JNLBPMKIFNK, ::System::Single BEPMDFENBMH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_GFDOPOKEFME_OFFSET))(this, NGCOIPGHCGA, JNLBPMKIFNK, BEPMDFENBMH);
		}

		::System::Void HDJIPLACJIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_HDJIPLACJIK_OFFSET))(this);
		}

		::System::Void EAPBJFMMIMG(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_EAPBJFMMIMG_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void FPNOIMGJBND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_FPNOIMGJBND_OFFSET))(this);
		}

		::TextureFrameScreenPlayData* IAKOMONHLNM_1(::System::Int32 ABHBKFJKINO, ::System::Collections::Generic::List_1<::System::Object*>* DJLOKMMLFJC)
		{
			return ((::TextureFrameScreenPlayData*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE_IAKOMONHLNM_1_OFFSET))(this, ABHBKFJKINO, DJLOKMMLFJC);
		}
	};
}
