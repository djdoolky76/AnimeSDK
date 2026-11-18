#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/KBFJMCBABIC.h"
#include "unitysdk/LKODMMPOKFD.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class AGKLJMPMGFB;
class ALBLJPPBPHC;
class AONIOMFHPJD;
class BPDKILGLJNF;
class DGHOPGFDKMN;
class DHKOAABCNOE;
class FNGOPHAFNAC;
class IKPCCMOBEOP;
class MJOBHAHFJMD;
class OAEBBMFPGGH;
class ONDPFMIOMIF;
class TextureFrameScreenPlayData;
class VideoLightSync;
namespace MoleMole { class CinemaNpcOffsetSo; }
namespace MoleMole { class ConfigUICinema; }
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole { class UICinemaGeneralStartTipsWidgetController; }
namespace MoleMole { class UICinemaPlay3DModelController; }
namespace MoleMole { class UICinemaPlayContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInLevelPauseDialogPopWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_CHECKGAMESTART_OFFSET UNITYSDK_OFFSET(0x18073460)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_CINEMATRIGGERSOUND_OFFSET UNITYSDK_OFFSET(0x18071390)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_CLEARPLAYSTATE_OFFSET UNITYSDK_OFFSET(0x180736E0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_DESTROYCINEMAEFFECTENTITY_OFFSET UNITYSDK_OFFSET(0x18070020)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_DESTROYCINEMAVIDEO_OFFSET UNITYSDK_OFFSET(0x180720A0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ELIGPFCOBIE_OFFSET UNITYSDK_OFFSET(0x18074040)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_FHHMMCALHFO_OFFSET UNITYSDK_OFFSET(0x18073EE0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x18073690)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18072550)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_INITCINEMAEFFECTENTITY_OFFSET UNITYSDK_OFFSET(0x1806FE70)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_INITCINEMAVIDEO_OFFSET UNITYSDK_OFFSET(0x18071DF0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ISDATEPLAY_OFFSET UNITYSDK_OFFSET(0x18071BC0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_OCENFECLKIO_OFFSET UNITYSDK_OFFSET(0x18074190)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ODAPFFDFLBH_OFFSET UNITYSDK_OFFSET(0x180742E0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONCLICKPAGEPAUSE_OFFSET UNITYSDK_OFFSET(0x18071330)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18072560)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONSOUNDENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18071D50)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONSOUNDFAILEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18071CC0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18072E30)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x180725F0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x180729B0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONVIDESTARTED_OFFSET UNITYSDK_OFFSET(0x18072280)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTDARKSURROUNDING_OFFSET UNITYSDK_OFFSET(0x18070B30)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTDATEFAIL_OFFSET UNITYSDK_OFFSET(0x18070620)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTDATEFLARE_OFFSET UNITYSDK_OFFSET(0x18070270)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTDATESUCCESS_OFFSET UNITYSDK_OFFSET(0x18070470)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTSCREENDOWN_OFFSET UNITYSDK_OFFSET(0x18070E90)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTSCREENUP_OFFSET UNITYSDK_OFFSET(0x18070CE0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTSINGLEFEVER_OFFSET UNITYSDK_OFFSET(0x18070980)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTSINGLESUPERBUBBLE_OFFSET UNITYSDK_OFFSET(0x180707D0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECT_OFFSET UNITYSDK_OFFSET(0x180701A0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYSTARTANIM_OFFSET UNITYSDK_OFFSET(0x180710B0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYTARGETVIDEO_OFFSET UNITYSDK_OFFSET(0x180721C0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYVIDEOCOLOR_OFFSET UNITYSDK_OFFSET(0x180723C0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_POSTLEVELGRAPHSTARTEVENT_OFFSET UNITYSDK_OFFSET(0x18073CB0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_SHOWCINEMA_OFFSET UNITYSDK_OFFSET(0x180734C0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STARTDEFAULTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x180739A0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STARTDEFAULTLEVELGRAPH_SINGLE_OFFSET UNITYSDK_OFFSET(0x18073A90)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STARTGAMEPLAY_OFFSET UNITYSDK_OFFSET(0x18073B80)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STARTLEVELPROCESS_OFFSET UNITYSDK_OFFSET(0x180738E0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STARTSINGLEPROCESS_OFFSET UNITYSDK_OFFSET(0x18073D10)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STOPCINEMACOMMONEFFECT_OFFSET UNITYSDK_OFFSET(0x18071040)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STOPCINEMASOUND_OFFSET UNITYSDK_OFFSET(0x18071420)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STOPLEVELPROCESS_OFFSET UNITYSDK_OFFSET(0x180730D0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STOPVIDEOCOLOR_OFFSET UNITYSDK_OFFSET(0x18072160)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_SYNCCAMERATRANSFORM_OFFSET UNITYSDK_OFFSET(0x18073200)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_TRIGGERSOUNDFINISHACTION_OFFSET UNITYSDK_OFFSET(0x18071C60)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_TRIGSGERSOUND_OFFSET UNITYSDK_OFFSET(0x18071620)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_UPDATEVIDEOCOLORTICK_OFFSET UNITYSDK_OFFSET(0x18072490)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x18073130)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18073E10)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18073E20)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18073EB0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18073EC0)
#define MOLEMOLE_UICINEMAPLAYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18073ED0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaPlayPageController_TypeDefinitionIndex = 59706;

	class UICinemaPlayPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::MoleMole::Battle::Entity* entity; // 0x330
		::MoleMole::UICinemaGeneralStartTipsWidgetController* startTipsController; // 0x338
		::MoleMole::UIInLevelPauseDialogPopWindowController* levelPauseWindow; // 0x340
		::System::String* avatarPoseKey; // 0x348
		::System::Single quickAgentPlayRatio; // 0x350
		::System::Byte _padding0[0x4];
		::KBFJMCBABIC param; // 0x358
		::System::UInt32 voicePendingID; // 0x370
		::System::UInt32 effectPendingID; // 0x374
		::System::String* videoName; // 0x378
		::MoleMole::ScreenPlayer* _screenPlayer; // 0x380
		::TextureFrameScreenPlayData* screenPlayData; // 0x388
		::System::Single videoTime; // 0x390
		::System::Byte _padding1[0x4];
		::System::Action* colorTickAction; // 0x398
		::VideoLightSync* lightSync; // 0x3A0
		::System::Int32 lightSyncCount; // 0x3A8
		::System::Byte _padding2[0x4];
		::DGHOPGFDKMN* _view; // 0x3B0
		::MoleMole::UICinemaPlay3DModelController* cinemaModelController; // 0x3B8
		::ALBLJPPBPHC* graphHandler; // 0x3C0
		::ONDPFMIOMIF* chatControlHandler; // 0x3C8
		::BPDKILGLJNF* cameraHandler; // 0x3D0
		::OAEBBMFPGGH* galAnimHandler; // 0x3D8
		::DHKOAABCNOE* ongoingHandler; // 0x3E0
		::AGKLJMPMGFB* npcHandler; // 0x3E8
		::AONIOMFHPJD* npcStrategyHandler; // 0x3F0
		::FNGOPHAFNAC* activityEffectHandler; // 0x3F8
		::MJOBHAHFJMD* reviewHandler; // 0x400
		::IKPCCMOBEOP* playController; // 0x408
		::MoleMole::UICinemaPlayContext* playCotnext; // 0x410
		::System::Boolean isNPCLoaded; // 0x418
		::System::Boolean isAvatarLoaded; // 0x419
		::System::Boolean isCinemaLoaded; // 0x41A
		::System::Byte _padding3[0x1];
		::Foundation::Coroutine::CoroutineHandle blackGuadHandle; // 0x41C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void InitCinemaEffectEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_INITCINEMAEFFECTENTITY_OFFSET))(this);
		}

		::System::Void DestroyCinemaEffectEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_DESTROYCINEMAEFFECTENTITY_OFFSET))(this);
		}

		::System::Void PlayCinemaCommonEffect(::LKODMMPOKFD effectType)
		{
			return ((::System::Void(*)(::PVOID, ::LKODMMPOKFD))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECT_OFFSET))(this, effectType);
		}

		::System::Void PlayCinemaCommonEffectDateFlare()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTDATEFLARE_OFFSET))(this);
		}

		::System::Void PlayCinemaCommonEffectDateSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTDATESUCCESS_OFFSET))(this);
		}

		::System::Void PlayCinemaCommonEffectDateFail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTDATEFAIL_OFFSET))(this);
		}

		::System::Void PlayCinemaCommonEffectSingleSuperBubble()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTSINGLESUPERBUBBLE_OFFSET))(this);
		}

		::System::Void PlayCinemaCommonEffectSingleFever()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTSINGLEFEVER_OFFSET))(this);
		}

		::System::Void PlayCinemaCommonEffectDarkSurrounding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTDARKSURROUNDING_OFFSET))(this);
		}

		::System::Void PlayCinemaCommonEffectScreenUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTSCREENUP_OFFSET))(this);
		}

		::System::Void PlayCinemaCommonEffectScreenDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYCINEMACOMMONEFFECTSCREENDOWN_OFFSET))(this);
		}

		::System::Void StopCinemaCommonEffect(::LKODMMPOKFD effectType, ::System::Boolean isStopImmediately)
		{
			return ((::System::Void(*)(::PVOID, ::LKODMMPOKFD, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STOPCINEMACOMMONEFFECT_OFFSET))(this, effectType, isStopImmediately);
		}

		::System::Void PlayStartAnim(::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYSTARTANIM_OFFSET))(this, finishCallback);
		}

		::System::Void OnClickPagePause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONCLICKPAGEPAUSE_OFFSET))(this);
		}

		::System::Void CinemaTriggerSound(::KBFJMCBABIC param)
		{
			return ((::System::Void(*)(::PVOID, ::KBFJMCBABIC))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_CINEMATRIGGERSOUND_OFFSET))(this, param);
		}

		::System::Void TrigsgerSound(::System::String* actionKey, ::System::String* effectKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_TRIGSGERSOUND_OFFSET))(this, actionKey, effectKey);
		}

		::System::Void OnSoundFailedCallback(::System::UInt32 pendingId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONSOUNDFAILEDCALLBACK_OFFSET))(this, pendingId);
		}

		::System::Void OnSoundEndCallback(::System::UInt32 pendingId, ::System::UInt32 playingId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONSOUNDENDCALLBACK_OFFSET))(this, pendingId, playingId);
		}

		::System::Void TriggerSoundFinishAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_TRIGGERSOUNDFINISHACTION_OFFSET))(this);
		}

		::System::Void StopCinemaSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STOPCINEMASOUND_OFFSET))(this);
		}

		::System::Void InitCinemaVideo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_INITCINEMAVIDEO_OFFSET))(this);
		}

		::System::Void DestroyCinemaVideo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_DESTROYCINEMAVIDEO_OFFSET))(this);
		}

		::System::Void PlayTargetVideo(::System::String* videoURL)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYTARGETVIDEO_OFFSET))(this, videoURL);
		}

		::System::Void OnVideStarted(::MoleMole::IVideoPlayer* videoPlayer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONVIDESTARTED_OFFSET))(this, videoPlayer);
		}

		::System::Void PlayVideoColor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_PLAYVIDEOCOLOR_OFFSET))(this, name);
		}

		::System::Void StopVideoColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STOPVIDEOCOLOR_OFFSET))(this);
		}

		::System::Void UpdateVideoColorTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_UPDATEVIDEOCOLORTICK_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Boolean CheckGameStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_CHECKGAMESTART_OFFSET))(this);
		}

		::System::Void ShowCinema()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_SHOWCINEMA_OFFSET))(this);
		}

		::System::Boolean IsDatePlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ISDATEPLAY_OFFSET))(this);
		}

		::DGHOPGFDKMN* GetView()
		{
			return ((::DGHOPGFDKMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void ClearPlayState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_CLEARPLAYSTATE_OFFSET))(this);
		}

		::System::Void SyncCameraTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_SYNCCAMERATRANSFORM_OFFSET))(this);
		}

		::System::Void StartLevelProcess(::System::String* graphPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STARTLEVELPROCESS_OFFSET))(this, graphPath);
		}

		::System::Void StartDefaultLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STARTDEFAULTLEVELGRAPH_OFFSET))(this);
		}

		::System::Void StartDefaultLevelGraph_Single()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STARTDEFAULTLEVELGRAPH_SINGLE_OFFSET))(this);
		}

		::System::Void StartGameplay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STARTGAMEPLAY_OFFSET))(this);
		}

		::System::Void PostLevelGraphStartEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_POSTLEVELGRAPHSTARTEVENT_OFFSET))(this);
		}

		::System::Void StopLevelProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STOPLEVELPROCESS_OFFSET))(this);
		}

		::System::Void StartSingleProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_STARTSINGLEPROCESS_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void FHHMMCALHFO(::MoleMole::ConfigUICinema* IOBMKCFAIBF)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICinema*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_FHHMMCALHFO_OFFSET))(this, IOBMKCFAIBF);
		}

		::System::Void ELIGPFCOBIE(::MoleMole::CinemaNpcOffsetSo* IOBMKCFAIBF)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaNpcOffsetSo*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ELIGPFCOBIE_OFFSET))(this, IOBMKCFAIBF);
		}

		::System::Void OCENFECLKIO(::MoleMole::CinemaNpcOffsetSo* IOBMKCFAIBF)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaNpcOffsetSo*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_OCENFECLKIO_OFFSET))(this, IOBMKCFAIBF);
		}

		::System::Collections::Generic::List_1<::System::String*>* ODAPFFDFLBH()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYPAGECONTROLLER_ODAPFFDFLBH_OFFSET))(this);
		}
	};
}
