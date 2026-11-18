#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class String; }

#define PCBCOJOGHNI_MHLAMHKHJII_JGPMIIKBKBL_OFFSET UNITYSDK_OFFSET(0x150B3740)
#define PCBCOJOGHNI_MHLAMHKHJII__CTOR_OFFSET UNITYSDK_OFFSET(0x150B3730)

inline static constexpr unsigned int PCBCOJOGHNI_MHLAMHKHJII_TypeDefinitionIndex = 48404;

class PCBCOJOGHNI_MHLAMHKHJII : public ::System::Object
{
public:
	::System::String* ENALNGCJFFM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBCOJOGHNI_MHLAMHKHJII__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask JGPMIIKBKBL(::System::Threading::CancellationToken MPPGOFIIMEM)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + PCBCOJOGHNI_MHLAMHKHJII_JGPMIIKBKBL_OFFSET))(this, MPPGOFIIMEM);
	}
};
