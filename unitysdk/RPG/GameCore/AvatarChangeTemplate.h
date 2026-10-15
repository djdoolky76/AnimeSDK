#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AvatarChangeOption.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarChangeTemplate; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARCHANGETEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3DFC10)
#define RPG_GAMECORE_AVATARCHANGETEMPLATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3DF8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarChangeTemplate_TypeDefinitionIndex = 17136;

	class AvatarChangeTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 NewAvatarID; // 0x10
		::System::UInt32 NewAvatarEnhancedID; // 0x14
		::RPG::GameCore::AvatarChangeOption Option; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* DepartedGroupName; // 0x20
		::Il2CppArray<::RPG::GameCore::AbilityProperty>* InheritCurrentPropertyList; // 0x28
		::Il2CppArray<::RPG::GameCore::AbilityProperty>* InheritOriginPropertyBlackList; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeforeNewAvatarCreate; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNewAvatarCreate; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNewAvatarRefresh; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARCHANGETEMPLATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarChangeTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarChangeTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARCHANGETEMPLATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
