#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }

#define ALPCBLJMFHM_FCFOLBECPAH_MCPLNCPNBPP_OFFSET UNITYSDK_OFFSET(0x1550B3C0)
#define ALPCBLJMFHM_FCFOLBECPAH_OEPONMMGDHM_OFFSET UNITYSDK_OFFSET(0x1550B3F0)
#define ALPCBLJMFHM_FCFOLBECPAH_OIPDPBBHHAN_OFFSET UNITYSDK_OFFSET(0x1550B380)
#define ALPCBLJMFHM_FCFOLBECPAH__CTOR_OFFSET UNITYSDK_OFFSET(0x1550B370)

inline static constexpr unsigned int ALPCBLJMFHM_FCFOLBECPAH_TypeDefinitionIndex = 73212;

class ALPCBLJMFHM_FCFOLBECPAH : public ::System::Object
{
public:
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Boolean>* BOIBONJOJKH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPCBLJMFHM_FCFOLBECPAH__CTOR_OFFSET))(this);
	}

	::System::Void OIPDPBBHHAN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPCBLJMFHM_FCFOLBECPAH_OIPDPBBHHAN_OFFSET))(this);
	}

	::System::Void MCPLNCPNBPP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPCBLJMFHM_FCFOLBECPAH_MCPLNCPNBPP_OFFSET))(this);
	}

	::System::Void OEPONMMGDHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPCBLJMFHM_FCFOLBECPAH_OEPONMMGDHM_OFFSET))(this);
	}
};
