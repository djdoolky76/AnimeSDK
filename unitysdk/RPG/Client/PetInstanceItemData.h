#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ItemData.h"
#include "unitysdk/RPG/Client/Pet/PetInstanceIdentifier.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client::Pet { class IPetInstance; }
namespace System { class String; }

#define RPG_CLIENT_PETINSTANCEITEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE50F9E0)
#define RPG_CLIENT_PETINSTANCEITEMDATA_GET_ITEMFIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0xE525C20)
#define RPG_CLIENT_PETINSTANCEITEMDATA_GET_ITEMICONPATH_OFFSET UNITYSDK_OFFSET(0xE5259F0)
#define RPG_CLIENT_PETINSTANCEITEMDATA_GET_ITEMNAME_OFFSET UNITYSDK_OFFSET(0xE525980)
#define RPG_CLIENT_PETINSTANCEITEMDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE525830)
#define RPG_CLIENT_PETINSTANCEITEMDATA_GET_PETINSTANCEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xE50DB10)

namespace RPG::Client
{
	inline static constexpr unsigned int PetInstanceItemData_TypeDefinitionIndex = 68392;

	class PetInstanceItemData : public ::RPG::Client::ItemData
	{
	public:
		::RPG::Client::Pet::IPetInstance* _PetInstance; // 0x58
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::Pet::IPetInstance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::Pet::IPetInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETINSTANCEITEMDATA_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETINSTANCEITEMDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_ItemName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETINSTANCEITEMDATA_GET_ITEMNAME_OFFSET))(this);
		}

		::System::String* get_ItemIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETINSTANCEITEMDATA_GET_ITEMICONPATH_OFFSET))(this);
		}

		::System::String* get_ItemFigureIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETINSTANCEITEMDATA_GET_ITEMFIGUREICONPATH_OFFSET))(this);
		}

		::RPG::Client::Pet::PetInstanceIdentifier get_PetInstanceIdentifier()
		{
			return ((::RPG::Client::Pet::PetInstanceIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETINSTANCEITEMDATA_GET_PETINSTANCEIDENTIFIER_OFFSET))(this);
		}

	};
}
