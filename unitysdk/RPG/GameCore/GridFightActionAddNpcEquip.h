#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionAddNpcEquip; }

#define RPG_GAMECORE_GRIDFIGHTACTIONADDNPCEQUIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F6730)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDNPCEQUIP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F66F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddNpcEquip_TypeDefinitionIndex = 19314;

	class GridFightActionAddNpcEquip : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDNPCEQUIP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddNpcEquip* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddNpcEquip*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDNPCEQUIP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
