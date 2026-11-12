#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateParamAtomParamConfig; }

#define RPG_GAMECORE_FATEPARAMATOMPARAMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A8600)
#define RPG_GAMECORE_FATEPARAMATOMPARAMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8A8610)
#define RPG_GAMECORE_FATEPARAMATOMPARAMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8A85C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamAtomParamConfig_TypeDefinitionIndex = 16790;

	class FateParamAtomParamConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMATOMPARAMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamAtomParamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamAtomParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMATOMPARAMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamAtomParamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamAtomParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMATOMPARAMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
