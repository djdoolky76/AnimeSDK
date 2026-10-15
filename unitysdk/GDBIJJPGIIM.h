#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIDHOABFFFP;
class LOJIKMHLCBL;
class OINNEGOFKAA;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class EquipmentItemData; }

#define GDBIJJPGIIM_DCLEHPIDCON_OFFSET UNITYSDK_OFFSET(0x15988EB0)
#define GDBIJJPGIIM_FDNPNMCEBKI_OFFSET UNITYSDK_OFFSET(0x159890F0)
#define GDBIJJPGIIM_MOOCLGLOBJA_OFFSET UNITYSDK_OFFSET(0x15989190)

inline static constexpr unsigned int GDBIJJPGIIM_TypeDefinitionIndex = 62544;

	class GDBIJJPGIIM : public ::System::Object
	{
	public:
		static ::GIDHOABFFFP* DCLEHPIDCON(::GIDHOABFFFP* a1, ::RPG::AvatarSystem::IAvatar* a2, ::OINNEGOFKAA* a3)
		{
			return ((::GIDHOABFFFP*(*)(::GIDHOABFFFP*, ::RPG::AvatarSystem::IAvatar*, ::OINNEGOFKAA*))((::PBYTE)hIl2Cpp + GDBIJJPGIIM_DCLEHPIDCON_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::EquipmentItemData* FDNPNMCEBKI(::RPG::AvatarSystem::IAvatar* a1, ::OINNEGOFKAA* a2)
		{
			return ((::RPG::Client::EquipmentItemData*(*)(::RPG::AvatarSystem::IAvatar*, ::OINNEGOFKAA*))((::PBYTE)hIl2Cpp + GDBIJJPGIIM_FDNPNMCEBKI_OFFSET))(a1, a2);
		}

		static ::GIDHOABFFFP* MOOCLGLOBJA(::GIDHOABFFFP* a1, ::LOJIKMHLCBL* a2)
		{
			return ((::GIDHOABFFFP*(*)(::GIDHOABFFFP*, ::LOJIKMHLCBL*))((::PBYTE)hIl2Cpp + GDBIJJPGIIM_MOOCLGLOBJA_OFFSET))(a1, a2);
		}

	};
