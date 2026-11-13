#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierTransformRoleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERTRANSFORMROLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BC320)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERTRANSFORMROLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BC330)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERTRANSFORMROLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BC2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierTransformRoleConfig_TypeDefinitionIndex = 19703;

	class GridFightModifierTransformRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERTRANSFORMROLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierTransformRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierTransformRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERTRANSFORMROLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierTransformRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierTransformRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERTRANSFORMROLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
