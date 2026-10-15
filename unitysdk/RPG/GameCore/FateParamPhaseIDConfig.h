#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateParamPhaseIDConfig; }

#define RPG_GAMECORE_FATEPARAMPHASEIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69C860)
#define RPG_GAMECORE_FATEPARAMPHASEIDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69C870)
#define RPG_GAMECORE_FATEPARAMPHASEIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69C7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamPhaseIDConfig_TypeDefinitionIndex = 16644;

	class FateParamPhaseIDConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMPHASEIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamPhaseIDConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamPhaseIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMPHASEIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamPhaseIDConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamPhaseIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMPHASEIDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
