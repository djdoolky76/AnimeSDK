#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BABFBCHGIHG.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatNPCLocation.h"
#include "unitysdk/MoleMole/UIBaseChatPlayController_PlayerTransformRecord.h"
#include "unitysdk/MoleMole/UIBaseChatPlayController_RecordFlag.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/KMEBHGEGMLM.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BAPNBOCDBHM;
class DPFMDEBJEMG;
class EGGEACHGCJF;
class ENGDDENAOLH;
class JADIDMDHGJJ;
class KGINOFOIKJK;
class MKLJDEGMHPJ;
class NLNIIPDCABP;
namespace MoleMole { class SpecialKeyValue; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::GalGame { class AttachEffectCfg; }
namespace MoleMole::GalGame { class DynamicObjectModifyActiveCfg; }
namespace MoleMole::GalGame { class LookIKCfg; }
namespace MoleMole::GalGame { class MainCityChatConditionNode; }
namespace MoleMole::GalGame { class MainCityChatTransitionDisplayItem; }
namespace MoleMole::GalGame { class PlayerAccessoryCfg; }
namespace MoleMole::GalGame { class TagAniPair; }
namespace MoleMole::GalGame { class TagBoolPair; }
namespace MoleMole::GalGame { class TagGroupAniPair; }
namespace MoleMole::GalGame { class TagGroupBoolPair; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace miHoYoEmotion { class EmoSync; }

#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_DADHJCNLELK_OFFSET UNITYSDK_OFFSET(0x1847EB80)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_EFINBPADEPA_OFFSET UNITYSDK_OFFSET(0x1847DD00)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_FINDENTITY_OFFSET UNITYSDK_OFFSET(0x18481A00)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_FINISH_OFFSET UNITYSDK_OFFSET(0x18884DC0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_GDLDLAJJHFE_OFFSET UNITYSDK_OFFSET(0x1847E900)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETCANAUTONEXT_OFFSET UNITYSDK_OFFSET(0x18885130)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETCHATSYNCDATA_OFFSET UNITYSDK_OFFSET(0x1847F200)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETENTITYISVISIBLE_OFFSET UNITYSDK_OFFSET(0x18480600)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETISRUNNINGSKIP_OFFSET UNITYSDK_OFFSET(0x18884F30)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETTALKEMOSYNC_OFFSET UNITYSDK_OFFSET(0x18483080)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETTALKENTITYBYNPCSUBID_OFFSET UNITYSDK_OFFSET(0x18482180)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_GET_CAMERAWRAPPER_OFFSET UNITYSDK_OFFSET(0x18884E10)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x18884DB0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_GET_OPENCONTEXT_OFFSET UNITYSDK_OFFSET(0x18884E00)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_INITNPCIK_OFFSET UNITYSDK_OFFSET(0x188852F0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_ISINMAINCITY_OFFSET UNITYSDK_OFFSET(0x1847DC80)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_JBHHGBOMBIA_OFFSET UNITYSDK_OFFSET(0x18483E80)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_MODIFYTIME_OFFSET UNITYSDK_OFFSET(0x1847F930)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_ONNODERUN_OFFSET UNITYSDK_OFFSET(0x18884E20)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_OVERRIDENEARCLIPDIS_OFFSET UNITYSDK_OFFSET(0x1847ED90)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1847E560)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_PLAYAVATARANIMATION_OFFSET UNITYSDK_OFFSET(0x1847E2D0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_PLAYEMOSYNC_OFFSET UNITYSDK_OFFSET(0x184831F0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_PLAYNPCANIMATION_OFFSET UNITYSDK_OFFSET(0x1847DE70)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_POSTFACIALANI_OFFSET UNITYSDK_OFFSET(0x184836B0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_POSTFACIALBUBBLE_OFFSET UNITYSDK_OFFSET(0x18483A10)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_PROCESSCHATIK_OFFSET UNITYSDK_OFFSET(0x188857C0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_PROCESSCONDITION_OFFSET UNITYSDK_OFFSET(0x18480BA0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_PRVCHECKSYNCINTERACTIONTOSERVER_OFFSET UNITYSDK_OFFSET(0x1847F520)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDDYNAMICOBJECTVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1847EFB0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDMEMBERIKOPERATION_OFFSET UNITYSDK_OFFSET(0x18885A90)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDNPCIKOPERATION_OFFSET UNITYSDK_OFFSET(0x18885730)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDNPCVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1847EF30)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDPLAYERTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18885EB0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_RESTORENPCIK_OFFSET UNITYSDK_OFFSET(0x18885D10)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_RESTOREPLAYERACCESSORY_OFFSET UNITYSDK_OFFSET(0x18481C50)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_RESTOREPLAYERTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18886430)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETATTACHEFFECT_OFFSET UNITYSDK_OFFSET(0x1847D8B0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETDYNAMICOBJECTVISIBLE_OFFSET UNITYSDK_OFFSET(0x184807A0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETFACIALANIENTITYLISTIDLE_OFFSET UNITYSDK_OFFSET(0x18483920)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETJUMP_OFFSET UNITYSDK_OFFSET(0x18480FF0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETNEXT_OFFSET UNITYSDK_OFFSET(0x18480B30)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETNPC_OFFSET UNITYSDK_OFFSET(0x18885250)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETPLAYERACCESSORY_OFFSET UNITYSDK_OFFSET(0x184810B0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETSPECIALS_OFFSET UNITYSDK_OFFSET(0x1847F030)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETTAGVISIBLE_OFFSET UNITYSDK_OFFSET(0x1847FDE0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_SKIPSTORYPLAY_OFFSET UNITYSDK_OFFSET(0x18884FC0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_STARTSKIPCHAT_OFFSET UNITYSDK_OFFSET(0x18884E70)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_STOPSKIPCHAT_OFFSET UNITYSDK_OFFSET(0x18884ED0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_TRYNOOPTIONSYNCINTERACTIONTOSERVER_OFFSET UNITYSDK_OFFSET(0x1847F660)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_TRYOPTIONSYNCINTERACTIONTOSERVER_OFFSET UNITYSDK_OFFSET(0x1847F250)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER_UPDATESKIPSTATE_OFFSET UNITYSDK_OFFSET(0x188850E0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18483C20)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseChatPlayController_TypeDefinitionIndex = 85905;

	class UIBaseChatPlayController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* SKIP_TALK_TRIGGER; // 0x0
		::System::Boolean _isFinish; // 0x320
		::System::Byte _padding0[0x7];
		::KGINOFOIKJK* _chatNodePlayer; // 0x328
		::System::Collections::Generic::List_1<::System::Object*>* _ikRecordNpcTagList; // 0x330
		::System::Collections::Generic::List_1<::MoleMole::GalGame::LookIKCfg*>* _ikRecordMemberList; // 0x338
		::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>* _participatorMap; // 0x340
		::MoleMole::UIBaseChatPlayController_PlayerTransformRecord _playerTransformRecord; // 0x348
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* CCKFLJECAJO; // 0x368
		::DPFMDEBJEMG* _chatRecordSyncData; // 0x370
		::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*>* _accessoryRecordMap; // 0x378
		::JADIDMDHGJJ* storyPlayRecord; // 0x380
		::ENGDDENAOLH* storyPlayHandler; // 0x388
		::System::Boolean Auto; // 0x390
		::System::Byte _padding1[0x7];
		::MoleMole::UIMainCityChatPlayContext* _openContext; // 0x398
		::EGGEACHGCJF* _ACGJLELFFBN_k__BackingField; // 0x3A0
		::Foundation::AssetRequestHandle emoHandler; // 0x3A8
		::miHoYoEmotion::EmoSync* _curEmoSync; // 0x3C8
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _emoFacialAniEntityList; // 0x3D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_FINISH_OFFSET))(this);
		}

		::MoleMole::UIMainCityChatPlayContext* get_OpenContext()
		{
			return ((::MoleMole::UIMainCityChatPlayContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_GET_OPENCONTEXT_OFFSET))(this);
		}

		::EGGEACHGCJF* get_CameraWrapper()
		{
			return ((::EGGEACHGCJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_GET_CAMERAWRAPPER_OFFSET))(this);
		}

		::System::Void OnNodeRun(::BAPNBOCDBHM* node)
		{
			return ((::System::Void(*)(::PVOID, ::BAPNBOCDBHM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_ONNODERUN_OFFSET))(this, node);
		}

		::System::Void StartSkipChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_STARTSKIPCHAT_OFFSET))(this);
		}

		::System::Void StopSkipChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_STOPSKIPCHAT_OFFSET))(this);
		}

		::System::Boolean GetIsRunningSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETISRUNNINGSKIP_OFFSET))(this);
		}

		::System::Void SkipStoryPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SKIPSTORYPLAY_OFFSET))(this);
		}

		::System::Void UpdateSkipState(::BAPNBOCDBHM* node)
		{
			return ((::System::Void(*)(::PVOID, ::BAPNBOCDBHM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_UPDATESKIPSTATE_OFFSET))(this, node);
		}

		::System::Boolean GetCanAutoNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETCANAUTONEXT_OFFSET))(this);
		}

		::System::Void SetNPC(::MoleMole::GalGame::MainCityChatNPCLocation location, ::System::Int32 avatarId, ::System::Boolean enter)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatNPCLocation, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETNPC_OFFSET))(this, location, avatarId, enter);
		}

		::System::Void InitNpcIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_INITNPCIK_OFFSET))(this);
		}

		::System::Void ProcessChatIK(::MoleMole::GalGame::LookIKCfg* Config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::LookIKCfg*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_PROCESSCHATIK_OFFSET))(this, Config);
		}

		::System::Void RecordNpcIKOperation(::System::Int32 npcTag, ::BABFBCHGIHG ikType, ::System::Boolean isPush)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BABFBCHGIHG, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDNPCIKOPERATION_OFFSET))(this, npcTag, ikType, isPush);
		}

		::System::Void RecordMemberIKOperation(::MoleMole::GalGame::LookIKCfg* ikNode)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::LookIKCfg*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDMEMBERIKOPERATION_OFFSET))(this, ikNode);
		}

		::System::Void RestoreNpcIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_RESTORENPCIK_OFFSET))(this);
		}

		::System::Void RecordPlayerTransform(::System::Boolean invalidScenePosition, ::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 rot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDPLAYERTRANSFORM_OFFSET))(this, invalidScenePosition, pos, rot);
		}

		::System::Void RestorePlayerTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_RESTOREPLAYERTRANSFORM_OFFSET))(this);
		}

		::System::Void SetAttachEffect(::MoleMole::GalGame::AttachEffectCfg* Cfg)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::AttachEffectCfg*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETATTACHEFFECT_OFFSET))(this, Cfg);
		}

		::System::Void PlayNpcAnimation(::System::Collections::Generic::List_1<::MoleMole::GalGame::TagAniPair*>* tagAniParams, ::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupAniPair*>* groupAniParams, ::System::Int32 facialActionID, ::System::Int32 speakerNpcTag, ::System::String* speakerMember, ::System::Boolean forceCrossFade)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GalGame::TagAniPair*>*, ::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupAniPair*>*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_PLAYNPCANIMATION_OFFSET))(this, tagAniParams, groupAniParams, facialActionID, speakerNpcTag, speakerMember, forceCrossFade);
		}

		::System::Void PlayAvatarAnimation(::System::Int32 avatarID, ::System::String* mainCityObjectStateIdString, ::System::Boolean forceCrossFade)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_PLAYAVATARANIMATION_OFFSET))(this, avatarID, mainCityObjectStateIdString, forceCrossFade);
		}

		::System::Void PlayAnimation(::NLNIIPDCABP* component, ::System::String* mainCityObjectStateIdString, ::System::Boolean forceCrossFade)
		{
			return ((::System::Void(*)(::PVOID, ::NLNIIPDCABP*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_PLAYANIMATION_OFFSET))(this, component, mainCityObjectStateIdString, forceCrossFade);
		}

		::System::Void OverrideNearClipDis(::System::Single dis)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_OVERRIDENEARCLIPDIS_OFFSET))(this, dis);
		}

		::System::Void RecordNpcVisibility(::System::Int32 tagID, ::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDNPCVISIBILITY_OFFSET))(this, tagID, visible);
		}

		::System::Void RecordDynamicObjectVisibility(::System::Int32 subID, ::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_RECORDDYNAMICOBJECTVISIBILITY_OFFSET))(this, subID, visible);
		}

		::System::Void SetSpecials(::System::Collections::Generic::List_1<::MoleMole::SpecialKeyValue*>* Specials)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::SpecialKeyValue*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETSPECIALS_OFFSET))(this, Specials);
		}

		::DPFMDEBJEMG* GetChatSyncData()
		{
			return ((::DPFMDEBJEMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETCHATSYNCDATA_OFFSET))(this);
		}

		::System::Void TryOptionSyncInteractionToServer(::System::Int32 optionIndex, ::MoleMole::GalGame::MainCityChatTransitionDisplayItem* displayItem, ::System::Action* afterSync)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::GalGame::MainCityChatTransitionDisplayItem*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_TRYOPTIONSYNCINTERACTIONTOSERVER_OFFSET))(this, optionIndex, displayItem, afterSync);
		}

		::System::Void TryNoOptionSyncInteractionToServer(::System::Action* afterSync)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_TRYNOOPTIONSYNCINTERACTIONTOSERVER_OFFSET))(this, afterSync);
		}

		::System::Boolean PrvCheckSyncInteractionToServer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_PRVCHECKSYNCINTERACTIONTOSERVER_OFFSET))(this);
		}

		::System::Void ModifyTime(::KMEBHGEGMLM cfg)
		{
			return ((::System::Void(*)(::PVOID, ::KMEBHGEGMLM))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_MODIFYTIME_OFFSET))(this, cfg);
		}

		::System::Boolean IsInMainCity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_ISINMAINCITY_OFFSET))(this);
		}

		::System::Void SetTagVisible(::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>* Params, ::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupBoolPair*>* GroupParams, ::MoleMole::UIBaseChatPlayController_RecordFlag recordFlag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>*, ::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupBoolPair*>*, ::MoleMole::UIBaseChatPlayController_RecordFlag))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETTAGVISIBLE_OFFSET))(this, Params, GroupParams, recordFlag);
		}

		::System::Void SetDynamicObjectVisible(::System::Collections::Generic::List_1<::MoleMole::GalGame::DynamicObjectModifyActiveCfg*>* DynamicObjectsSubID, ::MoleMole::UIBaseChatPlayController_RecordFlag recordFlag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GalGame::DynamicObjectModifyActiveCfg*>*, ::MoleMole::UIBaseChatPlayController_RecordFlag))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETDYNAMICOBJECTVISIBLE_OFFSET))(this, DynamicObjectsSubID, recordFlag);
		}

		::System::Void SetNext(::System::Int32 sectionIndex, ::System::Int32 subSectionIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETNEXT_OFFSET))(this, sectionIndex, subSectionIndex);
		}

		::System::Void ProcessCondition(::MoleMole::GalGame::MainCityChatConditionNode* cond)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatConditionNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_PROCESSCONDITION_OFFSET))(this, cond);
		}

		::System::Void SetJump(::MKLJDEGMHPJ* jump)
		{
			return ((::System::Void(*)(::PVOID, ::MKLJDEGMHPJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETJUMP_OFFSET))(this, jump);
		}

		::System::Void SetPlayerAccessory(::System::Collections::Generic::List_1<::MoleMole::GalGame::PlayerAccessoryCfg*>* accessoryList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GalGame::PlayerAccessoryCfg*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETPLAYERACCESSORY_OFFSET))(this, accessoryList);
		}

		::System::Void RestorePlayerAccessory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_RESTOREPLAYERACCESSORY_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* FindEntity(::System::Int32 npcTag, ::System::String* groupMember, ::System::UInt32& entityID)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_FINDENTITY_OFFSET))(this, npcTag, groupMember, entityID);
		}

		::MoleMole::Battle::Entity* GetTalkEntityByNpcSubID(::System::Int32 npcSubID, ::System::UInt32& entityID)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETTALKENTITYBYNPCSUBID_OFFSET))(this, npcSubID, entityID);
		}

		::miHoYoEmotion::EmoSync* GetTalkEmoSync(::System::Int32 speakerNpcTag, ::System::String* speakerMember, ::System::Int32 npcSubID, ::System::UInt32& entityID)
		{
			return ((::miHoYoEmotion::EmoSync*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETTALKEMOSYNC_OFFSET))(this, speakerNpcTag, speakerMember, npcSubID, entityID);
		}

		::System::Void PlayEmoSync(::miHoYoEmotion::EmoSync* emoSync, ::System::String* voiceKey, ::System::String* poseKey, ::System::String* facialKey)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::EmoSync*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_PLAYEMOSYNC_OFFSET))(this, emoSync, voiceKey, poseKey, facialKey);
		}

		::System::Void PostFacialAni(::MoleMole::Battle::Entity* entity, ::System::String* facialKey, ::System::Boolean isReset)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_POSTFACIALANI_OFFSET))(this, entity, facialKey, isReset);
		}

		::System::Void SetFacialAniEntityListIdle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_SETFACIALANIENTITYLISTIDLE_OFFSET))(this);
		}

		::System::Void PostFacialBubble(::MoleMole::Battle::Entity* entity, ::System::String* facialBubbleKey)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_POSTFACIALBUBBLE_OFFSET))(this, entity, facialBubbleKey);
		}

		::System::Boolean GetEntityIsVisible(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_GETENTITYISVISIBLE_OFFSET))(this, entity);
		}

		static ::System::Int32 EFINBPADEPA(::System::Int32 PKMFBJMJCOO)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_EFINBPADEPA_OFFSET))(PKMFBJMJCOO);
		}

		::System::Void JBHHGBOMBIA(::EGGEACHGCJF* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::EGGEACHGCJF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_JBHHGBOMBIA_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void GDLDLAJJHFE(::UnityEngine::Animator* ICAAMDMMDDJ, ::System::String* CJGAMEOMLIO, ::System::String* CFFCKJIDPDC, ::System::String* PJMAELIAHGH)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_GDLDLAJJHFE_OFFSET))(this, ICAAMDMMDDJ, CJGAMEOMLIO, CFFCKJIDPDC, PJMAELIAHGH);
		}

		::System::Void DADHJCNLELK(::UnityEngine::Animator* ICAAMDMMDDJ, ::System::String* OHCEGFMJGOP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER_DADHJCNLELK_OFFSET))(this, ICAAMDMMDDJ, OHCEGFMJGOP);
		}
	};
}
