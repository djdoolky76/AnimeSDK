#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"
namespace RPG::Client { class PrefabLoadMeta; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECECOLLECTIONCONTROLBINDER_CTOR_OFFSET UNITYSDK_OFFSET(0xD60C360)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECECOLLECTIONCONTROLBINDER_GET_PREFABPIECE_OFFSET UNITYSDK_OFFSET(0xD60BCD0)

namespace RPG::Client::MechCraft::View
{
	class MechCraftCraftChipPieceCollectionControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECECOLLECTIONCONTROLBINDER_CTOR_OFFSET))(this);
		}

		::RPG::Client::PrefabLoadMeta* get_PrefabPiece()
		{
			return ((::RPG::Client::PrefabLoadMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECECOLLECTIONCONTROLBINDER_GET_PREFABPIECE_OFFSET))(this);
		}

	};
}
