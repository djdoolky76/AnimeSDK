#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_AVATAREXTENSIONS_SKILLTREENAVIGATIONENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0xD03E3F0)
#define RPG_CLIENT_AVATAREXTENSIONS_SKILLTREENAVIGATIONENTRY_GET_DOWN_OFFSET UNITYSDK_OFFSET(0xD04CAD0)
#define RPG_CLIENT_AVATAREXTENSIONS_SKILLTREENAVIGATIONENTRY_GET_LEFT_OFFSET UNITYSDK_OFFSET(0xD04CAF0)
#define RPG_CLIENT_AVATAREXTENSIONS_SKILLTREENAVIGATIONENTRY_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0xD04CB10)
#define RPG_CLIENT_AVATAREXTENSIONS_SKILLTREENAVIGATIONENTRY_GET_UP_OFFSET UNITYSDK_OFFSET(0xD04CAB0)
#define RPG_CLIENT_AVATAREXTENSIONS_SKILLTREENAVIGATIONENTRY_SET_DOWN_OFFSET UNITYSDK_OFFSET(0xD04CAE0)
#define RPG_CLIENT_AVATAREXTENSIONS_SKILLTREENAVIGATIONENTRY_SET_LEFT_OFFSET UNITYSDK_OFFSET(0xD04CB00)
#define RPG_CLIENT_AVATAREXTENSIONS_SKILLTREENAVIGATIONENTRY_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0xD04CB20)
#define RPG_CLIENT_AVATAREXTENSIONS_SKILLTREENAVIGATIONENTRY_SET_UP_OFFSET UNITYSDK_OFFSET(0xD04CAC0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarExtensions_SkillTreeNavigationEntry_TypeDefinitionIndex = 63990;

	class AvatarExtensions_SkillTreeNavigationEntry : public ::System::Object
	{
	public:
		::System::Nullable_1<::System::Int32> _Left_k__BackingField; // 0x10
		::System::Nullable_1<::System::Int32> _Down_k__BackingField; // 0x18
		::System::Nullable_1<::System::Int32> _Up_k__BackingField; // 0x20
		::System::Nullable_1<::System::Int32> _Right_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS_SKILLTREENAVIGATIONENTRY_CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> get_Up()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS_SKILLTREENAVIGATIONENTRY_GET_UP_OFFSET))(this);
		}

		::System::Void set_Up(::System::Nullable_1<::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS_SKILLTREENAVIGATIONENTRY_SET_UP_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Int32> get_Down()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS_SKILLTREENAVIGATIONENTRY_GET_DOWN_OFFSET))(this);
		}

		::System::Void set_Down(::System::Nullable_1<::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS_SKILLTREENAVIGATIONENTRY_SET_DOWN_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Int32> get_Left()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS_SKILLTREENAVIGATIONENTRY_GET_LEFT_OFFSET))(this);
		}

		::System::Void set_Left(::System::Nullable_1<::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS_SKILLTREENAVIGATIONENTRY_SET_LEFT_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Int32> get_Right()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS_SKILLTREENAVIGATIONENTRY_GET_RIGHT_OFFSET))(this);
		}

		::System::Void set_Right(::System::Nullable_1<::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS_SKILLTREENAVIGATIONENTRY_SET_RIGHT_OFFSET))(this, a1);
		}

	};
}
