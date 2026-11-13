#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKFDNGOHNPC.h"
class PBOFFJNBFMI;

#define BHPPBFPMEJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B7480)
#define BHPPBFPMEJJ_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1D2B7490)

inline static constexpr unsigned int BHPPBFPMEJJ_TypeDefinitionIndex = 43177;

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
