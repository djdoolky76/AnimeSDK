#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJDNGKLPAFB_IOCMNFAEFLL.h"
class KJDNGKLPAFB;

#define KJDNGKLPAFB_ICMBOGHAJLO_CTOR_OFFSET UNITYSDK_OFFSET(0xB442810)
#define KJDNGKLPAFB_ICMBOGHAJLO_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB446940)

	class KJDNGKLPAFB_ICMBOGHAJLO : public ::KJDNGKLPAFB_IOCMNFAEFLL
	{
	public:
		::System::Single NFAEJGJDLAI; // 0x10
		::System::Single AIIOKDMMMKC; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_ICMBOGHAJLO_CTOR_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::KJDNGKLPAFB* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::KJDNGKLPAFB*, ::System::Single))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_ICMBOGHAJLO_LJOLGCNKIEH_OFFSET))(this, a1, a2);
		}

	};
