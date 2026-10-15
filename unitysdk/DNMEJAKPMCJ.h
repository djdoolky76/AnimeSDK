#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILPPBGLJABD.h"

#define DNMEJAKPMCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x11FD8D60)
#define DNMEJAKPMCJ_OPMHNOIKBGA_OFFSET UNITYSDK_OFFSET(0x11FD8D00)

	class DNMEJAKPMCJ : public ::ILPPBGLJABD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMEJAKPMCJ_CTOR_OFFSET))(this);
		}

		::System::Boolean OPMHNOIKBGA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMEJAKPMCJ_OPMHNOIKBGA_OFFSET))(this);
		}

	};
