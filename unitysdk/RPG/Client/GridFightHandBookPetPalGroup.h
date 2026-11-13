#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightPetPalEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTHANDBOOKPETPALGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC22F50)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKPETPALGROUP_GET_CATEGORYID_OFFSET UNITYSDK_OFFSET(0x1CC22FF0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKPETPALGROUP_GET_EFFECTS_OFFSET UNITYSDK_OFFSET(0x1CC23060)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKPETPALGROUP_GET_GROUPDESC_OFFSET UNITYSDK_OFFSET(0x1CC23050)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKPETPALGROUP_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CC23000)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKPETPALGROUP_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CC23010)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKPETPALGROUP_GET_PETPALID_OFFSET UNITYSDK_OFFSET(0x1CC22FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightHandBookPetPalGroup_TypeDefinitionIndex = 66454;

	class GridFightHandBookPetPalGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightPetPalEffectConfig*>* _Effects_k__BackingField; // 0x10
		::System::UInt32 _PetPalID_k__BackingField; // 0x18
		::System::UInt32 _CategoryID_k__BackingField; // 0x1C
		::System::UInt32 _GroupID_k__BackingField; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _GroupDesc_k__BackingField; // 0x28
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::TextID a4, ::System::Collections::Generic::List_1<::RPG::Client::GridFightPetPalEffectConfig*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::TextID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightPetPalEffectConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKPETPALGROUP_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 get_PetPalID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKPETPALGROUP_GET_PETPALID_OFFSET))(this);
		}

		::System::UInt32 get_CategoryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKPETPALGROUP_GET_CATEGORYID_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKPETPALGROUP_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKPETPALGROUP_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_GroupDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKPETPALGROUP_GET_GROUPDESC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightPetPalEffectConfig*>* get_Effects()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightPetPalEffectConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKPETPALGROUP_GET_EFFECTS_OFFSET))(this);
		}

	};
}
