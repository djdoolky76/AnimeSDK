#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_INDEXKEY_CTOR_OFFSET UNITYSDK_OFFSET(0x650320)
#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_INDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x3EE9210)
#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3EE92E0)
#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_INDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3EE9390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkillTreeExcelTable_IndexKey_TypeDefinitionIndex = 12794;

	struct alignas(4) AvatarSkillTreeExcelTable_IndexKey
	{
		::System::UInt32 PointID; // 0x10
		::System::UInt32 Level; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_INDEXKEY_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_INDEXKEY_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_INDEXKEY_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET))(this);
		}

	};
}
