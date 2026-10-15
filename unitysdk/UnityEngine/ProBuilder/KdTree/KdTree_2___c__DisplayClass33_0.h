#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine::ProBuilder::KdTree { template <typename T1, typename T2> class KdTreeNode_2; }

namespace UnityEngine::ProBuilder::KdTree
{
	inline static constexpr unsigned int KdTree_2___c__DisplayClass33_0_TypeDefinitionIndex = 38723;

	template <typename T1, typename T2>
	class KdTree_2___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<T1, T2>*>* left; // 0x0
		::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<T1, T2>*>* right; // 0x0
	};
}
