#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddExpertRestrictConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDEXPERTRESTRICTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E93F500)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDEXPERTRESTRICTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E93F510)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDEXPERTRESTRICTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E93F4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddExpertRestrictConfig_TypeDefinitionIndex = 19719;

	class GridFightModifierAddExpertRestrictConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDEXPERTRESTRICTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddExpertRestrictConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddExpertRestrictConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDEXPERTRESTRICTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddExpertRestrictConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddExpertRestrictConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDEXPERTRESTRICTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
