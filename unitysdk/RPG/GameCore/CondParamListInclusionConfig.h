#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CondParamListInclusionConfig; }

#define RPG_GAMECORE_CONDPARAMLISTINCLUSIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A6080)
#define RPG_GAMECORE_CONDPARAMLISTINCLUSIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A6090)
#define RPG_GAMECORE_CONDPARAMLISTINCLUSIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A6040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CondParamListInclusionConfig_TypeDefinitionIndex = 17077;

	class CondParamListInclusionConfig : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDPARAMLISTINCLUSIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CondParamListInclusionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CondParamListInclusionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDPARAMLISTINCLUSIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CondParamListInclusionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CondParamListInclusionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDPARAMLISTINCLUSIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
