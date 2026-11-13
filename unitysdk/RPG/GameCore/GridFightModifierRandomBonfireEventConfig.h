#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierRandomBonfireEventConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMBONFIREEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BAA10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMBONFIREEVENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BAA20)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMBONFIREEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BA9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierRandomBonfireEventConfig_TypeDefinitionIndex = 19779;

	class GridFightModifierRandomBonfireEventConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMBONFIREEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierRandomBonfireEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierRandomBonfireEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMBONFIREEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierRandomBonfireEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierRandomBonfireEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMBONFIREEVENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
