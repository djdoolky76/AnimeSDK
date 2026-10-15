#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKFDNGOHNPC.h"
class PBOFFJNBFMI;

#define BHPPBFPMEJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8BAE00)
#define BHPPBFPMEJJ_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1C8BAE10)

inline static constexpr unsigned int BHPPBFPMEJJ_TypeDefinitionIndex = 42202;

	class BHPPBFPMEJJ : public ::CKFDNGOHNPC
	{
	public:
		::PBOFFJNBFMI* FNBCJMNLMJD; // 0x18
		::System::Void _ctor(::PBOFFJNBFMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBOFFJNBFMI*))((::PBYTE)hIl2Cpp + BHPPBFPMEJJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPPBFPMEJJ_NPAFMEBNFOB_OFFSET))(this);
		}

	};
