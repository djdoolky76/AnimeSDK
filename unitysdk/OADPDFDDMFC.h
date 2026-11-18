#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDDILBCEOPA.h"
#include "unitysdk/System/Object.h"

class IKJPPEFGDDK;
class NHFJJFFCDFM;

#define OADPDFDDMFC_CEMPHDCFGND_1_OFFSET UNITYSDK_OFFSET(0x10051EC0)
#define OADPDFDDMFC_CEMPHDCFGND_OFFSET UNITYSDK_OFFSET(0x10051D00)

inline static constexpr unsigned int OADPDFDDMFC_TypeDefinitionIndex = 63834;

class OADPDFDDMFC : public ::System::Object
{
public:
	static ::System::Void CEMPHDCFGND(::NHFJJFFCDFM* AEJAMJDBHAM, ::FDDILBCEOPA JBCNPOHMGPE)
	{
		return ((::System::Void(*)(::NHFJJFFCDFM*, ::FDDILBCEOPA))((::PBYTE)hIl2Cpp + OADPDFDDMFC_CEMPHDCFGND_OFFSET))(AEJAMJDBHAM, JBCNPOHMGPE);
	}

	static ::System::Void CEMPHDCFGND_1(::IKJPPEFGDDK* AEJAMJDBHAM, ::FDDILBCEOPA JBCNPOHMGPE)
	{
		return ((::System::Void(*)(::IKJPPEFGDDK*, ::FDDILBCEOPA))((::PBYTE)hIl2Cpp + OADPDFDDMFC_CEMPHDCFGND_1_OFFSET))(AEJAMJDBHAM, JBCNPOHMGPE);
	}
};
