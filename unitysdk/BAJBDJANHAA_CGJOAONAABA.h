#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class EADLNAAMFFE;

#define BAJBDJANHAA_CGJOAONAABA_AOMKKIAAGLF_OFFSET UNITYSDK_OFFSET(0x11BE62D0)
#define BAJBDJANHAA_CGJOAONAABA__CTOR_OFFSET UNITYSDK_OFFSET(0x11BE62C0)

inline static constexpr unsigned int BAJBDJANHAA_CGJOAONAABA_TypeDefinitionIndex = 56301;

class BAJBDJANHAA_CGJOAONAABA : public ::System::Object
{
public:
	::Il2CppArray<::EADLNAAMFFE*>* AANCCKMHKJF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJBDJANHAA_CGJOAONAABA__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask AOMKKIAAGLF(::System::Threading::CancellationToken CBJFKEAGLGD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + BAJBDJANHAA_CGJOAONAABA_AOMKKIAAGLF_OFFSET))(this, CBJFKEAGLGD);
	}
};
