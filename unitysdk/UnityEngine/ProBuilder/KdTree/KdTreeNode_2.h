#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder::KdTree { template <typename T1, typename T2> class KdTreeNode_2; }

namespace UnityEngine::ProBuilder::KdTree
{
	template <typename T1, typename T2>
	class KdTreeNode_2 : public ::System::Object
	{
	public:
		::Il2CppArray<T1>* Point; // 0x0
		T2 Value; // 0x0
		::System::Collections::Generic::List_1<T2>* Duplicates; // 0x0
		::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<T1, T2>* LeftChild; // 0x0
		::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<T1, T2>* RightChild; // 0x0
	};
}
