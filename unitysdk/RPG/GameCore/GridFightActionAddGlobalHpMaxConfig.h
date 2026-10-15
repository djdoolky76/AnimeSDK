#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionAddGlobalHpMaxConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPMAXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F65B0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPMAXCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6F65C0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPMAXCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F6570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddGlobalHpMaxConfig_TypeDefinitionIndex = 19296;

	class GridFightActionAddGlobalHpMaxConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPMAXCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddGlobalHpMaxConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddGlobalHpMaxConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPMAXCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddGlobalHpMaxConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddGlobalHpMaxConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPMAXCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
