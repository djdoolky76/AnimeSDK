#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	template <typename T>
	class BinSpacePartition_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _Cells; // 0x0
		::System::Collections::Generic::List_1<T>* _Neighbors; // 0x0
		::System::Collections::Generic::IEnumerator_1<T>* _CurNeighbor; // 0x0
		::System::Single _SpaceWidth; // 0x0
		::System::Single _SpaceHeight; // 0x0
		::System::Int32 _NumCellsX; // 0x0
		::System::Int32 _NumCellsY; // 0x0
		::System::Single _CellSizeX; // 0x0
		::System::Single _CellSizeY; // 0x0
	};
}
