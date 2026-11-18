#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

class CFIJCMGJBAB_IOMGCPODHGB;
namespace UnityEngine { class GameObject; }

#define CFIJCMGJBAB_ANBFJHJBHKF_IDLDLJPEIMB_OFFSET UNITYSDK_OFFSET(0x1153C870)
#define CFIJCMGJBAB_ANBFJHJBHKF__CTOR_OFFSET UNITYSDK_OFFSET(0x1153C860)

inline static constexpr unsigned int CFIJCMGJBAB_ANBFJHJBHKF_TypeDefinitionIndex = 61039;

class CFIJCMGJBAB_ANBFJHJBHKF : public ::System::Object
{
public:
	::CFIJCMGJBAB_IOMGCPODHGB* FGBNBFHOKAA; // 0x10
	::System::UInt32 NJNCGJLHLKC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_ANBFJHJBHKF__CTOR_OFFSET))(this);
	}

	::System::Void IDLDLJPEIMB(::Foundation::AssetPath CJBJONJDOLI, ::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_ANBFJHJBHKF_IDLDLJPEIMB_OFFSET))(this, CJBJONJDOLI, NJOAJLDJCCJ);
	}
};
