#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }

#define HDKBLKJOLMC_GJJPFFCCHME_FBFPLBKHOOJ_OFFSET UNITYSDK_OFFSET(0x17E3B680)
#define HDKBLKJOLMC_GJJPFFCCHME__CTOR_OFFSET UNITYSDK_OFFSET(0x17E3B670)

inline static constexpr unsigned int HDKBLKJOLMC_GJJPFFCCHME_TypeDefinitionIndex = 64691;

class HDKBLKJOLMC_GJJPFFCCHME : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>* BOIBONJOJKH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKBLKJOLMC_GJJPFFCCHME__CTOR_OFFSET))(this);
	}

	::System::Void FBFPLBKHOOJ(::ConfigModuleLib::Runtime::LoadOpHandle PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadOpHandle))((::PBYTE)hIl2Cpp + HDKBLKJOLMC_GJJPFFCCHME_FBFPLBKHOOJ_OFFSET))(this, PIIPCLCCOIG);
	}
};
