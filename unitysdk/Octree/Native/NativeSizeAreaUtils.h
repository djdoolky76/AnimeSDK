#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Octree/Native/DNativeSizeAreaNode.h"

namespace System { class String; }

#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_ASNODEELEMENTPTR_OFFSET UNITYSDK_OFFSET(0x19492720)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_ASNODEELEMENT_OFFSET UNITYSDK_OFFSET(0x19492710)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_PTRMEMCOPY_OFFSET UNITYSDK_OFFSET(0x19492730)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_PTRMEMEQUALSFAST_OFFSET UNITYSDK_OFFSET(0x19492C40)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_PTRMEMEQUALS_1_OFFSET UNITYSDK_OFFSET(0x19492AA0)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_PTRMEMEQUALS_2_OFFSET UNITYSDK_OFFSET(0x19492B70)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_PTRMEMEQUALS_OFFSET UNITYSDK_OFFSET(0x194929E0)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_PTRMEMSET_OFFSET UNITYSDK_OFFSET(0x194928A0)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_READBYTEBE_OFFSET UNITYSDK_OFFSET(0x194925D0)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_READINTBE_OFFSET UNITYSDK_OFFSET(0x19492570)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_READSHORTBE_OFFSET UNITYSDK_OFFSET(0x194925A0)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_TOHEX_OFFSET UNITYSDK_OFFSET(0x194925F0)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_WRITEBYTEBE_OFFSET UNITYSDK_OFFSET(0x194925E0)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_WRITEINTBE_OFFSET UNITYSDK_OFFSET(0x19492580)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_WRITESHORTBE_OFFSET UNITYSDK_OFFSET(0x194925C0)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x19492E40)

namespace Octree::Native
{
	inline static constexpr unsigned int NativeSizeAreaUtils_TypeDefinitionIndex = 44714;

	class NativeSizeAreaUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Int32 ReadIntBE(::PVOID ptr, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_READINTBE_OFFSET))(ptr, index);
		}

		static ::System::Void WriteIntBE(::PVOID ptr, ::System::Int32 value, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_WRITEINTBE_OFFSET))(ptr, value, index);
		}

		static ::System::Int16 ReadShortBE(::PVOID ptr, ::System::Int32 index)
		{
			return ((::System::Int16(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_READSHORTBE_OFFSET))(ptr, index);
		}

		static ::System::Void WriteShortBE(::PVOID ptr, ::System::Int32 value, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_WRITESHORTBE_OFFSET))(ptr, value, index);
		}

		static ::System::Int32 ReadByteBE(::PVOID ptr, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_READBYTEBE_OFFSET))(ptr, index);
		}

		static ::System::Void WriteByteBE(::PVOID ptr, ::System::Int32 value, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_WRITEBYTEBE_OFFSET))(ptr, value, index);
		}

		static ::System::String* ToHex(::PVOID input, ::System::Int32 iStart, ::System::Int32 len)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_TOHEX_OFFSET))(input, iStart, len);
		}

		static ::Octree::Native::DNativeSizeAreaNode& AsNodeElement(::PVOID source, ::System::Int32 offset)
		{
			return ((::Octree::Native::DNativeSizeAreaNode&(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_ASNODEELEMENT_OFFSET))(source, offset);
		}

		static ::PVOID AsNodeElementPtr(::PVOID source, ::System::Int32 offset)
		{
			return ((::PVOID(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_ASNODEELEMENTPTR_OFFSET))(source, offset);
		}

		static ::System::Void PtrMemCopy(::PVOID inSrc, ::PVOID inDst, ::System::Int32 srcOffset, ::System::Int32 dstOffset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_PTRMEMCOPY_OFFSET))(inSrc, inDst, srcOffset, dstOffset, count);
		}

		static ::System::Void PtrMemSet(::PVOID inDst, ::System::Int32 dstOffset, ::System::Int32 count, ::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_PTRMEMSET_OFFSET))(inDst, dstOffset, count, value);
		}

		static ::System::Boolean PtrMemEquals(::PVOID lPtr, ::PVOID rPtr, ::System::Int32 len)
		{
			return ((::System::Boolean(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_PTRMEMEQUALS_OFFSET))(lPtr, rPtr, len);
		}

		static ::System::Boolean PtrMemEquals_1(::PVOID lPtr, ::PVOID rPtr, ::System::Int32 lOffset, ::System::Int32 rOffset, ::System::Int32 len)
		{
			return ((::System::Boolean(*)(::PVOID, ::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_PTRMEMEQUALS_1_OFFSET))(lPtr, rPtr, lOffset, rOffset, len);
		}

		static ::System::Boolean PtrMemEquals_2(::PVOID lPtr, ::PVOID rPtr, ::System::Int32 lOffset, ::System::Int32 rOffset, ::System::Int32 len, ::System::Int32& breakIdx)
		{
			return ((::System::Boolean(*)(::PVOID, ::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_PTRMEMEQUALS_2_OFFSET))(lPtr, rPtr, lOffset, rOffset, len, breakIdx);
		}

		static ::System::Boolean PtrMemEqualsFast(::PVOID iLPtr, ::PVOID iRPtr, ::System::UInt32 lOffset, ::System::UInt32 rOffset, ::System::UInt32 len)
		{
			return ((::System::Boolean(*)(::PVOID, ::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_PTRMEMEQUALSFAST_OFFSET))(iLPtr, iRPtr, lOffset, rOffset, len);
		}
	};
}
