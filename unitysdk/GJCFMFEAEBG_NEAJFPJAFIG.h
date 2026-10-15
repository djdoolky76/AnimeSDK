#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJCFMFEAEBG_CDBDNCNBDBC.h"
class GJCFMFEAEBG;

#define GJCFMFEAEBG_NEAJFPJAFIG_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x15A5CE20)
#define GJCFMFEAEBG_NEAJFPJAFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x15A5C310)
#define GJCFMFEAEBG_NEAJFPJAFIG_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x15A5CCF0)

inline static constexpr unsigned int GJCFMFEAEBG_NEAJFPJAFIG_TypeDefinitionIndex = 74374;

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
