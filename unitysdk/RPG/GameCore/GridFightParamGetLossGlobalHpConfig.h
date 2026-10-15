#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetLossGlobalHpConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETLOSSGLOBALHPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D70A9E0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLOSSGLOBALHPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D70A9F0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLOSSGLOBALHPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D70A9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetLossGlobalHpConfig_TypeDefinitionIndex = 19536;

	class GridFightParamGetLossGlobalHpConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLOSSGLOBALHPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetLossGlobalHpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetLossGlobalHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLOSSGLOBALHPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetLossGlobalHpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetLossGlobalHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLOSSGLOBALHPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
