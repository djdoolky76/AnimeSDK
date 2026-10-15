#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITERRORHINTCONTROLBINDER_CTOR_OFFSET UNITYSDK_OFFSET(0xD61A6C0)

namespace RPG::Client::MechCraft::View
{
	class MechCraftCraftEditErrorHintControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITERRORHINTCONTROLBINDER_CTOR_OFFSET))(this);
		}

	};
}
