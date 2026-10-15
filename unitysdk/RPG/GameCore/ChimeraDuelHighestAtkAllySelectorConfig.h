#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelHighestAtkAllySelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELHIGHESTATKALLYSELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D575370)
#define RPG_GAMECORE_CHIMERADUELHIGHESTATKALLYSELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D575380)
#define RPG_GAMECORE_CHIMERADUELHIGHESTATKALLYSELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5752E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelHighestAtkAllySelectorConfig_TypeDefinitionIndex = 15938;

	class ChimeraDuelHighestAtkAllySelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELHIGHESTATKALLYSELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelHighestAtkAllySelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelHighestAtkAllySelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELHIGHESTATKALLYSELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelHighestAtkAllySelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelHighestAtkAllySelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELHIGHESTATKALLYSELECTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
