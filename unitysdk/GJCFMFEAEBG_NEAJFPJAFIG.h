#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJCFMFEAEBG_CDBDNCNBDBC.h"
class GJCFMFEAEBG;

#define GJCFMFEAEBG_NEAJFPJAFIG_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x16998360)
#define GJCFMFEAEBG_NEAJFPJAFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x16997850)
#define GJCFMFEAEBG_NEAJFPJAFIG_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x16998230)

inline static constexpr unsigned int GJCFMFEAEBG_NEAJFPJAFIG_TypeDefinitionIndex = 76522;

	class GJCFMFEAEBG_NEAJFPJAFIG : public ::GJCFMFEAEBG_CDBDNCNBDBC
	{
	public:
		::System::Void _ctor(::GJCFMFEAEBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJCFMFEAEBG*))((::PBYTE)hIl2Cpp + GJCFMFEAEBG_NEAJFPJAFIG_CTOR_OFFSET))(this, a1);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCFMFEAEBG_NEAJFPJAFIG_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCFMFEAEBG_NEAJFPJAFIG_CHAHBFGGIDL_OFFSET))(this);
		}

	};
