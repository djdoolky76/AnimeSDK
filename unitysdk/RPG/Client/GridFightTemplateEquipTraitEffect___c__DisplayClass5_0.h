#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemConfig; }

#define RPG_CLIENT_GRIDFIGHTTEMPLATEEQUIPTRAITEFFECT___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB59B0)
#define RPG_CLIENT_GRIDFIGHTTEMPLATEEQUIPTRAITEFFECT___C__DISPLAYCLASS5_0__ISEQUIPAFFECTBYTRAIT_B__0_OFFSET UNITYSDK_OFFSET(0xDCB66A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTemplateEquipTraitEffect___c__DisplayClass5_0_TypeDefinitionIndex = 67268;

	class GridFightTemplateEquipTraitEffect___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 itemID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEMPLATEEQUIPTRAITEFFECT___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsEquipAffectByTrait_b__0(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEMPLATEEQUIPTRAITEFFECT___C__DISPLAYCLASS5_0__ISEQUIPAFFECTBYTRAIT_B__0_OFFSET))(this, a1);
		}

	};
}
