#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CODPLKJACKB_IJAFECNCAIH_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB34B0)

	class CODPLKJACKB_IJAFECNCAIH : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* Equips; // 0x10
		::System::UInt32 RoleID; // 0x18
		::System::Boolean IsMain; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 PosIndex; // 0x20
		::System::UInt32 Star; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODPLKJACKB_IJAFECNCAIH_CTOR_OFFSET))(this);
		}

	};
