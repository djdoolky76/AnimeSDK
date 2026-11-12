#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define CODPLKJACKB_DKNHNKCEAPI_CTOR_OFFSET UNITYSDK_OFFSET(0xE5FFC80)

inline static constexpr unsigned int CODPLKJACKB_DKNHNKCEAPI_TypeDefinitionIndex = 66310;

	class CODPLKJACKB_DKNHNKCEAPI : public ::System::Object
	{
	public:
		::System::String* Title; // 0x10
		::System::String* Tag; // 0x18
		::Il2CppArray<::System::UInt32>* BasicEquips; // 0x20
		::Il2CppArray<::System::Object*>* EarlyRolesData; // 0x28
		::Il2CppArray<::System::Object*>* MidRolesData; // 0x30
		::System::String* Description; // 0x38
		::Il2CppArray<::System::UInt32>* PrimaryAugments; // 0x40
		::System::String* RefID; // 0x48
		::Il2CppArray<::System::UInt32>* SecondaryAugments; // 0x50
		::Il2CppArray<::System::Object*>* RoleEquipData; // 0x58
		::Il2CppArray<::System::Object*>* MainRolesData; // 0x60
		::System::String* Author; // 0x68
		::Il2CppArray<::System::UInt32>* Portals; // 0x70
		::Il2CppArray<::System::UInt32>* CoreEquips; // 0x78
		::System::UInt32 GameVersion; // 0x80
		::System::UInt32 LikeCountForSort; // 0x84
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODPLKJACKB_DKNHNKCEAPI_CTOR_OFFSET))(this);
		}

	};
