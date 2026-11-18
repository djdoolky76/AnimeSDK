#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class CBHALHKAKLC;
class CBHALHKAKLC_OMCMPLFMCAM;
namespace System { class Action; }

#define CBHALHKAKLC_LFMJGHMMHGI_AAAPDCAPNJC_OFFSET UNITYSDK_OFFSET(0x1152FA80)
#define CBHALHKAKLC_LFMJGHMMHGI_AKGDGJEADLD_OFFSET UNITYSDK_OFFSET(0x1152F9D0)
#define CBHALHKAKLC_LFMJGHMMHGI_GNIPGJJMGJP_OFFSET UNITYSDK_OFFSET(0x1152FC00)
#define CBHALHKAKLC_LFMJGHMMHGI_JGNFFMFOCAN_OFFSET UNITYSDK_OFFSET(0x1152FAF0)
#define CBHALHKAKLC_LFMJGHMMHGI_KDJCFHJAHEA_OFFSET UNITYSDK_OFFSET(0x1152F680)
#define CBHALHKAKLC_LFMJGHMMHGI_KDMNNABGHKN_OFFSET UNITYSDK_OFFSET(0x1152FA30)
#define CBHALHKAKLC_LFMJGHMMHGI_OEHGGPHGOFE_OFFSET UNITYSDK_OFFSET(0x1152F970)
#define CBHALHKAKLC_LFMJGHMMHGI_OKCKDBDBFDO_OFFSET UNITYSDK_OFFSET(0x1152F580)
#define CBHALHKAKLC_LFMJGHMMHGI__CTOR_OFFSET UNITYSDK_OFFSET(0x1152F570)

inline static constexpr unsigned int CBHALHKAKLC_LFMJGHMMHGI_TypeDefinitionIndex = 55875;

class CBHALHKAKLC_LFMJGHMMHGI : public ::System::Object
{
public:
	::System::Action* FACNBEMHOFG; // 0x10
	::CBHALHKAKLC_OMCMPLFMCAM* LJBPECKCCEA; // 0x18
	::CBHALHKAKLC* KLHPEBKNIFB; // 0x20
	::System::Action* EENCNGFLLCI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_LFMJGHMMHGI__CTOR_OFFSET))(this);
	}

	::System::Void OKCKDBDBFDO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_LFMJGHMMHGI_OKCKDBDBFDO_OFFSET))(this);
	}

	::System::Void KDJCFHJAHEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_LFMJGHMMHGI_KDJCFHJAHEA_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask OEHGGPHGOFE(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CBHALHKAKLC_LFMJGHMMHGI_OEHGGPHGOFE_OFFSET))(this, OMMEALOOOOD);
	}

	::Cysharp::Threading::Tasks::UniTask AKGDGJEADLD(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CBHALHKAKLC_LFMJGHMMHGI_AKGDGJEADLD_OFFSET))(this, OMMEALOOOOD);
	}

	::System::Void KDMNNABGHKN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_LFMJGHMMHGI_KDMNNABGHKN_OFFSET))(this);
	}

	::System::Boolean AAAPDCAPNJC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_LFMJGHMMHGI_AAAPDCAPNJC_OFFSET))(this);
	}

	::System::Void JGNFFMFOCAN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_LFMJGHMMHGI_JGNFFMFOCAN_OFFSET))(this);
	}

	::System::Boolean GNIPGJJMGJP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_LFMJGHMMHGI_GNIPGJJMGJP_OFFSET))(this);
	}
};
