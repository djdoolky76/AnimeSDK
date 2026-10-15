#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAMIINECKKH.h"
class BKHHFIJCHEP;
class IBPGDJEBPFN;
class JCLBAEHIBLA;

#define EOKLEHHBNJC_CTOR_OFFSET UNITYSDK_OFFSET(0x155C4350)
#define EOKLEHHBNJC_LFFBCABFBOK_OFFSET UNITYSDK_OFFSET(0x155C4360)

	class EOKLEHHBNJC : public ::DAMIINECKKH
	{
	public:
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::JCLBAEHIBLA* a2, ::IBPGDJEBPFN* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::JCLBAEHIBLA*, ::IBPGDJEBPFN*))((::PBYTE)hIl2Cpp + EOKLEHHBNJC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LFFBCABFBOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKLEHHBNJC_LFFBCABFBOK_OFFSET))(this);
		}

	};
