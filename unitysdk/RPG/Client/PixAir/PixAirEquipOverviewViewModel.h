#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"
class OBJANKHLNGO;
namespace RPG::Client::PixAir { class PixAirEquipOverviewViewModel; }
namespace RPG::Client::PixAir { class PixAirEquipViewModel; }
namespace RPG::Client::PixAir { class PixAirEquipmentGhost; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPOVERVIEWVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xE58D2A0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPOVERVIEWVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xE59CF70)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPOVERVIEWVIEWMODEL_GET_EQUIPVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xE59D610)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPOVERVIEWVIEWMODEL_SET_EQUIPVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xE59D620)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPOVERVIEWVIEWMODEL__CREATEEQUIPVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xE59D020)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPOVERVIEWVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0xE59CF90)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipOverviewViewModel_TypeDefinitionIndex = 82042;

	class PixAirEquipOverviewViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipViewModel*>* _EquipViewModels_k__BackingField; // 0x20
		::OBJANKHLNGO* _UIMessenger; // 0x28
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::PixAir::PixAirEquipmentGhost*>* _EquipmentGhosts; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPOVERVIEWVIEWMODEL_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirEquipOverviewViewModel* Create(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::PixAir::PixAirEquipmentGhost*>* a1, ::OBJANKHLNGO* a2)
		{
			return ((::RPG::Client::PixAir::PixAirEquipOverviewViewModel*(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::PixAir::PixAirEquipmentGhost*>*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPOVERVIEWVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPOVERVIEWVIEWMODEL__INIT_OFFSET))(this);
		}

		::System::Void _CreateEquipViewModels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPOVERVIEWVIEWMODEL__CREATEEQUIPVIEWMODELS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipViewModel*>* get_EquipViewModels()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPOVERVIEWVIEWMODEL_GET_EQUIPVIEWMODELS_OFFSET))(this);
		}

		::System::Void set_EquipViewModels(::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPOVERVIEWVIEWMODEL_SET_EQUIPVIEWMODELS_OFFSET))(this, a1);
		}

	};
}
