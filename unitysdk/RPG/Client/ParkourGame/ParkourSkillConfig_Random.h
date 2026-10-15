#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/ParkourSkillConfig.h"
namespace System { class Object; }

#define RPG_CLIENT_PARKOURGAME_PARKOURSKILLCONFIG_RANDOM_CTOR_OFFSET UNITYSDK_OFFSET(0xDA7CE50)

namespace RPG::Client::ParkourGame
{
	class ParkourSkillConfig_Random : public ::RPG::Client::ParkourGame::ParkourSkillConfig
	{
	public:
		::Il2CppArray<::System::Object*>* RandomDataArr; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_PARKOURSKILLCONFIG_RANDOM_CTOR_OFFSET))(this);
		}

	};
}
