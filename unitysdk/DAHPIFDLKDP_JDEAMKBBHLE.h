#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AGAFGMPKAFA.h"

class DEIKKEMCGOI;
class FICCPHGIIPL;

#define DAHPIFDLKDP_JDEAMKBBHLE_NOBOKKFCKGK_OFFSET UNITYSDK_OFFSET(0x19736B80)
#define DAHPIFDLKDP_JDEAMKBBHLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19736B70)

inline static constexpr unsigned int DAHPIFDLKDP_JDEAMKBBHLE_TypeDefinitionIndex = 62134;

class DAHPIFDLKDP_JDEAMKBBHLE : public ::System::Object
{
public:
	::DEIKKEMCGOI* LNKHLINIKDJ; // 0x10
	::System::Int32 DBMEHBMAALJ; // 0x18
	::System::Int32 LOKHGEPIDGG; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAHPIFDLKDP_JDEAMKBBHLE__CTOR_OFFSET))(this);
	}

	::FICCPHGIIPL* NOBOKKFCKGK(::AGAFGMPKAFA HNOPAJLDCFB)
	{
		return ((::FICCPHGIIPL*(*)(::PVOID, ::AGAFGMPKAFA))((::PBYTE)hIl2Cpp + DAHPIFDLKDP_JDEAMKBBHLE_NOBOKKFCKGK_OFFSET))(this, HNOPAJLDCFB);
	}
};
