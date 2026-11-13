#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarSkinType.h"
#include "unitysdk/RPG/GameCore/PersonalizeShowType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarSkinRow; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARSKINROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2F66C0)
#define RPG_GAMECORE_AVATARSKINROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C2F5700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkinRow_TypeDefinitionIndex = 12781;

	class AvatarSkinRow : public ::System::Object
	{
	public:
		::System::String* ShopBgPath; // 0x10
		::System::String* AvatarCutinFrontImgPath; // 0x18
		::System::String* AudioEventTag; // 0x20
		::System::String* AvatarMiniIconPath; // 0x28
		::System::String* UltraSkillCutInPrefabPath; // 0x30
		::System::String* UIAvatarModelPath; // 0x38
		::System::String* DefaultAvatarHeadIconPath; // 0x40
		::System::String* SideAvatarHeadIconPath; // 0x48
		::System::String* AdventureDefaultAvatarHeadIconPath; // 0x50
		::System::String* AdventureCharacterConfigOverrideJsonPath; // 0x58
		::System::String* PlayerPrefabPath; // 0x60
		::System::String* DefaultAvatarModelPath; // 0x68
		::System::String* AvatarSideIconPath; // 0x70
		::System::String* WaitingAvatarHeadIconPath; // 0x78
		::Il2CppArray<::System::Single>* AssistOffset; // 0x80
		::System::String* ActionAvatarHeadIconPath; // 0x88
		::System::String* SkinConfigPath; // 0x90
		::System::String* AvatarCutinImgPath; // 0x98
		::System::String* FreeStyleCharacterID; // 0xA0
		::System::String* AvatarCutinBgImgPath; // 0xA8
		::System::String* GachaResultImgPath; // 0xB0
		::Il2CppArray<::System::Single>* AvatarSelfShowOffset; // 0xB8
		::System::String* DressIconPath; // 0xC0
		::Il2CppArray<::System::Single>* AvatarDropOffset; // 0xC8
		::RPG::Client::TextID AvatarSkinSynopsis; // 0xD0
		::System::UInt32 IntroDataID; // 0xE0
		::System::UInt32 ShowParam; // 0xE4
		::System::UInt32 AvatarID; // 0xE8
		::System::UInt32 PlayerCardID; // 0xEC
		::System::UInt32 PanelID; // 0xF0
		::RPG::GameCore::PersonalizeShowType ShowType; // 0xF4
		::System::UInt32 ID; // 0xF8
		::System::UInt32 VideoID; // 0xFC
		::RPG::GameCore::AvatarSkinType Type; // 0x100
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID ActivitySkinName; // 0x108
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarSkinRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarSkinRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
