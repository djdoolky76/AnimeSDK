#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionAfterHpChangeConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERHPCHANGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E941590)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERHPCHANGECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9415A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERHPCHANGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E941550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterHpChangeConfig_TypeDefinitionIndex = 19649;

	class GridFightModifierExecActionAfterHpChangeConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERHPCHANGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterHpChangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterHpChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERHPCHANGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterHpChangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterHpChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERHPCHANGECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
