#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAOFCEFPEHP;

#define EMFIOMPHJCI_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x158C0720)
#define EMFIOMPHJCI__CTOR_OFFSET UNITYSDK_OFFSET(0x158C0910)

inline static constexpr unsigned int EMFIOMPHJCI_TypeDefinitionIndex = 81702;

class EMFIOMPHJCI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFIOMPHJCI__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::OAOFCEFPEHP* FFKBEGIHIGG, ::OAOFCEFPEHP* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::OAOFCEFPEHP*, ::OAOFCEFPEHP*))((::PBYTE)hIl2Cpp + EMFIOMPHJCI_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
