#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeSkillDropConfig; }

#define RPG_GAMECORE_MAZESKILLDROPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D842F80)
#define RPG_GAMECORE_MAZESKILLDROPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D842F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeSkillDropConfig_TypeDefinitionIndex = 21754;

	class MazeSkillDropConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLDROPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazeSkillDropConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazeSkillDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLDROPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
