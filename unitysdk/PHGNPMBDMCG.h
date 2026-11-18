#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define PHGNPMBDMCG_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x1B9E5B10)
#define PHGNPMBDMCG_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B9E5B00)
#define PHGNPMBDMCG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E5B50)

inline static constexpr unsigned int PHGNPMBDMCG_TypeDefinitionIndex = 54049;

class PHGNPMBDMCG : public ::System::Object
{
public:
	::UnityEngine::GameObject* OKDBJMMAKFC; // 0x10

	::System::Void _ctor(::UnityEngine::GameObject* MAHAOAIGPEH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PHGNPMBDMCG__CTOR_OFFSET))(this, MAHAOAIGPEH);
	}

	::UnityEngine::GameObject* get_soundGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHGNPMBDMCG_GET_SOUNDGAMEOBJECT_OFFSET))(this);
	}

	::System::String* get_soundActionSourceHint()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHGNPMBDMCG_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
	}
};
