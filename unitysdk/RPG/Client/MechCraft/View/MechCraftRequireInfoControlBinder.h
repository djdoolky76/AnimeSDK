#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"
namespace RPG::Client { class LocalizedText; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREQUIREINFOCONTROLBINDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF2D60)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREQUIREINFOCONTROLBINDER_GET_TEXTDESC_OFFSET UNITYSDK_OFFSET(0x1DEF2CA0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftRequireInfoControlBinder_TypeDefinitionIndex = 82775;

	class MechCraftRequireInfoControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREQUIREINFOCONTROLBINDER_CTOR_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextDesc()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREQUIREINFOCONTROLBINDER_GET_TEXTDESC_OFFSET))(this);
		}

	};
}
