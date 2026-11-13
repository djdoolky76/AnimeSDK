#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddMazeBuffInFrenzyNodeConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFINFRENZYNODECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2060B2D0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFINFRENZYNODECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2060B2E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFINFRENZYNODECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2060B290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddMazeBuffInFrenzyNodeConfig_TypeDefinitionIndex = 19644;

	class GridFightModifierAddMazeBuffInFrenzyNodeConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFINFRENZYNODECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddMazeBuffInFrenzyNodeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddMazeBuffInFrenzyNodeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFINFRENZYNODECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddMazeBuffInFrenzyNodeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddMazeBuffInFrenzyNodeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMAZEBUFFINFRENZYNODECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
