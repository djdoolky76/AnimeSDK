#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KKJMAOMDCAE_OPIGALIJPOP_CTOR_OFFSET UNITYSDK_OFFSET(0xBD17EB0)

inline static constexpr unsigned int KKJMAOMDCAE_OPIGALIJPOP_TypeDefinitionIndex = 66312;

	class KKJMAOMDCAE_OPIGALIJPOP : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PrimaryEquips; // 0x10
		::Il2CppArray<::System::UInt32>* SecondaryEquips; // 0x18
		::Il2CppArray<::System::UInt32>* PrimarySpotLights; // 0x20
		::Il2CppArray<::System::UInt32>* SecondSpotLights; // 0x28
		::System::UInt32 EquipIndex; // 0x30
		::System::UInt32 RoleID; // 0x34
		::System::Boolean IsCarry; // 0x38
		::System::Byte _padding0[0x3];
		::System::UInt32 PosIndex; // 0x3C
		::System::UInt32 Star; // 0x40
		::System::Int32 SpotLightRecIndex; // 0x44
		::System::Int32 RecIndex; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJMAOMDCAE_OPIGALIJPOP_CTOR_OFFSET))(this);
		}

	};
