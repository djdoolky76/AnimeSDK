#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNpcAvatarGenericParams.h"
#include "unitysdk/FNpcAvatarGenericParams_AccessoryInfo.h"
#include "unitysdk/NPCAvatarMeshAssetsSO_FNpcAudioSettings.h"
#include "unitysdk/System/Object.h"

class NPCAvatarAudioAssetsSO;
class NPCAvatarMeshAssetsSO;
namespace Foundation::Unreal { class FGameplayTagQuery; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReference; }
namespace NPCCrowd::Avatar { class NPCEmotionControl; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define NPCAVATARRUNTIMEDATA_CLEAN_OFFSET UNITYSDK_OFFSET(0x13179280)
#define NPCAVATARRUNTIMEDATA_GET_COLLISIONDITHER_OFFSET UNITYSDK_OFFSET(0x13178B60)
#define NPCAVATARRUNTIMEDATA_GET_ENABLEAUDIO_OFFSET UNITYSDK_OFFSET(0x13178B70)
#define NPCAVATARRUNTIMEDATA_GET_ISFIXTAG_OFFSET UNITYSDK_OFFSET(0x13178B80)
#define NPCAVATARRUNTIMEDATA_GET_STARTFADEOUT_OFFSET UNITYSDK_OFFSET(0x13178B50)
#define NPCAVATARRUNTIMEDATA_REBUILDAUDIOANDGAMEPLAYTAGACTIONCACHE_OFFSET UNITYSDK_OFFSET(0x13178F10)
#define NPCAVATARRUNTIMEDATA_RELEASEEMOTION_OFFSET UNITYSDK_OFFSET(0x13179220)
#define NPCAVATARRUNTIMEDATA_SETCOLLISIONDITHER_OFFSET UNITYSDK_OFFSET(0x13178CE0)
#define NPCAVATARRUNTIMEDATA_SETENABLEAUDIO_OFFSET UNITYSDK_OFFSET(0x13178DB0)
#define NPCAVATARRUNTIMEDATA_SETSTARTFADEOUT_OFFSET UNITYSDK_OFFSET(0x13178C10)
#define NPCAVATARRUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13179470)

inline static constexpr unsigned int NPCAvatarRuntimeData_TypeDefinitionIndex = 89274;

class NPCAvatarRuntimeData : public ::System::Object
{
public:
	::System::Threading::CancellationTokenSource* avatarCts; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* mergedGameplayTagMaskActions; // 0x18
	::NPCCrowd::Avatar::NPCAvatarGOReference* avatarGoRef; // 0x20
	::NPCCrowd::Avatar::NPCEmotionControl* emotionControl; // 0x28
	::Foundation::Unreal::FGameplayTagQuery* blackTagQuery; // 0x30
	::FNpcAvatarGenericParams avatarParams; // 0x38
	::NPCAvatarAudioAssetsSO* avatarAudioAssetSo; // 0xD8
	::System::Collections::Generic::List_1<::System::Int32>* unionLogicTags; // 0xE0
	::Foundation::Unreal::FGameplayTagQuery* whiteTagQuery; // 0xE8
	::NPCAvatarMeshAssetsSO* avatarAssetSo; // 0xF0
	::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>* accessoryInfos; // 0xF8
	::NPCAvatarMeshAssetsSO_FNpcAudioSettings resolvedAudioSettings; // 0x100
	::System::Int32 avatarRandomLibID; // 0x138
	::System::Int32 populationID; // 0x13C
	::System::Int32 audioTagActionStartIndex; // 0x140
	::System::Int32 avatarParamsID; // 0x144
	::System::Boolean isPathNpc; // 0x148
	::System::Boolean shouldFadeInOnCreate; // 0x149
	::System::Boolean _startFadeOut; // 0x14A
	::System::Boolean _enableAudio; // 0x14B
	::System::Boolean shouldFadeOutOnDestroy; // 0x14C
	::System::Boolean _collisionDither; // 0x14D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARRUNTIMEDATA__CTOR_OFFSET))(this);
	}

	::System::Boolean get_startFadeOut()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARRUNTIMEDATA_GET_STARTFADEOUT_OFFSET))(this);
	}

	::System::Boolean get_collisionDither()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARRUNTIMEDATA_GET_COLLISIONDITHER_OFFSET))(this);
	}

	::System::Boolean get_enableAudio()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARRUNTIMEDATA_GET_ENABLEAUDIO_OFFSET))(this);
	}

	::System::Boolean get_isFixTag()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARRUNTIMEDATA_GET_ISFIXTAG_OFFSET))(this);
	}

	::System::Boolean SetStartFadeOut(::System::UInt32 entityId, ::System::Boolean value, ::System::Boolean forceDirty)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCAVATARRUNTIMEDATA_SETSTARTFADEOUT_OFFSET))(this, entityId, value, forceDirty);
	}

	::System::Boolean SetCollisionDither(::System::UInt32 entityId, ::System::Boolean value, ::System::Boolean forceDirty)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCAVATARRUNTIMEDATA_SETCOLLISIONDITHER_OFFSET))(this, entityId, value, forceDirty);
	}

	::System::Boolean SetEnableAudio(::System::UInt32 entityId, ::System::Boolean value, ::System::Boolean forceDirty)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCAVATARRUNTIMEDATA_SETENABLEAUDIO_OFFSET))(this, entityId, value, forceDirty);
	}

	::System::Void RebuildAudioAndGameplayTagActionCache()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARRUNTIMEDATA_REBUILDAUDIOANDGAMEPLAYTAGACTIONCACHE_OFFSET))(this);
	}

	::System::Void ReleaseEmotion()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARRUNTIMEDATA_RELEASEEMOTION_OFFSET))(this);
	}

	::System::Void Clean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARRUNTIMEDATA_CLEAN_OFFSET))(this);
	}
};
