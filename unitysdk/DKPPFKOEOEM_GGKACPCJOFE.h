#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGJLJHECMFL_LDHINONOMIB_BAMLFHMFBDH.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class DKPPFKOEOEM;

#define DKPPFKOEOEM_GGKACPCJOFE_KPBCDMIPHPD_OFFSET UNITYSDK_OFFSET(0x13E54580)
#define DKPPFKOEOEM_GGKACPCJOFE__CTOR_OFFSET UNITYSDK_OFFSET(0x13E54570)

inline static constexpr unsigned int DKPPFKOEOEM_GGKACPCJOFE_TypeDefinitionIndex = 53223;

class DKPPFKOEOEM_GGKACPCJOFE : public ::System::Object
{
public:
	::DKPPFKOEOEM* KLHPEBKNIFB; // 0x10
	::MGJLJHECMFL_LDHINONOMIB_BAMLFHMFBDH BCIEDFMHDAL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPPFKOEOEM_GGKACPCJOFE__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask KPBCDMIPHPD(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + DKPPFKOEOEM_GGKACPCJOFE_KPBCDMIPHPD_OFFSET))(this, OMMEALOOOOD);
	}
};
