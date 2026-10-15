#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"
namespace RPG::Client { class LocalizedText; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCONDITIONCONTROLBINDER_CTOR_OFFSET UNITYSDK_OFFSET(0xD5F6350)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCONDITIONCONTROLBINDER_GET_TEXTDESC_OFFSET UNITYSDK_OFFSET(0xD5F6290)

namespace RPG::Client::MechCraft::View
{
	class MechCraftConditionControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCONDITIONCONTROLBINDER_CTOR_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextDesc()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCONDITIONCONTROLBINDER_GET_TEXTDESC_OFFSET))(this);
		}

	};
}
