#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IONGFDBBCIF;
class JGAGPMAMFPH;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveChatService; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveDanmuBase; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveDanmuContentData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveImgDanmuService; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC50A970)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_CTOR_OFFSET UNITYSDK_OFFSET(0xC50CDC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_HIDEDANMU_OFFSET UNITYSDK_OFFSET(0xC50A8B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC50AF50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC50B4C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_PAUSEDANMU_OFFSET UNITYSDK_OFFSET(0xC50A810)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_RESUMEDANMU_OFFSET UNITYSDK_OFFSET(0xC50A860)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_SETCHATSERVICE_OFFSET UNITYSDK_OFFSET(0xC50A5E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_SETIMGDANMUSERVICE_OFFSET UNITYSDK_OFFSET(0xC50A7B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_SHOWDANMU_OFFSET UNITYSDK_OFFSET(0xC50A910)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_UPDATEPHASE_OFFSET UNITYSDK_OFFSET(0xC50A640)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC50ABD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__CLEANENDEDDANMUS_OFFSET UNITYSDK_OFFSET(0xC50B270)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__GETLINEOCCUPANTS_OFFSET UNITYSDK_OFFSET(0xC50B710)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__GETLINEWORLDYS_OFFSET UNITYSDK_OFFSET(0xC50BB30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__GETSTARWORLDY_OFFSET UNITYSDK_OFFSET(0xC50B7C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__GETUID_OFFSET UNITYSDK_OFFSET(0xC50CD70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__HASEMPTYLINETOPLAY_OFFSET UNITYSDK_OFFSET(0xC50B5D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__INITIALIZEIMAGELINES_OFFSET UNITYSDK_OFFSET(0xC50BE20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__INITIALIZETEXTLINES_OFFSET UNITYSDK_OFFSET(0xC50BBE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__ISPAUSEDBYTIMESCALELOCK_OFFSET UNITYSDK_OFFSET(0xC50B530)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__ISPAUSED_OFFSET UNITYSDK_OFFSET(0xC50AE90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__SPAWNDANMU_OFFSET UNITYSDK_OFFSET(0xC50C9C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__STARSHOWDANMU_OFFSET UNITYSDK_OFFSET(0xC50C800)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__TRYFETCHDANMUTOSHOW_OFFSET UNITYSDK_OFFSET(0xC50B210)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__TRYFETCHNEWIMAGEDANMU_OFFSET UNITYSDK_OFFSET(0xC50C420)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__TRYFETCHNEWTEXTDANMU_OFFSET UNITYSDK_OFFSET(0xC50C610)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__TRYSHOWPENDINGIMAGEDANMU_OFFSET UNITYSDK_OFFSET(0xC50C060)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__TRYSHOWPENDINGTEXTDANMU_OFFSET UNITYSDK_OFFSET(0xC50C240)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__UPDATELINEOCCUPANTS_OFFSET UNITYSDK_OFFSET(0xC50B0D0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTextDanmuSpawner_TypeDefinitionIndex = 75190;

	class IdleLiveTextDanmuSpawner : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveChatService* _ChatService; // 0x18
		::RPG::Client::ActivityIdleLive::IdleLiveImgDanmuService* _ImgDanmuService; // 0x20
		::UnityEngine::RectTransform* _Edge; // 0x28
		::RPG::Client::PrefabLoadMeta* _TextLoader; // 0x30
		::RPG::Client::PrefabLoadMeta* _ImgLoader; // 0x38
		::System::Collections::Generic::Queue_1<::JGAGPMAMFPH*>* _PendingTextDanmus; // 0x40
		::System::Collections::Generic::Queue_1<::JGAGPMAMFPH*>* _PendingImageDanmus; // 0x48
		::Il2CppArray<::UnityEngine::Vector3>* _WorldCorners; // 0x50
		::System::UInt32 _Uid; // 0x58
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDanmuBase*>* _CreatedDanmus; // 0x60
		::UnityEngine::RectTransform* _TextRootRect; // 0x68
		::UnityEngine::RectTransform* _ImgRootRect; // 0x70
		::System::Boolean _TextLinesInitialized; // 0x78
		::System::Boolean _ImageLinesInitialized; // 0x79
		::System::Byte _padding1[0x2];
		::System::Int32 _TextLineCount; // 0x7C
		::System::Int32 _ImageLineCount; // 0x80
		::System::Single _TextLineSpacing; // 0x84
		::System::Single _ImageLineSpacing; // 0x88
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::List_1<::System::Single>* _TextLineWorldYs; // 0x90
		::System::Collections::Generic::List_1<::System::Single>* _ImageLineWorldYs; // 0x98
		::Il2CppArray<::JGAGPMAMFPH*>* _TextLineOccupants; // 0xA0
		::Il2CppArray<::JGAGPMAMFPH*>* _ImageLineOccupants; // 0xA8
		::System::Boolean _IsManualPaused; // 0xB0
		::System::Byte _padding3[0x7];
		::IONGFDBBCIF* _PoolMgr; // 0xB8
		// static const ::System::String* _TEXT_DANMU_PREFAB_PATH; // 0x0
		// static const ::System::String* _IMAGE_DANMU_PREFAB_PATH; // 0x0
		// static const ::System::String* _IMAGE_EMOJI_DANMU_PREFAB_PATH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_CTOR_OFFSET))(this);
		}

		::System::Void SetChatService(::RPG::Client::ActivityIdleLive::IdleLiveChatService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveChatService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_SETCHATSERVICE_OFFSET))(this, a1);
		}

		::System::Void UpdatePhase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_UPDATEPHASE_OFFSET))(this);
		}

		::System::Void SetImgDanmuService(::RPG::Client::ActivityIdleLive::IdleLiveImgDanmuService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveImgDanmuService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_SETIMGDANMUSERVICE_OFFSET))(this, a1);
		}

		::System::Void PauseDanmu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_PAUSEDANMU_OFFSET))(this);
		}

		::System::Void ResumeDanmu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_RESUMEDANMU_OFFSET))(this);
		}

		::System::Void HideDanmu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_HIDEDANMU_OFFSET))(this);
		}

		::System::Void ShowDanmu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_SHOWDANMU_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_ONDESTROY_OFFSET))(this);
		}

		::System::Void _CleanEndedDanmus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__CLEANENDEDDANMUS_OFFSET))(this);
		}

		::System::Boolean _IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__ISPAUSED_OFFSET))(this);
		}

		::System::Boolean _IsPausedByTimeScaleLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__ISPAUSEDBYTIMESCALELOCK_OFFSET))(this);
		}

		::System::Void _UpdateLineOccupants()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__UPDATELINEOCCUPANTS_OFFSET))(this);
		}

		::System::Boolean _HasEmptyLineToPlay(::JGAGPMAMFPH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JGAGPMAMFPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__HASEMPTYLINETOPLAY_OFFSET))(this, a1);
		}

		::System::Single _GetStarWorldY(::JGAGPMAMFPH* a1)
		{
			return ((::System::Single(*)(::PVOID, ::JGAGPMAMFPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__GETSTARWORLDY_OFFSET))(this, a1);
		}

		::Il2CppArray<::JGAGPMAMFPH*>* _GetLineOccupants(::JGAGPMAMFPH* a1)
		{
			return ((::Il2CppArray<::JGAGPMAMFPH*>*(*)(::PVOID, ::JGAGPMAMFPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__GETLINEOCCUPANTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Single>* _GetLineWorldYs(::JGAGPMAMFPH* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID, ::JGAGPMAMFPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__GETLINEWORLDYS_OFFSET))(this, a1);
		}

		::System::Void _InitializeTextLines(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__INITIALIZETEXTLINES_OFFSET))(this, a1);
		}

		::System::Void _InitializeImageLines(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__INITIALIZEIMAGELINES_OFFSET))(this, a1);
		}

		::System::Void _TryFetchDanmuToShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__TRYFETCHDANMUTOSHOW_OFFSET))(this);
		}

		::System::Void _TryShowPendingImageDanmu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__TRYSHOWPENDINGIMAGEDANMU_OFFSET))(this);
		}

		::System::Void _TryShowPendingTextDanmu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__TRYSHOWPENDINGTEXTDANMU_OFFSET))(this);
		}

		::System::Void _TryFetchNewImageDanmu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__TRYFETCHNEWIMAGEDANMU_OFFSET))(this);
		}

		::System::Void _TryFetchNewTextDanmu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__TRYFETCHNEWTEXTDANMU_OFFSET))(this);
		}

		::System::Void _StarShowDanmu(::JGAGPMAMFPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGAGPMAMFPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__STARSHOWDANMU_OFFSET))(this, a1);
		}

		::JGAGPMAMFPH* _SpawnDanmu(::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData* a1)
		{
			return ((::JGAGPMAMFPH*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__SPAWNDANMU_OFFSET))(this, a1);
		}

		::System::UInt32 _GetUid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__GETUID_OFFSET))(this);
		}

	};
}
