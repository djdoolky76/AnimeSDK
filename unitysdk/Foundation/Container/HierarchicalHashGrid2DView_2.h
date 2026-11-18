#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/Cell.h"
#include "unitysdk/Foundation/Container/CellFunc.h"
#include "unitysdk/Foundation/Container/EmptyUserData.h"
#include "unitysdk/Foundation/Container/NativeArrayView_2.h"
#include "unitysdk/Foundation/Container/NativeHashSetView_3.h"
#include "unitysdk/Foundation/Container/NativeSparseArrayView_2.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Foundation::Container
{
	inline static constexpr unsigned int HierarchicalHashGrid2DView_2_TypeDefinitionIndex = 9044;

	template <typename T1, typename T2>
	struct alignas(8) HierarchicalHashGrid2DView_2
	{
		::System::Byte _numLevels; // 0x0
		::System::Byte _levelRatio; // 0x0
		::Foundation::Container::NativeArrayView_2<::Foundation::Container::EmptyUserData, ::System::Single> _cellSize; // 0x0
		::Foundation::Container::NativeArrayView_2<::Foundation::Container::EmptyUserData, ::System::Single> _inverseCellSize; // 0x0
		::Foundation::Container::NativeArrayView_2<::Foundation::Container::EmptyUserData, ::System::Int32> _levelItemCount; // 0x0
		::Foundation::Container::NativeHashSetView_3<::Foundation::Container::EmptyUserData, ::Foundation::Container::Cell, ::Foundation::Container::CellFunc> _cells; // 0x0
		::Foundation::Container::NativeSparseArrayView_2<::System::Int64, ::System::Object*> _items; // 0x0
	};
}
