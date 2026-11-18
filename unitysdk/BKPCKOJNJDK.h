#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PDELBPHBJIL.h"
#include "unitysdk/System/Object.h"

#define BKPCKOJNJDK_DBBOGPJDLIE_OFFSET UNITYSDK_OFFSET(0x15080780)
#define BKPCKOJNJDK_FGOJMEJIBBM_OFFSET UNITYSDK_OFFSET(0x15080800)
#define BKPCKOJNJDK_GMLBGHAHGLH_OFFSET UNITYSDK_OFFSET(0x15080740)
#define BKPCKOJNJDK_KDDNGJAABAH_OFFSET UNITYSDK_OFFSET(0x150806C0)

inline static constexpr unsigned int BKPCKOJNJDK_TypeDefinitionIndex = 66352;

class BKPCKOJNJDK : public ::System::Object
{
public:
	static ::System::Boolean KDDNGJAABAH(::PDELBPHBJIL ELNEAOFLHLA)
	{
		return ((::System::Boolean(*)(::PDELBPHBJIL))((::PBYTE)hIl2Cpp + BKPCKOJNJDK_KDDNGJAABAH_OFFSET))(ELNEAOFLHLA);
	}

	static ::System::Boolean GMLBGHAHGLH(::PDELBPHBJIL ELNEAOFLHLA)
	{
		return ((::System::Boolean(*)(::PDELBPHBJIL))((::PBYTE)hIl2Cpp + BKPCKOJNJDK_GMLBGHAHGLH_OFFSET))(ELNEAOFLHLA);
	}

	static ::System::Boolean DBBOGPJDLIE(::PDELBPHBJIL ELNEAOFLHLA)
	{
		return ((::System::Boolean(*)(::PDELBPHBJIL))((::PBYTE)hIl2Cpp + BKPCKOJNJDK_DBBOGPJDLIE_OFFSET))(ELNEAOFLHLA);
	}

	static ::System::Boolean FGOJMEJIBBM(::PDELBPHBJIL ELNEAOFLHLA)
	{
		return ((::System::Boolean(*)(::PDELBPHBJIL))((::PBYTE)hIl2Cpp + BKPCKOJNJDK_FGOJMEJIBBM_OFFSET))(ELNEAOFLHLA);
	}
};
