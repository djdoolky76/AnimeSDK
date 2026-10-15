#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamBoostCheck; }

#define RPG_GAMECORE_TEAMBOOSTCHECK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB79730)
#define RPG_GAMECORE_TEAMBOOSTCHECK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB79740)
#define RPG_GAMECORE_TEAMBOOSTCHECK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB796F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamBoostCheck_TypeDefinitionIndex = 22968;

	class TeamBoostCheck : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean CanUse; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMBOOSTCHECK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamBoostCheck* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamBoostCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMBOOSTCHECK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamBoostCheck* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamBoostCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMBOOSTCHECK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
