#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBackEquipmentConfig; }

#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDC4E800)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C__DISPLAYCLASS4_0__GETBACKEQUIPMENTCONFIG_B__0_OFFSET UNITYSDK_OFFSET(0xDC51660)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleConfig___c__DisplayClass4_0_TypeDefinitionIndex = 66801;

	class GridFightRoleConfig___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 rank; // 0x10
		::System::UInt32 equipmentID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBackEquipmentConfig_b__0(::RPG::Client::GridFightBackEquipmentConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightBackEquipmentConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C__DISPLAYCLASS4_0__GETBACKEQUIPMENTCONFIG_B__0_OFFSET))(this, a1);
		}

	};
}
