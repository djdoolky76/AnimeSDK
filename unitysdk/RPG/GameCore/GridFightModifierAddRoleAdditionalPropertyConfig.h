#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddRoleAdditionalPropertyConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEADDITIONALPROPERTYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2060B740)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEADDITIONALPROPERTYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2060B750)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEADDITIONALPROPERTYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2060B700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddRoleAdditionalPropertyConfig_TypeDefinitionIndex = 19604;

	class GridFightModifierAddRoleAdditionalPropertyConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEADDITIONALPROPERTYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddRoleAdditionalPropertyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddRoleAdditionalPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEADDITIONALPROPERTYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddRoleAdditionalPropertyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddRoleAdditionalPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEADDITIONALPROPERTYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
