#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/MemoryHelpers_BitRegion.h"

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_ALIGNNATURAL_OFFSET UNITYSDK_OFFSET(0x1F008A80)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_COMPARE_OFFSET UNITYSDK_OFFSET(0x1F007FE0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_COMPUTEFOLLOWINGBYTEOFFSET_OFFSET UNITYSDK_OFFSET(0x1F008190)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_MEMCMPBITREGION_OFFSET UNITYSDK_OFFSET(0x1F008050)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_MEMCPYBITREGION_OFFSET UNITYSDK_OFFSET(0x1F0081F0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_MEMCPYMASKED_OFFSET UNITYSDK_OFFSET(0x1F0083A0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_MEMSET_OFFSET UNITYSDK_OFFSET(0x1F0082C0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READEXCESSKMULTIPLEBITSASINT_OFFSET UNITYSDK_OFFSET(0x1F008770)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READMULTIPLEBITSASNORMALIZEDUINT_OFFSET UNITYSDK_OFFSET(0x1F0087C0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READMULTIPLEBITSASUINT_OFFSET UNITYSDK_OFFSET(0x1F008480)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READSINGLEBIT_OFFSET UNITYSDK_OFFSET(0x1F008030)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READTWOSCOMPLEMENTMULTIPLEBITSASINT_OFFSET UNITYSDK_OFFSET(0x1F008750)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_SETBITSINBUFFER_OFFSET UNITYSDK_OFFSET(0x1F008880)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITEINTASEXCESSKMULTIPLEBITS_OFFSET UNITYSDK_OFFSET(0x1F0087A0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITEINTASTWOSCOMPLEMENTMULTIPLEBITS_OFFSET UNITYSDK_OFFSET(0x1F008760)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITENORMALIZEDUINTASMULTIPLEBITS_OFFSET UNITYSDK_OFFSET(0x1F008820)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITESINGLEBIT_OFFSET UNITYSDK_OFFSET(0x1F0081B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITEUINTASMULTIPLEBITS_OFFSET UNITYSDK_OFFSET(0x1F0085D0)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int MemoryHelpers_TypeDefinitionIndex = 32125;

	class MemoryHelpers : public ::System::Object
	{
	public:
		static ::System::Boolean Compare(::PVOID ptr1, ::PVOID ptr2, ::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion region)
		{
			return ((::System::Boolean(*)(::PVOID, ::PVOID, ::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_COMPARE_OFFSET))(ptr1, ptr2, region);
		}

		static ::System::UInt32 ComputeFollowingByteOffset(::System::UInt32 byteOffset, ::System::UInt32 sizeInBits)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_COMPUTEFOLLOWINGBYTEOFFSET_OFFSET))(byteOffset, sizeInBits);
		}

		static ::System::Void WriteSingleBit(::PVOID ptr, ::System::UInt32 bitOffset, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITESINGLEBIT_OFFSET))(ptr, bitOffset, value);
		}

		static ::System::Boolean ReadSingleBit(::PVOID ptr, ::System::UInt32 bitOffset)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READSINGLEBIT_OFFSET))(ptr, bitOffset);
		}

		static ::System::Void MemCpyBitRegion(::PVOID destination, ::PVOID source, ::System::UInt32 bitOffset, ::System::UInt32 bitCount)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_MEMCPYBITREGION_OFFSET))(destination, source, bitOffset, bitCount);
		}

		static ::System::Boolean MemCmpBitRegion(::PVOID ptr1, ::PVOID ptr2, ::System::UInt32 bitOffset, ::System::UInt32 bitCount, ::PVOID mask)
		{
			return ((::System::Boolean(*)(::PVOID, ::PVOID, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_MEMCMPBITREGION_OFFSET))(ptr1, ptr2, bitOffset, bitCount, mask);
		}

		static ::System::Void MemSet(::PVOID destination, ::System::Int32 numBytes, ::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_MEMSET_OFFSET))(destination, numBytes, value);
		}

		static ::System::Void MemCpyMasked(::PVOID destination, ::PVOID source, ::System::Int32 numBytes, ::PVOID mask)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_MEMCPYMASKED_OFFSET))(destination, source, numBytes, mask);
		}

		static ::System::UInt32 ReadMultipleBitsAsUInt(::PVOID ptr, ::System::UInt32 bitOffset, ::System::UInt32 bitCount)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READMULTIPLEBITSASUINT_OFFSET))(ptr, bitOffset, bitCount);
		}

		static ::System::Void WriteUIntAsMultipleBits(::PVOID ptr, ::System::UInt32 bitOffset, ::System::UInt32 bitCount, ::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITEUINTASMULTIPLEBITS_OFFSET))(ptr, bitOffset, bitCount, value);
		}

		static ::System::Int32 ReadTwosComplementMultipleBitsAsInt(::PVOID ptr, ::System::UInt32 bitOffset, ::System::UInt32 bitCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READTWOSCOMPLEMENTMULTIPLEBITSASINT_OFFSET))(ptr, bitOffset, bitCount);
		}

		static ::System::Void WriteIntAsTwosComplementMultipleBits(::PVOID ptr, ::System::UInt32 bitOffset, ::System::UInt32 bitCount, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITEINTASTWOSCOMPLEMENTMULTIPLEBITS_OFFSET))(ptr, bitOffset, bitCount, value);
		}

		static ::System::Int32 ReadExcessKMultipleBitsAsInt(::PVOID ptr, ::System::UInt32 bitOffset, ::System::UInt32 bitCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READEXCESSKMULTIPLEBITSASINT_OFFSET))(ptr, bitOffset, bitCount);
		}

		static ::System::Void WriteIntAsExcessKMultipleBits(::PVOID ptr, ::System::UInt32 bitOffset, ::System::UInt32 bitCount, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITEINTASEXCESSKMULTIPLEBITS_OFFSET))(ptr, bitOffset, bitCount, value);
		}

		static ::System::Single ReadMultipleBitsAsNormalizedUInt(::PVOID ptr, ::System::UInt32 bitOffset, ::System::UInt32 bitCount)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READMULTIPLEBITSASNORMALIZEDUINT_OFFSET))(ptr, bitOffset, bitCount);
		}

		static ::System::Void WriteNormalizedUIntAsMultipleBits(::PVOID ptr, ::System::UInt32 bitOffset, ::System::UInt32 bitCount, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITENORMALIZEDUINTASMULTIPLEBITS_OFFSET))(ptr, bitOffset, bitCount, value);
		}

		static ::System::Void SetBitsInBuffer(::PVOID buffer, ::System::Int32 byteOffset, ::System::Int32 bitOffset, ::System::Int32 sizeInBits, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_SETBITSINBUFFER_OFFSET))(buffer, byteOffset, bitOffset, sizeInBits, value);
		}

		static ::System::UInt32 AlignNatural(::System::UInt32 offset, ::System::UInt32 sizeInBytes)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_ALIGNNATURAL_OFFSET))(offset, sizeInBytes);
		}
	};
}
