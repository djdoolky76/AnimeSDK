#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Octree/Native/NativePtr.h"

namespace Octree::Native { class IUnsafe; }

#define OCTREE_NATIVE_UNSAFEUTILITY_ALIGNSIZE_OFFSET UNITYSDK_OFFSET(0x16C4BD90)
#define OCTREE_NATIVE_UNSAFEUTILITY_CLEAR_OFFSET UNITYSDK_OFFSET(0x16C4C9E0)
#define OCTREE_NATIVE_UNSAFEUTILITY_FREEREFOBJECT_OFFSET UNITYSDK_OFFSET(0x16C4BEF0)
#define OCTREE_NATIVE_UNSAFEUTILITY_INTARRAYSET_OFFSET UNITYSDK_OFFSET(0x16C4C7E0)
#define OCTREE_NATIVE_UNSAFEUTILITY_MEMCOPY_2_OFFSET UNITYSDK_OFFSET(0x16C4C4C0)
#define OCTREE_NATIVE_UNSAFEUTILITY_MEMCOPY_OFFSET UNITYSDK_OFFSET(0x16C4C300)
#define OCTREE_NATIVE_UNSAFEUTILITY_MEMMOVE_OFFSET UNITYSDK_OFFSET(0x16C4C130)
#define OCTREE_NATIVE_UNSAFEUTILITY_MEMSET_OFFSET UNITYSDK_OFFSET(0x16C4C640)
#define OCTREE_NATIVE_UNSAFEUTILITY_PINREFOBJECT_OFFSET UNITYSDK_OFFSET(0x16C4BDE0)
#define OCTREE_NATIVE_UNSAFEUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C4CB80)

namespace Octree::Native
{
	inline static constexpr unsigned int UnsafeUtility_TypeDefinitionIndex = 42879;

	class UnsafeUtility : public ::System::Object
	{
	public:
		static ::Octree::Native::IUnsafe** StaticGet_extUnsafe()
		{
			return (::Octree::Native::IUnsafe**)Il2CppClass::FromTypeDefinitionIndex(UnsafeUtility_TypeDefinitionIndex)->GetStaticField(0x52440);
		}
		static ::System::Int32* StaticGet_sizeofLong()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UnsafeUtility_TypeDefinitionIndex)->GetStaticField(0x13CD0);
		}
		static ::System::Int32* StaticGet_sizeofInt()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UnsafeUtility_TypeDefinitionIndex)->GetStaticField(0x13CD4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCTREE_NATIVE_UNSAFEUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Int32 AlignSize(::System::Int32 size, ::System::Int32 alignment)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_UNSAFEUTILITY_ALIGNSIZE_OFFSET))(size, alignment);
		}

		static ::Octree::Native::NativePtr PinRefObject(::System::Object* t)
		{
			return ((::Octree::Native::NativePtr(*)(::System::Object*))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_UNSAFEUTILITY_PINREFOBJECT_OFFSET))(t);
		}

		static ::System::Void FreeRefObject(::Octree::Native::NativePtr& ptr)
		{
			return ((::System::Void(*)(::Octree::Native::NativePtr&))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_UNSAFEUTILITY_FREEREFOBJECT_OFFSET))(ptr);
		}

		static ::System::Void MemMove(::PVOID buffer, ::System::Int32 from, ::System::Int32 to, ::System::Int32 len)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_UNSAFEUTILITY_MEMMOVE_OFFSET))(buffer, from, to, len);
		}

		static ::System::Void MemCopy(::PVOID src, ::PVOID dest, ::System::UInt32 len)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_UNSAFEUTILITY_MEMCOPY_OFFSET))(src, dest, len);
		}

		static ::System::Void MemCopy_2(::Octree::Native::NativePtr src, ::System::Int32 srcOffset, ::Octree::Native::NativePtr dest, ::System::Int32 tarOffset, ::System::UInt32 len)
		{
			return ((::System::Void(*)(::Octree::Native::NativePtr, ::System::Int32, ::Octree::Native::NativePtr, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_UNSAFEUTILITY_MEMCOPY_2_OFFSET))(src, srcOffset, dest, tarOffset, len);
		}

		static ::System::Void MemSet(::PVOID buffer, ::System::Byte value, ::System::UInt32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::UInt32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_UNSAFEUTILITY_MEMSET_OFFSET))(buffer, value, size);
		}

		static ::System::Void IntArraySet(::PVOID array, ::System::Int32 value, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_UNSAFEUTILITY_INTARRAYSET_OFFSET))(array, value, size);
		}

		static ::System::Void Clear(::PVOID ptr, ::System::UInt32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_UNSAFEUTILITY_CLEAR_OFFSET))(ptr, size);
		}
	};
}
