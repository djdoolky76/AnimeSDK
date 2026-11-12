#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"
namespace RPG::Client { class UIStateCtrl; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROLBINDER_CTOR_OFFSET UNITYSDK_OFFSET(0xE040F20)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROLBINDER_GET_ICON_OFFSET UNITYSDK_OFFSET(0xE040AC0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROLBINDER_GET_STATECTRL_OFFSET UNITYSDK_OFFSET(0xE040DF0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftAttributeRadarDimensionControlBinder_TypeDefinitionIndex = 82585;

	class MechCraftAttributeRadarDimensionControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROLBINDER_CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_Icon()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROLBINDER_GET_ICON_OFFSET))(this);
		}

		::RPG::Client::UIStateCtrl* get_StateCtrl()
		{
			return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROLBINDER_GET_STATECTRL_OFFSET))(this);
		}

	};
}
