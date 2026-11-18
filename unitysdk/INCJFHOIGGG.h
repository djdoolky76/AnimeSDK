#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::DataBind { class AsyncDestroyTrigger; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define INCJFHOIGGG_OLBJLDAKGCF_1_OFFSET UNITYSDK_OFFSET(0x1CE928E0)
#define INCJFHOIGGG_OLBJLDAKGCF_OFFSET UNITYSDK_OFFSET(0x1CE92580)

inline static constexpr unsigned int INCJFHOIGGG_TypeDefinitionIndex = 34843;

class INCJFHOIGGG : public ::System::Object
{
public:
	static ::MoleMole::DataBind::AsyncDestroyTrigger* OLBJLDAKGCF(::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::MoleMole::DataBind::AsyncDestroyTrigger*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + INCJFHOIGGG_OLBJLDAKGCF_OFFSET))(JEIDPPCEHLD);
	}

	static ::MoleMole::DataBind::AsyncDestroyTrigger* OLBJLDAKGCF_1(::UnityEngine::Component* GBELIHABEDH)
	{
		return ((::MoleMole::DataBind::AsyncDestroyTrigger*(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + INCJFHOIGGG_OLBJLDAKGCF_1_OFFSET))(GBELIHABEDH);
	}
};
