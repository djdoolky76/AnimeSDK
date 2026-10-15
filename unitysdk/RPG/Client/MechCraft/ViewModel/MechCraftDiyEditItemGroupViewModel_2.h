#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftDiyEditItemGroupViewModel_2_TypeDefinitionIndex = 79605;

	template <typename T1, typename T2>
	class MechCraftDiyEditItemGroupViewModel_2 : public ::System::Object
	{
	public:
		::System::Func_2<T1, T2>* _ItemFactory; // 0x0
		::System::Collections::Generic::List_1<T2>* _Items_k__BackingField; // 0x0
		T2 _SelectedItem_k__BackingField; // 0x0
	};
}
