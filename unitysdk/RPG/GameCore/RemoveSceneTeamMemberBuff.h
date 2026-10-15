#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveSceneTeamMemberBuff; }

#define RPG_GAMECORE_REMOVESCENETEAMMEMBERBUFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9865F0)
#define RPG_GAMECORE_REMOVESCENETEAMMEMBERBUFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D986600)
#define RPG_GAMECORE_REMOVESCENETEAMMEMBERBUFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9865B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveSceneTeamMemberBuff_TypeDefinitionIndex = 20422;

	class RemoveSceneTeamMemberBuff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESCENETEAMMEMBERBUFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveSceneTeamMemberBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveSceneTeamMemberBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESCENETEAMMEMBERBUFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveSceneTeamMemberBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveSceneTeamMemberBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESCENETEAMMEMBERBUFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
