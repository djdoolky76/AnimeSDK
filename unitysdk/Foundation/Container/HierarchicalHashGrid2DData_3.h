#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/Cell.h"
#include "unitysdk/Foundation/Container/CellFunc.h"
#include "unitysdk/Foundation/Container/EmptyUserData.h"
#include "unitysdk/Foundation/Container/NativeArrayData_3.h"
#include "unitysdk/Foundation/Container/NativeHashSetData_4.h"
#include "unitysdk/Foundation/Container/NativeSparseArrayData_3.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Foundation::Container
{
	inline static constexpr unsigned int HierarchicalHashGrid2DData_3_TypeDefinitionIndex = 9003;

	template <typename T1, typename T2, typename T3>
	struct alignas(8) HierarchicalHashGrid2DData_3
	{
		::System::Byte _numLevels; // 0x0
		::System::Byte _levelRatio; // 0x0
		::Foundation::Container::NativeArrayData_3<::Foundation::Container::EmptyUserData, ::System::Single, T1> _cellSize; // 0x0
		::Foundation::Container::NativeArrayData_3<::Foundation::Container::EmptyUserData, ::System::Single, T1> _inverseCellSize; // 0x0
		::Foundation::Container::NativeArrayData_3<::Foundation::Container::EmptyUserData, ::System::Int32, T1> _levelItemCount; // 0x0
		::Foundation::Container::NativeHashSetData_4<::Foundation::Container::EmptyUserData, ::Foundation::Container::Cell, ::Foundation::Container::CellFunc, T1> _cells; // 0x0
		::Foundation::Container::NativeSparseArrayData_3<::System::Int64, ::System::Object*, T1> _items; // 0x0
	};
}
