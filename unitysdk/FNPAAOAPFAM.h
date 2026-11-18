#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAOFCEFPEHP;

#define FNPAAOAPFAM_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x10EC88C0)
#define FNPAAOAPFAM__CTOR_OFFSET UNITYSDK_OFFSET(0x10EC8C20)

inline static constexpr unsigned int FNPAAOAPFAM_TypeDefinitionIndex = 54938;

class FNPAAOAPFAM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPAAOAPFAM__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::OAOFCEFPEHP* FFKBEGIHIGG, ::OAOFCEFPEHP* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::OAOFCEFPEHP*, ::OAOFCEFPEHP*))((::PBYTE)hIl2Cpp + FNPAAOAPFAM_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
