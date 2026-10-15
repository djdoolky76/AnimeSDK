#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarPropertyOverrideRow; }

#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D41F350)
#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D41EC30)

namespace RPG::GameCore
{
	class AvatarPropertyOverrideRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* HidePropertyList; // 0x10
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* ShowPropertyInBattleList; // 0x18
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* ShowPropertyList; // 0x20
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* HidePropertyInBattleList; // 0x28
		::System::UInt32 AvatarID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarPropertyOverrideRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarPropertyOverrideRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
