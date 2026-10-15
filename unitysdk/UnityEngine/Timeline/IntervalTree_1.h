#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Timeline/IntervalTreeNode.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int IntervalTree_1_TypeDefinitionIndex = 38820;

	template <typename T>
	class IntervalTree_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* m_Entries; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTreeNode>* m_Nodes; // 0x0
		::System::Boolean _dirty_k__BackingField; // 0x0
		// static const ::System::Object kMinNodeSize; // 0x0
		// static const ::System::Object kInvalidNode; // 0x0
		// static const ::System::Object kCenterUnknown; // 0x0
	};
}
