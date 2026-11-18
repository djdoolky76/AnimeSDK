#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFIFKJHLKCF.h"
#include "unitysdk/System/Object.h"

class GBINEPNHKKO;
class IDGDIFDMIDP;
class JGBMOOJHMBF;

#define GPPMPHICDEA_DONHPOOAHLF_NGHNOHKKPJH_OFFSET UNITYSDK_OFFSET(0x13E03980)
#define GPPMPHICDEA_DONHPOOAHLF__CTOR_OFFSET UNITYSDK_OFFSET(0x13E03970)

inline static constexpr unsigned int GPPMPHICDEA_DONHPOOAHLF_TypeDefinitionIndex = 42627;

class GPPMPHICDEA_DONHPOOAHLF : public ::System::Object
{
public:
	::GBINEPNHKKO* EECDKMONJPM; // 0x10
	::IDGDIFDMIDP* AJAAEBEOIJM; // 0x18
	::EFIFKJHLKCF GNBMLHONKOK; // 0x20
	::System::Int32 FCMFPIHALEO; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_DONHPOOAHLF__CTOR_OFFSET))(this);
	}

	::System::Void NGHNOHKKPJH(::JGBMOOJHMBF* DDEALMIKFMF)
	{
		return ((::System::Void(*)(::PVOID, ::JGBMOOJHMBF*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_DONHPOOAHLF_NGHNOHKKPJH_OFFSET))(this, DDEALMIKFMF);
	}
};
