#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFBGGNPFODM.h"
class DEJBOBJPEEH;
class GJBMIABGPFP;
class PIIOAKOEACN;

#define POKOKCAFLLD_CTOR_OFFSET UNITYSDK_OFFSET(0x207C6080)
#define POKOKCAFLLD_EDBDAAKMDFI_OFFSET UNITYSDK_OFFSET(0x207C77B0)
#define POKOKCAFLLD_MEIJFMDBDJJ_OFFSET UNITYSDK_OFFSET(0x207C5CC0)
#define POKOKCAFLLD_NCLOMPDLJPB_OFFSET UNITYSDK_OFFSET(0x207C7690)

inline static constexpr unsigned int POKOKCAFLLD_TypeDefinitionIndex = 42740;

	class POKOKCAFLLD : public ::NFBGGNPFODM
	{
	public:
		::DEJBOBJPEEH* OCBNPJLLDIH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKOKCAFLLD_CTOR_OFFSET))(this);
		}

		::GJBMIABGPFP* MEIJFMDBDJJ()
		{
			return ((::GJBMIABGPFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + POKOKCAFLLD_MEIJFMDBDJJ_OFFSET))(this);
		}

		::System::Boolean NCLOMPDLJPB(::PIIOAKOEACN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIIOAKOEACN*))((::PBYTE)hIl2Cpp + POKOKCAFLLD_NCLOMPDLJPB_OFFSET))(this, a1);
		}

		::System::Boolean EDBDAAKMDFI(::PIIOAKOEACN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIIOAKOEACN*))((::PBYTE)hIl2Cpp + POKOKCAFLLD_EDBDAAKMDFI_OFFSET))(this, a1);
		}

	};
