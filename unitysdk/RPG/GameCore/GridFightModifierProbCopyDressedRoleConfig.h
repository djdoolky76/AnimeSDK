#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierProbCopyDressedRoleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERPROBCOPYDRESSEDROLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D735180)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERPROBCOPYDRESSEDROLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D735190)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERPROBCOPYDRESSEDROLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D735140)

namespace RPG::GameCore
{
	class GridFightModifierProbCopyDressedRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERPROBCOPYDRESSEDROLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierProbCopyDressedRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierProbCopyDressedRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERPROBCOPYDRESSEDROLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierProbCopyDressedRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierProbCopyDressedRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERPROBCOPYDRESSEDROLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
