#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"
class FMDODCIIAJA;
class IGGAALKPHMC;
class LPOOJCMOLDC;
namespace RPG::Client::PixAir { class PixAirEquipItemViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xE58C050)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL_GETEQUIPITEM_OFFSET UNITYSDK_OFFSET(0xE58C3B0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL_GET_EQUIPITEMSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE58C4B0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL_GET_EQUIPPROPERTYGETTER_OFFSET UNITYSDK_OFFSET(0xE58C4D0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL_GET_SLOTNUM_OFFSET UNITYSDK_OFFSET(0xE58C360)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL_SET_EQUIPITEMSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE58C4C0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL_SET_EQUIPPROPERTYGETTER_OFFSET UNITYSDK_OFFSET(0xE58C4E0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBattleEquipsViewModel_TypeDefinitionIndex = 82028;

	class PixAirBattleEquipsViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemViewModel*>* _EquipItemsViewModel_k__BackingField; // 0x20
		::FMDODCIIAJA* _EquipPropertyGetter_k__BackingField; // 0x28
		::LPOOJCMOLDC* _EquipService; // 0x30
		::IGGAALKPHMC* _EquipInfo; // 0x38
		::System::Void _ctor(::IGGAALKPHMC* a1, ::LPOOJCMOLDC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IGGAALKPHMC*, ::LPOOJCMOLDC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_SlotNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL_GET_SLOTNUM_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEquipItemViewModel* GetEquipItem(::System::Int32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirEquipItemViewModel*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL_GETEQUIPITEM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemViewModel*>* get_EquipItemsViewModel()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL_GET_EQUIPITEMSVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_EquipItemsViewModel(::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL_SET_EQUIPITEMSVIEWMODEL_OFFSET))(this, a1);
		}

		::FMDODCIIAJA* get_EquipPropertyGetter()
		{
			return ((::FMDODCIIAJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL_GET_EQUIPPROPERTYGETTER_OFFSET))(this);
		}

		::System::Void set_EquipPropertyGetter(::FMDODCIIAJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMDODCIIAJA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL_SET_EQUIPPROPERTYGETTER_OFFSET))(this, a1);
		}

	};
}
