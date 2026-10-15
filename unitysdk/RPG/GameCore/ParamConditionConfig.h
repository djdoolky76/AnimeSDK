#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiConditionConfigBase; }
namespace RPG::GameCore { class MiParameterConfigBase; }
namespace RPG::GameCore { class ParamConditionConfig; }

#define RPG_GAMECORE_PARAMCONDITIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8ED9B0)
#define RPG_GAMECORE_PARAMCONDITIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8ED9C0)
#define RPG_GAMECORE_PARAMCONDITIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8ED960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamConditionConfig_TypeDefinitionIndex = 17091;

	class ParamConditionConfig : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::RPG::GameCore::MiConditionConfigBase* Condition; // 0x10
		::RPG::GameCore::MiParameterConfigBase* SuccValue; // 0x18
		::RPG::GameCore::MiParameterConfigBase* FailValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCONDITIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParamConditionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParamConditionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCONDITIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParamConditionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParamConditionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCONDITIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
