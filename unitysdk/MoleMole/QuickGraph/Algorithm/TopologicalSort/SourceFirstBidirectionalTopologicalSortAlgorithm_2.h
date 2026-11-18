#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHJIEENOAFB.h"

namespace MoleMole::QuickGraph::Collections { template <typename T1, typename T2> class BinaryQueue_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T> class PCICGDFFIHD_1;

namespace MoleMole::QuickGraph::Algorithm::TopologicalSort
{
	inline static constexpr unsigned int SourceFirstBidirectionalTopologicalSortAlgorithm_2_TypeDefinitionIndex = 28057;

	template <typename T1, typename T2>
	class SourceFirstBidirectionalTopologicalSortAlgorithm_2
	{
	public:
		::System::Collections::Generic::IDictionary_2<T1, ::System::Int32>* predCounts; // 0x0
		::MoleMole::QuickGraph::Collections::BinaryQueue_2<T1, ::System::Int32>* heap; // 0x0
		::System::Collections::Generic::IList_1<T1>* sortedVertices; // 0x0
		::HHJIEENOAFB direction; // 0x0
		::PCICGDFFIHD_1<T1>* AddVertex; // 0x0
	};
}
