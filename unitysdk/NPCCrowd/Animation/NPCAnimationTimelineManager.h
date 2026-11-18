#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDBDCCPIBKF.h"
#include "unitysdk/MEFIOFBDFFL_IECMEECNKCP.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdTimelineCommandType.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdTimelineEventConfig.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdTimelineZoneConfig.h"
#include "unitysdk/NPCCrowd/Animation/ZoneEventItem.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/System/ValueTuple_2.h"

class COCJHGGDBCA;
namespace MoleMole { class SkillCharacterAnimatorZoneData; }
namespace MoleMole::Config { class AnimatorEvent; }
namespace MoleMole::Config { class ConfigAnimatorEventPattern; }
namespace NPCCrowd { class NPCCrowdNativeDataManager; }
namespace NPCCrowd::Animation { class AnimatorEventPatternWrap; }
namespace NPCCrowd::Animation { class AnimatorZoneSegmentWrap; }
namespace NPCCrowd::Animation { class NPCCrowdNativeTimelineData; }
namespace NPCCrowd::Animation { class ProcessItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_APPENDNATIVEEVENTCONFIGS_OFFSET UNITYSDK_OFFSET(0x106BD1B0)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_APPENDNATIVEZONECONFIGS_OFFSET UNITYSDK_OFFSET(0x106BD330)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_APPLYCOMPLETEDNATIVETIMELINECOMMANDS_OFFSET UNITYSDK_OFFSET(0x106B6CC0)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_APPLYNATIVETIMELINECOMMANDS_OFFSET UNITYSDK_OFFSET(0x106BC890)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_BUILDNATIVECLIPCONFIG_OFFSET UNITYSDK_OFFSET(0x106BC240)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_CACHEPATTERN_OFFSET UNITYSDK_OFFSET(0x106B9F20)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_DISPATCHEVENTS_OFFSET UNITYSDK_OFFSET(0x106B8B70)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_DISPATCHZONES_OFFSET UNITYSDK_OFFSET(0x106B9030)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_ENTERZONE_OFFSET UNITYSDK_OFFSET(0x106B8810)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_EXITALLZONE_OFFSET UNITYSDK_OFFSET(0x106B85F0)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_GETFILENAMEWITHOUTEXTENSION_OFFSET UNITYSDK_OFFSET(0x106B7D50)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x106B6950)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_INITZONEDATA_OFFSET UNITYSDK_OFFSET(0x106BA230)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x106B6B50)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_ISNATIVETIMELINEENABLED_OFFSET UNITYSDK_OFFSET(0x106B6AD0)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x106B6EB0)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_ONENTITYADD_OFFSET UNITYSDK_OFFSET(0x106B95F0)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_ONENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0x106BD590)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_TOZONECALLBACKTYPE_OFFSET UNITYSDK_OFFSET(0x106BD160)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_TRYGETNATIVECLIPCONFIGINDEX_OFFSET UNITYSDK_OFFSET(0x106BBD50)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_TRYGETNATIVEEVENT_OFFSET UNITYSDK_OFFSET(0x106BD000)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_TRYGETNATIVEZONE_OFFSET UNITYSDK_OFFSET(0x106BD0B0)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_TRYWRITENATIVETIMELINESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x106BC600)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_UPDATECLIP_OFFSET UNITYSDK_OFFSET(0x106B7ED0)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x106B6C30)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x106BD7C0)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x106BDE60)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER___BASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x106BDEF0)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x106BDF90)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCAnimationTimelineManager_TypeDefinitionIndex = 76894;

	class NPCAnimationTimelineManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		// static const ::System::Int32 FRAME_RATE = 0x3C; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::Animation::AnimatorEventPatternWrap*>* animID2Patten; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorEvent*>* nativeEvents; // 0x20
		::System::Collections::Generic::HashSet_1<::System::String*>* cachedZoneConfig; // 0x28
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::FNPCCrowdTimelineEventConfig>* nativeNormalEventCache; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* fileNameCache; // 0x38
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::FNPCCrowdTimelineEventConfig>* nativeExitEventCache; // 0x40
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::FNPCCrowdTimelineZoneConfig>* nativeZoneCache; // 0x48
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::FDBDCCPIBKF>>* curValidEvent; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimatorZoneSegmentWrap*>*>* animID2Zones; // 0x58
		::System::Collections::Generic::HashSet_1<::System::String*>* animNameCache; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Animation::ProcessItem*>* entity2Item; // 0x68
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimatorZoneSegmentWrap*>* removeCache; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::COCJHGGDBCA*>* entity2Cmp; // 0x78
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::ZoneEventItem>* curValidZones; // 0x80
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimatorZoneSegmentWrap*>* nativeZones; // 0x88
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::FNPCCrowdTimelineEventConfig>* nativeEnterEventCache; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* nativeClipName2ConfigIndex; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* nativeClipId2ConfigIndex; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER__CTOR_OFFSET))(this);
		}

		static ::NPCCrowd::Animation::NPCAnimationTimelineManager* Get()
		{
			return ((::NPCCrowd::Animation::NPCAnimationTimelineManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_GET_OFFSET))();
		}

		static ::System::Boolean IsNativeTimelineEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_ISNATIVETIMELINEENABLED_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void DispatchEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_DISPATCHEVENTS_OFFSET))(this);
		}

		::System::Void DispatchZones(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_DISPATCHZONES_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateClip(::System::UInt32 entityId, ::NPCCrowd::Animation::ProcessItem* item, ::System::Int32 clipID, ::System::String* clipPath, ::System::Single outClipNormalizedTime, ::System::Single outAnimLength, ::System::Boolean isInit, ::System::Boolean suppressCallbacks)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::ProcessItem*, ::System::Int32, ::System::String*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_UPDATECLIP_OFFSET))(this, entityId, item, clipID, clipPath, outClipNormalizedTime, outAnimLength, isInit, suppressCallbacks);
		}

		::System::Void ExitAllZone(::NPCCrowd::Animation::ProcessItem* item, ::System::UInt32 entityId, ::System::Single outClipNormalizedTime, ::System::Boolean suppressCallbacks)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::ProcessItem*, ::System::UInt32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_EXITALLZONE_OFFSET))(this, item, entityId, outClipNormalizedTime, suppressCallbacks);
		}

		::System::Void EnterZone(::NPCCrowd::Animation::ProcessItem* item, ::System::UInt32 entityId, ::System::Single outClipNormalizedTime, ::System::Single outAnimLength, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimatorZoneSegmentWrap*>* zoneList, ::System::Boolean suppressCallbacks)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::ProcessItem*, ::System::UInt32, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimatorZoneSegmentWrap*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_ENTERZONE_OFFSET))(this, item, entityId, outClipNormalizedTime, outAnimLength, zoneList, suppressCallbacks);
		}

		::System::Void OnEntityAdd(::COCJHGGDBCA* npcCmp)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_ONENTITYADD_OFFSET))(this, npcCmp);
		}

		::System::String* GetFileNameWithoutExtension(::System::String* path)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_GETFILENAMEWITHOUTEXTENSION_OFFSET))(this, path);
		}

		::System::Boolean TryGetNativeClipConfigIndex(::COCJHGGDBCA* npcCmp, ::System::Int32 clipId, ::NPCCrowd::Animation::NPCCrowdNativeTimelineData* timelineData, ::System::Int32& clipConfigIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::COCJHGGDBCA*, ::System::Int32, ::NPCCrowd::Animation::NPCCrowdNativeTimelineData*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_TRYGETNATIVECLIPCONFIGINDEX_OFFSET))(this, npcCmp, clipId, timelineData, clipConfigIndex);
		}

		::System::Boolean TryWriteNativeTimelineSnapshot(::COCJHGGDBCA* npcComp, ::System::Int32 clipId, ::System::Single normalizedTime, ::System::Single speed, ::System::Single animLength, ::System::UInt32 frameId)
		{
			return ((::System::Boolean(*)(::PVOID, ::COCJHGGDBCA*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_TRYWRITENATIVETIMELINESNAPSHOT_OFFSET))(this, npcComp, clipId, normalizedTime, speed, animLength, frameId);
		}

		::System::Void ApplyCompletedNativeTimelineCommands(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_APPLYCOMPLETEDNATIVETIMELINECOMMANDS_OFFSET))(this, deltaTime);
		}

		::System::Void ApplyNativeTimelineCommands(::NPCCrowd::NPCCrowdNativeDataManager* nativeDataManager, ::NPCCrowd::Animation::NPCCrowdNativeTimelineData* timelineData, ::System::Single deltaTime, ::System::Int32 dispatchCount)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCCrowdNativeDataManager*, ::NPCCrowd::Animation::NPCCrowdNativeTimelineData*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_APPLYNATIVETIMELINECOMMANDS_OFFSET))(this, nativeDataManager, timelineData, deltaTime, dispatchCount);
		}

		::System::Int32 BuildNativeClipConfig(::System::String* clipName, ::NPCCrowd::Animation::NPCCrowdNativeTimelineData* timelineData)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::NPCCrowd::Animation::NPCCrowdNativeTimelineData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_BUILDNATIVECLIPCONFIG_OFFSET))(this, clipName, timelineData);
		}

		::System::Void AppendNativeEventConfigs(::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorEvent*>* source, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::FNPCCrowdTimelineEventConfig>* target)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorEvent*>*, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::FNPCCrowdTimelineEventConfig>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_APPENDNATIVEEVENTCONFIGS_OFFSET))(this, source, target);
		}

		::System::Void AppendNativeZoneConfigs(::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimatorZoneSegmentWrap*>* source, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::FNPCCrowdTimelineZoneConfig>* target)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimatorZoneSegmentWrap*>*, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::FNPCCrowdTimelineZoneConfig>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_APPENDNATIVEZONECONFIGS_OFFSET))(this, source, target);
		}

		::System::Boolean TryGetNativeEvent(::System::Int32 index, ::MoleMole::Config::AnimatorEvent*& animatorEvent)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::Config::AnimatorEvent*&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_TRYGETNATIVEEVENT_OFFSET))(this, index, animatorEvent);
		}

		::System::Boolean TryGetNativeZone(::System::Int32 index, ::NPCCrowd::Animation::AnimatorZoneSegmentWrap*& zone)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::AnimatorZoneSegmentWrap*&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_TRYGETNATIVEZONE_OFFSET))(this, index, zone);
		}

		static ::MEFIOFBDFFL_IECMEECNKCP ToZoneCallbackType(::NPCCrowd::Animation::FNPCCrowdTimelineCommandType type)
		{
			return ((::MEFIOFBDFFL_IECMEECNKCP(*)(::NPCCrowd::Animation::FNPCCrowdTimelineCommandType))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_TOZONECALLBACKTYPE_OFFSET))(type);
		}

		::System::Void CachePattern(::MoleMole::Config::ConfigAnimatorEventPattern* eventPatten)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAnimatorEventPattern*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_CACHEPATTERN_OFFSET))(this, eventPatten);
		}

		::System::Void InitZoneData(::MoleMole::SkillCharacterAnimatorZoneData* animZone)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SkillCharacterAnimatorZoneData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_INITZONEDATA_OFFSET))(this, animZone);
		}

		::System::Void OnEntityRemove(::COCJHGGDBCA* npcCmp)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_ONENTITYREMOVE_OFFSET))(this, npcCmp);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER___BASE_LATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
