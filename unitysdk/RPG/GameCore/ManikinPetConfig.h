#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PetBodySize.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ManikinPetConfig; }
namespace System { class String; }

#define RPG_GAMECORE_MANIKINPETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D828BB0)
#define RPG_GAMECORE_MANIKINPETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8287A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ManikinPetConfig_TypeDefinitionIndex = 17478;

	class ManikinPetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PetBodySize PetBodySize; // 0x10
		::System::Boolean EnableIdleShow; // 0x14
		::System::Byte _padding0[0x3];
		::System::String* FreeStyleCharacterID; // 0x18
		::System::String* FreeStyleCharacterConfigPath; // 0x20
		::Il2CppArray<::System::String*>* AnimEventConfigList; // 0x28
		::Il2CppArray<::System::String*>* ResidentEffectKey; // 0x30
		::System::String* ResidentPossessionKey; // 0x38
		::System::String* CharacterReplaceMaterialConfigPath; // 0x40
		::Il2CppArray<::System::String*>* ReplaceMaterialKeyList; // 0x48
		::Il2CppArray<::System::String*>* ReplaceMaterialVariantKeyList; // 0x50
		::System::String* AtlasFaceSetKey; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINPETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ManikinPetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ManikinPetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINPETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
