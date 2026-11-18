#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class CBHALHKAKLC_OMCMPLFMCAM;
class GEKNEEMAHBC;

#define FEAHKNABABD_ACGGNJKJDDE_NBCIIJNMMCI_OFFSET UNITYSDK_OFFSET(0x11D701B0)
#define FEAHKNABABD_ACGGNJKJDDE__CTOR_OFFSET UNITYSDK_OFFSET(0x11D701A0)

inline static constexpr unsigned int FEAHKNABABD_ACGGNJKJDDE_TypeDefinitionIndex = 48279;

class FEAHKNABABD_ACGGNJKJDDE : public ::System::Object
{
public:
	::GEKNEEMAHBC* EGGOCICCFJC; // 0x10
	::CBHALHKAKLC_OMCMPLFMCAM* LJBPECKCCEA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEAHKNABABD_ACGGNJKJDDE__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask NBCIIJNMMCI(::System::Threading::CancellationToken MPPGOFIIMEM)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + FEAHKNABABD_ACGGNJKJDDE_NBCIIJNMMCI_OFFSET))(this, MPPGOFIIMEM);
	}
};
