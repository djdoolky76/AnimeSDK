#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AdventureAbilityConfig; }
namespace RPG::GameCore { class AdventureModifierConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADVABILITYJSONTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x111DB650)
#define RPG_GAMECORE_ADVABILITYJSONTABLE_GETADVENTUREABILITY_OFFSET UNITYSDK_OFFSET(0x111DB470)
#define RPG_GAMECORE_ADVABILITYJSONTABLE_GETADVENTUREMODIFIERCONFIG_OFFSET UNITYSDK_OFFSET(0x111DB560)
#define RPG_GAMECORE_ADVABILITYJSONTABLE_LOADADVENTUREMODIFIERCONFIG_OFFSET UNITYSDK_OFFSET(0x111DAD80)
#define RPG_GAMECORE_ADVABILITYJSONTABLE_LOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0x111DAC90)
#define RPG_GAMECORE_ADVABILITYJSONTABLE_UNLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0x111DB190)
#define RPG_GAMECORE_ADVABILITYJSONTABLE__ADDGLOBALADVENTUREMODIFIERS_OFFSET UNITYSDK_OFFSET(0x111DB2C0)
#define RPG_GAMECORE_ADVABILITYJSONTABLE__LOADADVENTUREABILITY_OFFSET UNITYSDK_OFFSET(0x111DAEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvAbilityJsonTable_TypeDefinitionIndex = 57706;

	class AdvAbilityJsonTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureModifierConfig*>** StaticGet__AdventureModifierConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureModifierConfig*>**)UnitySDK::FromName("RPG.GameCore", "AdvAbilityJsonTable")->GetStaticField(0x5F000);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureAbilityConfig*>** StaticGet__AdvAbilityMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureAbilityConfig*>**)UnitySDK::FromName("RPG.GameCore", "AdvAbilityJsonTable")->GetStaticField(0x5F008);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVABILITYJSONTABLE_CCTOR_OFFSET))();
		}

		static ::System::Void LoadAllConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVABILITYJSONTABLE_LOADALLCONFIG_OFFSET))();
		}

		static ::System::Void UnloadAllConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVABILITYJSONTABLE_UNLOADALLCONFIG_OFFSET))();
		}

		static ::System::Void LoadAdventureModifierConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVABILITYJSONTABLE_LOADADVENTUREMODIFIERCONFIG_OFFSET))();
		}

		static ::System::Void _AddGlobalAdventureModifiers(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureModifierConfig*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureModifierConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVABILITYJSONTABLE__ADDGLOBALADVENTUREMODIFIERS_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadAdventureAbility(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVABILITYJSONTABLE__LOADADVENTUREABILITY_OFFSET))(a1);
		}

		static ::RPG::GameCore::AdventureAbilityConfig* GetAdventureAbility(::System::String* a1)
		{
			return ((::RPG::GameCore::AdventureAbilityConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVABILITYJSONTABLE_GETADVENTUREABILITY_OFFSET))(a1);
		}

		static ::RPG::GameCore::AdventureModifierConfig* GetAdventureModifierConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::AdventureModifierConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVABILITYJSONTABLE_GETADVENTUREMODIFIERCONFIG_OFFSET))(a1);
		}

	};
}
