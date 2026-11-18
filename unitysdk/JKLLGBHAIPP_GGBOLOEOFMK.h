#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class Action; }

#define JKLLGBHAIPP_GGBOLOEOFMK_CNAKNIJKFGN_OFFSET UNITYSDK_OFFSET(0x187420D0)
#define JKLLGBHAIPP_GGBOLOEOFMK__CTOR_OFFSET UNITYSDK_OFFSET(0x187420C0)

inline static constexpr unsigned int JKLLGBHAIPP_GGBOLOEOFMK_TypeDefinitionIndex = 56650;

class JKLLGBHAIPP_GGBOLOEOFMK : public ::System::Object
{
public:
	::System::Action* EJKDBGGKDDD; // 0x10
	::System::Action* ELNJNJAIFGE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_GGBOLOEOFMK__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask CNAKNIJKFGN(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_GGBOLOEOFMK_CNAKNIJKFGN_OFFSET))(this, OMMEALOOOOD);
	}
};
