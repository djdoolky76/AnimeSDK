#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemConfig; }

#define RPG_CLIENT_GRIDFIGHTTEMPLATEEQUIPTRAITEFFECT___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D3230)
#define RPG_CLIENT_GRIDFIGHTTEMPLATEEQUIPTRAITEFFECT___C__DISPLAYCLASS6_0__ISEQUIPEXTRADESCACTIVE_B__0_OFFSET UNITYSDK_OFFSET(0x1D3D37F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTemplateEquipTraitEffect___c__DisplayClass6_0_TypeDefinitionIndex = 67269;

	class GridFightTemplateEquipTraitEffect___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::UInt32 itemID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEMPLATEEQUIPTRAITEFFECT___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsEquipExtraDescActive_b__0(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEMPLATEEQUIPTRAITEFFECT___C__DISPLAYCLASS6_0__ISEQUIPEXTRADESCACTIVE_B__0_OFFSET))(this, a1);
		}

	};
}
