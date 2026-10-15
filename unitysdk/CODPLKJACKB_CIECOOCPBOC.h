#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CODPLKJACKB_CIECOOCPBOC_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB3490)

	class CODPLKJACKB_CIECOOCPBOC : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SecondaryEquips; // 0x10
		::Il2CppArray<::System::UInt32>* PrimaryEquips; // 0x18
		::System::UInt32 RoleID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODPLKJACKB_CIECOOCPBOC_CTOR_OFFSET))(this);
		}

	};
