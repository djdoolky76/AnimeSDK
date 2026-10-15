#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionAddMaxInterestConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONADDMAXINTERESTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7240F0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDMAXINTERESTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D724100)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDMAXINTERESTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7240B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddMaxInterestConfig_TypeDefinitionIndex = 19301;

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
