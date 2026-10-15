#pragma once
#include "unitysdk/unitysdk.h"
class AkVertex;

#define AKVERTEXARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1F5ECED0)
#define AKVERTEXARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1F5ECE80)
#define AKVERTEXARRAY_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5ECDD0)
#define AKVERTEXARRAY_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x1F5ECE10)

inline static constexpr unsigned int AkVertexArray_TypeDefinitionIndex = 44856;

	class AkVertexArray
	{
	public:
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKVERTEXARRAY_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_StructureSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKVERTEXARRAY_GET_STRUCTURESIZE_OFFSET))(this);
		}

		::AkVertex* CreateNewReferenceFromIntPtr(::System::IntPtr a1)
		{
			return ((::AkVertex*(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKVERTEXARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET))(this, a1);
		}

		::System::Void CloneIntoReferenceFromIntPtr(::System::IntPtr a1, ::AkVertex* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::AkVertex*))((::PBYTE)hIl2Cpp + AKVERTEXARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET))(this, a1, a2);
		}

	};
