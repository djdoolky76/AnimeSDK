#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class CBHALHKAKLC_OMCMPLFMCAM;
class GEKNEEMAHBC;

#define JOJJOJGKCIM_HICONNHIBDA_CFGMGAKDOIC_OFFSET UNITYSDK_OFFSET(0x187558B0)
#define JOJJOJGKCIM_HICONNHIBDA_NBCIIJNMMCI_OFFSET UNITYSDK_OFFSET(0x187558A0)
#define JOJJOJGKCIM_HICONNHIBDA__CTOR_OFFSET UNITYSDK_OFFSET(0x18755890)

inline static constexpr unsigned int JOJJOJGKCIM_HICONNHIBDA_TypeDefinitionIndex = 50376;

class JOJJOJGKCIM_HICONNHIBDA : public ::System::Object
{
public:
	::GEKNEEMAHBC* EGGOCICCFJC; // 0x10
	::CBHALHKAKLC_OMCMPLFMCAM* LJBPECKCCEA; // 0x18
	::System::Boolean PEGBMIHLHAB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJJOJGKCIM_HICONNHIBDA__CTOR_OFFSET))(this);
	}

	::System::Boolean NBCIIJNMMCI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJJOJGKCIM_HICONNHIBDA_NBCIIJNMMCI_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask CFGMGAKDOIC(::System::Threading::CancellationToken MPPGOFIIMEM)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + JOJJOJGKCIM_HICONNHIBDA_CFGMGAKDOIC_OFFSET))(this, MPPGOFIIMEM);
	}
};
