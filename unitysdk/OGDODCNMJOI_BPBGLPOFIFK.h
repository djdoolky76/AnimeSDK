#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OGDODCNMJOI;

#define OGDODCNMJOI_BPBGLPOFIFK_COMPARE_OFFSET UNITYSDK_OFFSET(0x1C0A0090)
#define OGDODCNMJOI_BPBGLPOFIFK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0A0080)

inline static constexpr unsigned int OGDODCNMJOI_BPBGLPOFIFK_TypeDefinitionIndex = 11955;

class OGDODCNMJOI_BPBGLPOFIFK : public ::System::Object
{
public:
	::OGDODCNMJOI* OGKPEFABGFN; // 0x10

	::System::Void _ctor(::OGDODCNMJOI* KNHIFHIKHIO)
	{
		return ((::System::Void(*)(::PVOID, ::OGDODCNMJOI*))((::PBYTE)hIl2Cpp + OGDODCNMJOI_BPBGLPOFIFK__CTOR_OFFSET))(this, KNHIFHIKHIO);
	}

	::System::Int32 Compare(::System::Int32 HAAEBCOBKFF, ::System::Int32 BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OGDODCNMJOI_BPBGLPOFIFK_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
