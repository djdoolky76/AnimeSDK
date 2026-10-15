#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionAfterOpenShopConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTEROPENSHOPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D706630)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTEROPENSHOPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D706620)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTEROPENSHOPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7065E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterOpenShopConfig_TypeDefinitionIndex = 19424;

	class GridFightModifierExecActionAfterOpenShopConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTEROPENSHOPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterOpenShopConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterOpenShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTEROPENSHOPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterOpenShopConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterOpenShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTEROPENSHOPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
