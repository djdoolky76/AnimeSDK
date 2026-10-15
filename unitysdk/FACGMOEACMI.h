#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIDPCOMKMKJ.h"

#define FACGMOEACMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA34DA0)
#define FACGMOEACMI_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1CA34B60)

inline static constexpr unsigned int FACGMOEACMI_TypeDefinitionIndex = 42480;

	class FACGMOEACMI : public ::KIDPCOMKMKJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FACGMOEACMI_CTOR_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FACGMOEACMI_NPAFMEBNFOB_OFFSET))(this);
		}

	};
