#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionAfterConstTimeConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCONSTTIMECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D733E70)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCONSTTIMECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D733E80)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCONSTTIMECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D733E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterConstTimeConfig_TypeDefinitionIndex = 19427;

	class GridFightModifierExecActionAfterConstTimeConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCONSTTIMECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterConstTimeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterConstTimeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCONSTTIMECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterConstTimeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterConstTimeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCONSTTIMECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
