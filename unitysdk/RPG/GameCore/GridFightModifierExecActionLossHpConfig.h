#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionLossHpConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONLOSSHPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7069E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONLOSSHPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7069F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONLOSSHPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7069A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionLossHpConfig_TypeDefinitionIndex = 19417;

	class GridFightModifierExecActionLossHpConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONLOSSHPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionLossHpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionLossHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONLOSSHPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionLossHpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionLossHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONLOSSHPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
