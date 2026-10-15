#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAutoAddBonusRule; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOADDBONUSRULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D705A20)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOADDBONUSRULE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7059E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAutoAddBonusRule_TypeDefinitionIndex = 19393;

	class GridFightModifierAutoAddBonusRule : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOADDBONUSRULE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAutoAddBonusRule* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAutoAddBonusRule*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOADDBONUSRULE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
