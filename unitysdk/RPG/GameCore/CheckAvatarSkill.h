#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CheckAvatarSkill; }

#define RPG_GAMECORE_CHECKAVATARSKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57B2B0)
#define RPG_GAMECORE_CHECKAVATARSKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D57B2C0)
#define RPG_GAMECORE_CHECKAVATARSKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57B280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckAvatarSkill_TypeDefinitionIndex = 22970;

	class CheckAvatarSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 SkillIndex; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKAVATARSKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckAvatarSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckAvatarSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKAVATARSKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckAvatarSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckAvatarSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKAVATARSKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
