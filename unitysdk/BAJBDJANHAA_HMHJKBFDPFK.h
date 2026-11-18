#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

#define BAJBDJANHAA_HMHJKBFDPFK_PMCEJAPLEJJ_OFFSET UNITYSDK_OFFSET(0x14237D40)
#define BAJBDJANHAA_HMHJKBFDPFK__CTOR_OFFSET UNITYSDK_OFFSET(0x14237D30)

inline static constexpr unsigned int BAJBDJANHAA_HMHJKBFDPFK_TypeDefinitionIndex = 56299;

class BAJBDJANHAA_HMHJKBFDPFK : public ::System::Object
{
public:
	::System::Single HCOJLFECINK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJBDJANHAA_HMHJKBFDPFK__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask PMCEJAPLEJJ(::System::Threading::CancellationToken CBJFKEAGLGD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + BAJBDJANHAA_HMHJKBFDPFK_PMCEJAPLEJJ_OFFSET))(this, CBJFKEAGLGD);
	}
};
