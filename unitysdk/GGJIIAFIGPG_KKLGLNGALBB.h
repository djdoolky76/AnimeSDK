#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }

#define GGJIIAFIGPG_KKLGLNGALBB_LPILBOOFGMC_OFFSET UNITYSDK_OFFSET(0x13DD5860)
#define GGJIIAFIGPG_KKLGLNGALBB__CTOR_OFFSET UNITYSDK_OFFSET(0x13DD5850)

inline static constexpr unsigned int GGJIIAFIGPG_KKLGLNGALBB_TypeDefinitionIndex = 60147;

class GGJIIAFIGPG_KKLGLNGALBB : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* KFKLBNDJHFF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJIIAFIGPG_KKLGLNGALBB__CTOR_OFFSET))(this);
	}

	::System::Void LPILBOOFGMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJIIAFIGPG_KKLGLNGALBB_LPILBOOFGMC_OFFSET))(this);
	}
};
