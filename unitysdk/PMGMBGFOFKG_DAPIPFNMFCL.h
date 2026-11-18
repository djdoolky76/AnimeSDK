#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { template <typename T> class Func_1; }

#define PMGMBGFOFKG_DAPIPFNMFCL_BBICJDCACDH_OFFSET UNITYSDK_OFFSET(0x1C1DCA40)
#define PMGMBGFOFKG_DAPIPFNMFCL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1DCA30)

inline static constexpr unsigned int PMGMBGFOFKG_DAPIPFNMFCL_TypeDefinitionIndex = 65872;

class PMGMBGFOFKG_DAPIPFNMFCL : public ::System::Object
{
public:
	::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* PLBEAIIJADM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGMBGFOFKG_DAPIPFNMFCL__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask BBICJDCACDH(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + PMGMBGFOFKG_DAPIPFNMFCL_BBICJDCACDH_OFFSET))(this, OMMEALOOOOD);
	}
};
