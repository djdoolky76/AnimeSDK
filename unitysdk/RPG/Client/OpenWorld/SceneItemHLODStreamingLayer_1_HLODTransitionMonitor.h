#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLEFGGIHGMI;
class OLMJHHNPJJH;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int SceneItemHLODStreamingLayer_1_HLODTransitionMonitor_TypeDefinitionIndex = 73826;

	template <typename T>
	class SceneItemHLODStreamingLayer_1_HLODTransitionMonitor : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::OLMJHHNPJJH*>* _ShrinkToExpandNodes; // 0x0
		::System::Collections::Generic::HashSet_1<::OLMJHHNPJJH*>* _ShrinkToExpandSet; // 0x0
		::System::Collections::Generic::List_1<::OLMJHHNPJJH*>* _ExpandToShrinkNodes; // 0x0
		::System::Collections::Generic::HashSet_1<::OLMJHHNPJJH*>* _ExpandToShrinkSet; // 0x0
		::KLEFGGIHGMI* _OwnerBlock; // 0x0
	};
}
