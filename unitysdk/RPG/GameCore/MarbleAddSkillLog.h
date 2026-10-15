#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleAddSkillLog; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLEADDSKILLLOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8096F0)
#define RPG_GAMECORE_MARBLEADDSKILLLOG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D809700)
#define RPG_GAMECORE_MARBLEADDSKILLLOG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8096A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleAddSkillLog_TypeDefinitionIndex = 16867;

	class MarbleAddSkillLog : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::Int32 Param; // 0x14
		::System::String* ParamDynamic; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSKILLLOG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleAddSkillLog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleAddSkillLog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSKILLLOG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleAddSkillLog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleAddSkillLog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSKILLLOG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
