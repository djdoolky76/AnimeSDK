#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetIsRoleUnlockConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETISROLEUNLOCKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9475F0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETISROLEUNLOCKCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E947600)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETISROLEUNLOCKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9475B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetIsRoleUnlockConfig_TypeDefinitionIndex = 19886;

	class GridFightParamGetIsRoleUnlockConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETISROLEUNLOCKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetIsRoleUnlockConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetIsRoleUnlockConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETISROLEUNLOCKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetIsRoleUnlockConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetIsRoleUnlockConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETISROLEUNLOCKCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
