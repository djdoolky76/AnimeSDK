#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENKKLEFNAKG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class PMGMBGFOFKG;

#define PMGMBGFOFKG_EKDKDNBAPIG_HNOKDCNCHPI_OFFSET UNITYSDK_OFFSET(0x1B9F5D50)
#define PMGMBGFOFKG_EKDKDNBAPIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F5D40)

inline static constexpr unsigned int PMGMBGFOFKG_EKDKDNBAPIG_TypeDefinitionIndex = 65874;

class PMGMBGFOFKG_EKDKDNBAPIG : public ::System::Object
{
public:
	::PMGMBGFOFKG* KLHPEBKNIFB; // 0x10
	::System::UInt32 EHKHKPLPFGG; // 0x18
	::ENKKLEFNAKG OIKMICDBAPP; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGMBGFOFKG_EKDKDNBAPIG__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask HNOKDCNCHPI(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + PMGMBGFOFKG_EKDKDNBAPIG_HNOKDCNCHPI_OFFSET))(this, OMMEALOOOOD);
	}
};
