#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderItemViewModel; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FJIJGGEANOH_ADD_ONORDERNAVIGATEREQUESTED_OFFSET UNITYSDK_OFFSET(0x157CF550)
#define FJIJGGEANOH_ADD_ONORDERSELECTREQUESTED_OFFSET UNITYSDK_OFFSET(0x157CF450)
#define FJIJGGEANOH_BGKFAKCBKBJ_OFFSET UNITYSDK_OFFSET(0x157CF650)
#define FJIJGGEANOH_CTOR_OFFSET UNITYSDK_OFFSET(0x157CF730)
#define FJIJGGEANOH_GET_ORDERS_OFFSET UNITYSDK_OFFSET(0x157CF430)
#define FJIJGGEANOH_HMAKPHPEBFJ_OFFSET UNITYSDK_OFFSET(0x157CF6C0)
#define FJIJGGEANOH_REMOVE_ONORDERNAVIGATEREQUESTED_OFFSET UNITYSDK_OFFSET(0x157CF5D0)
#define FJIJGGEANOH_REMOVE_ONORDERSELECTREQUESTED_OFFSET UNITYSDK_OFFSET(0x157CF4D0)
#define FJIJGGEANOH_SET_ORDERS_OFFSET UNITYSDK_OFFSET(0x157CF440)

inline static constexpr unsigned int FJIJGGEANOH_TypeDefinitionIndex = 79676;

	class FJIJGGEANOH : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* OnOrderNavigateRequested; // 0x10
		::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* OnOrderSelectRequested; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* _Orders_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIJGGEANOH_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* get_Orders()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIJGGEANOH_GET_ORDERS_OFFSET))(this);
		}

		::System::Void set_Orders(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>*))((::PBYTE)hIl2Cpp + FJIJGGEANOH_SET_ORDERS_OFFSET))(this, a1);
		}

		::System::Void add_OnOrderSelectRequested(::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>*))((::PBYTE)hIl2Cpp + FJIJGGEANOH_ADD_ONORDERSELECTREQUESTED_OFFSET))(this, a1);
		}

		::System::Void remove_OnOrderSelectRequested(::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>*))((::PBYTE)hIl2Cpp + FJIJGGEANOH_REMOVE_ONORDERSELECTREQUESTED_OFFSET))(this, a1);
		}

		::System::Void add_OnOrderNavigateRequested(::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>*))((::PBYTE)hIl2Cpp + FJIJGGEANOH_ADD_ONORDERNAVIGATEREQUESTED_OFFSET))(this, a1);
		}

		::System::Void remove_OnOrderNavigateRequested(::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>*))((::PBYTE)hIl2Cpp + FJIJGGEANOH_REMOVE_ONORDERNAVIGATEREQUESTED_OFFSET))(this, a1);
		}

		::System::Void BGKFAKCBKBJ(::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*))((::PBYTE)hIl2Cpp + FJIJGGEANOH_BGKFAKCBKBJ_OFFSET))(this, a1);
		}

		::System::Void HMAKPHPEBFJ(::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*))((::PBYTE)hIl2Cpp + FJIJGGEANOH_HMAKPHPEBFJ_OFFSET))(this, a1);
		}

	};
