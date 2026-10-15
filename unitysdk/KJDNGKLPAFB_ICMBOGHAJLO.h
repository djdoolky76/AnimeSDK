#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJDNGKLPAFB_IOCMNFAEFLL.h"
class KJDNGKLPAFB;

#define KJDNGKLPAFB_ICMBOGHAJLO_CTOR_OFFSET UNITYSDK_OFFSET(0xB43BCD0)
#define KJDNGKLPAFB_ICMBOGHAJLO_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB43FDD0)

inline static constexpr unsigned int KJDNGKLPAFB_ICMBOGHAJLO_TypeDefinitionIndex = 57241;

	class KJDNGKLPAFB_ICMBOGHAJLO : public ::KJDNGKLPAFB_IOCMNFAEFLL
	{
	public:
		::System::Single AIIOKDMMMKC; // 0x10
		::System::Single NFAEJGJDLAI; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_ICMBOGHAJLO_CTOR_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::KJDNGKLPAFB* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::KJDNGKLPAFB*, ::System::Single))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_ICMBOGHAJLO_LJOLGCNKIEH_OFFSET))(this, a1, a2);
		}

	};
