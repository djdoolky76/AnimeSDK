#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PropState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPropStateConfig; }

#define RPG_GAMECORE_LEVELPROPSTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CB640)
#define RPG_GAMECORE_LEVELPROPSTATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7CB500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPropStateConfig_TypeDefinitionIndex = 17258;

	class LevelPropStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PropState State; // 0x10
		::System::Single Rotation; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPSTATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPropStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPropStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPSTATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
