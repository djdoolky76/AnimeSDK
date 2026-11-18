#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarAudioCommandFlags.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarDitherCommandFlags.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleSubSystemBase.h"
#include "unitysdk/ProtoScript/TimePeriodType.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarAudioDecisionFragment.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarDitherDecisionFragment.h"
#include "unitysdk/NPCCrowd/Avatar/NPCAvatarSubSystem___c__DisplayClass30_0.h"

class COCJHGGDBCA;
class DIAEPBNFKBO;
class GIGFDLPMNND;
class GKNGGHDFOIE;
class NPCAvatarRuntimeData;
namespace MoleMole::Battle { class Entity; }
namespace NPCCrowd { class NPCCrowdNativeDataManager; }
namespace NPCCrowd { class NPCIDGeneratorInt; }
namespace NPCCrowd::Ability { class NPCAbility; }
namespace NPCCrowd::Avatar { class NPCCrowdNativeAvatarAudioData; }
namespace NPCCrowd::Avatar { class NPCCrowdNativeAvatarDitherData; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class EventArgs; }

#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_APPLYAUDIODECISION_OFFSET UNITYSDK_OFFSET(0xB2DE1B0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_APPLYAVATARAUDIODATAORIENTED_OFFSET UNITYSDK_OFFSET(0xB2DDA10)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_APPLYAVATARDITHERDATAORIENTED_OFFSET UNITYSDK_OFFSET(0xB2DD790)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_APPLYDITHERDECISION_OFFSET UNITYSDK_OFFSET(0xB2DDCD0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_CLEARSTATICSTATEONSUBSYSTEMREGISTRATION_OFFSET UNITYSDK_OFFSET(0xB2D9DF0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_COMPLETEANDAPPLYDATAORIENTEDAVATAR_OFFSET UNITYSDK_OFFSET(0xB2DD640)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xB2DA110)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ENSURENATIVECROWDINDEX_OFFSET UNITYSDK_OFFSET(0xB2DC3F0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_HASAUDIOCOMMANDFLAG_OFFSET UNITYSDK_OFFSET(0xB2DE9F0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_HASDITHERCOMMANDFLAG_OFFSET UNITYSDK_OFFSET(0xB2DE780)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITACCESSORYINFO_OFFSET UNITYSDK_OFFSET(0xB2DAD40)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITANIMATION_OFFSET UNITYSDK_OFFSET(0xB2DB020)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITAUDIO_OFFSET UNITYSDK_OFFSET(0xB2DAE80)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITLOOKATIK_OFFSET UNITYSDK_OFFSET(0xB2DCC20)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0xB2D9E40)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ISDATAORIENTEDAVATARENABLED_OFFSET UNITYSDK_OFFSET(0xB2DD590)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_MARKAVATARAUDIOCONFIGDIRTY_1_OFFSET UNITYSDK_OFFSET(0xB2DD510)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_MARKAVATARAUDIOCONFIGDIRTY_OFFSET UNITYSDK_OFFSET(0xB2DD450)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_MARKAVATARDITHERCONFIGDIRTY_1_OFFSET UNITYSDK_OFFSET(0xB2DD3D0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_MARKAVATARDITHERCONFIGDIRTY_OFFSET UNITYSDK_OFFSET(0xB2DB880)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONBIGSCENEFLOORCHANGE_OFFSET UNITYSDK_OFFSET(0xB2E0550)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB2E00B0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONENTITYADD_OFFSET UNITYSDK_OFFSET(0xB2DA300)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0xB2DB940)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0xB2DEB00)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONMAINCITYTIMESYNCED_OFFSET UNITYSDK_OFFSET(0xB2E0370)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_REFRESHALLNPCTIMEPERIODTAGS_OFFSET UNITYSDK_OFFSET(0xB2E0420)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_RELEASEAUDIO_OFFSET UNITYSDK_OFFSET(0xB2DF2C0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_REMOVENATIVECROWDINDEX_OFFSET UNITYSDK_OFFSET(0xB2DD330)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_SYNCLODINSTANCENATIVEINDEX_OFFSET UNITYSDK_OFFSET(0xB2DD130)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_UPDATEAUDIO_OFFSET UNITYSDK_OFFSET(0xB2E0A80)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_UPDATEDITHERSTATE_OFFSET UNITYSDK_OFFSET(0xB2E07D0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0xB2DFD00)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB2E11F0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM__INITANIMATION_G__PLAYANIMATION_30_0_OFFSET UNITYSDK_OFFSET(0xB2E0600)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xB2E1200)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_INIT_OFFSET UNITYSDK_OFFSET(0xB2E1210)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB2E12A0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xB2E1330)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCAvatarSubSystem_TypeDefinitionIndex = 84810;

	class NPCAvatarSubSystem : public ::NPCCrowd::NPCCrowdModuleSubSystemBase
	{
	public:
		static ::NPCCrowd::NPCIDGeneratorInt** StaticGet_IDGen()
		{
			return (::NPCCrowd::NPCIDGeneratorInt**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarSubSystem_TypeDefinitionIndex)->GetStaticField(0x4DD10);
		}
		::System::Boolean _hasLastRefreshPeriod; // 0x20
		::System::Byte _padding0[0x3];
		::ProtoScript::TimePeriodType _lastRefreshPeriod; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void ClearStaticStateOnSubsystemRegistration()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_CLEARSTATICSTATEONSUBSYSTEMREGISTRATION_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INIT_OFFSET))(this);
		}

		::System::Void CreateFilters(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_CREATEFILTERS_OFFSET))(this, world);
		}

		static ::System::Void OnEntityAdd(::Nap::NapECS::EcsEntity* ecsEntity)
		{
			return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONENTITYADD_OFFSET))(ecsEntity);
		}

		static ::System::Void OnEntityReady(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONENTITYREADY_OFFSET))(entityId);
		}

		static ::System::Int32 EnsureNativeCrowdIndex(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Int32(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ENSURENATIVECROWDINDEX_OFFSET))(npcComp);
		}

		static ::System::Void RemoveNativeCrowdIndex(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_REMOVENATIVECROWDINDEX_OFFSET))(npcComp);
		}

		static ::System::Void SyncLodInstanceNativeIndex(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_SYNCLODINSTANCENATIVEINDEX_OFFSET))(npcComp);
		}

		static ::System::Void MarkAvatarDitherConfigDirty(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_MARKAVATARDITHERCONFIGDIRTY_OFFSET))(npcComp);
		}

		static ::System::Void MarkAvatarDitherConfigDirty_1(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_MARKAVATARDITHERCONFIGDIRTY_1_OFFSET))(entityId);
		}

		static ::System::Void MarkAvatarAudioConfigDirty(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_MARKAVATARAUDIOCONFIGDIRTY_OFFSET))(npcComp);
		}

		static ::System::Void MarkAvatarAudioConfigDirty_1(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_MARKAVATARAUDIOCONFIGDIRTY_1_OFFSET))(entityId);
		}

		static ::System::Boolean IsDataOrientedAvatarEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ISDATAORIENTEDAVATARENABLED_OFFSET))();
		}

		::System::Boolean CompleteAndApplyDataOrientedAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_COMPLETEANDAPPLYDATAORIENTEDAVATAR_OFFSET))(this);
		}

		::System::Void ApplyAvatarDitherDataOriented(::NPCCrowd::NPCCrowdNativeDataManager* nativeDataManager, ::NPCCrowd::Avatar::NPCCrowdNativeAvatarDitherData* ditherData, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCCrowdNativeDataManager*, ::NPCCrowd::Avatar::NPCCrowdNativeAvatarDitherData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_APPLYAVATARDITHERDATAORIENTED_OFFSET))(this, nativeDataManager, ditherData, count);
		}

		::System::Void ApplyAvatarAudioDataOriented(::NPCCrowd::NPCCrowdNativeDataManager* nativeDataManager, ::NPCCrowd::Avatar::NPCCrowdNativeAvatarAudioData* audioData, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCCrowdNativeDataManager*, ::NPCCrowd::Avatar::NPCCrowdNativeAvatarAudioData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_APPLYAVATARAUDIODATAORIENTED_OFFSET))(this, nativeDataManager, audioData, count);
		}

		static ::System::Void ApplyDitherDecision(::COCJHGGDBCA* npcComp, ::NPCCrowd::Avatar::NPCCrowdNativeAvatarDitherData* ditherData, ::System::Int32 nativeIndex, ::NPCCrowd::Avatar::FNPCCrowdAvatarDitherDecisionFragment decision, ::NPCCrowd::Avatar::FNPCCrowdAvatarDitherCommandFlags flags)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*, ::NPCCrowd::Avatar::NPCCrowdNativeAvatarDitherData*, ::System::Int32, ::NPCCrowd::Avatar::FNPCCrowdAvatarDitherDecisionFragment, ::NPCCrowd::Avatar::FNPCCrowdAvatarDitherCommandFlags))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_APPLYDITHERDECISION_OFFSET))(npcComp, ditherData, nativeIndex, decision, flags);
		}

		static ::System::Void ApplyAudioDecision(::COCJHGGDBCA* npcComp, ::NPCCrowd::Avatar::NPCCrowdNativeAvatarAudioData* audioData, ::System::Int32 nativeIndex, ::NPCCrowd::Avatar::FNPCCrowdAvatarAudioDecisionFragment decision, ::NPCCrowd::Avatar::FNPCCrowdAvatarAudioCommandFlags flags)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*, ::NPCCrowd::Avatar::NPCCrowdNativeAvatarAudioData*, ::System::Int32, ::NPCCrowd::Avatar::FNPCCrowdAvatarAudioDecisionFragment, ::NPCCrowd::Avatar::FNPCCrowdAvatarAudioCommandFlags))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_APPLYAUDIODECISION_OFFSET))(npcComp, audioData, nativeIndex, decision, flags);
		}

		static ::System::Boolean HasDitherCommandFlag(::NPCCrowd::Avatar::FNPCCrowdAvatarDitherCommandFlags flags, ::NPCCrowd::Avatar::FNPCCrowdAvatarDitherCommandFlags flag)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Avatar::FNPCCrowdAvatarDitherCommandFlags, ::NPCCrowd::Avatar::FNPCCrowdAvatarDitherCommandFlags))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_HASDITHERCOMMANDFLAG_OFFSET))(flags, flag);
		}

		static ::System::Boolean HasAudioCommandFlag(::NPCCrowd::Avatar::FNPCCrowdAvatarAudioCommandFlags flags, ::NPCCrowd::Avatar::FNPCCrowdAvatarAudioCommandFlags flag)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Avatar::FNPCCrowdAvatarAudioCommandFlags, ::NPCCrowd::Avatar::FNPCCrowdAvatarAudioCommandFlags))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_HASAUDIOCOMMANDFLAG_OFFSET))(flags, flag);
		}

		static ::System::Void OnEntityRemove(::Nap::NapECS::EcsEntity* ecsEntity)
		{
			return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONENTITYREMOVE_OFFSET))(ecsEntity);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnMainCityTimeSynced(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONMAINCITYTIMESYNCED_OFFSET))(this, args);
		}

		::System::Void OnBigSceneFloorChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONBIGSCENEFLOORCHANGE_OFFSET))(this, args);
		}

		::System::Void RefreshAllNpcTimePeriodTags(::ProtoScript::TimePeriodType period, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::ProtoScript::TimePeriodType, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_REFRESHALLNPCTIMEPERIODTAGS_OFFSET))(this, period, force);
		}

		static ::System::Void InitAccessoryInfo(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITACCESSORYINFO_OFFSET))(npcComp);
		}

		static ::System::Void InitAnimation(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITANIMATION_OFFSET))(npcComp);
		}

		static ::System::Boolean InitLookAtIK(::DIAEPBNFKBO* baseDataComp, ::COCJHGGDBCA* npcComp, ::GKNGGHDFOIE* voComp)
		{
			return ((::System::Boolean(*)(::DIAEPBNFKBO*, ::COCJHGGDBCA*, ::GKNGGHDFOIE*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITLOOKATIK_OFFSET))(baseDataComp, npcComp, voComp);
		}

		static ::System::Void InitAudio(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITAUDIO_OFFSET))(npcComp);
		}

		static ::System::Void ReleaseAudio(::MoleMole::Battle::Entity* entity, ::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_RELEASEAUDIO_OFFSET))(entity, npcComp);
		}

		static ::System::Void UpdateDitherState(::NPCCrowd::Ability::NPCAbility* ability, ::NPCAvatarRuntimeData* avatarRuntimeData, ::GIGFDLPMNND* materialComponent)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::NPCAbility*, ::NPCAvatarRuntimeData*, ::GIGFDLPMNND*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_UPDATEDITHERSTATE_OFFSET))(ability, avatarRuntimeData, materialComponent);
		}

		static ::System::Void UpdateAudio(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_UPDATEAUDIO_OFFSET))(npcComp);
		}

		static ::System::Boolean _InitAnimation_g__PlayAnimation_30_0(::System::Int32 animID, ::System::Int32 upperID, ::NPCCrowd::Avatar::NPCAvatarSubSystem___c__DisplayClass30_0& param_2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::NPCCrowd::Avatar::NPCAvatarSubSystem___c__DisplayClass30_0&))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM__INITANIMATION_G__PLAYANIMATION_30_0_OFFSET))(animID, upperID, param_2);
		}

		::System::Void __base_CreateFilters(::Nap::NapECS::EcsWorld* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_CREATEFILTERS_OFFSET))(this, P0);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
