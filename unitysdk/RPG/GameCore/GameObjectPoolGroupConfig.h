#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GameObjectPoolGroupConfig; }

#define RPG_GAMECORE_GAMEOBJECTPOOLGROUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7179C0)
#define RPG_GAMECORE_GAMEOBJECTPOOLGROUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D717900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameObjectPoolGroupConfig_TypeDefinitionIndex = 18263;

	class GameObjectPoolGroupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 AutoReleaseInstanceCount; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEOBJECTPOOLGROUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GameObjectPoolGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GameObjectPoolGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEOBJECTPOOLGROUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
