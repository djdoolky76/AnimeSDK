#pragma once
#include "unitysdk/unitysdk.h"

class AkObstructionOcclusionValues;

#define AKOBSTRUCTIONOCCLUSIONVALUESARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1FE40DB0)
#define AKOBSTRUCTIONOCCLUSIONVALUESARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1FE40D70)
#define AKOBSTRUCTIONOCCLUSIONVALUESARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET UNITYSDK_OFFSET(0x1FE40CF0)
#define AKOBSTRUCTIONOCCLUSIONVALUESARRAY_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x1FE40C70)
#define AKOBSTRUCTIONOCCLUSIONVALUESARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE40C30)

inline static constexpr unsigned int AkObstructionOcclusionValuesArray_TypeDefinitionIndex = 33274;

class AkObstructionOcclusionValuesArray
{
public:
	::System::Void _ctor(::System::Int32 count)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUESARRAY__CTOR_OFFSET))(this, count);
	}

	::System::Int32 get_StructureSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUESARRAY_GET_STRUCTURESIZE_OFFSET))(this);
	}

	::System::Void DefaultConstructAtIntPtr(::System::IntPtr address)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUESARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET))(this, address);
	}

	::AkObstructionOcclusionValues* CreateNewReferenceFromIntPtr(::System::IntPtr address)
	{
		return ((::AkObstructionOcclusionValues*(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUESARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET))(this, address);
	}

	::System::Void CloneIntoReferenceFromIntPtr(::System::IntPtr address, ::AkObstructionOcclusionValues* other)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::AkObstructionOcclusionValues*))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUESARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET))(this, address, other);
	}
};
