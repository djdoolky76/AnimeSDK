#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

namespace System { class Action; }

#define IFFKIHMPGJK_AOPPMGDLCBN_CEMAJNFGPBL_OFFSET UNITYSDK_OFFSET(0xEA1E370)
#define IFFKIHMPGJK_AOPPMGDLCBN__CTOR_OFFSET UNITYSDK_OFFSET(0xEA1E360)

inline static constexpr unsigned int IFFKIHMPGJK_AOPPMGDLCBN_TypeDefinitionIndex = 66901;

class IFFKIHMPGJK_AOPPMGDLCBN : public ::System::Object
{
public:
	::System::Action* LJHAGGGJKLN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFKIHMPGJK_AOPPMGDLCBN__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask CEMAJNFGPBL()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFKIHMPGJK_AOPPMGDLCBN_CEMAJNFGPBL_OFFSET))(this);
	}
};
