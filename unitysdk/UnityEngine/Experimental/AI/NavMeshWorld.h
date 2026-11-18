#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_ADDDEPENDENCYINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FB46500)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_ADDDEPENDENCYINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FB464F0)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_ADDDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x9978C0)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_GETDEFAULTWORLD_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FB464E0)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_GETDEFAULTWORLD_OFFSET UNITYSDK_OFFSET(0x1FB464B0)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_ISVALID_OFFSET UNITYSDK_OFFSET(0x363D90)

namespace UnityEngine::Experimental::AI
{
	inline static constexpr unsigned int NavMeshWorld_TypeDefinitionIndex = 27437;

	struct alignas(4) NavMeshWorld
	{
		::System::IntPtr world; // 0x10

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_ISVALID_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Experimental::AI::NavMeshWorld GetDefaultWorld()
		{
			return ((::UnityEngine::Experimental::AI::NavMeshWorld(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_GETDEFAULTWORLD_OFFSET))();
		}
		*/

		static ::System::Void AddDependencyInternal(::System::IntPtr navmesh, ::Unity::Jobs::JobHandle handle)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_ADDDEPENDENCYINTERNAL_OFFSET))(navmesh, handle);
		}

		::System::Void AddDependency(::Unity::Jobs::JobHandle job)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_ADDDEPENDENCY_OFFSET))(this, job);
		}

		/*
		static ::System::Void GetDefaultWorld_Injected(::UnityEngine::Experimental::AI::NavMeshWorld& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Experimental::AI::NavMeshWorld&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_GETDEFAULTWORLD_INJECTED_OFFSET))(ret);
		}
		*/

		static ::System::Void AddDependencyInternal_Injected(::System::IntPtr navmesh, ::Unity::Jobs::JobHandle& handle)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHWORLD_ADDDEPENDENCYINTERNAL_INJECTED_OFFSET))(navmesh, handle);
		}
	};
}
