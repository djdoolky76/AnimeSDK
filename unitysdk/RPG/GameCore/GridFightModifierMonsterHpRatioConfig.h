#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierMonsterHpRatioConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERMONSTERHPRATIOCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D734FA0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERMONSTERHPRATIOCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D734FB0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERMONSTERHPRATIOCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D734F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierMonsterHpRatioConfig_TypeDefinitionIndex = 19484;

	class GridFightModifierMonsterHpRatioConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMONSTERHPRATIOCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierMonsterHpRatioConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierMonsterHpRatioConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMONSTERHPRATIOCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierMonsterHpRatioConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierMonsterHpRatioConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMONSTERHPRATIOCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
