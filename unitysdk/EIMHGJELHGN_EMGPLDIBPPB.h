#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/GameObjectGetter.h"

namespace UnityEngine { class GameObject; }

#define EIMHGJELHGN_EMGPLDIBPPB_GET_OFFSET UNITYSDK_OFFSET(0x10F36990)
#define EIMHGJELHGN_EMGPLDIBPPB__CTOR_OFFSET UNITYSDK_OFFSET(0x10F369D0)

inline static constexpr unsigned int EIMHGJELHGN_EMGPLDIBPPB_TypeDefinitionIndex = 73410;

class EIMHGJELHGN_EMGPLDIBPPB : public ::BehaviorDesigner::Runtime::Tasks::GameObjectGetter
{
public:
	::UnityEngine::GameObject* BBBAIBJHHNM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_EMGPLDIBPPB__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* Get()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_EMGPLDIBPPB_GET_OFFSET))(this);
	}
};
