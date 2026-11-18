#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class Action; }

#define JKLLGBHAIPP_CGFNIOPHCFE_JEJBKLJIKFP_OFFSET UNITYSDK_OFFSET(0x15589820)
#define JKLLGBHAIPP_CGFNIOPHCFE__CTOR_OFFSET UNITYSDK_OFFSET(0x15589810)

inline static constexpr unsigned int JKLLGBHAIPP_CGFNIOPHCFE_TypeDefinitionIndex = 56657;

class JKLLGBHAIPP_CGFNIOPHCFE : public ::System::Object
{
public:
	::System::Action* KPFKDDMENIP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_CGFNIOPHCFE__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask JEJBKLJIKFP(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_CGFNIOPHCFE_JEJBKLJIKFP_OFFSET))(this, OMMEALOOOOD);
	}
};
