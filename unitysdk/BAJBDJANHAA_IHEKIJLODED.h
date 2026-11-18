#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class EADLNAAMFFE;
namespace System { template <typename T> class Func_1; }

#define BAJBDJANHAA_IHEKIJLODED_AOGBJAAFNMD_OFFSET UNITYSDK_OFFSET(0x12D14E00)
#define BAJBDJANHAA_IHEKIJLODED__CTOR_OFFSET UNITYSDK_OFFSET(0x12D14DF0)

inline static constexpr unsigned int BAJBDJANHAA_IHEKIJLODED_TypeDefinitionIndex = 56303;

class BAJBDJANHAA_IHEKIJLODED : public ::System::Object
{
public:
	::System::Func_1<::System::Boolean>* KPDNJEDICCM; // 0x10
	::EADLNAAMFFE* KKIAHJODOIA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJBDJANHAA_IHEKIJLODED__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask AOGBJAAFNMD(::System::Threading::CancellationToken CBJFKEAGLGD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + BAJBDJANHAA_IHEKIJLODED_AOGBJAAFNMD_OFFSET))(this, CBJFKEAGLGD);
	}
};
