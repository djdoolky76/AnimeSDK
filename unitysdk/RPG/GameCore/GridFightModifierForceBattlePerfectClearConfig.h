#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierForceBattlePerfectClearConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEBATTLEPERFECTCLEARCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E941E90)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEBATTLEPERFECTCLEARCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E941EA0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEBATTLEPERFECTCLEARCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E941E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierForceBattlePerfectClearConfig_TypeDefinitionIndex = 19707;

	class GridFightModifierForceBattlePerfectClearConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEBATTLEPERFECTCLEARCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierForceBattlePerfectClearConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierForceBattlePerfectClearConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEBATTLEPERFECTCLEARCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierForceBattlePerfectClearConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierForceBattlePerfectClearConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEBATTLEPERFECTCLEARCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
