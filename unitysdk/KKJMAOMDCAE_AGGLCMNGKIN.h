#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KKJMAOMDCAE_AGGLCMNGKIN_CTOR_OFFSET UNITYSDK_OFFSET(0xB4CE7B0)

	class KKJMAOMDCAE_AGGLCMNGKIN : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PrimaryEquips; // 0x10
		::System::UInt32 Star; // 0x18
		::System::Boolean IsCarry; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 RoleID; // 0x20
		::System::UInt32 PosIndex; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJMAOMDCAE_AGGLCMNGKIN_CTOR_OFFSET))(this);
		}

	};
