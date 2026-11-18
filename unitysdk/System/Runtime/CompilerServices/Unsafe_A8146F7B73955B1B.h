#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_A8146F7B73955B1B_COPYBLOCKUNALIGNED_OFFSET UNITYSDK_OFFSET(0x20073760)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_A8146F7B73955B1B_COPYBLOCK_1_OFFSET UNITYSDK_OFFSET(0x20073750)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_A8146F7B73955B1B_COPYBLOCK_OFFSET UNITYSDK_OFFSET(0x20073740)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_A8146F7B73955B1B_INITBLOCKUNALIGNED_1_OFFSET UNITYSDK_OFFSET(0x200737A0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_A8146F7B73955B1B_INITBLOCKUNALIGNED_OFFSET UNITYSDK_OFFSET(0x20073790)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_A8146F7B73955B1B_INITBLOCK_1_OFFSET UNITYSDK_OFFSET(0x20073780)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_A8146F7B73955B1B_INITBLOCK_OFFSET UNITYSDK_OFFSET(0x20073770)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int Unsafe_A8146F7B73955B1B_TypeDefinitionIndex = 6545;

	class Unsafe_A8146F7B73955B1B : public ::System::Object
	{
	public:
		static ::System::Void CopyBlock(::PVOID destination, ::PVOID source, ::System::UInt32 byteCount)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_A8146F7B73955B1B_COPYBLOCK_OFFSET))(destination, source, byteCount);
		}

		static ::System::Void CopyBlock_1(::System::Byte& destination, ::System::Byte& source, ::System::UInt32 byteCount)
		{
			return ((::System::Void(*)(::System::Byte&, ::System::Byte&, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_A8146F7B73955B1B_COPYBLOCK_1_OFFSET))(destination, source, byteCount);
		}

		static ::System::Void CopyBlockUnaligned(::PVOID destination, ::PVOID source, ::System::UInt32 byteCount)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_A8146F7B73955B1B_COPYBLOCKUNALIGNED_OFFSET))(destination, source, byteCount);
		}

		static ::System::Void InitBlock(::PVOID startAddress, ::System::Byte value, ::System::UInt32 byteCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_A8146F7B73955B1B_INITBLOCK_OFFSET))(startAddress, value, byteCount);
		}

		static ::System::Void InitBlock_1(::System::Byte& startAddress, ::System::Byte value, ::System::UInt32 byteCount)
		{
			return ((::System::Void(*)(::System::Byte&, ::System::Byte, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_A8146F7B73955B1B_INITBLOCK_1_OFFSET))(startAddress, value, byteCount);
		}

		static ::System::Void InitBlockUnaligned(::PVOID startAddress, ::System::Byte value, ::System::UInt32 byteCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_A8146F7B73955B1B_INITBLOCKUNALIGNED_OFFSET))(startAddress, value, byteCount);
		}

		static ::System::Void InitBlockUnaligned_1(::System::Byte& startAddress, ::System::Byte value, ::System::UInt32 byteCount)
		{
			return ((::System::Void(*)(::System::Byte&, ::System::Byte, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_A8146F7B73955B1B_INITBLOCKUNALIGNED_1_OFFSET))(startAddress, value, byteCount);
		}
	};
}
