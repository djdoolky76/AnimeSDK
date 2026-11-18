#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class Action; }

#define BAJBDJANHAA_JOPGLKICCCO_BBIAIKLAIJN_OFFSET UNITYSDK_OFFSET(0x1437EA20)
#define BAJBDJANHAA_JOPGLKICCCO__CTOR_OFFSET UNITYSDK_OFFSET(0x1437EA10)

inline static constexpr unsigned int BAJBDJANHAA_JOPGLKICCCO_TypeDefinitionIndex = 56309;

class BAJBDJANHAA_JOPGLKICCCO : public ::System::Object
{
public:
	::System::Action* GJBHEJGENMI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJBDJANHAA_JOPGLKICCCO__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask BBIAIKLAIJN(::System::Threading::CancellationToken PIIPCLCCOIG)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + BAJBDJANHAA_JOPGLKICCCO_BBIAIKLAIJN_OFFSET))(this, PIIPCLCCOIG);
	}
};
