#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace PampelGames::RoadConstructor { class IntersectionObject; }
namespace PampelGames::RoadConstructor { class RoadObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int RoadConstructor_F2F7C450C5C3B191_TypeDefinitionIndex = 18845;

	struct alignas(8) RoadConstructor_F2F7C450C5C3B191
	{
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>* E3FFEC1FA07C7786; // 0x10
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>* A7DEE7B7302EF505; // 0x18
	};
}
