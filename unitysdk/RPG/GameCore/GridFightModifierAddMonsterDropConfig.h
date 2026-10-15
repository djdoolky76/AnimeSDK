#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddMonsterDropConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D705420)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D705430)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7053E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddMonsterDropConfig_TypeDefinitionIndex = 19367;

	class GridFightModifierAddMonsterDropConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddMonsterDropConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddMonsterDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddMonsterDropConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddMonsterDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
