#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
namespace RPG::Client::PixAir { class PixAirBagEquipsViewModel; }
namespace RPG::Client::PixAir { class PixAirBagSlotItemControl; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRBAGSLOTLISTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xDB29CC0)
#define RPG_CLIENT_PIXAIR_PIXAIRBAGSLOTLISTCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDB29C10)
#define RPG_CLIENT_PIXAIR_PIXAIRBAGSLOTLISTCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDB29AE0)
#define RPG_CLIENT_PIXAIR_PIXAIRBAGSLOTLISTCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xDB29980)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBagSlotListControl_TypeDefinitionIndex = 79226;

	class PixAirBagSlotListControl : public ::Sofa::BaseSofaControl
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirBagSlotItemControl*>* _SlotItemControls; // 0x40
		// static const ::System::Object _MaxSlotSize; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGSLOTLISTCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGSLOTLISTCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGSLOTLISTCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirBagEquipsViewModel* get__ViewModel()
		{
			return ((::RPG::Client::PixAir::PixAirBagEquipsViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGSLOTLISTCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

	};
}
