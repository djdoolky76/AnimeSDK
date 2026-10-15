#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LNMEGEABJHF.h"
class AENEFHBMEMJ;
class IPADOJLOLPH;

#define IPADOJLOLPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C52F400)
#define IPADOJLOLPH_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1C52FA70)
#define IPADOJLOLPH_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1C536EA0)
#define IPADOJLOLPH_LCLFJLLIMCH_OFFSET UNITYSDK_OFFSET(0x1C536F80)
#define IPADOJLOLPH_OMKFNPGBODJ_OFFSET UNITYSDK_OFFSET(0x1C536F90)

	class IPADOJLOLPH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPADOJLOLPH_CTOR_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::IPADOJLOLPH* a1, ::IPADOJLOLPH* a2)
		{
			return ((::System::Boolean(*)(::IPADOJLOLPH*, ::IPADOJLOLPH*))((::PBYTE)hIl2Cpp + IPADOJLOLPH_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::IPADOJLOLPH* a1, ::IPADOJLOLPH* a2)
		{
			return ((::System::Boolean(*)(::IPADOJLOLPH*, ::IPADOJLOLPH*))((::PBYTE)hIl2Cpp + IPADOJLOLPH_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

		::AENEFHBMEMJ* LCLFJLLIMCH()
		{
			return ((::AENEFHBMEMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPADOJLOLPH_LCLFJLLIMCH_OFFSET))(this);
		}

		::LNMEGEABJHF OMKFNPGBODJ()
		{
			return ((::LNMEGEABJHF(*)(::PVOID))((::PBYTE)hIl2Cpp + IPADOJLOLPH_OMKFNPGBODJ_OFFSET))(this);
		}

	};
