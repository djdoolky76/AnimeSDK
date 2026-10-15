#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILPPBGLJABD.h"

#define DNMEJAKPMCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x11FD3940)
#define DNMEJAKPMCJ_OPMHNOIKBGA_OFFSET UNITYSDK_OFFSET(0x11FD38E0)

inline static constexpr unsigned int DNMEJAKPMCJ_TypeDefinitionIndex = 62306;

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
