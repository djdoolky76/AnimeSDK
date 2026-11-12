#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LNMEGEABJHF.h"
class IOOLOCFOFDM;
namespace System { class String; }

#define EFIDOJDHNGJ_BDJPPIMOJBH_OFFSET UNITYSDK_OFFSET(0x1D6B3090)
#define EFIDOJDHNGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B3B90)
#define EFIDOJDHNGJ_ICGKFDEILKA_OFFSET UNITYSDK_OFFSET(0x1D6B2E80)
#define EFIDOJDHNGJ_OECKNANMMGJ_OFFSET UNITYSDK_OFFSET(0x1D6B37D0)
#define EFIDOJDHNGJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D6B1320)

inline static constexpr unsigned int EFIDOJDHNGJ_TypeDefinitionIndex = 42593;

	class EFIDOJDHNGJ : public ::System::Object
	{
	public:
		// static const ::System::Object LLNFCAFICCA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFIDOJDHNGJ_CTOR_OFFSET))(this);
		}

		static ::IOOLOCFOFDM* ICGKFDEILKA(::System::String* a1)
		{
			return ((::IOOLOCFOFDM*(*)(::System::String*))((::PBYTE)hIl2Cpp + EFIDOJDHNGJ_ICGKFDEILKA_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFIDOJDHNGJ_TOSTRING_OFFSET))(this);
		}

		::System::String* BDJPPIMOJBH(::LNMEGEABJHF a1)
		{
			return ((::System::String*(*)(::PVOID, ::LNMEGEABJHF))((::PBYTE)hIl2Cpp + EFIDOJDHNGJ_BDJPPIMOJBH_OFFSET))(this, a1);
		}

		::System::Void OECKNANMMGJ(::LNMEGEABJHF a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNMEGEABJHF))((::PBYTE)hIl2Cpp + EFIDOJDHNGJ_OECKNANMMGJ_OFFSET))(this, a1);
		}

	};
