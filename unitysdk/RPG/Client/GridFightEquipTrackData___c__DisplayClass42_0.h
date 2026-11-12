#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipTrackQuickDressParam; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS42_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDAEF870)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS42_0___UPDATEQUICKDRESSANDCRAFTPARAMS_B__0_OFFSET UNITYSDK_OFFSET(0xDAEF880)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackData___c__DisplayClass42_0_TypeDefinitionIndex = 67105;

	class GridFightEquipTrackData___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipTrackQuickDressParam* param; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS42_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdateQuickDressAndCraftParams_b__0(::RPG::Client::GridFightEquipTrackQuickDressParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrackQuickDressParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS42_0___UPDATEQUICKDRESSANDCRAFTPARAMS_B__0_OFFSET))(this, a1);
		}

	};
}
