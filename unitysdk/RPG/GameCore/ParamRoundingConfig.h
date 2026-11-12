#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"
#include "unitysdk/RPG/GameCore/ParamRoundingType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiParameterConfigBase; }
namespace RPG::GameCore { class ParamRoundingConfig; }

#define RPG_GAMECORE_PARAMROUNDINGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB07B00)
#define RPG_GAMECORE_PARAMROUNDINGCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EB07B10)
#define RPG_GAMECORE_PARAMROUNDINGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EB07AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamRoundingConfig_TypeDefinitionIndex = 17253;

	class ParamRoundingConfig : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::RPG::GameCore::ParamRoundingType RoundingType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::MiParameterConfigBase* Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMROUNDINGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParamRoundingConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParamRoundingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMROUNDINGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParamRoundingConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParamRoundingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMROUNDINGCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
