#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/EFANACEOGDH.h"
#include "unitysdk/System/Threading/CancellationToken.h"

#define CLOFAEJGMPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC667F0)
#define CLOFAEJGMPI_IGGPJHJPMPJ_OFFSET UNITYSDK_OFFSET(0x1EC66810)

	class CLOFAEJGMPI
	{
	public:
		::System::Void _ctor(::EFANACEOGDH a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFANACEOGDH))((::PBYTE)hIl2Cpp + CLOFAEJGMPI_CTOR_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask IGGPJHJPMPJ(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLOFAEJGMPI_IGGPJHJPMPJ_OFFSET))(this, a1);
		}

	};
