#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BACBOOKMPPN;

#define KFBLPILCJDL_JJOCNOCCPKO_AIKBKPGPEGP_OFFSET UNITYSDK_OFFSET(0x1633A530)
#define KFBLPILCJDL_JJOCNOCCPKO__CTOR_OFFSET UNITYSDK_OFFSET(0x1633A520)

inline static constexpr unsigned int KFBLPILCJDL_JJOCNOCCPKO_TypeDefinitionIndex = 38471;

class KFBLPILCJDL_JJOCNOCCPKO : public ::System::Object
{
public:
	::BACBOOKMPPN* _CFEGPEHCDPM_k__BackingField; // 0x10

	::System::Void _ctor(::BACBOOKMPPN* PMNLAHHMNFM)
	{
		return ((::System::Void(*)(::PVOID, ::BACBOOKMPPN*))((::PBYTE)hIl2Cpp + KFBLPILCJDL_JJOCNOCCPKO__CTOR_OFFSET))(this, PMNLAHHMNFM);
	}

	::BACBOOKMPPN* AIKBKPGPEGP()
	{
		return ((::BACBOOKMPPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBLPILCJDL_JJOCNOCCPKO_AIKBKPGPEGP_OFFSET))(this);
	}
};
