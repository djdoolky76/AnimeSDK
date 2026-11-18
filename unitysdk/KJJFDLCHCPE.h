#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

class BOGOOEDHHMF;

#define KJJFDLCHCPE_ANABLKFNCLC_OFFSET UNITYSDK_OFFSET(0x15B96BE0)
#define KJJFDLCHCPE_CIOPEGGLIPK_OFFSET UNITYSDK_OFFSET(0x15B96970)
#define KJJFDLCHCPE_IIFCLOCJAOD_OFFSET UNITYSDK_OFFSET(0x15B96AB0)
#define KJJFDLCHCPE_OIOHOIMPFGN_OFFSET UNITYSDK_OFFSET(0x15B96AC0)
#define KJJFDLCHCPE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B96930)

inline static constexpr unsigned int KJJFDLCHCPE_TypeDefinitionIndex = 70267;

class KJJFDLCHCPE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJFDLCHCPE__CTOR_OFFSET))(this);
	}

	::BOGOOEDHHMF* CIOPEGGLIPK(::System::Int32 KIBPCOABMCG)
	{
		return ((::BOGOOEDHHMF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KJJFDLCHCPE_CIOPEGGLIPK_OFFSET))(this, KIBPCOABMCG);
	}

	::System::Boolean IIFCLOCJAOD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJFDLCHCPE_IIFCLOCJAOD_OFFSET))(this);
	}

	::System::Boolean OIOHOIMPFGN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJFDLCHCPE_OIOHOIMPFGN_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask ANABLKFNCLC()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJFDLCHCPE_ANABLKFNCLC_OFFSET))(this);
	}
};
