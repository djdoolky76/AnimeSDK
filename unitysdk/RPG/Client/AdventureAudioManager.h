#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/RPG/Client/AudioBGMEmotionSourceType.h"
#include "unitysdk/RPG/Client/MRMusicCompositionMode.h"
#include "unitysdk/RPG/Client/MuteMazeCharacterVOReason.h"
#include "unitysdk/RPG/GameCore/AdventureCharacterVOType.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"
#include "unitysdk/RPG/GameCore/RhythmType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AkCallbackInfo;
class AkMusicSyncCallbackInfo;
class EBIKHHMFBNE;
class EEOBLFGPHNJ;
class EKFMIDBJDIA;
class HAPKJCJOJLF;
class KLGCNFLGKFP;
class NLFEAECMNAJ;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MusicRhythmSong; }
namespace RPG::Client { class PlayingMusicItemsInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MazeFloorRow; }
namespace RPG::GameCore { class MazePlaneRow; }
namespace RPG::GameCore { class PropSoundAttenuation; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_ACQUIRESOUNDATTENUATION_1_OFFSET UNITYSDK_OFFSET(0xCF2D210)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_ACQUIRESOUNDATTENUATION_OFFSET UNITYSDK_OFFSET(0xCF2D0F0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0xCF30750)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_CHECKENTITYCANPLAYSOUND_OFFSET UNITYSDK_OFFSET(0xCF2BCA0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_CLEARBGMSTATE_OFFSET UNITYSDK_OFFSET(0xCF2C5B0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xCF304A0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF28B90)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_ENTERDISTRICTBGMEMOTION_OFFSET UNITYSDK_OFFSET(0xCF2CB80)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_EXITDISTRICTBGMEMOTION_OFFSET UNITYSDK_OFFSET(0xCF2CC40)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_FORCESETCURRENTTRACKGRIDSTATE_OFFSET UNITYSDK_OFFSET(0xCF24D00)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETJUKEBOXLOUDNESS_OFFSET UNITYSDK_OFFSET(0xCF2BAB0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETJUKEBOXPLAYINGBPM_OFFSET UNITYSDK_OFFSET(0xCF2BB40)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETJUKEBOXPLAYINGPOSITION_OFFSET UNITYSDK_OFFSET(0xCF2BC40)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETJUKEBOXRYTHMTYPE_OFFSET UNITYSDK_OFFSET(0xCF2BBC0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETMRMENUPROGRESSINGRID_OFFSET UNITYSDK_OFFSET(0xCF25AA0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETSUBMISSIONIDFROMENTITY_OFFSET UNITYSDK_OFFSET(0xCF2CE70)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_ATMOSPHERECENTERAUDIOENTITY_OFFSET UNITYSDK_OFFSET(0xCF30450)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MISSIONEMOTIONSTATE_OFFSET UNITYSDK_OFFSET(0xCF30470)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MISSIONSOUNDEFFECTSTATE_OFFSET UNITYSDK_OFFSET(0xCF30480)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MRCURRENTGRID_OFFSET UNITYSDK_OFFSET(0xCF26EE0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MRGRIDDURATION_OFFSET UNITYSDK_OFFSET(0xCF27250)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MRPLAYINGSTAGEBGMEVENTID_OFFSET UNITYSDK_OFFSET(0xCF273E0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MRSTAGEBGMVISUALIZEDATA_OFFSET UNITYSDK_OFFSET(0xCF25340)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET__STEPONPOSESTATEA_OFFSET UNITYSDK_OFFSET(0xCF2FC00)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET__STEPONPOSESTATEB_OFFSET UNITYSDK_OFFSET(0xCF30060)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_INITMAZEAUDIO_OFFSET UNITYSDK_OFFSET(0xCF2A7E0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xCF273F0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONALERTEDMONSTERADD_OFFSET UNITYSDK_OFFSET(0xCF2DA50)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONALERTEDMONSTERREMOVE_OFFSET UNITYSDK_OFFSET(0xCF2DCE0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONENTERTRANSITIONDISTRICT_OFFSET UNITYSDK_OFFSET(0xCF2BE20)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONEXITTRANSITIONDISTRICT_OFFSET UNITYSDK_OFFSET(0xCF2C460)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONMONSTERDESTROY_OFFSET UNITYSDK_OFFSET(0xCF2DFA0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_OVERRIDEATMOSPHERECENTERAUDIO_OFFSET UNITYSDK_OFFSET(0xCF2D410)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_OVERRIDEFLOORDEFAULTEMOTION_OFFSET UNITYSDK_OFFSET(0xCF2C710)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_PAUSEMUSICCOMPOSITION_OFFSET UNITYSDK_OFFSET(0xCF253D0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_PLAYMAZECHARACTERVO_OFFSET UNITYSDK_OFFSET(0xCF2B120)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_PLAYMUSICCOMPOSITIONSTAGEBGM_OFFSET UNITYSDK_OFFSET(0xCF24EE0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_PLAYMUSICCOMPOSITION_OFFSET UNITYSDK_OFFSET(0xCF24860)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_PLAYVOSEQUENCE_OFFSET UNITYSDK_OFFSET(0xCF2B5A0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_REGISTERTARGETASJUKEBOXEMITTER_OFFSET UNITYSDK_OFFSET(0xCF2BA40)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_RELEASESOUNDATTENUATION_1_OFFSET UNITYSDK_OFFSET(0xCF2D390)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_RELEASESOUNDATTENUATION_OFFSET UNITYSDK_OFFSET(0xCF2D290)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_REPLACEUIMENUBGM_OFFSET UNITYSDK_OFFSET(0xCF2ABA0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_RESETGAMEPLAYBGMEMOTION_OFFSET UNITYSDK_OFFSET(0xCF2CDE0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_RESETSOUNDEFFECTSTATE_OFFSET UNITYSDK_OFFSET(0xCF2CAC0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_RESUMEMUSICCOMPOSITION_OFFSET UNITYSDK_OFFSET(0xCF25470)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0xCF26F90)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETGAMEPLAYBGMEMOTION_OFFSET UNITYSDK_OFFSET(0xCF2CCD0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETMISSIONBGMEMOTIONSTATE_OFFSET UNITYSDK_OFFSET(0xCF2C9B0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETMUSICCOMPOSITIONTOGRID_OFFSET UNITYSDK_OFFSET(0xCF25510)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETMUSICEDITMODE_OFFSET UNITYSDK_OFFSET(0xCF24800)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETMUTEMAZECHARACTERVO_OFFSET UNITYSDK_OFFSET(0xCF2B0B0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETSOUNDEFFECTSTATE_OFFSET UNITYSDK_OFFSET(0xCF2CA00)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SET_ATMOSPHERECENTERAUDIOENTITY_OFFSET UNITYSDK_OFFSET(0xCF30460)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SET_MISSIONSOUNDEFFECTSTATE_OFFSET UNITYSDK_OFFSET(0xCF30490)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_STOPALLUIMENUBGM_OFFSET UNITYSDK_OFFSET(0xCF24DA0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_STOPMUSICCOMPOSITION_OFFSET UNITYSDK_OFFSET(0xCF24D50)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_STOPUIMENUBGM_OFFSET UNITYSDK_OFFSET(0xCF2AE40)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_STOPVOSEQUENCE_OFFSET UNITYSDK_OFFSET(0xCF29A50)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SWITCHJUKEBOXTOCURRENT_OFFSET UNITYSDK_OFFSET(0xCF2B980)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SWITCHJUKEBOX_OFFSET UNITYSDK_OFFSET(0xCF2B9E0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_SWITCHUIMENUBGM_OFFSET UNITYSDK_OFFSET(0xCF24A50)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xCF2A590)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER_TRYSWITCHNORMALBGM_OFFSET UNITYSDK_OFFSET(0xCF29990)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__CREATEATMOSPHERECENTERAUDIOENTITY_OFFSET UNITYSDK_OFFSET(0xCF2D710)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__INITFLOORSETTINGS_OFFSET UNITYSDK_OFFSET(0xCF27D60)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__INITMRMUSICCOMPOSITION_OFFSET UNITYSDK_OFFSET(0xCF25C50)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ISCURRENTINTOWN_OFFSET UNITYSDK_OFFSET(0xCF2E750)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__LOGACTIVESUBMISSIONSINFO_OFFSET UNITYSDK_OFFSET(0xCF302C0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xCF2E5F0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONAUDIOGAMESTATECHANGEMUSICCOMPOSITION_OFFSET UNITYSDK_OFFSET(0xCF27080)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONAUDIOGAMESTATECHANGE_OFFSET UNITYSDK_OFFSET(0xCF2F230)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONBATTLETOMAZETRANSITFADEOUTEND_OFFSET UNITYSDK_OFFSET(0xCF2F440)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONBGMEMOTIONSTATECHANGEINTRAIN_OFFSET UNITYSDK_OFFSET(0xCF2F290)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xCF2EDA0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONLEAVEPOSESWITCHERCOLLIDER_OFFSET UNITYSDK_OFFSET(0xCF2FE30)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONMAZETOBATTLETRANSITBEGIN_OFFSET UNITYSDK_OFFSET(0xCF2F1A0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONMUSICCOMPOSITIONSYNC_OFFSET UNITYSDK_OFFSET(0xCF264E0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONMUSICRHYTHMINFOREFRESH_OFFSET UNITYSDK_OFFSET(0xCF26F40)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONMUSICSYNC_OFFSET UNITYSDK_OFFSET(0xCF30120)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONONROTATABLEREGIONIGNOREAIRLOCKCHANGED_OFFSET UNITYSDK_OFFSET(0xCF2A9E0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONOPENCHEST_OFFSET UNITYSDK_OFFSET(0xCF2E0F0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONPLAYERLOCKNEWTARGET_OFFSET UNITYSDK_OFFSET(0xCF2EE70)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONPLAYTALKFINISH_OFFSET UNITYSDK_OFFSET(0xCF2F8A0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONPLAYTALK_OFFSET UNITYSDK_OFFSET(0xCF2F850)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONPUZZLESOLVED_OFFSET UNITYSDK_OFFSET(0xCF2E4A0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONSTEPONPOSESWITCHERCOLLIDER_OFFSET UNITYSDK_OFFSET(0xCF2FCC0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONTEAMLEADERCHANGED_OFFSET UNITYSDK_OFFSET(0xCF2A090)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONTEAMLEADERSWITCHED_OFFSET UNITYSDK_OFFSET(0xCF2F8F0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONUISETMUSICSUCCESS_OFFSET UNITYSDK_OFFSET(0xCF2F110)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__PLAYSEQUENCEVOCALLBACK_OFFSET UNITYSDK_OFFSET(0xCF2FB00)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__REFRESHBGMEMOTIONSTATE_OFFSET UNITYSDK_OFFSET(0xCF2C760)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETBGMEMOTIONSTATE_OFFSET UNITYSDK_OFFSET(0xCF301B0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETCOMPOSITIONSTAGEBGMSTATE_OFFSET UNITYSDK_OFFSET(0xCF25CA0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETDEFAULTSTATES_OFFSET UNITYSDK_OFFSET(0xCF280C0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETMRCURRENTGRID_OFFSET UNITYSDK_OFFSET(0xCF24C90)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETTRACKGRIDSTATEARLIETRANSITION_OFFSET UNITYSDK_OFFSET(0xCF261C0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETTRACKGRIDSTATE_OFFSET UNITYSDK_OFFSET(0xCF256F0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__SMOOTHBUSYRTPCVALUE_OFFSET UNITYSDK_OFFSET(0xCF29F80)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__STARTBGM_OFFSET UNITYSDK_OFFSET(0xCF28720)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__TICKMONSTERALERT_OFFSET UNITYSDK_OFFSET(0xCF29B20)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__TICKMUSICCOMPOSITION_OFFSET UNITYSDK_OFFSET(0xCF25FD0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__TICKPLAYERDISTANCE_OFFSET UNITYSDK_OFFSET(0xCF2A220)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__TICKSTEPONPOSE_OFFSET UNITYSDK_OFFSET(0xCF2A6D0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER__TRYSWITCHBUSYBGM_OFFSET UNITYSDK_OFFSET(0xCF2DC10)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER___ONADVENTUREPHASEENTERED_B__92_0_OFFSET UNITYSDK_OFFSET(0xCF307B0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER___ONBATTLETOMAZETRANSITFADEOUTEND_B__100_0_OFFSET UNITYSDK_OFFSET(0xCF307D0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER___ONHIDELOADINGPAGE_B__93_0_OFFSET UNITYSDK_OFFSET(0xCF307C0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER___ONPUZZLESOLVED_B__91_0_OFFSET UNITYSDK_OFFSET(0xCF307A0)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER___PLAYSEQUENCEVOCALLBACK_B__104_0_OFFSET UNITYSDK_OFFSET(0xCF307E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureAudioManager_TypeDefinitionIndex = 61777;

	class AdventureAudioManager : public ::System::Object
	{
	public:
		::RPG::Client::MusicRhythmSong* _MRCurrentPlayingSong; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _AdventureAudioStateDict; // 0x18
		::System::String* _OverrideStepOnPoseStateA; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* _DistrictEmotionStack; // 0x28
		::System::String* _MissionEmotionState; // 0x30
		::RPG::GameCore::GameEntity* _CacheCurTeamLeader; // 0x38
		::System::String* _OverrideCenterSourceName; // 0x40
		::RPG::GameCore::GameEntity* _AtmosphereCenterAudioEntity_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::System::String*>* _UIMenuBGMStack; // 0x50
		::System::String* _OverrideFloorDefaultEmotion; // 0x58
		::RPG::Client::AdventurePhase* _Phase; // 0x60
		::System::String* _MissionSoundEffectState_k__BackingField; // 0x68
		::EEOBLFGPHNJ* _SoundAttenuationHandler; // 0x70
		::System::String* _CurrentEmotionState; // 0x78
		::Il2CppArray<::System::Boolean>* _CurrentGrids; // 0x80
		::RPG::GameCore::MazeFloorRow* _FloorRow; // 0x88
		::RPG::GameCore::MazePlaneRow* _PlanRow; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* _AlertedMonsterDict; // 0x98
		::KLGCNFLGKFP* _JukeBoxController; // 0xA0
		::System::String* _OverrideStepOnPoseStateB; // 0xA8
		::System::String* _WalkOnWallEmotionState; // 0xB0
		::NLFEAECMNAJ* _SpaceChecker; // 0xB8
		::UnityEngine::Transform* _CacheTeamLeaderTrans; // 0xC0
		::System::Object* _PendingUserParam; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _LookAtThreatVOTriggered; // 0xD0
		::System::Collections::Generic::List_1<::System::String*>* _GameplayEmotionStack; // 0xD8
		::System::Collections::Generic::Queue_1<::System::UInt32>* _VOSequence; // 0xE0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _DistrictTransitionEntities; // 0xE8
		::System::Int32 _MRStageCurrentGrid; // 0xF0
		::System::Single _RTPCRangeMin; // 0xF4
		::System::Boolean _BusyFlag; // 0xF8
		::System::Boolean _IsStepOnPoseChanged; // 0xF9
		::System::Boolean _BackgroundTalking; // 0xFA
		::System::Byte _padding0[0x1];
		::System::Single _BusyVolumeRTPCValue; // 0xFC
		::RPG::Client::MuteMazeCharacterVOReason _MuteMazeCharacterVOReason; // 0x100
		::System::Single _RTPCRangeFactor; // 0x104
		::System::UInt32 _PlayingVOSequenceID; // 0x108
		::System::Single _MRBarDuration; // 0x10C
		::System::UInt32 _CurrentTeamLeaderAvatarID; // 0x110
		::System::Single _PlayerDistanceRTPCValue; // 0x114
		::RPG::GameCore::AdventureCharacterVOType _PendingMazeVOType; // 0x118
		::System::Boolean _IsMenuBGMPlaying; // 0x11C
		::System::Boolean _IsStepOnPoseProcessing; // 0x11D
		::System::Byte _padding1[0x2];
		::System::Int32 _MRCurrentBar; // 0x120
		::RPG::Client::MRMusicCompositionMode _MusicCompositionMode; // 0x124
		::System::UInt32 _MRPlayingStageBGMEventID; // 0x128
		::System::Int32 _MRCurrentGrid; // 0x12C
		::RPG::Client::AudioBGMEmotionSourceType _CurrentEmotionSourceType; // 0x130
		::System::Single _StepOnPosePercent; // 0x134
		::System::Single _VOSequenceInterval; // 0x138
		static ::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>** StaticGet_s_VisibleReasons()
		{
			return (::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>**)UnitySDK::FromName("RPG.Client", "AdventureAudioManager")->GetStaticField(0x38CB0);
		}

		// static const ::System::String* TRACK_GRID_GROUP_NAME; // 0x0
		// static const ::System::String* TRACK_GRID_STATE_ON_NAME; // 0x0
		// static const ::System::String* TRACK_GRID_STATE_OFF_NAME; // 0x0
		// static const ::System::String* _STAGE_BGM_STATE_GROUP_NAME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_CCTOR_OFFSET))();
		}

		::System::Void SetMusicEditMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETMUSICEDITMODE_OFFSET))(this, a1);
		}

		::System::Void PlayMusicComposition(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_PLAYMUSICCOMPOSITION_OFFSET))(this, a1);
		}

		::System::Void StopMusicComposition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_STOPMUSICCOMPOSITION_OFFSET))(this);
		}

		::System::Void PlayMusicCompositionStageBGM(::System::String* a1, ::UnityEngine::GameObject* a2, ::AkCallbackType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::AkCallbackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_PLAYMUSICCOMPOSITIONSTAGEBGM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PauseMusicComposition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_PAUSEMUSICCOMPOSITION_OFFSET))(this);
		}

		::System::Void ResumeMusicComposition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_RESUMEMUSICCOMPOSITION_OFFSET))(this);
		}

		::System::Void SetMusicCompositionToGrid(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETMUSICCOMPOSITIONTOGRID_OFFSET))(this, a1);
		}

		::System::Void ForceSetCurrentTrackGridState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_FORCESETCURRENTTRACKGRIDSTATE_OFFSET))(this);
		}

		::System::Single GetMRMenuProgressInGrid(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETMRMENUPROGRESSINGRID_OFFSET))(this, a1);
		}

		::System::Void _InitMRMusicComposition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__INITMRMUSICCOMPOSITION_OFFSET))(this);
		}

		::System::Void _TickMusicComposition(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__TICKMUSICCOMPOSITION_OFFSET))(this, a1);
		}

		::System::Void _OnMusicCompositionSync(::AkMusicSyncCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AkMusicSyncCallbackInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONMUSICCOMPOSITIONSYNC_OFFSET))(this, a1);
		}

		::System::Void _OnMusicRhythmInfoRefresh(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONMUSICRHYTHMINFOREFRESH_OFFSET))(this, a1);
		}

		::System::Void _SetMRCurrentGrid(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETMRCURRENTGRID_OFFSET))(this, a1);
		}

		::System::Void _SetCompositionStageBGMState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETCOMPOSITIONSTAGEBGMSTATE_OFFSET))(this);
		}

		::System::Void _SetTrackGridState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETTRACKGRIDSTATE_OFFSET))(this);
		}

		::System::Void _SetTrackGridStatEarlieTransition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETTRACKGRIDSTATEARLIETRANSITION_OFFSET))(this);
		}

		::System::Void _OnAudioGameStateChangeMusicComposition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONAUDIOGAMESTATECHANGEMUSICCOMPOSITION_OFFSET))(this);
		}

		::System::Int32 get_MRCurrentGrid()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MRCURRENTGRID_OFFSET))(this);
		}

		::System::Single get_MRGridDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MRGRIDDURATION_OFFSET))(this);
		}

		::System::UInt32 get_MRPlayingStageBGMEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MRPLAYINGSTAGEBGMEVENTID_OFFSET))(this);
		}

		::EBIKHHMFBNE* get_MRStageBGMVisualizeData()
		{
			return ((::EBIKHHMFBNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MRSTAGEBGMVISUALIZEDATA_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_INIT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void _TickMonsterAlert(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__TICKMONSTERALERT_OFFSET))(this, a1);
		}

		::System::Void _OnTeamLeaderChanged(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONTEAMLEADERCHANGED_OFFSET))(this, a1);
		}

		::System::Void _TickPlayerDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__TICKPLAYERDISTANCE_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void TrySwitchNormalBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_TRYSWITCHNORMALBGM_OFFSET))(this);
		}

		::System::Void InitMazeAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_INITMAZEAUDIO_OFFSET))(this);
		}

		::System::Void SetAudioState(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETAUDIOSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void SwitchUIMenuBGM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SWITCHUIMENUBGM_OFFSET))(this, a1);
		}

		::System::Void ReplaceUIMenuBGM(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_REPLACEUIMENUBGM_OFFSET))(this, a1, a2);
		}

		::System::Void StopAllUIMenuBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_STOPALLUIMENUBGM_OFFSET))(this);
		}

		::System::Void StopUIMenuBGM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_STOPUIMENUBGM_OFFSET))(this, a1);
		}

		::System::Void SetMuteMazeCharacterVO(::RPG::Client::MuteMazeCharacterVOReason a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuteMazeCharacterVOReason, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETMUTEMAZECHARACTERVO_OFFSET))(this, a1, a2);
		}

		::System::Void PlayMazeCharacterVO(::RPG::GameCore::AdventureCharacterVOType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterVOType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_PLAYMAZECHARACTERVO_OFFSET))(this, a1);
		}

		::System::Void PlayVOSequence(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::System::Single a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Single, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_PLAYVOSEQUENCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StopVOSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_STOPVOSEQUENCE_OFFSET))(this);
		}

		::System::Void SwitchJukeBoxToCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SWITCHJUKEBOXTOCURRENT_OFFSET))(this);
		}

		::System::Void SwitchJukeBox(::RPG::Client::PlayingMusicItemsInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayingMusicItemsInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SWITCHJUKEBOX_OFFSET))(this, a1);
		}

		::System::Void RegisterTargetAsJukeboxEmitter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_REGISTERTARGETASJUKEBOXEMITTER_OFFSET))(this, a1);
		}

		::System::Single GetJukeBoxLoudness(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETJUKEBOXLOUDNESS_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetJukeBoxPlayingBPM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETJUKEBOXPLAYINGBPM_OFFSET))(this);
		}

		::RPG::GameCore::RhythmType GetJukeBoxRythmType()
		{
			return ((::RPG::GameCore::RhythmType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETJUKEBOXRYTHMTYPE_OFFSET))(this);
		}

		::System::Int32 GetJukeBoxPlayingPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETJUKEBOXPLAYINGPOSITION_OFFSET))(this);
		}

		::System::Boolean CheckEntityCanPlaySound(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_CHECKENTITYCANPLAYSOUND_OFFSET))(this, a1);
		}

		::System::Void OnEnterTransitionDistrict(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONENTERTRANSITIONDISTRICT_OFFSET))(this, a1);
		}

		::System::Void OnExitTransitionDistrict(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONEXITTRANSITIONDISTRICT_OFFSET))(this, a1);
		}

		::System::Void ClearBGMState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_CLEARBGMSTATE_OFFSET))(this);
		}

		::System::Void OverrideFloorDefaultEmotion(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_OVERRIDEFLOORDEFAULTEMOTION_OFFSET))(this, a1);
		}

		::System::Void SetMissionBGMEmotionState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETMISSIONBGMEMOTIONSTATE_OFFSET))(this, a1);
		}

		::System::Void SetSoundEffectState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETSOUNDEFFECTSTATE_OFFSET))(this, a1);
		}

		::System::Void ResetSoundEffectState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_RESETSOUNDEFFECTSTATE_OFFSET))(this);
		}

		::System::Void EnterDistrictBGMEmotion(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_ENTERDISTRICTBGMEMOTION_OFFSET))(this, a1);
		}

		::System::Void ExitDistrictBGMEmotion(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_EXITDISTRICTBGMEMOTION_OFFSET))(this, a1);
		}

		::System::Void SetGameplayBGMEmotion(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SETGAMEPLAYBGMEMOTION_OFFSET))(this, a1);
		}

		::System::Void ResetGameplayBGMEmotion(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_RESETGAMEPLAYBGMEMOTION_OFFSET))(this, a1);
		}

		::System::UInt32 GetSubmissionIDFromEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GETSUBMISSIONIDFROMENTITY_OFFSET))(this, a1);
		}

		::System::Void AcquireSoundAttenuation(::RPG::GameCore::PropSoundAttenuation* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropSoundAttenuation*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_ACQUIRESOUNDATTENUATION_OFFSET))(this, a1, a2);
		}

		::System::Void ReleaseSoundAttenuation(::RPG::GameCore::PropSoundAttenuation* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropSoundAttenuation*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_RELEASESOUNDATTENUATION_OFFSET))(this, a1, a2);
		}

		::System::Void AcquireSoundAttenuation_1(::RPG::GameCore::PropSoundAttenuation* a1, ::HAPKJCJOJLF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropSoundAttenuation*, ::HAPKJCJOJLF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_ACQUIRESOUNDATTENUATION_1_OFFSET))(this, a1, a2);
		}

		::System::Void ReleaseSoundAttenuation_1(::RPG::GameCore::PropSoundAttenuation* a1, ::HAPKJCJOJLF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropSoundAttenuation*, ::HAPKJCJOJLF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_RELEASESOUNDATTENUATION_1_OFFSET))(this, a1, a2);
		}

		::System::Void OverrideAtmosphereCenterAudio(::System::Nullable_1<::UnityEngine::Vector3> a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_OVERRIDEATMOSPHERECENTERAUDIO_OFFSET))(this, a1, a2);
		}

		::System::Void _InitFloorSettings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__INITFLOORSETTINGS_OFFSET))(this);
		}

		::System::Void _SetDefaultStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETDEFAULTSTATES_OFFSET))(this);
		}

		::System::Void OnAlertedMonsterAdd(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONALERTEDMONSTERADD_OFFSET))(this, a1);
		}

		::System::Void OnAlertedMonsterRemove(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONALERTEDMONSTERREMOVE_OFFSET))(this, a1);
		}

		::System::Void OnMonsterDestroy(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_ONMONSTERDESTROY_OFFSET))(this, a1);
		}

		::System::Void _CreateAtmosphereCenterAudioEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__CREATEATMOSPHERECENTERAUDIOENTITY_OFFSET))(this);
		}

		::System::Void _StartBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__STARTBGM_OFFSET))(this);
		}

		::System::Void _TrySwitchBusyBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__TRYSWITCHBUSYBGM_OFFSET))(this);
		}

		::System::Single _SmoothBusyRTPCValue(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__SMOOTHBUSYRTPCVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnOpenChest(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONOPENCHEST_OFFSET))(this, a1);
		}

		::System::Void _OnPuzzleSolved(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONPUZZLESOLVED_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _OnHideLoadingPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONHIDELOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Boolean _IsCurrentInTown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ISCURRENTINTOWN_OFFSET))(this);
		}

		::System::Void _OnUISetMusicSuccess(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONUISETMUSICSUCCESS_OFFSET))(this, a1);
		}

		::System::Void _OnMazeToBattleTransitBegin(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONMAZETOBATTLETRANSITBEGIN_OFFSET))(this, a1);
		}

		::System::Void _OnAudioGameStateChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONAUDIOGAMESTATECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnBGMEmotionStateChangeInTrain(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONBGMEMOTIONSTATECHANGEINTRAIN_OFFSET))(this, a1);
		}

		::System::Void _OnPlayerLockNewTarget(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONPLAYERLOCKNEWTARGET_OFFSET))(this, a1);
		}

		::System::Void _OnBattleToMazeTransitFadeOutEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONBATTLETOMAZETRANSITFADEOUTEND_OFFSET))(this, a1);
		}

		::System::Void _OnPlayTalk(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONPLAYTALK_OFFSET))(this, a1);
		}

		::System::Void _OnPlayTalkFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONPLAYTALKFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnTeamLeaderSwitched(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONTEAMLEADERSWITCHED_OFFSET))(this, a1);
		}

		::System::Void _PlaySequenceVOCallback(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__PLAYSEQUENCEVOCALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnOnRotatableRegionIgnoreAirlockChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONONROTATABLEREGIONIGNOREAIRLOCKCHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnStepOnPoseSwitcherCollider(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONSTEPONPOSESWITCHERCOLLIDER_OFFSET))(this, a1);
		}

		::System::Void _OnLeavePoseSwitcherCollider(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONLEAVEPOSESWITCHERCOLLIDER_OFFSET))(this, a1);
		}

		::System::Void _OnMusicSync(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__ONMUSICSYNC_OFFSET))(this, a1);
		}

		::System::Void _TickStepOnPose(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__TICKSTEPONPOSE_OFFSET))(this, a1);
		}

		::System::Void _SetBGMEmotionState(::RPG::Client::AudioBGMEmotionSourceType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioBGMEmotionSourceType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__SETBGMEMOTIONSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshBGMEmotionState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__REFRESHBGMEMOTIONSTATE_OFFSET))(this);
		}

		::System::Void _LogActiveSubmissionsInfo(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER__LOGACTIVESUBMISSIONSINFO_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* get_AtmosphereCenterAudioEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_ATMOSPHERECENTERAUDIOENTITY_OFFSET))(this);
		}

		::System::Void set_AtmosphereCenterAudioEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SET_ATMOSPHERECENTERAUDIOENTITY_OFFSET))(this, a1);
		}

		::System::String* get_MissionEmotionState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MISSIONEMOTIONSTATE_OFFSET))(this);
		}

		::System::String* get_MissionSoundEffectState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET_MISSIONSOUNDEFFECTSTATE_OFFSET))(this);
		}

		::System::Void set_MissionSoundEffectState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_SET_MISSIONSOUNDEFFECTSTATE_OFFSET))(this, a1);
		}

		::System::String* get__StepOnPoseStateA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET__STEPONPOSESTATEA_OFFSET))(this);
		}

		::System::String* get__StepOnPoseStateB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER_GET__STEPONPOSESTATEB_OFFSET))(this);
		}

		::System::Void __OnPuzzleSolved_b__91_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER___ONPUZZLESOLVED_B__91_0_OFFSET))(this);
		}

		::System::Void __OnAdventurePhaseEntered_b__92_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER___ONADVENTUREPHASEENTERED_B__92_0_OFFSET))(this);
		}

		::System::Void __OnHideLoadingPage_b__93_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER___ONHIDELOADINGPAGE_B__93_0_OFFSET))(this);
		}

		::System::Void __OnBattleToMazeTransitFadeOutEnd_b__100_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER___ONBATTLETOMAZETRANSITFADEOUTEND_B__100_0_OFFSET))(this);
		}

		::System::Void __PlaySequenceVOCallback_b__104_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER___PLAYSEQUENCEVOCALLBACK_B__104_0_OFFSET))(this);
		}

	};
}
