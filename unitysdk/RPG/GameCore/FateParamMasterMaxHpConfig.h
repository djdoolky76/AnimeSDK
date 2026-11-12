#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateParamMasterMaxHpConfig; }

#define RPG_GAMECORE_FATEPARAMMASTERMAXHPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A8F10)
#define RPG_GAMECORE_FATEPARAMMASTERMAXHPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8A8F20)
#define RPG_GAMECORE_FATEPARAMMASTERMAXHPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8A8ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamMasterMaxHpConfig_TypeDefinitionIndex = 16800;

	class FateParamMasterMaxHpConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMASTERMAXHPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamMasterMaxHpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamMasterMaxHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMASTERMAXHPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamMasterMaxHpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamMasterMaxHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMASTERMAXHPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
