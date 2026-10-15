#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIDHOABFFFP;
class LOJIKMHLCBL;
class OINNEGOFKAA;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class EquipmentItemData; }

#define NKMJLJGHCPO_DCLEHPIDCON_OFFSET UNITYSDK_OFFSET(0xBC3E780)
#define NKMJLJGHCPO_FDNPNMCEBKI_OFFSET UNITYSDK_OFFSET(0xBC3E9C0)
#define NKMJLJGHCPO_MOOCLGLOBJA_OFFSET UNITYSDK_OFFSET(0xBC3EA50)

	class NKMJLJGHCPO : public ::System::Object
	{
	public:
		static ::GIDHOABFFFP* DCLEHPIDCON(::GIDHOABFFFP* a1, ::RPG::AvatarSystem::IAvatar* a2, ::OINNEGOFKAA* a3)
		{
			return ((::GIDHOABFFFP*(*)(::GIDHOABFFFP*, ::RPG::AvatarSystem::IAvatar*, ::OINNEGOFKAA*))((::PBYTE)hIl2Cpp + NKMJLJGHCPO_DCLEHPIDCON_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::EquipmentItemData* FDNPNMCEBKI(::RPG::AvatarSystem::IAvatar* a1, ::OINNEGOFKAA* a2)
		{
			return ((::RPG::Client::EquipmentItemData*(*)(::RPG::AvatarSystem::IAvatar*, ::OINNEGOFKAA*))((::PBYTE)hIl2Cpp + NKMJLJGHCPO_FDNPNMCEBKI_OFFSET))(a1, a2);
		}

		static ::GIDHOABFFFP* MOOCLGLOBJA(::GIDHOABFFFP* a1, ::LOJIKMHLCBL* a2)
		{
			return ((::GIDHOABFFFP*(*)(::GIDHOABFFFP*, ::LOJIKMHLCBL*))((::PBYTE)hIl2Cpp + NKMJLJGHCPO_MOOCLGLOBJA_OFFSET))(a1, a2);
		}

	};
