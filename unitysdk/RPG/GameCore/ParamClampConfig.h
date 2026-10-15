#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiParameterConfigBase; }
namespace RPG::GameCore { class ParamClampConfig; }

#define RPG_GAMECORE_PARAMCLAMPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BFDB0)
#define RPG_GAMECORE_PARAMCLAMPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8BFDC0)
#define RPG_GAMECORE_PARAMCLAMPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8BFD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamClampConfig_TypeDefinitionIndex = 17090;

	class ParamClampConfig : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* Value; // 0x10
		::RPG::GameCore::MiParameterConfigBase* Min; // 0x18
		::RPG::GameCore::MiParameterConfigBase* Max; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCLAMPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParamClampConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParamClampConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCLAMPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParamClampConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParamClampConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCLAMPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
