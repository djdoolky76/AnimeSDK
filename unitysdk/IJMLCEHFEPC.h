#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EOAHOOCNDHM.h"
#include "unitysdk/OMGFCFDABLN.h"

class GAMICCELBAG;
class LCFAKNCOMEF;

#define IJMLCEHFEPC_BNGDAHKGIPB_OFFSET UNITYSDK_OFFSET(0x1657C540)
#define IJMLCEHFEPC_OEDPGAGLGDB_OFFSET UNITYSDK_OFFSET(0x1657C690)

inline static constexpr unsigned int IJMLCEHFEPC_TypeDefinitionIndex = 85141;

class IJMLCEHFEPC : public ::System::Object
{
public:
	static ::GAMICCELBAG* BNGDAHKGIPB(::OMGFCFDABLN& LOACBJBANNC, ::System::Object* HEAJMIGHEHG, ::System::Boolean JLFGKMOLBHM)
	{
		return ((::GAMICCELBAG*(*)(::OMGFCFDABLN&, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + IJMLCEHFEPC_BNGDAHKGIPB_OFFSET))(LOACBJBANNC, HEAJMIGHEHG, JLFGKMOLBHM);
	}

	static ::EOAHOOCNDHM OEDPGAGLGDB(::LCFAKNCOMEF* GLGDAJADIFK)
	{
		return ((::EOAHOOCNDHM(*)(::LCFAKNCOMEF*))((::PBYTE)hIl2Cpp + IJMLCEHFEPC_OEDPGAGLGDB_OFFSET))(GLGDAJADIFK);
	}
};
