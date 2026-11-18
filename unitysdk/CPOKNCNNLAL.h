#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FHGHJDPHHEL;

#define CPOKNCNNLAL_NOPJLMPOLKH_OFFSET UNITYSDK_OFFSET(0x12B93170)
#define CPOKNCNNLAL_PAHJNIKIEKF_OFFSET UNITYSDK_OFFSET(0x12B93210)
#define CPOKNCNNLAL__CTOR_OFFSET UNITYSDK_OFFSET(0x12B93160)

inline static constexpr unsigned int CPOKNCNNLAL_TypeDefinitionIndex = 84072;

class CPOKNCNNLAL : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOKNCNNLAL__CTOR_OFFSET))(this);
	}

	static ::System::Void NOPJLMPOLKH(::FHGHJDPHHEL* AAOCANGHBDG, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::FHGHJDPHHEL*, ::System::Single))((::PBYTE)hIl2Cpp + CPOKNCNNLAL_NOPJLMPOLKH_OFFSET))(AAOCANGHBDG, PBCAAADNEPK);
	}

	static ::System::Void PAHJNIKIEKF(::FHGHJDPHHEL* AAOCANGHBDG, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::FHGHJDPHHEL*, ::System::Single))((::PBYTE)hIl2Cpp + CPOKNCNNLAL_PAHJNIKIEKF_OFFSET))(AAOCANGHBDG, PBCAAADNEPK);
	}
};
