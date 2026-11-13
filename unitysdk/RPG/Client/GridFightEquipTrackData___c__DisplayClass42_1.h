#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipTrackQuickCraftParam; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS42_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1D18F290)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS42_1___UPDATEQUICKDRESSANDCRAFTPARAMS_B__1_OFFSET UNITYSDK_OFFSET(0x1D190260)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackData___c__DisplayClass42_1_TypeDefinitionIndex = 67106;

	template <typename T>
	class GridFightEquipTrackData___c__DisplayClass42_1 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipTrackQuickCraftParam* param; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS42_1_CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdateQuickDressAndCraftParams_b__1(::RPG::Client::GridFightEquipTrackQuickCraftParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrackQuickCraftParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS42_1___UPDATEQUICKDRESSANDCRAFTPARAMS_B__1_OFFSET))(this, a1);
		}

	};
}
