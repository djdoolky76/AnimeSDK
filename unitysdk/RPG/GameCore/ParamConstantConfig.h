#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParamConstantConfig; }

#define RPG_GAMECORE_PARAMCONSTANTCONFIG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D8C0360)
#define RPG_GAMECORE_PARAMCONSTANTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C02B0)
#define RPG_GAMECORE_PARAMCONSTANTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8C02C0)
#define RPG_GAMECORE_PARAMCONSTANTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C01E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamConstantConfig_TypeDefinitionIndex = 17079;

	class ParamConstantConfig : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::System::Double Value; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCONSTANTCONFIG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCONSTANTCONFIG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParamConstantConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParamConstantConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCONSTANTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParamConstantConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParamConstantConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCONSTANTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
