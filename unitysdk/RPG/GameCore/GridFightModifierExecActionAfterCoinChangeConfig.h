#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionAfterCoinChangeConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCOINCHANGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208B8EC0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCOINCHANGECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208B8ED0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCOINCHANGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208B8E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterCoinChangeConfig_TypeDefinitionIndex = 19812;

	class GridFightModifierExecActionAfterCoinChangeConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCOINCHANGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterCoinChangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterCoinChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCOINCHANGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterCoinChangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterCoinChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCOINCHANGECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
