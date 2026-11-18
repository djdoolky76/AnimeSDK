#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }

#define MEKJPPCGBMA_MBPLHJEKAPC_DEIODHAIIMI_OFFSET UNITYSDK_OFFSET(0x1852C650)
#define MEKJPPCGBMA_MBPLHJEKAPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1852C640)

inline static constexpr unsigned int MEKJPPCGBMA_MBPLHJEKAPC_TypeDefinitionIndex = 83088;

class MEKJPPCGBMA_MBPLHJEKAPC : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* BOIBONJOJKH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKJPPCGBMA_MBPLHJEKAPC__CTOR_OFFSET))(this);
	}

	::System::Void DEIODHAIIMI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKJPPCGBMA_MBPLHJEKAPC_DEIODHAIIMI_OFFSET))(this);
	}
};
