#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

template <typename T1, typename T2> class BGBIEFJEPKA_2;
template <typename T1, typename T2> class BOGNANLJBEB_2;
template <typename T1, typename T2> class CBHEINKEELF_2;
template <typename T> class PCICGDFFIHD_1;

namespace MoleMole::QuickGraph
{
	inline static constexpr unsigned int UndirectedGraph_2_TypeDefinitionIndex = 28061;

	template <typename T1, typename T2>
	class UndirectedGraph_2 : public ::System::Object
	{
	public:
		::System::Boolean allowParallelEdges; // 0x0
		::BGBIEFJEPKA_2<T1, T2>* adjacentEdges; // 0x0
		::CBHEINKEELF_2<T1, T2>* edgeEqualityComparer; // 0x0
		::System::Int32 edgeCount; // 0x0
		::System::Int32 edgeCapacity; // 0x0
		::PCICGDFFIHD_1<T1>* VertexAdded; // 0x0
		::PCICGDFFIHD_1<T1>* VertexRemoved; // 0x0
		::BOGNANLJBEB_2<T1, T2>* EdgeAdded; // 0x0
		::BOGNANLJBEB_2<T1, T2>* EdgeRemoved; // 0x0
	};
}
