#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreateMonsterInGroup; }

#define RPG_GAMECORE_CREATEMONSTERINGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E3E30)
#define RPG_GAMECORE_CREATEMONSTERINGROUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E3E40)
#define RPG_GAMECORE_CREATEMONSTERINGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E3E00)

namespace RPG::GameCore
{
	class CreateMonsterInGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEMONSTERINGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateMonsterInGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateMonsterInGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEMONSTERINGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateMonsterInGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateMonsterInGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEMONSTERINGROUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
