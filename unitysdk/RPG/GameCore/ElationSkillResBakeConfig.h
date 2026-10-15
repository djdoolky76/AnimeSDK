#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterCustomPreloadConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElationSkillResBakeConfig; }
namespace RPG::GameCore { class SingleElationSkillResBakeConfig; }

#define RPG_GAMECORE_ELATIONSKILLRESBAKECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D633810)
#define RPG_GAMECORE_ELATIONSKILLRESBAKECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D633820)
#define RPG_GAMECORE_ELATIONSKILLRESBAKECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6337E0)

namespace RPG::GameCore
{
	class ElationSkillResBakeConfig : public ::RPG::GameCore::CharacterCustomPreloadConfigBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::SingleElationSkillResBakeConfig*>* Skills; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLRESBAKECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElationSkillResBakeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElationSkillResBakeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLRESBAKECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElationSkillResBakeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElationSkillResBakeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLRESBAKECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
