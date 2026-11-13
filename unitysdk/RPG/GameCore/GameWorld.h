#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"
class AELMAJAHPCP;
class DEEJKBIMHAA;
class ENEIHJJPNPI;
class HBCMHADMLOP;
class JHFCIOJIONP;
class KLKMCNOECAL;
class LDPOAPIPHIE;
class MDBKAFBKOGM;
class MDIDLONHHLB;
class NCJILFFNINI;
class NMLADOGHHGL;
class NMNGHKMHDOK;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class LevelAreaManager; }
namespace RPG::GameCore { class TimeScaleStack; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define RPG_GAMECORE_GAMEWORLD_ADDALLENTITYTOLOD0_OFFSET UNITYSDK_OFFSET(0x18470810)
#define RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18470D60)
#define RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLOD0_OFFSET UNITYSDK_OFFSET(0x18470E90)
#define RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLOD1_OFFSET UNITYSDK_OFFSET(0x18470EE0)
#define RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLOD3_OFFSET UNITYSDK_OFFSET(0x18470F30)
#define RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLOD4_OFFSET UNITYSDK_OFFSET(0x18470F80)
#define RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLODTICK_OFFSET UNITYSDK_OFFSET(0x184708C0)
#define RPG_GAMECORE_GAMEWORLD_ADDGLOBALTIMESCALE_OFFSET UNITYSDK_OFFSET(0x184716F0)
#define RPG_GAMECORE_GAMEWORLD_CCTOR_OFFSET UNITYSDK_OFFSET(0x184766E0)
#define RPG_GAMECORE_GAMEWORLD_CLEARPLUGINS_OFFSET UNITYSDK_OFFSET(0x184730B0)
#define RPG_GAMECORE_GAMEWORLD_CLEARTIMESCALE_OFFSET UNITYSDK_OFFSET(0x184732D0)
#define RPG_GAMECORE_GAMEWORLD_CREATEEMPTYENTITYCLIENTONLY_OFFSET UNITYSDK_OFFSET(0x184739F0)
#define RPG_GAMECORE_GAMEWORLD_CREATEEMPTYENTITY_OFFSET UNITYSDK_OFFSET(0x18473910)
#define RPG_GAMECORE_GAMEWORLD_CREATEEMPTYLEVELENTITY_OFFSET UNITYSDK_OFFSET(0x18473700)
#define RPG_GAMECORE_GAMEWORLD_CTOR_OFFSET UNITYSDK_OFFSET(0x184720F0)
#define RPG_GAMECORE_GAMEWORLD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18472B10)
#define RPG_GAMECORE_GAMEWORLD_ENSUREENTITYTICKORDER_OFFSET UNITYSDK_OFFSET(0x18474E60)
#define RPG_GAMECORE_GAMEWORLD_FINDDEFERDELETEBODYPART_OFFSET UNITYSDK_OFFSET(0x18474480)
#define RPG_GAMECORE_GAMEWORLD_FINDPREFABGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x18475C40)
#define RPG_GAMECORE_GAMEWORLD_GETDYINGENTITYLIST_OFFSET UNITYSDK_OFFSET(0x18474CC0)
#define RPG_GAMECORE_GAMEWORLD_GETDYINGFRAMECOUNTER_OFFSET UNITYSDK_OFFSET(0x184745F0)
#define RPG_GAMECORE_GAMEWORLD_GETGPTIMELINEHIERARCHYMANAGER_OFFSET UNITYSDK_OFFSET(0x18475DD0)
#define RPG_GAMECORE_GAMEWORLD_GETLEVELAREAMANAGER_OFFSET UNITYSDK_OFFSET(0x18475D90)
#define RPG_GAMECORE_GAMEWORLD_GETPLUGIN_1_OFFSET UNITYSDK_OFFSET(0x184765C0)
#define RPG_GAMECORE_GAMEWORLD_GET_BATTLEINSTANCEREF_OFFSET UNITYSDK_OFFSET(0x18476260)
#define RPG_GAMECORE_GAMEWORLD_GET_CURLOD0ENTITYLIST_OFFSET UNITYSDK_OFFSET(0x18471370)
#define RPG_GAMECORE_GAMEWORLD_GET_CURLOD1ENTITYLIST_OFFSET UNITYSDK_OFFSET(0x18471450)
#define RPG_GAMECORE_GAMEWORLD_GET_CURLOD3ENTITYLIST_OFFSET UNITYSDK_OFFSET(0x18471530)
#define RPG_GAMECORE_GAMEWORLD_GET_CURLOD4ENTITYLIST_OFFSET UNITYSDK_OFFSET(0x18471610)
#define RPG_GAMECORE_GAMEWORLD_GET_DAMAGEDATASTACK_OFFSET UNITYSDK_OFFSET(0x18476340)
#define RPG_GAMECORE_GAMEWORLD_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x18476520)
#define RPG_GAMECORE_GAMEWORLD_GET_ENTITYMANAGERREF_OFFSET UNITYSDK_OFFSET(0x18476280)
#define RPG_GAMECORE_GAMEWORLD_GET_EVENTMANAGERREF_OFFSET UNITYSDK_OFFSET(0x18476290)
#define RPG_GAMECORE_GAMEWORLD_GET_GLOBALALIASLOOKUP_OFFSET UNITYSDK_OFFSET(0x184762E0)
#define RPG_GAMECORE_GAMEWORLD_GET_ISBATTLEGAMEWORLD_OFFSET UNITYSDK_OFFSET(0x184762A0)
#define RPG_GAMECORE_GAMEWORLD_GET_ISDISPOSING_OFFSET UNITYSDK_OFFSET(0x18476370)
#define RPG_GAMECORE_GAMEWORLD_GET_ISINTICK_OFFSET UNITYSDK_OFFSET(0x18476360)
#define RPG_GAMECORE_GAMEWORLD_GET_ISPAUSETICK_OFFSET UNITYSDK_OFFSET(0x18476380)
#define RPG_GAMECORE_GAMEWORLD_GET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0x18476480)
#define RPG_GAMECORE_GAMEWORLD_GET_PARAMREGISTER_OFFSET UNITYSDK_OFFSET(0x184762C0)
#define RPG_GAMECORE_GAMEWORLD_GET_TIMESCALESTACK_OFFSET UNITYSDK_OFFSET(0x184764E0)
#define RPG_GAMECORE_GAMEWORLD_GET_TIMESCALEWITHSIMULATION_OFFSET UNITYSDK_OFFSET(0x184763A0)
#define RPG_GAMECORE_GAMEWORLD_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x184752A0)
#define RPG_GAMECORE_GAMEWORLD_GET_UNSCALEDDELTATIME_OFFSET UNITYSDK_OFFSET(0x18476500)
#define RPG_GAMECORE_GAMEWORLD_INITCLIENTONLYPROPERTY_OFFSET UNITYSDK_OFFSET(0x18475BF0)
#define RPG_GAMECORE_GAMEWORLD_INITMAINLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x18474D00)
#define RPG_GAMECORE_GAMEWORLD_INIT_OFFSET UNITYSDK_OFFSET(0x18472AB0)
#define RPG_GAMECORE_GAMEWORLD_ISENTITYENTERDYING_OFFSET UNITYSDK_OFFSET(0x18474580)
#define RPG_GAMECORE_GAMEWORLD_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x184758D0)
#define RPG_GAMECORE_GAMEWORLD_MAKEDEFERDELETEENTITYDESTROY_OFFSET UNITYSDK_OFFSET(0x18474390)
#define RPG_GAMECORE_GAMEWORLD_MAKEENTITYDIE_OFFSET UNITYSDK_OFFSET(0x18474300)
#define RPG_GAMECORE_GAMEWORLD_MAKEENTITYREVIVE_OFFSET UNITYSDK_OFFSET(0x18474800)
#define RPG_GAMECORE_GAMEWORLD_MAKEKILLIMMEDIATELYDYINGENTITYDIE_OFFSET UNITYSDK_OFFSET(0x18475EF0)
#define RPG_GAMECORE_GAMEWORLD_MAKETEAMENTITYREVIVE_OFFSET UNITYSDK_OFFSET(0x18474B30)
#define RPG_GAMECORE_GAMEWORLD_REMOVEALLENTITYFROMTICKBALANCE_OFFSET UNITYSDK_OFFSET(0x18470BA0)
#define RPG_GAMECORE_GAMEWORLD_REMOVEENTITYFROMLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18470E20)
#define RPG_GAMECORE_GAMEWORLD_REMOVEGLOBALTIMESCALE_OFFSET UNITYSDK_OFFSET(0x18471980)
#define RPG_GAMECORE_GAMEWORLD_SETALLENTITYSKINABLE_OFFSET UNITYSDK_OFFSET(0x18475E20)
#define RPG_GAMECORE_GAMEWORLD_SET_BATTLEINSTANCEREF_OFFSET UNITYSDK_OFFSET(0x18476270)
#define RPG_GAMECORE_GAMEWORLD_SET_DAMAGEDATASTACK_OFFSET UNITYSDK_OFFSET(0x18476350)
#define RPG_GAMECORE_GAMEWORLD_SET_ISBATTLEGAMEWORLD_OFFSET UNITYSDK_OFFSET(0x184762B0)
#define RPG_GAMECORE_GAMEWORLD_SET_ISPAUSETICK_OFFSET UNITYSDK_OFFSET(0x18476390)
#define RPG_GAMECORE_GAMEWORLD_SET_PARAMREGISTER_OFFSET UNITYSDK_OFFSET(0x184762D0)
#define RPG_GAMECORE_GAMEWORLD_SET_TIMESCALESTACK_OFFSET UNITYSDK_OFFSET(0x184764F0)
#define RPG_GAMECORE_GAMEWORLD_SET_UNSCALEDDELTATIME_OFFSET UNITYSDK_OFFSET(0x18476510)
#define RPG_GAMECORE_GAMEWORLD_STARTMAINLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x18474DC0)
#define RPG_GAMECORE_GAMEWORLD_STRETCHGLOBALTIMESCALE_OFFSET UNITYSDK_OFFSET(0x18471BB0)
#define RPG_GAMECORE_GAMEWORLD_SYNCENTITYTICKTIME_OFFSET UNITYSDK_OFFSET(0x18470750)
#define RPG_GAMECORE_GAMEWORLD_TICK_OFFSET UNITYSDK_OFFSET(0x18474FF0)
#define RPG_GAMECORE_GAMEWORLD__BALANCELATEUPDATEENTITYALL_OFFSET UNITYSDK_OFFSET(0x184712A0)
#define RPG_GAMECORE_GAMEWORLD__BALANCETICKENTITYALL_OFFSET UNITYSDK_OFFSET(0x18470FD0)
#define RPG_GAMECORE_GAMEWORLD__CREATENEWENTITYIMPL_OFFSET UNITYSDK_OFFSET(0x18473780)
#define RPG_GAMECORE_GAMEWORLD__DISPOSEALLMODULES_OFFSET UNITYSDK_OFFSET(0x18472F30)
#define RPG_GAMECORE_GAMEWORLD__GETNEWDYINGINSTANCE_OFFSET UNITYSDK_OFFSET(0x18474160)
#define RPG_GAMECORE_GAMEWORLD__LATEUPDATEMODULES_OFFSET UNITYSDK_OFFSET(0x18475A80)
#define RPG_GAMECORE_GAMEWORLD__MAKEENTITYDEFERDELETE_OFFSET UNITYSDK_OFFSET(0x184746C0)
#define RPG_GAMECORE_GAMEWORLD__MAKEENTITYDIEFINISH_OFFSET UNITYSDK_OFFSET(0x18474020)
#define RPG_GAMECORE_GAMEWORLD__MAKEGROUPENTITYDIE_OFFSET UNITYSDK_OFFSET(0x18473B70)
#define RPG_GAMECORE_GAMEWORLD__MAKELEVELENTITYDIE_OFFSET UNITYSDK_OFFSET(0x18473C90)
#define RPG_GAMECORE_GAMEWORLD__ONGLOBALTIMESCALEREMOVE_OFFSET UNITYSDK_OFFSET(0x18471D90)
#define RPG_GAMECORE_GAMEWORLD__ONWILLBEDESTROYCOMMONPROCESS_OFFSET UNITYSDK_OFFSET(0x18473A60)
#define RPG_GAMECORE_GAMEWORLD__POSTTICKGLOBALTIMESCALE_OFFSET UNITYSDK_OFFSET(0x18472030)
#define RPG_GAMECORE_GAMEWORLD__PRETICKGLOBALTIMESCALE_OFFSET UNITYSDK_OFFSET(0x18471EC0)
#define RPG_GAMECORE_GAMEWORLD__REMOVEDYINGENTITY_OFFSET UNITYSDK_OFFSET(0x18474A20)
#define RPG_GAMECORE_GAMEWORLD__TICKDEFERDELETELIST_OFFSET UNITYSDK_OFFSET(0x18475520)
#define RPG_GAMECORE_GAMEWORLD__TICKDYINGENTITYLIST_OFFSET UNITYSDK_OFFSET(0x18475300)
#define RPG_GAMECORE_GAMEWORLD__TICKMODULES_OFFSET UNITYSDK_OFFSET(0x184756F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameWorld_TypeDefinitionIndex = 59045;

	class GameWorld : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HBCMHADMLOP*>* _Modules; // 0x10
		::System::Action_1<::RPG::GameCore::GameEntity*>* NewEntityCallback; // 0x18
		::RPG::GameCore::EventManager* _EventManager; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::KLKMCNOECAL*>* _PrefabGameObjectMap; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _EntityList; // 0x30
		::System::Action_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState>* EntityWillDestroyCallback; // 0x38
		::System::Collections::Generic::List_1<::JHFCIOJIONP*>* _DyingEntityList; // 0x40
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _DeferDeleteEntityList; // 0x48
		::System::Collections::Generic::List_1<::NMLADOGHHGL*>* _GlobalTimeScaleDatas; // 0x50
		::RPG::Client::MonoEffectManager* MonoEffectManagerRef; // 0x58
		::System::Action_3<::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState, ::NMNGHKMHDOK*>* EntityReviveCallback; // 0x60
		::Il2CppArray<::MDIDLONHHLB*>* _PluginsArray; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MDBKAFBKOGM*>* _EntityTickList; // 0x70
		::RPG::GameCore::LevelAreaManager* _LevelAreaManager; // 0x78
		::RPG::GameCore::BattleInstance* _BattleInstanceRef_k__BackingField; // 0x80
		::RPG::Client::AdventurePhase* BindAdventurePhase; // 0x88
		::System::Action_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState>* EntityDiedCallback; // 0x90
		::DEEJKBIMHAA* LogicRandom; // 0x98
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _TickedEntityListPerFrame; // 0xA0
		::System::Collections::Generic::List_1<::HBCMHADMLOP*>* _NeedTickModules; // 0xA8
		::AELMAJAHPCP* _ParamRegister_k__BackingField; // 0xB0
		::RPG::GameCore::TimeScaleStack* _TimeScaleStack_k__BackingField; // 0xB8
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _EnterDyingEntityList; // 0xC0
		::System::Action_3<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState>* EntityBeforeDyingCallback; // 0xC8
		::System::Collections::Generic::Stack_1<::NCJILFFNINI*>* _DamageDataStack_k__BackingField; // 0xD0
		::RPG::GameCore::EntityManager* _EntityManager; // 0xD8
		::LDPOAPIPHIE* _GPTimelineHierarchyManager; // 0xE0
		::System::Collections::Generic::List_1<::HBCMHADMLOP*>* _NeedLateUpdateModules; // 0xE8
		::System::Boolean _IsDisposing; // 0xF0
		::System::Boolean _IsBattleGameWorld_k__BackingField; // 0xF1
		::System::Boolean _IsPauseTick; // 0xF2
		::System::Boolean _IsInTick; // 0xF3
		::System::Single _BalanceTickDurationTime; // 0xF4
		::System::Int32 _BalanceTickDurationBucket; // 0xF8
		::System::UInt32 _IDFactory; // 0xFC
		::System::UInt32 _IDFactory_ClientOnly; // 0x100
		::System::Single _UnscaledDeltaTime_k__BackingField; // 0x104
		::System::UInt32 _IDFactory_Battle; // 0x108
		::System::Int32 _NextTickDeferDeleteCount; // 0x10C
		static ::RPG::Client::RPGProfilerMarker** StaticGet__ModulesTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.GameCore", "GameWorld")->GetStaticField(0x9060);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet__EntitiesTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.GameCore", "GameWorld")->GetStaticField(0x9068);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet__EntitiesCleanupMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.GameCore", "GameWorld")->GetStaticField(0x9070);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet__EntitiesLateUpdateMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.GameCore", "GameWorld")->GetStaticField(0x9078);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet__LevelAreaTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.GameCore", "GameWorld")->GetStaticField(0x9080);
		}

		static ::System::UInt32* StaticGet_AdventureLevelEntityRuntimeID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.GameCore", "GameWorld")->GetStaticField(0x7D0);
		}

		static ::System::UInt32* StaticGet_BattleLevelEntityRuntimeID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.GameCore", "GameWorld")->GetStaticField(0x7D4);
		}

		static ::System::UInt32* StaticGet_RuntimeIDStart()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.GameCore", "GameWorld")->GetStaticField(0x7D8);
		}

		static ::System::UInt32* StaticGet_RuntimeIDStartForBattle()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.GameCore", "GameWorld")->GetStaticField(0x7DC);
		}

		static ::System::UInt32* StaticGet_CommonLevelEntityRuntimeID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.GameCore", "GameWorld")->GetStaticField(0x7E0);
		}

		static ::System::UInt32* StaticGet_RuntimeIDStartClientOnly()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.GameCore", "GameWorld")->GetStaticField(0x7E4);
		}

		::System::Void _ctor(::DEEJKBIMHAA* a1, ::System::Boolean a2, ::RPG::GameCore::BattleInstance* a3)
		{
			return ((::System::Void(*)(::PVOID, ::DEEJKBIMHAA*, ::System::Boolean, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_CCTOR_OFFSET))();
		}

		::System::Void SyncEntityTickTime(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SYNCENTITYTICKTIME_OFFSET))(this, a1);
		}

		::System::Void AddAllEntityToLOD0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ADDALLENTITYTOLOD0_OFFSET))(this);
		}

		::System::Void RemoveAllEntityFromTickBalance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_REMOVEALLENTITYFROMTICKBALANCE_OFFSET))(this);
		}

		::System::Void AddEntityToLateUpdate(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void RemoveEntityFromLateUpdate(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_REMOVEENTITYFROMLATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void AddEntityToLODTick(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLODTICK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddEntityToLOD0(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLOD0_OFFSET))(this, a1, a2);
		}

		::System::Void AddEntityToLOD1(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLOD1_OFFSET))(this, a1, a2);
		}

		::System::Void AddEntityToLOD3(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLOD3_OFFSET))(this, a1, a2);
		}

		::System::Void AddEntityToLOD4(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLOD4_OFFSET))(this, a1);
		}

		::System::Void _BalanceTickEntityAll(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__BALANCETICKENTITYALL_OFFSET))(this, a1);
		}

		::System::Void _BalanceLateUpdateEntityAll(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__BALANCELATEUPDATEENTITYALL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>* get_CurLOD0EntityList()
		{
			return ((::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_CURLOD0ENTITYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>* get_CurLOD1EntityList()
		{
			return ((::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_CURLOD1ENTITYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>* get_CurLOD3EntityList()
		{
			return ((::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_CURLOD3ENTITYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>* get_CurLOD4EntityList()
		{
			return ((::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_CURLOD4ENTITYLIST_OFFSET))(this);
		}

		::NMLADOGHHGL* AddGlobalTimeScale(::System::String* a1, ::System::Int32 a2, ::RPG::GameCore::EntityTypeMask a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::NMLADOGHHGL*(*)(::PVOID, ::System::String*, ::System::Int32, ::RPG::GameCore::EntityTypeMask, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ADDGLOBALTIMESCALE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RemoveGlobalTimeScale(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_REMOVEGLOBALTIMESCALE_OFFSET))(this, a1, a2);
		}

		::System::Void StretchGlobalTimeScale(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_STRETCHGLOBALTIMESCALE_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGlobalTimeScaleRemove(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__ONGLOBALTIMESCALEREMOVE_OFFSET))(this, a1);
		}

		::System::Void _PreTickGlobalTimeScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__PRETICKGLOBALTIMESCALE_OFFSET))(this);
		}

		::System::Void _PostTickGlobalTimeScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__POSTTICKGLOBALTIMESCALE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_DISPOSE_OFFSET))(this);
		}

		::System::Void ClearTimeScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_CLEARTIMESCALE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CreateEmptyLevelEntity(::RPG::GameCore::TeamType a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_CREATEEMPTYLEVELENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* CreateEmptyEntity(::RPG::GameCore::TeamType a1, ::RPG::GameCore::EntityType a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_CREATEEMPTYENTITY_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* CreateEmptyEntityClientOnly(::RPG::GameCore::TeamType a1, ::RPG::GameCore::EntityType a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_CREATEEMPTYENTITYCLIENTONLY_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* _CreateNewEntityImpl(::System::UInt32 a1, ::RPG::GameCore::TeamType a2, ::RPG::GameCore::EntityType a3)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::TeamType, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__CREATENEWENTITYIMPL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnWillBeDestroyCommonProcess(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__ONWILLBEDESTROYCOMMONPROCESS_OFFSET))(this, a1);
		}

		::System::Void _MakeGroupEntityDie(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__MAKEGROUPENTITYDIE_OFFSET))(this, a1);
		}

		::System::Void _MakeLevelEntityDie(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__MAKELEVELENTITYDIE_OFFSET))(this, a1, a2);
		}

		::System::Void MakeEntityDie(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_MAKEENTITYDIE_OFFSET))(this, a1, a2);
		}

		::System::Void MakeDeferDeleteEntityDestroy(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_MAKEDEFERDELETEENTITYDESTROY_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* FindDeferDeleteBodyPart(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_FINDDEFERDELETEBODYPART_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsEntityEnterDying(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ISENTITYENTERDYING_OFFSET))(this, a1);
		}

		::System::Int32 GetDyingFrameCounter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GETDYINGFRAMECOUNTER_OFFSET))(this, a1);
		}

		::JHFCIOJIONP* _GetNewDyingInstance()
		{
			return ((::JHFCIOJIONP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__GETNEWDYINGINSTANCE_OFFSET))(this);
		}

		::System::Void _MakeEntityDieFinish(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__MAKEENTITYDIEFINISH_OFFSET))(this, a1);
		}

		::System::Void _MakeEntityDeferDelete(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__MAKEENTITYDEFERDELETE_OFFSET))(this, a1);
		}

		::System::Void MakeEntityRevive(::RPG::GameCore::GameEntity* a1, ::NMNGHKMHDOK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::NMNGHKMHDOK*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_MAKEENTITYREVIVE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntityList* MakeTeamEntityRevive(::RPG::GameCore::TeamType a1, ::NMNGHKMHDOK* a2)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::RPG::GameCore::TeamType, ::NMNGHKMHDOK*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_MAKETEAMENTITYREVIVE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::JHFCIOJIONP*>* GetDyingEntityList()
		{
			return ((::System::Collections::Generic::List_1<::JHFCIOJIONP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GETDYINGENTITYLIST_OFFSET))(this);
		}

		::System::Void InitMainLevelGraph(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_INITMAINLEVELGRAPH_OFFSET))(this, a1);
		}

		::System::Void StartMainLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_STARTMAINLEVELGRAPH_OFFSET))(this);
		}

		::System::Void EnsureEntityTickOrder(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ENSUREENTITYTICKORDER_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void InitClientOnlyProperty(::RPG::Client::MonoEffectManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_INITCLIENTONLYPROPERTY_OFFSET))(this, a1);
		}

		::KLKMCNOECAL* FindPrefabGameObject(::System::String* a1)
		{
			return ((::KLKMCNOECAL*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_FINDPREFABGAMEOBJECT_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelAreaManager* GetLevelAreaManager()
		{
			return ((::RPG::GameCore::LevelAreaManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GETLEVELAREAMANAGER_OFFSET))(this);
		}

		::LDPOAPIPHIE* GetGPTimelineHierarchyManager()
		{
			return ((::LDPOAPIPHIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GETGPTIMELINEHIERARCHYMANAGER_OFFSET))(this);
		}

		::System::Void SetAllEntitySkinable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SETALLENTITYSKINABLE_OFFSET))(this, a1);
		}

		::System::Void MakeKillImmediatelyDyingEntityDie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_MAKEKILLIMMEDIATELYDYINGENTITYDIE_OFFSET))(this);
		}

		::System::Void _RemoveDyingEntity(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__REMOVEDYINGENTITY_OFFSET))(this, a1);
		}

		::System::Void _TickDyingEntityList(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__TICKDYINGENTITYLIST_OFFSET))(this, a1);
		}

		::System::Void _TickDeferDeleteList(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__TICKDEFERDELETELIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleInstance* get_BattleInstanceRef()
		{
			return ((::RPG::GameCore::BattleInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_BATTLEINSTANCEREF_OFFSET))(this);
		}

		::System::Void set_BattleInstanceRef(::RPG::GameCore::BattleInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SET_BATTLEINSTANCEREF_OFFSET))(this, a1);
		}

		::RPG::GameCore::EntityManager* get_EntityManagerRef()
		{
			return ((::RPG::GameCore::EntityManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_ENTITYMANAGERREF_OFFSET))(this);
		}

		::RPG::GameCore::EventManager* get_EventManagerRef()
		{
			return ((::RPG::GameCore::EventManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_EVENTMANAGERREF_OFFSET))(this);
		}

		::System::Boolean get_IsBattleGameWorld()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_ISBATTLEGAMEWORLD_OFFSET))(this);
		}

		::System::Void set_IsBattleGameWorld(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SET_ISBATTLEGAMEWORLD_OFFSET))(this, a1);
		}

		::AELMAJAHPCP* get_ParamRegister()
		{
			return ((::AELMAJAHPCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_PARAMREGISTER_OFFSET))(this);
		}

		::System::Void set_ParamRegister(::AELMAJAHPCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AELMAJAHPCP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SET_PARAMREGISTER_OFFSET))(this, a1);
		}

		::ENEIHJJPNPI* get_GlobalAliasLookup()
		{
			return ((::ENEIHJJPNPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_GLOBALALIASLOOKUP_OFFSET))(this);
		}

		::System::Collections::Generic::Stack_1<::NCJILFFNINI*>* get_DamageDataStack()
		{
			return ((::System::Collections::Generic::Stack_1<::NCJILFFNINI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_DAMAGEDATASTACK_OFFSET))(this);
		}

		::System::Void set_DamageDataStack(::System::Collections::Generic::Stack_1<::NCJILFFNINI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Stack_1<::NCJILFFNINI*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SET_DAMAGEDATASTACK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_ISINTICK_OFFSET))(this);
		}

		::System::Boolean get_IsDisposing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_ISDISPOSING_OFFSET))(this);
		}

		::System::Boolean get_IsPauseTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_ISPAUSETICK_OFFSET))(this);
		}

		::System::Void set_IsPauseTick(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SET_ISPAUSETICK_OFFSET))(this, a1);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Single get_TimeScaleWithSimulation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_TIMESCALEWITHSIMULATION_OFFSET))(this);
		}

		::System::Boolean get_IsPause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_ISPAUSE_OFFSET))(this);
		}

		::RPG::GameCore::TimeScaleStack* get_TimeScaleStack()
		{
			return ((::RPG::GameCore::TimeScaleStack*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_TIMESCALESTACK_OFFSET))(this);
		}

		::System::Void set_TimeScaleStack(::RPG::GameCore::TimeScaleStack* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeScaleStack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SET_TIMESCALESTACK_OFFSET))(this, a1);
		}

		::System::Single get_UnscaledDeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_UNSCALEDDELTATIME_OFFSET))(this);
		}

		::System::Void set_UnscaledDeltaTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SET_UNSCALEDDELTATIME_OFFSET))(this, a1);
		}

		::System::Single get_DeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_DELTATIME_OFFSET))(this);
		}

		::System::Void _DisposeAllModules()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__DISPOSEALLMODULES_OFFSET))(this);
		}

		::System::Void _TickModules(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__TICKMODULES_OFFSET))(this, a1);
		}

		::System::Void _LateUpdateModules(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__LATEUPDATEMODULES_OFFSET))(this, a1);
		}

		::MDIDLONHHLB* GetPlugin_1(::System::Type* a1)
		{
			return ((::MDIDLONHHLB*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GETPLUGIN_1_OFFSET))(this, a1);
		}

		::System::Void ClearPlugins()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_CLEARPLUGINS_OFFSET))(this);
		}

	};
}
