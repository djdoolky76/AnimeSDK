#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCHDFAMDPDM.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
class KNDOCIJHHFA;
class NNDAJDLAHNC;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class MemberData; }
namespace RPG::Client { class Stage; }
namespace RPG::Client { class TeamData; }
namespace RPG::Client { class TeamManager; }
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AsyncOperation; }

#define RPG_CLIENT_TEAMMANAGER_ALLPLAYERLOADED_OFFSET UNITYSDK_OFFSET(0x1ACC95A0)
#define RPG_CLIENT_TEAMMANAGER_APPLEEXTRAPROPERTYADDITION_OFFSET UNITYSDK_OFFSET(0x1ACD04C0)
#define RPG_CLIENT_TEAMMANAGER_CANSWITCHTEAMLEADERTO_OFFSET UNITYSDK_OFFSET(0x1ACCF090)
#define RPG_CLIENT_TEAMMANAGER_CHANGETEAMMEMBERSTORYMODE_OFFSET UNITYSDK_OFFSET(0x1ACCA2F0)
#define RPG_CLIENT_TEAMMANAGER_CREATELOCALPLAYERTEAM_OFFSET UNITYSDK_OFFSET(0x1ACC96D0)
#define RPG_CLIENT_TEAMMANAGER_CREATETEAMMEMBERENTITYS_OFFSET UNITYSDK_OFFSET(0x1ACC9B30)
#define RPG_CLIENT_TEAMMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1ACC8650)
#define RPG_CLIENT_TEAMMANAGER_CTRLOTHERENTITY_OFFSET UNITYSDK_OFFSET(0x1ACD1850)
#define RPG_CLIENT_TEAMMANAGER_DISABLEAVATARREFRESH_OFFSET UNITYSDK_OFFSET(0x1ACCBB50)
#define RPG_CLIENT_TEAMMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ACC8B30)
#define RPG_CLIENT_TEAMMANAGER_ENABLEAVATARREFRESH_OFFSET UNITYSDK_OFFSET(0x1ACCBBF0)
#define RPG_CLIENT_TEAMMANAGER_GETAVATARBYENTITY_OFFSET UNITYSDK_OFFSET(0x1ACD1700)
#define RPG_CLIENT_TEAMMANAGER_GETMEMBERDATABYMEMBERENTITY_OFFSET UNITYSDK_OFFSET(0x1ACCF780)
#define RPG_CLIENT_TEAMMANAGER_GETMEMBERENTITYBYAVATARID_OFFSET UNITYSDK_OFFSET(0x1ACCF6F0)
#define RPG_CLIENT_TEAMMANAGER_GETMEMBERENTITYBYMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x1ACCF650)
#define RPG_CLIENT_TEAMMANAGER_GETPLAYERDATABYENTITY_OFFSET UNITYSDK_OFFSET(0x1ACD0600)
#define RPG_CLIENT_TEAMMANAGER_GET_CURRENTTEAMLEADER_OFFSET UNITYSDK_OFFSET(0x1ACC84F0)
#define RPG_CLIENT_TEAMMANAGER_GET_FAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x1ACD4350)
#define RPG_CLIENT_TEAMMANAGER_GET_ISALLOWEDREFRESH_OFFSET UNITYSDK_OFFSET(0x1ACD44C0)
#define RPG_CLIENT_TEAMMANAGER_GET_ISMAINCHARACTERONLYTEAM_OFFSET UNITYSDK_OFFSET(0x1ACD4460)
#define RPG_CLIENT_TEAMMANAGER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1ACD3D50)
#define RPG_CLIENT_TEAMMANAGER_GET_NEXTTEAMLEADER_OFFSET UNITYSDK_OFFSET(0x1ACD42C0)
#define RPG_CLIENT_TEAMMANAGER_GET_REALTEAMLEADERAVATARID_OFFSET UNITYSDK_OFFSET(0x1ACD4370)
#define RPG_CLIENT_TEAMMANAGER_GET_REALTEAMLEADER_OFFSET UNITYSDK_OFFSET(0x1ACD4360)
#define RPG_CLIENT_TEAMMANAGER_GET_STARTCONTROLPOS_OFFSET UNITYSDK_OFFSET(0x1ACD42D0)
#define RPG_CLIENT_TEAMMANAGER_GET_STARTCONTROLROT_OFFSET UNITYSDK_OFFSET(0x1ACD4310)
#define RPG_CLIENT_TEAMMANAGER_GET_TEAMMEMBERLIST_OFFSET UNITYSDK_OFFSET(0x1ACD4450)
#define RPG_CLIENT_TEAMMANAGER_LOADBACKGROUNDPLAYER_OFFSET UNITYSDK_OFFSET(0x1ACC9270)
#define RPG_CLIENT_TEAMMANAGER_REFRESHTEAMEXTRAPROPERTYADDITION_OFFSET UNITYSDK_OFFSET(0x1ACCEEB0)
#define RPG_CLIENT_TEAMMANAGER_REFRESHTEAMMEMBERENTITYS_OFFSET UNITYSDK_OFFSET(0x1ACCBC90)
#define RPG_CLIENT_TEAMMANAGER_REMOVETEAMMEMBERENTITY_OFFSET UNITYSDK_OFFSET(0x1ACCF8D0)
#define RPG_CLIENT_TEAMMANAGER_RESETAUDIOLISTNERFOLLOWTEAMLEADER_OFFSET UNITYSDK_OFFSET(0x1ACCFAF0)
#define RPG_CLIENT_TEAMMANAGER_RESETTEAMMEMBERLIST_OFFSET UNITYSDK_OFFSET(0x1ACCD1D0)
#define RPG_CLIENT_TEAMMANAGER_REVERTEXTRAPROPERTYADDITION_OFFSET UNITYSDK_OFFSET(0x1ACCFF30)
#define RPG_CLIENT_TEAMMANAGER_SETUPTEAMLEADERINFO_OFFSET UNITYSDK_OFFSET(0x1ACCA950)
#define RPG_CLIENT_TEAMMANAGER_SET_CURRENTTEAMLEADER_OFFSET UNITYSDK_OFFSET(0x1ACC8E10)
#define RPG_CLIENT_TEAMMANAGER_SET_FAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x1ACD3A50)
#define RPG_CLIENT_TEAMMANAGER_SET_STARTCONTROLPOS_OFFSET UNITYSDK_OFFSET(0x1ACD42F0)
#define RPG_CLIENT_TEAMMANAGER_SET_STARTCONTROLROT_OFFSET UNITYSDK_OFFSET(0x1ACD4330)
#define RPG_CLIENT_TEAMMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x1ACC8920)
#define RPG_CLIENT_TEAMMANAGER_TRYCHANGETOTEAMLEADER_OFFSET UNITYSDK_OFFSET(0x1ACCFA00)
#define RPG_CLIENT_TEAMMANAGER_TRYSWITCHTEAMLEADERBYSLOTID_OFFSET UNITYSDK_OFFSET(0x1ACCEFD0)
#define RPG_CLIENT_TEAMMANAGER_TRYTRIGGERPLAYERTELEPORT_OFFSET UNITYSDK_OFFSET(0x1ACC80B0)
#define RPG_CLIENT_TEAMMANAGER_UNLOADBACKGROUNDPLAYER_OFFSET UNITYSDK_OFFSET(0x1ACC8FE0)
#define RPG_CLIENT_TEAMMANAGER__ADDMEMBERSCHANGEDIN_OFFSET UNITYSDK_OFFSET(0x1ACCD060)
#define RPG_CLIENT_TEAMMANAGER__BINDINPUTCONTROLLERTOENTITY_OFFSET UNITYSDK_OFFSET(0x1ACCBAE0)
#define RPG_CLIENT_TEAMMANAGER__CANSYNCMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x1ACCA570)
#define RPG_CLIENT_TEAMMANAGER__CHANGEFAKEAVATARSTORYMODE_OFFSET UNITYSDK_OFFSET(0x1ACD3CD0)
#define RPG_CLIENT_TEAMMANAGER__CHANGETEAMMEMBERSTORYMODE_OFFSET UNITYSDK_OFFSET(0x1ACCA340)
#define RPG_CLIENT_TEAMMANAGER__CHECKTELEPORTANDSTORYMODECONFLICT_OFFSET UNITYSDK_OFFSET(0x1ACC7F80)
#define RPG_CLIENT_TEAMMANAGER__CREATEFAKEAVATARENTITY_OFFSET UNITYSDK_OFFSET(0x1ACD03A0)
#define RPG_CLIENT_TEAMMANAGER__CREATELEADERMEMBERENTITY_OFFSET UNITYSDK_OFFSET(0x1ACCA200)
#define RPG_CLIENT_TEAMMANAGER__CREATEMEMBERENTITY_1_OFFSET UNITYSDK_OFFSET(0x1ACCFFA0)
#define RPG_CLIENT_TEAMMANAGER__CREATEMEMBERENTITY_OFFSET UNITYSDK_OFFSET(0x1ACCA270)
#define RPG_CLIENT_TEAMMANAGER__CREATEPLAYERSTUB_OFFSET UNITYSDK_OFFSET(0x1ACD0440)
#define RPG_CLIENT_TEAMMANAGER__DOSWITCHTEAMLEADER_OFFSET UNITYSDK_OFFSET(0x1ACCD410)
#define RPG_CLIENT_TEAMMANAGER__GETENTITYISLOCKCONTROL_OFFSET UNITYSDK_OFFSET(0x1ACD11B0)
#define RPG_CLIENT_TEAMMANAGER__GETENTITYISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1ACD1230)
#define RPG_CLIENT_TEAMMANAGER__INITLIGHTTEAMENTITY_OFFSET UNITYSDK_OFFSET(0x1ACC9750)
#define RPG_CLIENT_TEAMMANAGER__INITTELEPORTSEQ_OFFSET UNITYSDK_OFFSET(0x1ACC7A70)
#define RPG_CLIENT_TEAMMANAGER__ISENTITYFORBIDOFFSTAGE_OFFSET UNITYSDK_OFFSET(0x1ACD0120)
#define RPG_CLIENT_TEAMMANAGER__ISTARGETSUMMONUNITFORBIDOFFSTAGE_OFFSET UNITYSDK_OFFSET(0x1ACD01E0)
#define RPG_CLIENT_TEAMMANAGER__ISTEAMMEMBERLISTSYNCED_OFFSET UNITYSDK_OFFSET(0x1ACD0D60)
#define RPG_CLIENT_TEAMMANAGER__ONADVENTUREBUFFSYNC_OFFSET UNITYSDK_OFFSET(0x1ACD4050)
#define RPG_CLIENT_TEAMMANAGER__ONAVATARSYNCDATA_OFFSET UNITYSDK_OFFSET(0x1ACD1350)
#define RPG_CLIENT_TEAMMANAGER__ONTEAMCHANGESTORYMODE_OFFSET UNITYSDK_OFFSET(0x1ACD3C00)
#define RPG_CLIENT_TEAMMANAGER__ONTEAMLEADERCHANGEMODEL_OFFSET UNITYSDK_OFFSET(0x1ACD3F70)
#define RPG_CLIENT_TEAMMANAGER__ONTEAMLEADERSWITCHED_OFFSET UNITYSDK_OFFSET(0x1ACD3B90)
#define RPG_CLIENT_TEAMMANAGER__ONTEAMLINEUPSYNCED_OFFSET UNITYSDK_OFFSET(0x1ACD3DA0)
#define RPG_CLIENT_TEAMMANAGER__REMOVEMEMBERSCHANGEDOUT_OFFSET UNITYSDK_OFFSET(0x1ACCBFA0)
#define RPG_CLIENT_TEAMMANAGER__SETENTITYISLOCKCONTROL_OFFSET UNITYSDK_OFFSET(0x1ACD1290)
#define RPG_CLIENT_TEAMMANAGER__SETPLAYERENTITYLEADER_OFFSET UNITYSDK_OFFSET(0x1ACCB6B0)
#define RPG_CLIENT_TEAMMANAGER__SETPLAYERENTITYVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1ACCB620)
#define RPG_CLIENT_TEAMMANAGER__SETUPLIGHTTEAMPROPERTYDEF_OFFSET UNITYSDK_OFFSET(0x1ACCFEA0)
#define RPG_CLIENT_TEAMMANAGER__SWAPVISIBLEANDPHYSICSATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1ACD1070)
#define RPG_CLIENT_TEAMMANAGER__SWITCHCAMERAFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x1ACCFB50)
#define RPG_CLIENT_TEAMMANAGER__SYNCMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x1ACCA750)
#define RPG_CLIENT_TEAMMANAGER__TICKTELEPORTSEQ_OFFSET UNITYSDK_OFFSET(0x1ACC8550)
#define RPG_CLIENT_TEAMMANAGER__TRYAPPLYFAKEAVATARBALANCEBALLCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1ACD3920)
#define RPG_CLIENT_TEAMMANAGER__UNINITTELEPORTSEQ_OFFSET UNITYSDK_OFFSET(0x1ACC7CD0)
#define RPG_CLIENT_TEAMMANAGER__WAITLINEUPREADY_OFFSET UNITYSDK_OFFSET(0x1ACCA4C0)
#define RPG_CLIENT_TEAMMANAGER__WRITEMEMBERDATATOENTITY_OFFSET UNITYSDK_OFFSET(0x1ACD08B0)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamManager_TypeDefinitionIndex = 62160;

	class TeamManager : public ::System::Object
	{
	public:
		::KFELGAIGHAP* _OnTeleportCrossMapSeq; // 0x10
		::System::String* _MainControllSource; // 0x18
		::System::Action* _OnTeleportFinishCallback; // 0x20
		::RPG::GameCore::GameEntity* _ControlledEntity; // 0x28
		::KFELGAIGHAP* _OnTeleportSeq; // 0x30
		::RPG::GameCore::GameEntity* _FakeAvatarTeamLeader; // 0x38
		::RPG::GameCore::GameEntity* _nextTeamLeader; // 0x40
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _TeamMemberList; // 0x48
		::RPG::Client::Stage* _MainControlSourceStage; // 0x50
		::KFELGAIGHAP* _CurrentRunningTeleportSeq; // 0x58
		::KFELGAIGHAP* _OnTeleportNoSwitchIn; // 0x60
		::RPG::GameCore::TaskContext* _TeamLeaderContex; // 0x68
		::RPG::GameCore::GameWorld* _GameWorld; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* _TeamMemberDict; // 0x78
		::RPG::Client::TeamData* _CurrentTeamData; // 0x80
		::RPG::GameCore::GameEntity* _currentTeamLeader; // 0x88
		::System::Collections::Generic::List_1<::OCHDFAMDPDM>* _PendingHideLocalPlayers; // 0x90
		::KFELGAIGHAP* _OnTeleportNoSwitchInWhite; // 0x98
		::System::Boolean _IsAllowedRefresh; // 0xA0
		::System::Boolean _IsTeamLoading; // 0xA1
		::System::Boolean _RecoverUseControlEntityPosition; // 0xA2
		::System::Byte _padding0[0x1];
		::RPG::MVector3 _StartControlRot_k__BackingField; // 0xA4
		::RPG::MVector3 _StartControlPos_k__BackingField; // 0xB0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void _InitTeleportSeq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__INITTELEPORTSEQ_OFFSET))(this);
		}

		::System::Void _UnInitTeleportSeq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__UNINITTELEPORTSEQ_OFFSET))(this);
		}

		::System::Void _CheckTeleportAndStoryModeConflict(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__CHECKTELEPORTANDSTORYMODECONFLICT_OFFSET))(this, a1);
		}

		::System::Boolean TryTriggerPlayerTeleport(::System::Boolean a1, ::System::Action* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_TRYTRIGGERPLAYERTELEPORT_OFFSET))(this, a1, a2);
		}

		::System::Void _TickTeleportSeq(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__TICKTELEPORTSEQ_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::AsyncOperation* UnLoadBackGroundPlayer(::System::Action* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::PVOID, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_UNLOADBACKGROUNDPLAYER_OFFSET))(this, a1, a2);
		}

		::System::Void LoadBackGroundPlayer(::System::Action* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_LOADBACKGROUNDPLAYER_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::TeamManager* CreateLocalPlayerTeam(::RPG::GameCore::GameWorld* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::TeamManager*(*)(::RPG::GameCore::GameWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_CREATELOCALPLAYERTEAM_OFFSET))(a1, a2);
		}

		::System::Void CreateTeamMemberEntitys(::RPG::Client::TeamData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_CREATETEAMMEMBERENTITYS_OFFSET))(this, a1);
		}

		::System::Void ChangeTeamMemberStoryMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_CHANGETEAMMEMBERSTORYMODE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>* _WaitLineupReady()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__WAITLINEUPREADY_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>* _CreateLeaderMemberEntity(::System::Boolean a1, ::System::Action* a2)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>*(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__CREATELEADERMEMBERENTITY_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>* _CreateMemberEntity(::System::Int32 a1, ::System::Boolean a2, ::System::Action* a3)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__CREATEMEMBERENTITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _CanSyncMemberInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__CANSYNCMEMBERINFO_OFFSET))(this);
		}

		::System::Void _SyncMemberInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__SYNCMEMBERINFO_OFFSET))(this);
		}

		::System::Void SetupTeamLeaderInfo(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_SETUPTEAMLEADERINFO_OFFSET))(this, a1, a2);
		}

		::System::Void DisableAvatarRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_DISABLEAVATARREFRESH_OFFSET))(this);
		}

		::System::Void EnableAvatarRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_ENABLEAVATARREFRESH_OFFSET))(this);
		}

		::System::Void RefreshTeamMemberEntitys(::RPG::Client::TeamData* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_REFRESHTEAMMEMBERENTITYS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TrySwitchTeamLeaderBySlotID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_TRYSWITCHTEAMLEADERBYSLOTID_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* GetMemberEntityByMemberData(::RPG::Client::MemberData* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GETMEMBERENTITYBYMEMBERDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* GetMemberEntityByAvatarID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GETMEMBERENTITYBYAVATARID_OFFSET))(this, a1);
		}

		::RPG::Client::MemberData* GetMemberDataByMemberEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::MemberData*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GETMEMBERDATABYMEMBERENTITY_OFFSET))(this, a1);
		}

		::System::Void RemoveTeamMemberEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_REMOVETEAMMEMBERENTITY_OFFSET))(this, a1);
		}

		::System::Void TryChangeToTeamLeader()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_TRYCHANGETOTEAMLEADER_OFFSET))(this);
		}

		::System::Void ResetAudioListnerFollowTeamLeader()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_RESETAUDIOLISTNERFOLLOWTEAMLEADER_OFFSET))(this);
		}

		::System::Boolean AllPlayerLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_ALLPLAYERLOADED_OFFSET))(this);
		}

		::System::Void _SetupLightTeamPropertyDef(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureAbilityComponent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__SETUPLIGHTTEAMPROPERTYDEF_OFFSET))(this, a1, a2);
		}

		::System::Void _InitLightTeamEntity(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__INITLIGHTTEAMENTITY_OFFSET))(this, a1);
		}

		::System::Void _RemoveMembersChangedOut(::Il2CppArray<::RPG::Client::MemberData*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::MemberData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__REMOVEMEMBERSCHANGEDOUT_OFFSET))(this, a1, a2);
		}

		::System::Void _AddMembersChangedIn(::Il2CppArray<::RPG::Client::MemberData*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::MemberData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__ADDMEMBERSCHANGEDIN_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanSwitchTeamLeaderTo(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_CANSWITCHTEAMLEADERTO_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsTargetSummonUnitForbidOffStage(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__ISTARGETSUMMONUNITFORBIDOFFSTAGE_OFFSET))(this, a1);
		}

		::System::Boolean _IsEntityForbidOffStage(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__ISENTITYFORBIDOFFSTAGE_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* _CreateMemberEntity_1(::RPG::Client::MemberData* a1, ::System::Boolean a2, ::System::Action_1<::RPG::GameCore::GameEntity*>* a3)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::Client::MemberData*, ::System::Boolean, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__CREATEMEMBERENTITY_1_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::GameEntity* _CreateFakeAvatarEntity(::KNDOCIJHHFA* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::KNDOCIJHHFA*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__CREATEFAKEAVATARENTITY_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* _CreatePlayerStub(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__CREATEPLAYERSTUB_OFFSET))(this, a1);
		}

		::System::Void AppleExtraPropertyAddition(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_APPLEEXTRAPROPERTYADDITION_OFFSET))(this, a1);
		}

		::System::Void RevertExtraPropertyAddition(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_REVERTEXTRAPROPERTYADDITION_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* GetPlayerDataByEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GETPLAYERDATABYENTITY_OFFSET))(this, a1);
		}

		::System::Void RefreshTeamExtraPropertyAddition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_REFRESHTEAMEXTRAPROPERTYADDITION_OFFSET))(this);
		}

		::System::Void _WriteMemberDataToEntity(::RPG::GameCore::GameEntity* a1, ::RPG::Client::MemberData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__WRITEMEMBERDATATOENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void ResetTeamMemberList(::Il2CppArray<::RPG::Client::MemberData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::MemberData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_RESETTEAMMEMBERLIST_OFFSET))(this, a1);
		}

		::System::Boolean _IsTeamMemberListSynced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__ISTEAMMEMBERLISTSYNCED_OFFSET))(this);
		}

		::System::Void _SetPlayerEntityVisibility(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__SETPLAYERENTITYVISIBILITY_OFFSET))(this, a1, a2);
		}

		::System::Void _SwapVisibleAndPhysicsAttribute(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__SWAPVISIBLEANDPHYSICSATTRIBUTE_OFFSET))(this, a1, a2);
		}

		::System::Void _SetPlayerEntityLeader(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__SETPLAYERENTITYLEADER_OFFSET))(this, a1, a2);
		}

		::System::Void _BindInputControllerToEntity(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__BINDINPUTCONTROLLERTOENTITY_OFFSET))(this, a1, a2);
		}

		::System::Boolean _GetEntityIsLockControl(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__GETENTITYISLOCKCONTROL_OFFSET))(this, a1);
		}

		::System::Boolean _GetEntityIsVisible(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__GETENTITYISVISIBLE_OFFSET))(this, a1);
		}

		::System::Void _SetEntityIsLockControl(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__SETENTITYISLOCKCONTROL_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAvatarSyncData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__ONAVATARSYNCDATA_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* GetAvatarByEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GETAVATARBYENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* CtrlOtherEntity(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::UInt32 a4, ::System::Boolean a5, ::System::Nullable_1<::UnityEngine::Vector3> a6, ::System::Nullable_1<::UnityEngine::Quaternion> a7, ::System::String* a8, ::System::Nullable_1<::UnityEngine::Vector3> a9, ::System::Nullable_1<::UnityEngine::Quaternion> a10)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::Boolean, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::String*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_CTRLOTHERENTITY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void _TryApplyFakeAvatarBalanceBallController(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__TRYAPPLYFAKEAVATARBALANCEBALLCONTROLLER_OFFSET))(this, a1, a2);
		}

		::System::Boolean _DoSwitchTeamLeader(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__DOSWITCHTEAMLEADER_OFFSET))(this, a1);
		}

		::System::Void _OnTeamLeaderSwitched(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__ONTEAMLEADERSWITCHED_OFFSET))(this, a1);
		}

		::System::Void _OnTeamChangeStoryMode(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__ONTEAMCHANGESTORYMODE_OFFSET))(this, a1);
		}

		::System::Void _ChangeFakeAvatarStoryMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__CHANGEFAKEAVATARSTORYMODE_OFFSET))(this, a1);
		}

		::System::Void _ChangeTeamMemberStoryMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__CHANGETEAMMEMBERSTORYMODE_OFFSET))(this, a1);
		}

		::System::Void _OnTeamLineupSynced(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__ONTEAMLINEUPSYNCED_OFFSET))(this, a1);
		}

		::System::Void _OnTeamLeaderChangeModel(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__ONTEAMLEADERCHANGEMODEL_OFFSET))(this, a1);
		}

		::System::Void _SwitchCameraFollowTarget(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__SWITCHCAMERAFOLLOWTARGET_OFFSET))(this, a1);
		}

		::System::Void _OnAdventureBuffSync(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__ONADVENTUREBUFFSYNC_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_NextTeamLeader()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GET_NEXTTEAMLEADER_OFFSET))(this);
		}

		::RPG::MVector3 get_StartControlPos()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GET_STARTCONTROLPOS_OFFSET))(this);
		}

		::System::Void set_StartControlPos(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_SET_STARTCONTROLPOS_OFFSET))(this, a1);
		}

		::RPG::MVector3 get_StartControlRot()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GET_STARTCONTROLROT_OFFSET))(this);
		}

		::System::Void set_StartControlRot(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_SET_STARTCONTROLROT_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_FakeAvatar()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GET_FAKEAVATAR_OFFSET))(this);
		}

		::System::Void set_FakeAvatar(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_SET_FAKEAVATAR_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_RealTeamLeader()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GET_REALTEAMLEADER_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_CurrentTeamLeader()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GET_CURRENTTEAMLEADER_OFFSET))(this);
		}

		::System::Void set_CurrentTeamLeader(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_SET_CURRENTTEAMLEADER_OFFSET))(this, a1);
		}

		::System::UInt32 get_RealTeamLeaderAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GET_REALTEAMLEADERAVATARID_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_TeamMemberList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GET_TEAMMEMBERLIST_OFFSET))(this);
		}

		::System::Boolean get_IsMainCharacterOnlyTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GET_ISMAINCHARACTERONLYTEAM_OFFSET))(this);
		}

		::System::Boolean get_IsAllowedRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GET_ISALLOWEDREFRESH_OFFSET))(this);
		}

	};
}
