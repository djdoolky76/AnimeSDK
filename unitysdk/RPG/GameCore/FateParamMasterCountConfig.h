#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateParamMasterCountConfig; }

#define RPG_GAMECORE_FATEPARAMMASTERCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66EB50)
#define RPG_GAMECORE_FATEPARAMMASTERCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66EB40)
#define RPG_GAMECORE_FATEPARAMMASTERCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66EB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamMasterCountConfig_TypeDefinitionIndex = 16637;

	class FateParamMasterCountConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMASTERCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamMasterCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamMasterCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMASTERCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamMasterCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamMasterCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMASTERCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
