#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateParamFateBuffLevelSumConfig; }

#define RPG_GAMECORE_FATEPARAMFATEBUFFLEVELSUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69C090)
#define RPG_GAMECORE_FATEPARAMFATEBUFFLEVELSUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69C0A0)
#define RPG_GAMECORE_FATEPARAMFATEBUFFLEVELSUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69BFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamFateBuffLevelSumConfig_TypeDefinitionIndex = 16642;

	class FateParamFateBuffLevelSumConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::UInt32 SubTraitID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMFATEBUFFLEVELSUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamFateBuffLevelSumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamFateBuffLevelSumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMFATEBUFFLEVELSUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamFateBuffLevelSumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamFateBuffLevelSumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMFATEBUFFLEVELSUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
