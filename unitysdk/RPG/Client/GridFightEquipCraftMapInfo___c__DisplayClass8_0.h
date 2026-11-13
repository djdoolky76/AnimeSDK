#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipInfo; }
namespace RPG::Client { class GridFightTraitElationLaughPointEffect; }
namespace System { class Object; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D171DB0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS8_0__GETRECIPESCANCRAFTBYELATIONLAUGHPOINTEQUIPS_B__2_OFFSET UNITYSDK_OFFSET(0x1D173AD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftMapInfo___c__DisplayClass8_0_TypeDefinitionIndex = 66056;

	class GridFightEquipCraftMapInfo___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipInfo* equipInfo; // 0x10
		::RPG::Client::GridFightTraitElationLaughPointEffect* effect; // 0x18
		::System::UInt32 seasonID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRecipesCanCraftByElationLaughPointEquips_b__2(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS8_0__GETRECIPESCANCRAFTBYELATIONLAUGHPOINTEQUIPS_B__2_OFFSET))(this, a1);
		}

	};
}
