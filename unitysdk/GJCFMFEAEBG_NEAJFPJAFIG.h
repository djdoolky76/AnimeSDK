#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJCFMFEAEBG_CDBDNCNBDBC.h"
class GJCFMFEAEBG;

#define GJCFMFEAEBG_NEAJFPJAFIG_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x15A51400)
#define GJCFMFEAEBG_NEAJFPJAFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x15A508F0)
#define GJCFMFEAEBG_NEAJFPJAFIG_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x15A512D0)

inline static constexpr unsigned int GJCFMFEAEBG_NEAJFPJAFIG_TypeDefinitionIndex = 74373;

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
