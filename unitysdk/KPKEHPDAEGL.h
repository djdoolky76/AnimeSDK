#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;
class JCLBAEHIBLA;

#define KPKEHPDAEGL_CTOR_OFFSET UNITYSDK_OFFSET(0xB5C15F0)
#define KPKEHPDAEGL_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB5C1600)

	class KPKEHPDAEGL : public ::EFNJLACKEDH
	{
	public:
		::JCLBAEHIBLA* NOKJFPPOHKM; // 0x18
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::JCLBAEHIBLA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::JCLBAEHIBLA*))((::PBYTE)hIl2Cpp + KPKEHPDAEGL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKEHPDAEGL_NPAFMEBNFOB_OFFSET))(this);
		}

	};
