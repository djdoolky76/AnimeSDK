#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionAddGlobalHpConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F6550)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6F6560)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F6510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddGlobalHpConfig_TypeDefinitionIndex = 19295;

	class GridFightActionAddGlobalHpConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddGlobalHpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddGlobalHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddGlobalHpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddGlobalHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
