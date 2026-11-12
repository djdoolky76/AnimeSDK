#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetGlobalSavedValueConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETGLOBALSAVEDVALUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9474D0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETGLOBALSAVEDVALUECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9474E0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETGLOBALSAVEDVALUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E947490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetGlobalSavedValueConfig_TypeDefinitionIndex = 19869;

	class GridFightParamGetGlobalSavedValueConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETGLOBALSAVEDVALUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetGlobalSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetGlobalSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETGLOBALSAVEDVALUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetGlobalSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetGlobalSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETGLOBALSAVEDVALUECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
