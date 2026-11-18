#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;

#define PGOGMDNKJPA_IHBMFMCNNBJ_OFFSET UNITYSDK_OFFSET(0x1B9E1150)
#define PGOGMDNKJPA_NAKDOMKHMKE_OFFSET UNITYSDK_OFFSET(0x1B9E10A0)
#define PGOGMDNKJPA_NEMKLEMHDCC_OFFSET UNITYSDK_OFFSET(0x1B9E12E0)

inline static constexpr unsigned int PGOGMDNKJPA_TypeDefinitionIndex = 72372;

class PGOGMDNKJPA : public ::System::Object
{
public:
	static ::System::Boolean NAKDOMKHMKE(::CJIEIHEDMME* IHACKHOBPKG)
	{
		return ((::System::Boolean(*)(::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + PGOGMDNKJPA_NAKDOMKHMKE_OFFSET))(IHACKHOBPKG);
	}

	static ::System::Void IHBMFMCNNBJ(::CJIEIHEDMME* PACEGKMABFN, ::CJIEIHEDMME* COIEONGEDME, ::System::Boolean ECOHIEGJNDP)
	{
		return ((::System::Void(*)(::CJIEIHEDMME*, ::CJIEIHEDMME*, ::System::Boolean))((::PBYTE)hIl2Cpp + PGOGMDNKJPA_IHBMFMCNNBJ_OFFSET))(PACEGKMABFN, COIEONGEDME, ECOHIEGJNDP);
	}

	static ::System::Void NEMKLEMHDCC(::CJIEIHEDMME* PACEGKMABFN)
	{
		return ((::System::Void(*)(::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + PGOGMDNKJPA_NEMKLEMHDCC_OFFSET))(PACEGKMABFN);
	}
};
