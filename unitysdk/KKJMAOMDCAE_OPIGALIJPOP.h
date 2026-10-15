#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KKJMAOMDCAE_OPIGALIJPOP_CTOR_OFFSET UNITYSDK_OFFSET(0xB4C8070)

inline static constexpr unsigned int KKJMAOMDCAE_OPIGALIJPOP_TypeDefinitionIndex = 64770;

	class KKJMAOMDCAE_OPIGALIJPOP : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SecondaryEquips; // 0x10
		::Il2CppArray<::System::UInt32>* PrimaryEquips; // 0x18
		::System::Int32 RecIndex; // 0x20
		::System::UInt32 RoleID; // 0x24
		::System::UInt32 Star; // 0x28
		::System::UInt32 PosIndex; // 0x2C
		::System::Boolean IsCarry; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 EquipIndex; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJMAOMDCAE_OPIGALIJPOP_CTOR_OFFSET))(this);
		}

	};
