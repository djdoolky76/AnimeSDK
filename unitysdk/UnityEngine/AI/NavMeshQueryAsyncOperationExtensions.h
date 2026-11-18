#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::AI { class NavMeshQueryAsyncOperation; }

#define UNITYENGINE_AI_NAVMESHQUERYASYNCOPERATIONEXTENSIONS_ISPATHPARTIALDONE_OFFSET UNITYSDK_OFFSET(0x1FB45930)
#define UNITYENGINE_AI_NAVMESHQUERYASYNCOPERATIONEXTENSIONS_ISSTATUSDONE_OFFSET UNITYSDK_OFFSET(0x1FB45900)
#define UNITYENGINE_AI_NAVMESHQUERYASYNCOPERATIONEXTENSIONS_ISSTRAIGHTDONE_OFFSET UNITYSDK_OFFSET(0x1FB45970)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshQueryAsyncOperationExtensions_TypeDefinitionIndex = 27424;

	class NavMeshQueryAsyncOperationExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsStatusDone(::UnityEngine::AI::NavMeshQueryAsyncOperation* operation)
		{
			return ((::System::Boolean(*)(::UnityEngine::AI::NavMeshQueryAsyncOperation*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHQUERYASYNCOPERATIONEXTENSIONS_ISSTATUSDONE_OFFSET))(operation);
		}

		static ::System::Boolean IsPathPartialDone(::UnityEngine::AI::NavMeshQueryAsyncOperation* operation)
		{
			return ((::System::Boolean(*)(::UnityEngine::AI::NavMeshQueryAsyncOperation*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHQUERYASYNCOPERATIONEXTENSIONS_ISPATHPARTIALDONE_OFFSET))(operation);
		}

		static ::System::Boolean IsStraightDone(::UnityEngine::AI::NavMeshQueryAsyncOperation* operation)
		{
			return ((::System::Boolean(*)(::UnityEngine::AI::NavMeshQueryAsyncOperation*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHQUERYASYNCOPERATIONEXTENSIONS_ISSTRAIGHTDONE_OFFSET))(operation);
		}
	};
}
