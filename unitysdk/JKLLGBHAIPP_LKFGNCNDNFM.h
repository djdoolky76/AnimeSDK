#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class Action; }

#define JKLLGBHAIPP_LKFGNCNDNFM_KELBNALPDMD_OFFSET UNITYSDK_OFFSET(0x1762D100)
#define JKLLGBHAIPP_LKFGNCNDNFM__CTOR_OFFSET UNITYSDK_OFFSET(0x1762D0F0)

inline static constexpr unsigned int JKLLGBHAIPP_LKFGNCNDNFM_TypeDefinitionIndex = 56653;

class JKLLGBHAIPP_LKFGNCNDNFM : public ::System::Object
{
public:
	::System::Action* IAGNANEMODA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_LKFGNCNDNFM__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask KELBNALPDMD(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_LKFGNCNDNFM_KELBNALPDMD_OFFSET))(this, OMMEALOOOOD);
	}
};
