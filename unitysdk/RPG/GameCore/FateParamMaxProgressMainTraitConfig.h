#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateParamMaxProgressMainTraitConfig; }

#define RPG_GAMECORE_FATEPARAMMAXPROGRESSMAINTRAITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66EC10)
#define RPG_GAMECORE_FATEPARAMMAXPROGRESSMAINTRAITCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66EC20)
#define RPG_GAMECORE_FATEPARAMMAXPROGRESSMAINTRAITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66EBD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamMaxProgressMainTraitConfig_TypeDefinitionIndex = 16635;

	class FateParamMaxProgressMainTraitConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMAXPROGRESSMAINTRAITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamMaxProgressMainTraitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamMaxProgressMainTraitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMAXPROGRESSMAINTRAITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamMaxProgressMainTraitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamMaxProgressMainTraitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMAXPROGRESSMAINTRAITCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
