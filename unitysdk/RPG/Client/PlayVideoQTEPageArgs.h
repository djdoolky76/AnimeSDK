#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOJOBHMEEIH;
class KGABIOFEDBP;
class OLBEPOHNEPC;
namespace System { class String; }

#define RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A9C30)
#define RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A9B90)
#define RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_CANSKIP_OFFSET UNITYSDK_OFFSET(0x1E2A9E80)
#define RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_CUTIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1E2A9F00)
#define RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_ENDBGMEMOTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1E2A9EB0)
#define RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_ENDVIDEOID_OFFSET UNITYSDK_OFFSET(0x1E2A9E60)
#define RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_ISMUTEBGM_OFFSET UNITYSDK_OFFSET(0x1E2A9EC0)
#define RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_LOOPBGMEMOTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1E2A9EA0)
#define RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_LOOPVIDEOID_OFFSET UNITYSDK_OFFSET(0x1E2A9E50)
#define RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_MAXWAITPLAYERTIME_OFFSET UNITYSDK_OFFSET(0x1E2A9F30)
#define RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_MUTEBGMWITHFADEOUT_OFFSET UNITYSDK_OFFSET(0x1E2A9ED0)
#define RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_PERFORMANCEID_OFFSET UNITYSDK_OFFSET(0x1E2A9E70)
#define RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_QTEAPPEARTIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x1E2A9F10)
#define RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_QTEINPUTDISABLETIME_OFFSET UNITYSDK_OFFSET(0x1E2A9F20)
#define RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_QTEPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1E2A9EF0)
#define RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_STARTBGMEMOTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1E2A9E90)
#define RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_STARTVIDEOID_OFFSET UNITYSDK_OFFSET(0x1E2A9E40)
#define RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_WITHOUTCHANGEAUDIO_OFFSET UNITYSDK_OFFSET(0x1E2A9EE0)
#define RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_NOTIFYCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1E2A9CC0)
#define RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_NOTIFYFAILED_OFFSET UNITYSDK_OFFSET(0x1E2A9D40)
#define RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_NOTIFYSKIPREQUESTED_OFFSET UNITYSDK_OFFSET(0x1E2A9DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayVideoQTEPageArgs_TypeDefinitionIndex = 74938;

	class PlayVideoQTEPageArgs : public ::System::Object
	{
	public:
		::System::String* _StartBGMEmotionState_k__BackingField; // 0x10
		::System::String* _EndBGMEmotionState_k__BackingField; // 0x18
		::System::String* _LoopBGMEmotionState_k__BackingField; // 0x20
		::BOJOBHMEEIH* _Messenger; // 0x28
		::System::String* _QTEPrefabPath_k__BackingField; // 0x30
		::System::UInt32 _PerformanceID_k__BackingField; // 0x38
		::System::UInt32 _EndVideoID_k__BackingField; // 0x3C
		::System::Single _MaxWaitPlayerTime_k__BackingField; // 0x40
		::System::Boolean _CutImmediately_k__BackingField; // 0x44
		::System::Boolean _WithoutChangeAudio_k__BackingField; // 0x45
		::System::Byte _padding0[0x2];
		::System::Single _QTEInputDisableTime_k__BackingField; // 0x48
		::System::UInt32 _LoopVideoID_k__BackingField; // 0x4C
		::System::Boolean _CanSkip_k__BackingField; // 0x50
		::System::Boolean _IsMuteBGM_k__BackingField; // 0x51
		::System::Boolean _MuteBGMWithFadeOut_k__BackingField; // 0x52
		::System::Byte _padding1[0x1];
		::System::Single _QTEAppearTimeOffset_k__BackingField; // 0x54
		::System::UInt32 _StartVideoID_k__BackingField; // 0x58
		::System::Void _ctor(::OLBEPOHNEPC* a1, ::System::UInt32 a2, ::System::Boolean a3, ::BOJOBHMEEIH* a4)
		{
			return ((::System::Void(*)(::PVOID, ::OLBEPOHNEPC*, ::System::UInt32, ::System::Boolean, ::BOJOBHMEEIH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::KGABIOFEDBP* a1, ::System::UInt32 a2, ::System::Boolean a3, ::BOJOBHMEEIH* a4)
		{
			return ((::System::Void(*)(::PVOID, ::KGABIOFEDBP*, ::System::UInt32, ::System::Boolean, ::BOJOBHMEEIH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NotifyComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_NOTIFYCOMPLETE_OFFSET))(this);
		}

		::System::Void NotifyFailed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_NOTIFYFAILED_OFFSET))(this);
		}

		::System::Void NotifySkipRequested()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_NOTIFYSKIPREQUESTED_OFFSET))(this);
		}

		::System::UInt32 get_StartVideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_STARTVIDEOID_OFFSET))(this);
		}

		::System::UInt32 get_LoopVideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_LOOPVIDEOID_OFFSET))(this);
		}

		::System::UInt32 get_EndVideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_ENDVIDEOID_OFFSET))(this);
		}

		::System::UInt32 get_PerformanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_PERFORMANCEID_OFFSET))(this);
		}

		::System::Boolean get_CanSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_CANSKIP_OFFSET))(this);
		}

		::System::String* get_StartBGMEmotionState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_STARTBGMEMOTIONSTATE_OFFSET))(this);
		}

		::System::String* get_LoopBGMEmotionState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_LOOPBGMEMOTIONSTATE_OFFSET))(this);
		}

		::System::String* get_EndBGMEmotionState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_ENDBGMEMOTIONSTATE_OFFSET))(this);
		}

		::System::Boolean get_IsMuteBGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_ISMUTEBGM_OFFSET))(this);
		}

		::System::Boolean get_MuteBGMWithFadeOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_MUTEBGMWITHFADEOUT_OFFSET))(this);
		}

		::System::Boolean get_WithoutChangeAudio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_WITHOUTCHANGEAUDIO_OFFSET))(this);
		}

		::System::String* get_QTEPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_QTEPREFABPATH_OFFSET))(this);
		}

		::System::Boolean get_CutImmediately()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_CUTIMMEDIATELY_OFFSET))(this);
		}

		::System::Single get_QTEAppearTimeOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_QTEAPPEARTIMEOFFSET_OFFSET))(this);
		}

		::System::Single get_QTEInputDisableTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_QTEINPUTDISABLETIME_OFFSET))(this);
		}

		::System::Single get_MaxWaitPlayerTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEPAGEARGS_GET_MAXWAITPLAYERTIME_OFFSET))(this);
		}

	};
}
