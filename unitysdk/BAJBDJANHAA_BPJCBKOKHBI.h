#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class EADLNAAMFFE;

#define BAJBDJANHAA_BPJCBKOKHBI_AOMKKIAAGLF_OFFSET UNITYSDK_OFFSET(0x134FA330)
#define BAJBDJANHAA_BPJCBKOKHBI__CTOR_OFFSET UNITYSDK_OFFSET(0x134FA320)

inline static constexpr unsigned int BAJBDJANHAA_BPJCBKOKHBI_TypeDefinitionIndex = 56307;

class BAJBDJANHAA_BPJCBKOKHBI : public ::System::Object
{
public:
	::Il2CppArray<::EADLNAAMFFE*>* BNBGIFONPGI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJBDJANHAA_BPJCBKOKHBI__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask AOMKKIAAGLF(::System::Threading::CancellationToken CBJFKEAGLGD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + BAJBDJANHAA_BPJCBKOKHBI_AOMKKIAAGLF_OFFSET))(this, CBJFKEAGLGD);
	}
};
