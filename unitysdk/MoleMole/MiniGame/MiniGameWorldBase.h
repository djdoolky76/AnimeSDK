#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJIEMKHJEEM.h"
#include "unitysdk/MoleMole/MiniGame/MiniGameContext.h"
#include "unitysdk/System/Object.h"

class CEACIPJGIEH;
class DACHMOCMEGG;
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }

#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_CREATERT_OFFSET UNITYSDK_OFFSET(0x15AB53E0)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_GETARCADEGAMEID_OFFSET UNITYSDK_OFFSET(0x15AB57F0)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_GET_ARCADEGAMECONFIG_OFFSET UNITYSDK_OFFSET(0x15AB4C10)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_GET_MINIGAMERT_OFFSET UNITYSDK_OFFSET(0x15AB53C0)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ISGAMEENDSTATE_OFFSET UNITYSDK_OFFSET(0x15AB5100)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONCREATE_OFFSET UNITYSDK_OFFSET(0x15AB4CD0)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15AB5040)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x15AB4DD0)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x15AB4F10)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONLOADFINISH_OFFSET UNITYSDK_OFFSET(0x15AB50C0)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONMULTIPLAYERINFOBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x15AB5890)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONTITLEVIDEOPLAYSTART_OFFSET UNITYSDK_OFFSET(0x15AB5080)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONUFIGHTCONNECTSUCCESS_OFFSET UNITYSDK_OFFSET(0x15AB5190)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONUFIGHTDISCONNECT_OFFSET UNITYSDK_OFFSET(0x15AB51D0)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONUFIGHTRECONNECTSUCCESS_OFFSET UNITYSDK_OFFSET(0x15AB5250)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONUFIGHTSTARTRECONNECT_OFFSET UNITYSDK_OFFSET(0x15AB5210)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONWILLEXIT_OFFSET UNITYSDK_OFFSET(0x15AB4ED0)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_PAUSE_OFFSET UNITYSDK_OFFSET(0x15AB5840)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_REGISTERLOADFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0x15AB5140)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_REGISTERSWITCHARCADEUISHOWSTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x15AB5290)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_RELEASERT_OFFSET UNITYSDK_OFFSET(0x15AB55C0)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_SETARCADEGAMEID_OFFSET UNITYSDK_OFFSET(0x15AB5770)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_SETGAMEFINISHACTION_OFFSET UNITYSDK_OFFSET(0x15AB4C80)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_SETGAMEOVERACTION_OFFSET UNITYSDK_OFFSET(0x15AB4C30)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_SET_ARCADEGAMECONFIG_OFFSET UNITYSDK_OFFSET(0x15AB4C20)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_SET_MINIGAMERT_OFFSET UNITYSDK_OFFSET(0x15AB53D0)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_SWITCHARCADEUISHOWSTAGE_OFFSET UNITYSDK_OFFSET(0x15AB52E0)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15AB5C30)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x15AB5C20)

namespace MoleMole::MiniGame
{
	inline static constexpr unsigned int MiniGameWorldBase_TypeDefinitionIndex = 82592;

	class MiniGameWorldBase : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::DACHMOCMEGG*>** StaticGet_logicDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::DACHMOCMEGG*>**)Il2CppClass::FromTypeDefinitionIndex(MiniGameWorldBase_TypeDefinitionIndex)->GetStaticField(0x4F8B0);
		}
		::System::Action_1<::System::Boolean>* gameOverAction; // 0x10
		::System::Action_3<::System::Boolean, ::System::Action_1<::System::Boolean>*, ::System::Action_1<::System::Boolean>*>* _onSwitchArcadeUIShowStageCB; // 0x18
		::MoleMole::MiniGame::MiniGameContext gameContext; // 0x20
		::DACHMOCMEGG* gameLogic; // 0x60
		::UnityEngine::RenderTexture* _MiniGameRT_k__BackingField; // 0x68
		::CEACIPJGIEH* _ArcadeGameConfig_k__BackingField; // 0x70
		::System::Action* gameFinishAction; // 0x78
		::System::UInt32 arcadeGameID; // 0x80
		::System::Boolean pauseStatus; // 0x84
		::System::Boolean oriPause; // 0x85

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE__CCTOR_OFFSET))();
		}

		::CEACIPJGIEH* get_ArcadeGameConfig()
		{
			return ((::CEACIPJGIEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_GET_ARCADEGAMECONFIG_OFFSET))(this);
		}

		::System::Void set_ArcadeGameConfig(::CEACIPJGIEH* value)
		{
			return ((::System::Void(*)(::PVOID, ::CEACIPJGIEH*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_SET_ARCADEGAMECONFIG_OFFSET))(this, value);
		}

		::System::Void SetGameOverAction(::System::Action_1<::System::Boolean>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_SETGAMEOVERACTION_OFFSET))(this, action);
		}

		::System::Void SetGameFinishAction(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_SETGAMEFINISHACTION_OFFSET))(this, action);
		}

		::System::Void OnCreate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONCREATE_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONENTER_OFFSET))(this);
		}

		::System::Void OnWillExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONWILLEXIT_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONEXIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnTitleVideoPlayStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONTITLEVIDEOPLAYSTART_OFFSET))(this);
		}

		::System::Void OnLoadFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONLOADFINISH_OFFSET))(this);
		}

		::System::Boolean IsGameEndState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ISGAMEENDSTATE_OFFSET))(this);
		}

		::System::Void RegisterLoadFinishCallback(::System::Action* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_REGISTERLOADFINISHCALLBACK_OFFSET))(this, cb);
		}

		::System::Void OnUFightConnectSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONUFIGHTCONNECTSUCCESS_OFFSET))(this);
		}

		::System::Void OnUFightDisconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONUFIGHTDISCONNECT_OFFSET))(this);
		}

		::System::Void OnUFightStartReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONUFIGHTSTARTRECONNECT_OFFSET))(this);
		}

		::System::Void OnUFightReconnectSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONUFIGHTRECONNECTSUCCESS_OFFSET))(this);
		}

		::System::Void RegisterSwitchArcadeUIShowStageCallback(::System::Action_3<::System::Boolean, ::System::Action_1<::System::Boolean>*, ::System::Action_1<::System::Boolean>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Boolean, ::System::Action_1<::System::Boolean>*, ::System::Action_1<::System::Boolean>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_REGISTERSWITCHARCADEUISHOWSTAGECALLBACK_OFFSET))(this, callback);
		}

		::System::Void SwitchArcadeUIShowStage(::System::Boolean isShowUI, ::System::Action_1<::System::Boolean>* blackScreenCB, ::System::Action_1<::System::Boolean>* finishCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action_1<::System::Boolean>*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_SWITCHARCADEUISHOWSTAGE_OFFSET))(this, isShowUI, blackScreenCB, finishCB);
		}

		::UnityEngine::RenderTexture* get_MiniGameRT()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_GET_MINIGAMERT_OFFSET))(this);
		}

		::System::Void set_MiniGameRT(::UnityEngine::RenderTexture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_SET_MINIGAMERT_OFFSET))(this, value);
		}

		::UnityEngine::NAPRenderPipeline0::RTHandle* CreateRT(::System::Boolean useAlpha, ::System::Int32 width, ::System::Int32 height, ::System::String* name)
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_CREATERT_OFFSET))(this, useAlpha, width, height, name);
		}

		::System::Void ReleaseRT()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_RELEASERT_OFFSET))(this);
		}

		::System::Void SetArcadeGameID(::System::UInt32 arcadeGameID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_SETARCADEGAMEID_OFFSET))(this, arcadeGameID);
		}

		::System::UInt32 GetArcadeGameID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_GETARCADEGAMEID_OFFSET))(this);
		}

		::System::Void Pause(::System::Boolean pauseState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_PAUSE_OFFSET))(this, pauseState);
		}

		::System::Void OnMultiPlayerInfoBtnClicked(::AJIEMKHJEEM gameType)
		{
			return ((::System::Void(*)(::PVOID, ::AJIEMKHJEEM))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONMULTIPLAYERINFOBTNCLICKED_OFFSET))(this, gameType);
		}
	};
}
