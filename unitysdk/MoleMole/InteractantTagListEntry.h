#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NLLJDOHBCJA.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole
{
	inline static constexpr unsigned int InteractantTagListEntry_TypeDefinitionIndex = 83004;

	struct alignas(8) InteractantTagListEntry
	{
		::NLLJDOHBCJA Interactant; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::String*>* Tags; // 0x18
	};
}
