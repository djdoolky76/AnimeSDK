#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHMECLPHCFP.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/MoleMole/GameplayTag.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MONOLEVELDYNAMICOBJECT_GETNAVMESHMARKTYPE_OFFSET UNITYSDK_OFFSET(0xE548810)
#define MONOLEVELDYNAMICOBJECT_GETOBJECTTAG_OFFSET UNITYSDK_OFFSET(0xE5483D0)
#define MONOLEVELDYNAMICOBJECT_GETOBJECT_OFFSET UNITYSDK_OFFSET(0xE548520)
#define MONOLEVELDYNAMICOBJECT_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE548850)
#define MONOLEVELDYNAMICOBJECT_RESETACTIVE_OFFSET UNITYSDK_OFFSET(0xE5487C0)
#define MONOLEVELDYNAMICOBJECT_SETACTIVE_OFFSET UNITYSDK_OFFSET(0xE548570)
#define MONOLEVELDYNAMICOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0xE5488A0)

inline static constexpr unsigned int MonoLevelDynamicObject_TypeDefinitionIndex = 85222;

class MonoLevelDynamicObject : public ::UnityEngine::MonoBehaviour
{
public:
	::System::String* DynamicObjectName; // 0x18
	::NHMECLPHCFP NavmeshType; // 0x20
	::System::Boolean DefaultActiveState; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLEVELDYNAMICOBJECT__CTOR_OFFSET))(this);
	}

	::MoleMole::GameplayTag GetObjectTag()
	{
		return ((::MoleMole::GameplayTag(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLEVELDYNAMICOBJECT_GETOBJECTTAG_OFFSET))(this);
	}

	::UnityEngine::GameObject* GetObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLEVELDYNAMICOBJECT_GETOBJECT_OFFSET))(this);
	}

	::System::Void SetActive(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOLEVELDYNAMICOBJECT_SETACTIVE_OFFSET))(this, value);
	}

	::System::Void ResetActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLEVELDYNAMICOBJECT_RESETACTIVE_OFFSET))(this);
	}

	::NHMECLPHCFP GetNavmeshMarkType()
	{
		return ((::NHMECLPHCFP(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLEVELDYNAMICOBJECT_GETNAVMESHMARKTYPE_OFFSET))(this);
	}

	::UnityEngine::Transform* GetTransform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLEVELDYNAMICOBJECT_GETTRANSFORM_OFFSET))(this);
	}
};
