#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierDifferentRoleMergeConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERDIFFERENTROLEMERGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D705F60)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERDIFFERENTROLEMERGECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D705F70)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERDIFFERENTROLEMERGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D705F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierDifferentRoleMergeConfig_TypeDefinitionIndex = 19492;

	class GridFightModifierDifferentRoleMergeConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERDIFFERENTROLEMERGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierDifferentRoleMergeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierDifferentRoleMergeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERDIFFERENTROLEMERGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierDifferentRoleMergeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierDifferentRoleMergeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERDIFFERENTROLEMERGECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
