#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILPPBGLJABD.h"

#define DNMEJAKPMCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x19196A80)
#define DNMEJAKPMCJ_OPMHNOIKBGA_OFFSET UNITYSDK_OFFSET(0x19196A20)

inline static constexpr unsigned int DNMEJAKPMCJ_TypeDefinitionIndex = 63719;

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
