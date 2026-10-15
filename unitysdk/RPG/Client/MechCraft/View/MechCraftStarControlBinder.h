#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"
namespace RPG::Client { class UIStateCtrl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSTARCONTROLBINDER_CTOR_OFFSET UNITYSDK_OFFSET(0xD665FB0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSTARCONTROLBINDER_GET_STATECTRL_OFFSET UNITYSDK_OFFSET(0xD665EF0)

namespace RPG::Client::MechCraft::View
{
	class MechCraftStarControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSTARCONTROLBINDER_CTOR_OFFSET))(this);
		}

		::RPG::Client::UIStateCtrl* get_StateCtrl()
		{
			return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSTARCONTROLBINDER_GET_STATECTRL_OFFSET))(this);
		}

	};
}
