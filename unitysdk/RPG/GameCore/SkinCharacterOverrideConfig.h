#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureCharacterConfig; }
namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class ManikinCharacterConfig; }
namespace RPG::GameCore { class SkinCharacterOverrideConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SKINCHARACTEROVERRIDECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF08D0)
#define RPG_GAMECORE_SKINCHARACTEROVERRIDECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAF0480)
#define RPG_GAMECORE_SKINCHARACTEROVERRIDECONFIG_PKADDEPKJFN_1_OFFSET UNITYSDK_OFFSET(0x1DAF0940)
#define RPG_GAMECORE_SKINCHARACTEROVERRIDECONFIG_PKADDEPKJFN_2_OFFSET UNITYSDK_OFFSET(0x1DAF0960)
#define RPG_GAMECORE_SKINCHARACTEROVERRIDECONFIG_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x1DAF08E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkinCharacterOverrideConfig_TypeDefinitionIndex = 17458;

	class SkinCharacterOverrideConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean OverrideShoesType; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* ShoesType; // 0x18
		::System::Boolean OverrideAnimEventConfigList; // 0x20
		::System::Byte _padding1[0x7];
		::Il2CppArray<::System::String*>* AnimEventConfigList; // 0x28
		::System::Boolean OverrideAnimEventConfigListInPerformance; // 0x30
		::System::Byte _padding2[0x7];
		::Il2CppArray<::System::String*>* AnimEventConfigListInPerformance; // 0x38
		::System::Boolean OverrideAnimEventConfigListInBattle; // 0x40
		::System::Byte _padding3[0x7];
		::Il2CppArray<::System::String*>* AnimEventConfigListInBattle; // 0x48
		::System::Boolean OverrideAnimEventConfigListInManikin; // 0x50
		::System::Byte _padding4[0x7];
		::Il2CppArray<::System::String*>* AnimEventConfigListInManikin; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKINCHARACTEROVERRIDECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SkinCharacterOverrideConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SkinCharacterOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKINCHARACTEROVERRIDECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::System::Void PKADDEPKJFN(::RPG::GameCore::AdventureCharacterConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKINCHARACTEROVERRIDECONFIG_PKADDEPKJFN_OFFSET))(this, a1);
		}

		::System::Void PKADDEPKJFN_1(::RPG::GameCore::CharacterConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKINCHARACTEROVERRIDECONFIG_PKADDEPKJFN_1_OFFSET))(this, a1);
		}

		::System::Void PKADDEPKJFN_2(::RPG::GameCore::ManikinCharacterConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ManikinCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKINCHARACTEROVERRIDECONFIG_PKADDEPKJFN_2_OFFSET))(this, a1);
		}

	};
}
