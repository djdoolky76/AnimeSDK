#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionAddChimeraRoundConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONADDCHIMERAROUNDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x205F93B0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDCHIMERAROUNDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x205F93C0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDCHIMERAROUNDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x205F9370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddChimeraRoundConfig_TypeDefinitionIndex = 19529;

	class GridFightActionAddChimeraRoundConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDCHIMERAROUNDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddChimeraRoundConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddChimeraRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDCHIMERAROUNDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddChimeraRoundConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddChimeraRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDCHIMERAROUNDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
