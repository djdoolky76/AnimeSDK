#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAOFCEFPEHP;

#define LJHBBIPGJAL_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x1A60E400)
#define LJHBBIPGJAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A60E6C0)

inline static constexpr unsigned int LJHBBIPGJAL_TypeDefinitionIndex = 90279;

class LJHBBIPGJAL : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHBBIPGJAL__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::OAOFCEFPEHP* FFKBEGIHIGG, ::OAOFCEFPEHP* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::OAOFCEFPEHP*, ::OAOFCEFPEHP*))((::PBYTE)hIl2Cpp + LJHBBIPGJAL_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
