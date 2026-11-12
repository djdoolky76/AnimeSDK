#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITERRORHINTCONTROLBINDER_CTOR_OFFSET UNITYSDK_OFFSET(0xE06D3E0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftEditErrorHintControlBinder_TypeDefinitionIndex = 82656;

	class MechCraftCraftEditErrorHintControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITERRORHINTCONTROLBINDER_CTOR_OFFSET))(this);
		}

	};
}
