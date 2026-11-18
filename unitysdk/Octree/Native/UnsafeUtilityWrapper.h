#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OCTREE_NATIVE_UNSAFEUTILITYWRAPPER_MEMMOVE_1_OFFSET UNITYSDK_OFFSET(0x13A7FB10)
#define OCTREE_NATIVE_UNSAFEUTILITYWRAPPER_MEMMOVE_OFFSET UNITYSDK_OFFSET(0x13A7F9D0)
#define OCTREE_NATIVE_UNSAFEUTILITYWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x13A7FB30)

namespace Octree::Native
{
	inline static constexpr unsigned int UnsafeUtilityWrapper_TypeDefinitionIndex = 81616;

	class UnsafeUtilityWrapper : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_UNSAFEUTILITYWRAPPER__CTOR_OFFSET))(this);
		}

		static ::System::Void MemMove(::PVOID from, ::PVOID to, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_UNSAFEUTILITYWRAPPER_MEMMOVE_OFFSET))(from, to, length);
		}

		static ::System::Void MemMove_1(::PVOID buffer, ::System::Int32 from, ::System::Int32 to, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_UNSAFEUTILITYWRAPPER_MEMMOVE_1_OFFSET))(buffer, from, to, length);
		}
	};
}
