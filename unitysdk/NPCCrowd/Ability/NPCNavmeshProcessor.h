#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshQueryDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/MinPathQueryData.h"
#include "unitysdk/NPCCrowd/Ability/MinPathQueryResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Experimental/AI/NavMeshQuery.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMovementStyleSpeedParameters.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd { class IdGenerator; }
namespace NPCCrowd::Ability { class NPCAbility; }
namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentStack_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class NavMeshPath; }

#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_ADDDEPENDENCYTOWORLD_OFFSET UNITYSDK_OFFSET(0x114BCC50)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_CHECKPATHQUERYVALID_OFFSET UNITYSDK_OFFSET(0x114BC380)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_CHECKQUERYRESULT_OFFSET UNITYSDK_OFFSET(0x114BAB90)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_CLEARCACHEDDATA_OFFSET UNITYSDK_OFFSET(0x114B8E60)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_EXECUTECOMMONQUERY_OFFSET UNITYSDK_OFFSET(0x114BA5D0)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x114B9F10)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_GETPATHLENGTH_OFFSET UNITYSDK_OFFSET(0x114BC940)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_GET_ISCACHEINITIALIZED_OFFSET UNITYSDK_OFFSET(0x114B8870)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_INITDATA_OFFSET UNITYSDK_OFFSET(0x114B8930)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_INITPROCESSOR_OFFSET UNITYSDK_OFFSET(0x114BBE30)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_ISMINPATHQUERYFINISHED_OFFSET UNITYSDK_OFFSET(0x114BBC70)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_PREEXECUTEBEFOREJOB_OFFSET UNITYSDK_OFFSET(0x114BAAF0)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_QUERYMINPATHSYNC_OFFSET UNITYSDK_OFFSET(0x114BC660)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_QUERYMINPATH_1_OFFSET UNITYSDK_OFFSET(0x114BC5F0)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_QUERYMINPATH_OFFSET UNITYSDK_OFFSET(0x114BBF00)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_REFRESHDELAYEDQUERY_OFFSET UNITYSDK_OFFSET(0x114BB560)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_REGISTERQUERYCALLBACK_OFFSET UNITYSDK_OFFSET(0x114BCA90)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_REMOVEFINISHEDMINPATHQUERY_OFFSET UNITYSDK_OFFSET(0x114BBD30)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_SET_ISCACHEINITIALIZED_OFFSET UNITYSDK_OFFSET(0x114B88D0)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_SHOULDSCHEDULENAVMESH_OFFSET UNITYSDK_OFFSET(0x114BAA40)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x114BCCE0)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x114BCCD0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCNavmeshProcessor_TypeDefinitionIndex = 74538;

	class NPCNavmeshProcessor : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Ability::MinPathQueryData>** StaticGet_minPathQueries()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Ability::MinPathQueryData>**)Il2CppClass::FromTypeDefinitionIndex(NPCNavmeshProcessor_TypeDefinitionIndex)->GetStaticField(0x399D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Ability::MinPathQueryData>** StaticGet_delayMinPathQueries()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Ability::MinPathQueryData>**)Il2CppClass::FromTypeDefinitionIndex(NPCNavmeshProcessor_TypeDefinitionIndex)->GetStaticField(0x399D8);
		}
		static ::System::Collections::Concurrent::ConcurrentStack_1<::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshQueryDataFragment>>** StaticGet_nativeArrayPool()
		{
			return (::System::Collections::Concurrent::ConcurrentStack_1<::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshQueryDataFragment>>**)Il2CppClass::FromTypeDefinitionIndex(NPCNavmeshProcessor_TypeDefinitionIndex)->GetStaticField(0x399E0);
		}
		static ::System::Object** StaticGet_navmeshPoolLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NPCNavmeshProcessor_TypeDefinitionIndex)->GetStaticField(0x399E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_1<::NPCCrowd::Ability::MinPathQueryResult>*>** StaticGet_callbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_1<::NPCCrowd::Ability::MinPathQueryResult>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCNavmeshProcessor_TypeDefinitionIndex)->GetStaticField(0x399F0);
		}
		static ::NPCCrowd::IdGenerator** StaticGet_IDGen()
		{
			return (::NPCCrowd::IdGenerator**)Il2CppClass::FromTypeDefinitionIndex(NPCNavmeshProcessor_TypeDefinitionIndex)->GetStaticField(0x399F8);
		}
		static ::System::Collections::Concurrent::ConcurrentStack_1<::UnityEngine::Experimental::AI::NavMeshQuery>** StaticGet_navMeshQueryPool()
		{
			return (::System::Collections::Concurrent::ConcurrentStack_1<::UnityEngine::Experimental::AI::NavMeshQuery>**)Il2CppClass::FromTypeDefinitionIndex(NPCNavmeshProcessor_TypeDefinitionIndex)->GetStaticField(0x39A00);
		}
		static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Int32, ::NPCCrowd::Ability::MinPathQueryResult>** StaticGet_finishedPathQueries()
		{
			return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Int32, ::NPCCrowd::Ability::MinPathQueryResult>**)Il2CppClass::FromTypeDefinitionIndex(NPCNavmeshProcessor_TypeDefinitionIndex)->GetStaticField(0x39A08);
		}
		static ::System::Collections::Concurrent::ConcurrentStack_1<::Il2CppArray<::UnityEngine::Experimental::AI::NavMeshQuery>*>** StaticGet_navMeshQueryListPool()
		{
			return (::System::Collections::Concurrent::ConcurrentStack_1<::Il2CppArray<::UnityEngine::Experimental::AI::NavMeshQuery>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCNavmeshProcessor_TypeDefinitionIndex)->GetStaticField(0x39A10);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_tmpList()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NPCNavmeshProcessor_TypeDefinitionIndex)->GetStaticField(0x39A18);
		}
		static ::System::Boolean* StaticGet__IsCacheInitialized_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCNavmeshProcessor_TypeDefinitionIndex)->GetStaticField(0xD0E0);
		}
		// static const ::System::Int32 MaxPathSize = 0xA; // 0x0
		// static const ::System::Int32 MaxNavMeshNodes = 0x800; // 0x0
		// static const ::System::Int32 DefaultArrayLength = 0x14; // 0x0
		// static const ::System::Int32 DefaultArrayPoolSize = 0xA; // 0x0
		// static const ::System::Int32 DefaultQueryPoolSize = 0x64; // 0x0
		::System::Int32 lastExecuteFrame; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_IsCacheInitialized()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_GET_ISCACHEINITIALIZED_OFFSET))();
		}

		static ::System::Void set_IsCacheInitialized(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_SET_ISCACHEINITIALIZED_OFFSET))(value);
		}

		static ::System::Void InitData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_INITDATA_OFFSET))();
		}

		static ::System::Void ClearCachedData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_CLEARCACHEDDATA_OFFSET))();
		}

		::Unity::Jobs::JobHandle Execute(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_EXECUTE_OFFSET))(this, runtime, deltaTime, dependsOn);
		}

		static ::System::Boolean ShouldScheduleNavmesh(::System::Collections::Generic::List_1<::NPCCrowd::Ability::NPCAbility*>* handles, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::NPCCrowd::Ability::NPCAbility*>*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_SHOULDSCHEDULENAVMESH_OFFSET))(handles, idx);
		}

		::Unity::Jobs::JobHandle ExecuteCommonQuery(::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_EXECUTECOMMONQUERY_OFFSET))(this, dependsOn);
		}

		::System::Void PreExecuteBeforeJob(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_PREEXECUTEBEFOREJOB_OFFSET))(this, deltaTime);
		}

		static ::System::Void CheckQueryResult()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_CHECKQUERYRESULT_OFFSET))();
		}

		static ::System::Void RefreshDelayedQuery()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_REFRESHDELAYEDQUERY_OFFSET))();
		}

		static ::System::Boolean IsMinPathQueryFinished(::System::Int32 queryHandler, ::NPCCrowd::Ability::MinPathQueryResult& queryResult)
		{
			return ((::System::Boolean(*)(::System::Int32, ::NPCCrowd::Ability::MinPathQueryResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_ISMINPATHQUERYFINISHED_OFFSET))(queryHandler, queryResult);
		}

		static ::System::Void RemoveFinishedMinPathQuery(::System::Int32 queryHandler)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_REMOVEFINISHEDMINPATHQUERY_OFFSET))(queryHandler);
		}

		::System::Void InitProcessor(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Int32 idx, ::NPCCrowd::Ability::FNPCAbilityMovementStyleSpeedParameters moveParams, ::System::Single randDesiredSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::NPCCrowd::Ability::FNPCAbilityMovementStyleSpeedParameters, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_INITPROCESSOR_OFFSET))(this, runtime, idx, moveParams, randDesiredSpeed);
		}

		static ::System::Boolean QueryMinPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* points, ::UnityEngine::Vector3 source, ::System::Int32& handler)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_QUERYMINPATH_OFFSET))(points, source, handler);
		}

		static ::System::Boolean QueryMinPath_1(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> points, ::UnityEngine::Vector3 source, ::System::Int32& handler)
		{
			return ((::System::Boolean(*)(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>, ::UnityEngine::Vector3, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_QUERYMINPATH_1_OFFSET))(points, source, handler);
		}

		static ::System::Boolean QueryMinPathSync(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* points, ::UnityEngine::Vector3 source, ::System::Int32& index)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_QUERYMINPATHSYNC_OFFSET))(points, source, index);
		}

		static ::System::Single GetPathLength(::UnityEngine::AI::NavMeshPath* path)
		{
			return ((::System::Single(*)(::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_GETPATHLENGTH_OFFSET))(path);
		}

		static ::System::Void RegisterQueryCallback(::System::Int32 minPathQueryHandler, ::System::Action_1<::NPCCrowd::Ability::MinPathQueryResult>* callback)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Action_1<::NPCCrowd::Ability::MinPathQueryResult>*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_REGISTERQUERYCALLBACK_OFFSET))(minPathQueryHandler, callback);
		}

		static ::System::Boolean CheckPathQueryValid(::System::Int32 cnt)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_CHECKPATHQUERYVALID_OFFSET))(cnt);
		}

		::System::Void AddDependencyToWorld(::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_ADDDEPENDENCYTOWORLD_OFFSET))(this, dependsOn);
		}
	};
}
