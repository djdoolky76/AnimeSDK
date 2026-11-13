#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightHandBookPetPalCategory; }
namespace RPG::Client { class GridFightHandBookPetPalGroup; }
namespace RPG::Client { class GridFightPetPalConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTHANDBOOKPETPAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC22B40)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKPETPAL_GETALLGROUPS_OFFSET UNITYSDK_OFFSET(0x1CC22CE0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKPETPAL_GET_CATEGORIES_OFFSET UNITYSDK_OFFSET(0x1CC22CD0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKPETPAL_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1CC22CC0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKPETPAL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CC22C20)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKPETPAL_GET_PETPALID_OFFSET UNITYSDK_OFFSET(0x1CC22BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightHandBookPetPal_TypeDefinitionIndex = 66452;

	class GridFightHandBookPetPal : public ::System::Object
	{
	public:
		::RPG::Client::GridFightPetPalConfig* _Config_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightHandBookPetPalCategory*>* _Categories_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::Client::GridFightPetPalConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPetPalConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKPETPAL_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_PetPalID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKPETPAL_GET_PETPALID_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKPETPAL_GET_ID_OFFSET))(this);
		}

		::RPG::Client::GridFightPetPalConfig* get_Config()
		{
			return ((::RPG::Client::GridFightPetPalConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKPETPAL_GET_CONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightHandBookPetPalCategory*>* get_Categories()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightHandBookPetPalCategory*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKPETPAL_GET_CATEGORIES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightHandBookPetPalGroup*>* GetAllGroups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightHandBookPetPalGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKPETPAL_GETALLGROUPS_OFFSET))(this);
		}

	};
}
