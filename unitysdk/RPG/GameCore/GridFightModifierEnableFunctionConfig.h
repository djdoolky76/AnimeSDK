#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierEnableFunctionConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERENABLEFUNCTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D706020)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERENABLEFUNCTIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D706030)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERENABLEFUNCTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D705FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierEnableFunctionConfig_TypeDefinitionIndex = 19400;

	class GridFightModifierEnableFunctionConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERENABLEFUNCTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierEnableFunctionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierEnableFunctionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERENABLEFUNCTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierEnableFunctionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierEnableFunctionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERENABLEFUNCTIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
