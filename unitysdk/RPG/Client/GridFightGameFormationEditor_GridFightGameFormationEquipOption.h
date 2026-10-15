#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightHandBookEquipItemType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemConfig; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONEQUIPOPTION_CTOR_OFFSET UNITYSDK_OFFSET(0xD154C00)

namespace RPG::Client
{
	class GridFightGameFormationEditor_GridFightGameFormationEquipOption : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipItemConfig* EquipConfig; // 0x10
		::RPG::Client::GridFightHandBookEquipItemType ItemType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONEQUIPOPTION_CTOR_OFFSET))(this);
		}

	};
}
