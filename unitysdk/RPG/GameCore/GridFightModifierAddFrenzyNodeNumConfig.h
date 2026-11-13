#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddFrenzyNodeNumConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDFRENZYNODENUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2060B030)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDFRENZYNODENUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2060B040)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDFRENZYNODENUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2060AFF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddFrenzyNodeNumConfig_TypeDefinitionIndex = 19645;

	class GridFightModifierAddFrenzyNodeNumConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDFRENZYNODENUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddFrenzyNodeNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddFrenzyNodeNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDFRENZYNODENUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddFrenzyNodeNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddFrenzyNodeNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDFRENZYNODENUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
