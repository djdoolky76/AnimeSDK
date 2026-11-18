#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MAOPDFBPLBI_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x16C6F200)
#define MAOPDFBPLBI_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x16C6F1F0)
#define MAOPDFBPLBI__CTOR_OFFSET UNITYSDK_OFFSET(0x16C6F240)

inline static constexpr unsigned int MAOPDFBPLBI_TypeDefinitionIndex = 38403;

class MAOPDFBPLBI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOPDFBPLBI__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_soundGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOPDFBPLBI_GET_SOUNDGAMEOBJECT_OFFSET))(this);
	}

	::System::String* get_soundActionSourceHint()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOPDFBPLBI_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
	}
};
