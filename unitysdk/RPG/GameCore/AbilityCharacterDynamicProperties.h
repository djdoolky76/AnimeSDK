#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_ABILITYCHARACTERDYNAMICPROPERTIES_CCTOR_OFFSET UNITYSDK_OFFSET(0x182692E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityCharacterDynamicProperties_TypeDefinitionIndex = 58972;

	class AbilityCharacterDynamicProperties : public ::System::Object
	{
	public:
		static ::RPG::GameCore::StringHash* StaticGet_s_LinkNumber()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("RPG.GameCore", "AbilityCharacterDynamicProperties")->GetStaticField(0xD280);
		}

		static ::RPG::GameCore::StringHash* StaticGet_s_StanceLock()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("RPG.GameCore", "AbilityCharacterDynamicProperties")->GetStaticField(0xD284);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCHARACTERDYNAMICPROPERTIES_CCTOR_OFFSET))();
		}

	};
}
