#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClearHPSharedGroup; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CLEARHPSHAREDGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C6800)
#define RPG_GAMECORE_CLEARHPSHAREDGROUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E7C6810)
#define RPG_GAMECORE_CLEARHPSHAREDGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E7C67D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearHPSharedGroup_TypeDefinitionIndex = 23248;

	class ClearHPSharedGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* MainTarget; // 0x18
		::RPG::GameCore::TeamType TargetTeam; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARHPSHAREDGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearHPSharedGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearHPSharedGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARHPSHAREDGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearHPSharedGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearHPSharedGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARHPSHAREDGROUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
