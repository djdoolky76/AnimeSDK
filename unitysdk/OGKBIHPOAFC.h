#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAOFCEFPEHP;

#define OGKBIHPOAFC_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x18442280)
#define OGKBIHPOAFC__CTOR_OFFSET UNITYSDK_OFFSET(0x184424D0)

inline static constexpr unsigned int OGKBIHPOAFC_TypeDefinitionIndex = 81939;

class OGKBIHPOAFC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKBIHPOAFC__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::OAOFCEFPEHP* FFKBEGIHIGG, ::OAOFCEFPEHP* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::OAOFCEFPEHP*, ::OAOFCEFPEHP*))((::PBYTE)hIl2Cpp + OGKBIHPOAFC_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
