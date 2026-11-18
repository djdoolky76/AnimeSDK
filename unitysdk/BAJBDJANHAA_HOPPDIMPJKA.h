#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

class EADLNAAMFFE;

#define BAJBDJANHAA_HOPPDIMPJKA_NCLDAFBCPMH_OFFSET UNITYSDK_OFFSET(0x12678BD0)
#define BAJBDJANHAA_HOPPDIMPJKA__CTOR_OFFSET UNITYSDK_OFFSET(0x12678BC0)

inline static constexpr unsigned int BAJBDJANHAA_HOPPDIMPJKA_TypeDefinitionIndex = 56308;

class BAJBDJANHAA_HOPPDIMPJKA : public ::System::Object
{
public:
	::System::Threading::CancellationToken CBJFKEAGLGD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJBDJANHAA_HOPPDIMPJKA__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask NCLDAFBCPMH(::EADLNAAMFFE* KKIAHJODOIA)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::EADLNAAMFFE*))((::PBYTE)hIl2Cpp + BAJBDJANHAA_HOPPDIMPJKA_NCLDAFBCPMH_OFFSET))(this, KKIAHJODOIA);
	}
};
