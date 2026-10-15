#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ServerPrefsType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ServerPrefsConfig; }
namespace RPG::GameCore { class ServerPrefsData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SERVERPREFSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA91D60)
#define RPG_GAMECORE_SERVERPREFSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA91C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServerPrefsConfig_TypeDefinitionIndex = 24417;

	class ServerPrefsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ServerPrefsType, ::RPG::GameCore::ServerPrefsData*>* ServerPrefsMap; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERPREFSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ServerPrefsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ServerPrefsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERPREFSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
