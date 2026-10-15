#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class Match3EnvActionConfig; }
namespace RPG::GameCore::Match3 { class Match3EnvConfig; }

#define RPG_GAMECORE_MATCH3_MATCH3ENVCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84E700)
#define RPG_GAMECORE_MATCH3_MATCH3ENVCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84E610)

namespace RPG::GameCore::Match3
{
	class Match3EnvConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::Match3EnvActionConfig*>* EnvActionConfigs; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3ENVCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::Match3EnvConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::Match3EnvConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3ENVCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
