#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CBHALHKAKLC;
class CBHALHKAKLC_OMCMPLFMCAM;
class IFBGJJPIDLA;
namespace System { class Action; }

#define CBHALHKAKLC_KCILDAMAFOC_KJNEPBHJHCD_OFFSET UNITYSDK_OFFSET(0x1152F3A0)
#define CBHALHKAKLC_KCILDAMAFOC__CTOR_OFFSET UNITYSDK_OFFSET(0x1152F390)

inline static constexpr unsigned int CBHALHKAKLC_KCILDAMAFOC_TypeDefinitionIndex = 55871;

class CBHALHKAKLC_KCILDAMAFOC : public ::System::Object
{
public:
	::CBHALHKAKLC_OMCMPLFMCAM* LJBPECKCCEA; // 0x10
	::System::Action* ELNJNJAIFGE; // 0x18
	::System::Action* KPFKDDMENIP; // 0x20
	::CBHALHKAKLC* KLHPEBKNIFB; // 0x28
	::System::Action* OJCDHADFENK; // 0x30
	::IFBGJJPIDLA* DPAJPOCJOGN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_KCILDAMAFOC__CTOR_OFFSET))(this);
	}

	::System::Void KJNEPBHJHCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_KCILDAMAFOC_KJNEPBHJHCD_OFFSET))(this);
	}
};
