#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;

#define ECBCJNEKDLA_CTOR_OFFSET UNITYSDK_OFFSET(0x12D01080)
#define ECBCJNEKDLA_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x12D01090)

inline static constexpr unsigned int ECBCJNEKDLA_TypeDefinitionIndex = 60351;

	class ECBCJNEKDLA : public ::EFNJLACKEDH
	{
	public:
		::System::Void _ctor(::BKHHFIJCHEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*))((::PBYTE)hIl2Cpp + ECBCJNEKDLA_CTOR_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBCJNEKDLA_NPAFMEBNFOB_OFFSET))(this);
		}

	};
