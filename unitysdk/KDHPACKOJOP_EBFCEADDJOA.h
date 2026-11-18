#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class KDHPACKOJOP;
namespace System { class String; }

#define KDHPACKOJOP_EBFCEADDJOA_OGGLGPOIPMH_OFFSET UNITYSDK_OFFSET(0x16333FD0)
#define KDHPACKOJOP_EBFCEADDJOA__CTOR_OFFSET UNITYSDK_OFFSET(0x16333FC0)

inline static constexpr unsigned int KDHPACKOJOP_EBFCEADDJOA_TypeDefinitionIndex = 82217;

class KDHPACKOJOP_EBFCEADDJOA : public ::System::Object
{
public:
	::KDHPACKOJOP* KLHPEBKNIFB; // 0x10
	::System::String* CEKNHIDPNNA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHPACKOJOP_EBFCEADDJOA__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask OGGLGPOIPMH(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + KDHPACKOJOP_EBFCEADDJOA_OGGLGPOIPMH_OFFSET))(this, OMMEALOOOOD);
	}
};
