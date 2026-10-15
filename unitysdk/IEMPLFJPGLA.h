#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;

#define IEMPLFJPGLA_CTOR_OFFSET UNITYSDK_OFFSET(0x15EF9880)
#define IEMPLFJPGLA_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x15EF9890)

inline static constexpr unsigned int IEMPLFJPGLA_TypeDefinitionIndex = 60374;

	class IEMPLFJPGLA : public ::EFNJLACKEDH
	{
	public:
		::System::UInt32 HAHKHFCGDPI; // 0x18
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::System::UInt32))((::PBYTE)hIl2Cpp + IEMPLFJPGLA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEMPLFJPGLA_NPAFMEBNFOB_OFFSET))(this);
		}

	};
