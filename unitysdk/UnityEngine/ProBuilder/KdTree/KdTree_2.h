#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/KdTree/AddDuplicateBehavior.h"
namespace UnityEngine::ProBuilder::KdTree { template <typename T1, typename T2> class KdTreeNode_2; }
namespace UnityEngine::ProBuilder::KdTree { template <typename T> class ITypeMath_1; }

namespace UnityEngine::ProBuilder::KdTree
{
	inline static constexpr unsigned int KdTree_2_TypeDefinitionIndex = 38722;

	template <typename T1, typename T2>
	class KdTree_2 : public ::System::Object
	{
	public:
		::System::Int32 dimensions; // 0x0
		::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T1>* typeMath; // 0x0
		::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<T1, T2>* root; // 0x0
		::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior _AddDuplicateBehavior_k__BackingField; // 0x0
		::System::Int32 _Count_k__BackingField; // 0x0
	};
}
