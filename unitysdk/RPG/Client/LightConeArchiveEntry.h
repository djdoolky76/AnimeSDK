#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseArchiveEntry.h"
namespace RPG::AvatarSystem { class AvatarPath; }
namespace RPG::Client { class EquipmentData; }

#define RPG_CLIENT_LIGHTCONEARCHIVEENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0xDDCAF30)
#define RPG_CLIENT_LIGHTCONEARCHIVEENTRY_GETPATH_OFFSET UNITYSDK_OFFSET(0xDDCAB50)
#define RPG_CLIENT_LIGHTCONEARCHIVEENTRY_GET_EQUIPMENTDATA_OFFSET UNITYSDK_OFFSET(0xDDCAF50)
#define RPG_CLIENT_LIGHTCONEARCHIVEENTRY_GET_SORTID_OFFSET UNITYSDK_OFFSET(0xDDCAFC0)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeArchiveEntry_TypeDefinitionIndex = 63841;

	class LightConeArchiveEntry : public ::RPG::Client::BaseArchiveEntry
	{
	public:
		::RPG::Client::EquipmentData* _EquipmentData; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEENTRY_CTOR_OFFSET))(this);
		}

		::RPG::Client::EquipmentData* get_EquipmentData()
		{
			return ((::RPG::Client::EquipmentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEENTRY_GET_EQUIPMENTDATA_OFFSET))(this);
		}

		::System::Int32 get_SortID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEENTRY_GET_SORTID_OFFSET))(this);
		}

		::RPG::AvatarSystem::AvatarPath* GetPath()
		{
			return ((::RPG::AvatarSystem::AvatarPath*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEARCHIVEENTRY_GETPATH_OFFSET))(this);
		}

	};
}
