#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIDPCOMKMKJ.h"

#define KMEMMFHPJDC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB4C10)
#define KMEMMFHPJDC_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1DAB4770)

inline static constexpr unsigned int KMEMMFHPJDC_TypeDefinitionIndex = 43449;

	class KMEMMFHPJDC : public ::KIDPCOMKMKJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEMMFHPJDC_CTOR_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEMMFHPJDC_NPAFMEBNFOB_OFFSET))(this);
		}

	};
