#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_ABILITYCHARACTERDYNAMICPROPERTIES_CCTOR_OFFSET UNITYSDK_OFFSET(0xE4AF070)

namespace RPG::GameCore
{
	class AbilityCharacterDynamicProperties : public ::System::Object
	{
	public:
		static ::RPG::GameCore::StringHash* StaticGet_s_StanceLock()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("RPG.GameCore", "AbilityCharacterDynamicProperties")->GetStaticField(0xA3E0);
		}

		static ::RPG::GameCore::StringHash* StaticGet_s_LinkNumber()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("RPG.GameCore", "AbilityCharacterDynamicProperties")->GetStaticField(0xA3E4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCHARACTERDYNAMICPROPERTIES_CCTOR_OFFSET))();
		}

	};
}
