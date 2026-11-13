#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::PixAir { class PixAirEquipItemControl; }
namespace RPG::Client::PixAir { class PixAirEquipItemViewModel; }

#define RPG_CLIENT_PIXAIR_PIXAIRBAGSLOTITEMCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E34C360)
#define RPG_CLIENT_PIXAIR_PIXAIRBAGSLOTITEMCONTROL_GETITEMCONTROL_OFFSET UNITYSDK_OFFSET(0x1E34C270)
#define RPG_CLIENT_PIXAIR_PIXAIRBAGSLOTITEMCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1E34C1C0)
#define RPG_CLIENT_PIXAIR_PIXAIRBAGSLOTITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1E34C120)
#define RPG_CLIENT_PIXAIR_PIXAIRBAGSLOTITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1E34C0A0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBagSlotItemControl_TypeDefinitionIndex = 82002;

	class PixAirBagSlotItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::PrefabLoadMeta* _LoaderEquip; // 0x40
		::RPG::Client::PixAir::PixAirEquipItemControl* _ItemControl; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGSLOTITEMCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGSLOTITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGSLOTITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEquipItemControl* GetItemControl()
		{
			return ((::RPG::Client::PixAir::PixAirEquipItemControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGSLOTITEMCONTROL_GETITEMCONTROL_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEquipItemViewModel* get__ViewModel()
		{
			return ((::RPG::Client::PixAir::PixAirEquipItemViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGSLOTITEMCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

	};
}
