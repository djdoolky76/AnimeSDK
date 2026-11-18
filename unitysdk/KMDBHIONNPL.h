#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJOPECODCJL.h"
#include "unitysdk/System/Object.h"

class BGFOHHFANIP;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define KMDBHIONNPL_IKLDJOBHHGG_OFFSET UNITYSDK_OFFSET(0x15BA1260)
#define KMDBHIONNPL__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA1250)

inline static constexpr unsigned int KMDBHIONNPL_TypeDefinitionIndex = 45315;

class KMDBHIONNPL : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* MGNPPPJOJDK; // 0x10
	::KJOPECODCJL BNHNGJKNJJD; // 0x18
	::System::Byte _padding0[0x4];
	::System::Int64 AIHLOHBFLGM; // 0x20
	::System::Int64 BADELCLKCLK; // 0x28
	::System::Int32 IMNEGBGIDBK; // 0x30
	::System::Int32 NGNFDCGACDK; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDBHIONNPL__CTOR_OFFSET))(this);
	}

	static ::KMDBHIONNPL* IKLDJOBHHGG(::BGFOHHFANIP* LPILAIGHBPF)
	{
		return ((::KMDBHIONNPL*(*)(::BGFOHHFANIP*))((::PBYTE)hIl2Cpp + KMDBHIONNPL_IKLDJOBHHGG_OFFSET))(LPILAIGHBPF);
	}
};
