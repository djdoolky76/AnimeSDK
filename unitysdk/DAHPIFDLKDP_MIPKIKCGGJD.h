#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AGAFGMPKAFA.h"

class ADFDCNJOLIB;
class DEIKKEMCGOI;

#define DAHPIFDLKDP_MIPKIKCGGJD_FOOLBHCHGIO_OFFSET UNITYSDK_OFFSET(0x19736DE0)
#define DAHPIFDLKDP_MIPKIKCGGJD__CTOR_OFFSET UNITYSDK_OFFSET(0x19736DD0)

inline static constexpr unsigned int DAHPIFDLKDP_MIPKIKCGGJD_TypeDefinitionIndex = 62135;

class DAHPIFDLKDP_MIPKIKCGGJD : public ::System::Object
{
public:
	::DEIKKEMCGOI* LNKHLINIKDJ; // 0x10
	::System::Int32 DBMEHBMAALJ; // 0x18
	::System::Int32 LOKHGEPIDGG; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAHPIFDLKDP_MIPKIKCGGJD__CTOR_OFFSET))(this);
	}

	::ADFDCNJOLIB* FOOLBHCHGIO(::AGAFGMPKAFA HNOPAJLDCFB)
	{
		return ((::ADFDCNJOLIB*(*)(::PVOID, ::AGAFGMPKAFA))((::PBYTE)hIl2Cpp + DAHPIFDLKDP_MIPKIKCGGJD_FOOLBHCHGIO_OFFSET))(this, HNOPAJLDCFB);
	}
};
