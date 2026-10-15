#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace RPG::Client::ChenLingFes { class ChenLingFesItemData; }
namespace Sofa::Core { template <typename T> class ObservableList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CPDKPMMIJNN_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0xDCD0F20)
#define CPDKPMMIJNN_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD1100)
#define CPDKPMMIJNN_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0xDCD10E0)
#define CPDKPMMIJNN_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0xDCD10F0)

inline static constexpr unsigned int CPDKPMMIJNN_TypeDefinitionIndex = 81289;

	class CPDKPMMIJNN : public ::System::Object
	{
	public:
		::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesItemData*>* _Items_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPDKPMMIJNN_CTOR_OFFSET))(this);
		}

		::System::Void ALJIOCDBMKO(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CPDKPMMIJNN_ALJIOCDBMKO_OFFSET))(this, a1);
		}

		::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesItemData*>* get_Items()
		{
			return ((::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPDKPMMIJNN_GET_ITEMS_OFFSET))(this);
		}

		::System::Void set_Items(::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesItemData*>*))((::PBYTE)hIl2Cpp + CPDKPMMIJNN_SET_ITEMS_OFFSET))(this, a1);
		}

	};
