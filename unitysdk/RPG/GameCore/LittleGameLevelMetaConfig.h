#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameLevelMetaConfig; }

#define RPG_GAMECORE_LITTLEGAMELEVELMETACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E3D90)
#define RPG_GAMECORE_LITTLEGAMELEVELMETACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E3D50)

namespace RPG::GameCore
{
	class LittleGameLevelMetaConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELMETACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameLevelMetaConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameLevelMetaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELMETACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
