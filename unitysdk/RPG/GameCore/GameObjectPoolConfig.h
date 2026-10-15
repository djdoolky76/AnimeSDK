#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GameObjectPoolConfig; }
namespace RPG::GameCore { class GameObjectPoolConfigTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GAMEOBJECTPOOLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E9B80)
#define RPG_GAMECORE_GAMEOBJECTPOOLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E9AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameObjectPoolConfig_TypeDefinitionIndex = 18265;

	class GameObjectPoolConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameObjectPoolConfigTemplate*>* ConfigTemplates; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEOBJECTPOOLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GameObjectPoolConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GameObjectPoolConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEOBJECTPOOLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
