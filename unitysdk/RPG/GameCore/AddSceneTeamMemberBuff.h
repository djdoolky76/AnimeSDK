#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddSceneTeamMemberBuff; }

#define RPG_GAMECORE_ADDSCENETEAMMEMBERBUFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D38B8F0)
#define RPG_GAMECORE_ADDSCENETEAMMEMBERBUFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D38B900)
#define RPG_GAMECORE_ADDSCENETEAMMEMBERBUFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D38B8B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddSceneTeamMemberBuff_TypeDefinitionIndex = 20421;

	class AddSceneTeamMemberBuff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSCENETEAMMEMBERBUFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddSceneTeamMemberBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddSceneTeamMemberBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSCENETEAMMEMBERBUFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddSceneTeamMemberBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddSceneTeamMemberBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSCENETEAMMEMBERBUFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
