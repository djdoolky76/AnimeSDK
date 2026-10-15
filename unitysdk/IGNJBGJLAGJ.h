#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;

#define IGNJBGJLAGJ_BCJMGCKJJPH_OFFSET UNITYSDK_OFFSET(0x1C6A9870)
#define IGNJBGJLAGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6A8F90)
#define IGNJBGJLAGJ_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1C6A9770)
#define IGNJBGJLAGJ_PNONBAPLBDG_OFFSET UNITYSDK_OFFSET(0x1C6A97E0)

inline static constexpr unsigned int IGNJBGJLAGJ_TypeDefinitionIndex = 37394;

	class IGNJBGJLAGJ : public ::GPLOFONGBGI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNJBGJLAGJ_CTOR_OFFSET))(this);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + IGNJBGJLAGJ_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean PNONBAPLBDG(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + IGNJBGJLAGJ_PNONBAPLBDG_OFFSET))(this, a1, a2);
		}

		::System::Void BCJMGCKJJPH(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + IGNJBGJLAGJ_BCJMGCKJJPH_OFFSET))(this, a1, a2);
		}

	};
