#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class LittleGameProxyEntityConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEPROXYENTITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E5A30)
#define RPG_GAMECORE_LITTLEGAMEPROXYENTITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E58D0)

namespace RPG::GameCore
{
	class LittleGameProxyEntityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::String* LevelGraph; // 0x18
		::RPG::GameCore::LevelGraphValueSource* LevelGraphValueSource; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEPROXYENTITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameProxyEntityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameProxyEntityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEPROXYENTITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
