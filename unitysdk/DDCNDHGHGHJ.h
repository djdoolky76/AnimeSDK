#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBGFPDCAEHK.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;
class JCLBAEHIBLA;

#define DDCNDHGHGHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xE25D970)
#define DDCNDHGHGHJ_EEBFMFBOIHN_OFFSET UNITYSDK_OFFSET(0xE25DA30)
#define DDCNDHGHGHJ_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xE25D980)

	class DDCNDHGHGHJ : public ::EFNJLACKEDH
	{
	public:
		::JCLBAEHIBLA* GPDNOACEJGF; // 0x18
		::EBGFPDCAEHK OAFFBGGLGEJ; // 0x20
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::JCLBAEHIBLA* a2, ::EBGFPDCAEHK a3)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::JCLBAEHIBLA*, ::EBGFPDCAEHK))((::PBYTE)hIl2Cpp + DDCNDHGHGHJ_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCNDHGHGHJ_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void EEBFMFBOIHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCNDHGHGHJ_EEBFMFBOIHN_OFFSET))(this);
		}

	};
