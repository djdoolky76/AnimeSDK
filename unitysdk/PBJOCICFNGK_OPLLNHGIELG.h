#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define PBJOCICFNGK_OPLLNHGIELG_DGIAONPAJPO_OFFSET UNITYSDK_OFFSET(0x1552C660)
#define PBJOCICFNGK_OPLLNHGIELG__CTOR_OFFSET UNITYSDK_OFFSET(0x1552C650)

inline static constexpr unsigned int PBJOCICFNGK_OPLLNHGIELG_TypeDefinitionIndex = 72628;

class PBJOCICFNGK_OPLLNHGIELG : public ::System::Object
{
public:
	::UnityEngine::Events::UnityAction* LJEPPLANHIL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBJOCICFNGK_OPLLNHGIELG__CTOR_OFFSET))(this);
	}

	::UnityEngine::Events::UnityAction* DGIAONPAJPO()
	{
		return ((::UnityEngine::Events::UnityAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBJOCICFNGK_OPLLNHGIELG_DGIAONPAJPO_OFFSET))(this);
	}
};
