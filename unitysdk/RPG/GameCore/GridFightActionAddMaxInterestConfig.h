#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionAddMaxInterestConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONADDMAXINTERESTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E92DB40)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDMAXINTERESTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E92DB50)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDMAXINTERESTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E92DB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddMaxInterestConfig_TypeDefinitionIndex = 19491;

	class GridFightActionAddMaxInterestConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDMAXINTERESTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddMaxInterestConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddMaxInterestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDMAXINTERESTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddMaxInterestConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddMaxInterestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDMAXINTERESTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
