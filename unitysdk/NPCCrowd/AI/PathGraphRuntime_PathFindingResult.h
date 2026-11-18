#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class PathGraphSplineControlPointLocatorComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHRUNTIME_PATHFINDINGRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xFD1E770)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphRuntime_PathFindingResult_TypeDefinitionIndex = 58721;

	class PathGraphRuntime_PathFindingResult : public ::System::Object
	{
	public:
		::NPCCrowd::AI::PathGraphSplineControlPointLocatorComponent* InitialLocator; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* PathNodes; // 0x18
		::System::Int32 PathID; // 0x20
		::System::Int32 StartPointID; // 0x24
		::System::Int32 EndPointID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHRUNTIME_PATHFINDINGRESULT__CTOR_OFFSET))(this);
		}
	};
}
