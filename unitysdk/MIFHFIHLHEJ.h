#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAOFCEFPEHP;

#define MIFHFIHLHEJ_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x14D83220)
#define MIFHFIHLHEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14D83470)

inline static constexpr unsigned int MIFHFIHLHEJ_TypeDefinitionIndex = 71807;

class MIFHFIHLHEJ : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIFHFIHLHEJ__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::OAOFCEFPEHP* FFKBEGIHIGG, ::OAOFCEFPEHP* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::OAOFCEFPEHP*, ::OAOFCEFPEHP*))((::PBYTE)hIl2Cpp + MIFHFIHLHEJ_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
