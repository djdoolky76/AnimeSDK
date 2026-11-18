#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JHPFKHNMOBH;
class OAEFGCLEHHO;

#define OOBAHEDLHOI_ECCDKIMNFCM_NPFHGNOJGIL_OFFSET UNITYSDK_OFFSET(0x136C2B70)
#define OOBAHEDLHOI_ECCDKIMNFCM__CTOR_OFFSET UNITYSDK_OFFSET(0x136C2B60)

inline static constexpr unsigned int OOBAHEDLHOI_ECCDKIMNFCM_TypeDefinitionIndex = 75528;

class OOBAHEDLHOI_ECCDKIMNFCM : public ::System::Object
{
public:
	::JHPFKHNMOBH* AOIBJAIMEAC; // 0x10
	::System::Boolean HFMHOELKCAJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_ECCDKIMNFCM__CTOR_OFFSET))(this);
	}

	::System::Void NPFHGNOJGIL(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_ECCDKIMNFCM_NPFHGNOJGIL_OFFSET))(this, DJCNCELJPOM);
	}
};
