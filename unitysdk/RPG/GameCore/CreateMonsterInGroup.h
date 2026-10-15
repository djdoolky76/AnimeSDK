#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreateMonsterInGroup; }

#define RPG_GAMECORE_CREATEMONSTERINGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B63A0)
#define RPG_GAMECORE_CREATEMONSTERINGROUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B63B0)
#define RPG_GAMECORE_CREATEMONSTERINGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B6370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateMonsterInGroup_TypeDefinitionIndex = 20362;

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
