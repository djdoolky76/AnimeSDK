#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_A8146F7B73955B1B_COPYBLOCK_OFFSET UNITYSDK_OFFSET(0x1EE536F0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_A8146F7B73955B1B_INITBLOCKUNALIGNED_1_OFFSET UNITYSDK_OFFSET(0x1EE53710)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_A8146F7B73955B1B_INITBLOCKUNALIGNED_OFFSET UNITYSDK_OFFSET(0x1EE53700)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int Unsafe_A8146F7B73955B1B_TypeDefinitionIndex = 3869;

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
