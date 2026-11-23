#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Enum_EC6B8B87299758A4.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_ENUM_E86864AE28D676D1_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x3C3E650)
#define SYSTEM_ENUM_E86864AE28D676D1_A84055DE45031C17_OFFSET UNITYSDK_OFFSET(0x3C3E460)
#define SYSTEM_ENUM_E86864AE28D676D1_F6E0D175D129ADB3_1_OFFSET UNITYSDK_OFFSET(0x3C3E6E0)
#define SYSTEM_ENUM_E86864AE28D676D1_F6E0D175D129ADB3_2_OFFSET UNITYSDK_OFFSET(0x3C3E730)
#define SYSTEM_ENUM_E86864AE28D676D1_F6E0D175D129ADB3_OFFSET UNITYSDK_OFFSET(0x3C3E6C0)

namespace System
{
	inline static constexpr unsigned int Enum_E86864AE28D676D1_TypeDefinitionIndex = 11584;

	struct alignas(8) Enum_E86864AE28D676D1
	{
		::System::Object* AEB18604C04FD1F2; // 0x10
		::System::Boolean B81CAF26CB2557B8; // 0x18
		::System::Byte _padding0[0x3];
		::System::Enum_EC6B8B87299758A4 E2F6C65A5A2B7A9F; // 0x1C
		::System::String* B6079A626BB45734; // 0x20
		::System::String* FFE5D25DBE110720; // 0x28
		::System::Object* A80B992766BD8D27; // 0x30
		::System::Exception* A7FA2C074C5A1226; // 0x38

		::System::Void A1E97155B145443C(::System::Boolean F84D1558DEEA41E8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_E86864AE28D676D1_A1E97155B145443C_OFFSET))(this, F84D1558DEEA41E8);
		}

		::System::Void F6E0D175D129ADB3(::System::Exception* E0013774B9BF0D19)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_E86864AE28D676D1_F6E0D175D129ADB3_OFFSET))(this, E0013774B9BF0D19);
		}

		::System::Void F6E0D175D129ADB3_1(::System::Enum_EC6B8B87299758A4 FC701D6D3B4C3F33, ::System::String* FE2131CC82BC4D17)
		{
			return ((::System::Void(*)(::PVOID, ::System::Enum_EC6B8B87299758A4, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_E86864AE28D676D1_F6E0D175D129ADB3_1_OFFSET))(this, FC701D6D3B4C3F33, FE2131CC82BC4D17);
		}

		::System::Void F6E0D175D129ADB3_2(::System::Enum_EC6B8B87299758A4 FC701D6D3B4C3F33, ::System::String* F38F4E5D6214E2C1, ::System::Object* F12E9C6852E33B8D)
		{
			return ((::System::Void(*)(::PVOID, ::System::Enum_EC6B8B87299758A4, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_E86864AE28D676D1_F6E0D175D129ADB3_2_OFFSET))(this, FC701D6D3B4C3F33, F38F4E5D6214E2C1, F12E9C6852E33B8D);
		}

		::System::Exception* A84055DE45031C17()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_E86864AE28D676D1_A84055DE45031C17_OFFSET))(this);
		}
	};
}
