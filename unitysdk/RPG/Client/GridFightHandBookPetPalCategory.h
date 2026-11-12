#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightHandBookPetPalGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTHANDBOOKPETPALCATEGORY_CTOR_OFFSET UNITYSDK_OFFSET(0xDBD05E0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKPETPALCATEGORY_GET_CATEGORYDESC_OFFSET UNITYSDK_OFFSET(0xDBD0670)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKPETPALCATEGORY_GET_CATEGORYID_OFFSET UNITYSDK_OFFSET(0xDBD0660)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKPETPALCATEGORY_GET_GROUPS_OFFSET UNITYSDK_OFFSET(0xDBD0680)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKPETPALCATEGORY_GET_PETPALID_OFFSET UNITYSDK_OFFSET(0xDBD0650)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightHandBookPetPalCategory_TypeDefinitionIndex = 66453;

	class GridFightHandBookPetPalCategory : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightHandBookPetPalGroup*>* _Groups_k__BackingField; // 0x10
		::System::UInt32 _CategoryID_k__BackingField; // 0x18
		::System::UInt32 _PetPalID_k__BackingField; // 0x1C
		::RPG::Client::TextID _CategoryDesc_k__BackingField; // 0x20
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::TextID a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKPETPALCATEGORY_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_PetPalID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKPETPALCATEGORY_GET_PETPALID_OFFSET))(this);
		}

		::System::UInt32 get_CategoryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKPETPALCATEGORY_GET_CATEGORYID_OFFSET))(this);
		}

		::RPG::Client::TextID get_CategoryDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKPETPALCATEGORY_GET_CATEGORYDESC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightHandBookPetPalGroup*>* get_Groups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightHandBookPetPalGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKPETPALCATEGORY_GET_GROUPS_OFFSET))(this);
		}

	};
}
