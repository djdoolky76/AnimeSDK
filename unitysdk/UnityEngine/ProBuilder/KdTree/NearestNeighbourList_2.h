#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine::ProBuilder::KdTree { template <typename T1, typename T2> class PriorityQueue_2; }
namespace UnityEngine::ProBuilder::KdTree { template <typename T> class ITypeMath_1; }

namespace UnityEngine::ProBuilder::KdTree
{
	template <typename T1, typename T2>
	class NearestNeighbourList_2 : public ::System::Object
	{
	public:
		::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<T1, T2>* queue; // 0x0
		::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T2>* distanceMath; // 0x0
		::System::Int32 maxCapacity; // 0x0
	};
}
