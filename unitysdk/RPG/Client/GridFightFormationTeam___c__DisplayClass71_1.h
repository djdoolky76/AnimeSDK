#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGameFormationEditor_EquipDressRule; }
namespace System { class Object; }

#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS71_1_CTOR_OFFSET UNITYSDK_OFFSET(0xD1380D0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS71_1___REASSIGNEQUIP_B__0_OFFSET UNITYSDK_OFFSET(0xD13A4C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFormationTeam___c__DisplayClass71_1_TypeDefinitionIndex = 64678;

	template <typename T>
	class GridFightFormationTeam___c__DisplayClass71_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::UInt32 equipID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS71_1_CTOR_OFFSET))(this);
		}

		::System::Boolean __ReassignEquip_b__0(::RPG::Client::GridFightGameFormationEditor_EquipDressRule* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameFormationEditor_EquipDressRule*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS71_1___REASSIGNEQUIP_B__0_OFFSET))(this, a1);
		}

	};
}
