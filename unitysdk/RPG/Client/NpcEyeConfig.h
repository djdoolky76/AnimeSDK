#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NpcBodyEyeConfig.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define RPG_CLIENT_NPCEYECONFIG_AWAKE_OFFSET UNITYSDK_OFFSET(0xD9DC320)
#define RPG_CLIENT_NPCEYECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xD9DC6D0)
#define RPG_CLIENT_NPCEYECONFIG_FLFLCMEJEPM_OFFSET UNITYSDK_OFFSET(0xD9DC5E0)

namespace RPG::Client
{
	inline static constexpr unsigned int NpcEyeConfig_TypeDefinitionIndex = 60053;

	class NpcEyeConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::RPG::Client::NpcBodyEyeConfig>* eyeConfigs; // 0x18
		::Il2CppArray<::RPG::Client::NpcBodyEyeConfig>* _RuntimeEyeConfigs; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCEYECONFIG_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCEYECONFIG_AWAKE_OFFSET))(this);
		}

		::RPG::Client::NpcBodyEyeConfig FLFLCMEJEPM(::RPG::GameCore::NPCBodySize a1)
		{
			return ((::RPG::Client::NpcBodyEyeConfig(*)(::PVOID, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCEYECONFIG_FLFLCMEJEPM_OFFSET))(this, a1);
		}

	};
}
