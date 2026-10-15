#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;

#define ICLJLOADDOE_CTOR_OFFSET UNITYSDK_OFFSET(0x15E52040)
#define ICLJLOADDOE_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x15E52050)

	class ICLJLOADDOE : public ::EFNJLACKEDH
	{
	public:
		::System::UInt32 HAHKHFCGDPI; // 0x18
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::System::UInt32))((::PBYTE)hIl2Cpp + ICLJLOADDOE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICLJLOADDOE_NPAFMEBNFOB_OFFSET))(this);
		}

	};
