#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"
class IGGAALKPHMC;
class LPOOJCMOLDC;
class PBDJKHDICCI;
namespace RPG::Client::PixAir { class PixAirEquipItemViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xDB28FC0)
#define RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL_GETEQUIPITEM_OFFSET UNITYSDK_OFFSET(0xDB294B0)
#define RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL_GET_EQUIPITEMSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDB295B0)
#define RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL_GET_EQUIPPROPERTYGETTER_OFFSET UNITYSDK_OFFSET(0xDB295D0)
#define RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL_SET_EQUIPITEMSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDB295C0)
#define RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL_SET_EQUIPPROPERTYGETTER_OFFSET UNITYSDK_OFFSET(0xDB295E0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBagEquipsViewModel_TypeDefinitionIndex = 79248;

	class PixAirBagEquipsViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::LPOOJCMOLDC* _EquipService; // 0x20
		::PBDJKHDICCI* _EquipPropertyGetter_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemViewModel*>* _EquipItemsViewModel_k__BackingField; // 0x30
		::System::Void _ctor(::IGGAALKPHMC* a1, ::LPOOJCMOLDC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IGGAALKPHMC*, ::LPOOJCMOLDC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::PixAir::PixAirEquipItemViewModel* GetEquipItem(::System::Int32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirEquipItemViewModel*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL_GETEQUIPITEM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemViewModel*>* get_EquipItemsViewModel()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL_GET_EQUIPITEMSVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_EquipItemsViewModel(::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL_SET_EQUIPITEMSVIEWMODEL_OFFSET))(this, a1);
		}

		::PBDJKHDICCI* get_EquipPropertyGetter()
		{
			return ((::PBDJKHDICCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL_GET_EQUIPPROPERTYGETTER_OFFSET))(this);
		}

		::System::Void set_EquipPropertyGetter(::PBDJKHDICCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBDJKHDICCI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL_SET_EQUIPPROPERTYGETTER_OFFSET))(this, a1);
		}

	};
}
