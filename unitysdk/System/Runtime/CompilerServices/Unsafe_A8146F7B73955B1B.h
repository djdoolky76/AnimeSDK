#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_A8146F7B73955B1B_COPYBLOCK_OFFSET UNITYSDK_OFFSET(0x1EE81010)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_A8146F7B73955B1B_INITBLOCKUNALIGNED_1_OFFSET UNITYSDK_OFFSET(0x1EE81030)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_A8146F7B73955B1B_INITBLOCKUNALIGNED_OFFSET UNITYSDK_OFFSET(0x1EE81020)

namespace System::Runtime::CompilerServices
{
	class Unsafe_A8146F7B73955B1B : public ::System::Object
	{
	public:
		static ::System::Void CopyBlock(::System::Byte a1, ::System::Byte a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::Byte, ::System::Byte, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_A8146F7B73955B1B_COPYBLOCK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void InitBlockUnaligned(::PVOID a1, ::System::Byte a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_A8146F7B73955B1B_INITBLOCKUNALIGNED_OFFSET))(a1, a2, a3);
		}

		static ::System::Void InitBlockUnaligned_1(::System::Byte a1, ::System::Byte a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::Byte, ::System::Byte, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_A8146F7B73955B1B_INITBLOCKUNALIGNED_1_OFFSET))(a1, a2, a3);
		}

	};
}
