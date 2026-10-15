#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAMIINECKKH.h"
class BKHHFIJCHEP;
class IBPGDJEBPFN;
class JCLBAEHIBLA;

#define BLPMIGIJGAI_CTOR_OFFSET UNITYSDK_OFFSET(0xBA85420)
#define BLPMIGIJGAI_LFFBCABFBOK_OFFSET UNITYSDK_OFFSET(0xBA85430)

inline static constexpr unsigned int BLPMIGIJGAI_TypeDefinitionIndex = 60357;

	class BLPMIGIJGAI : public ::DAMIINECKKH
	{
	public:
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::JCLBAEHIBLA* a2, ::IBPGDJEBPFN* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::JCLBAEHIBLA*, ::IBPGDJEBPFN*))((::PBYTE)hIl2Cpp + BLPMIGIJGAI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LFFBCABFBOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPMIGIJGAI_LFFBCABFBOK_OFFSET))(this);
		}

	};
