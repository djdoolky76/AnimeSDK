#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMICCCNNAKJ.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/MoleMole/GameplayTag.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_DYNAMICOBJECT_GETOBJECTTAG_OFFSET UNITYSDK_OFFSET(0x1B94BA20)
#define MOLEMOLE_DYNAMICOBJECT_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x1B94BB30)
#define MOLEMOLE_DYNAMICOBJECT_RESETACTIVE_OFFSET UNITYSDK_OFFSET(0x1B94BDD0)
#define MOLEMOLE_DYNAMICOBJECT_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1B94BB80)
#define MOLEMOLE_DYNAMICOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B94BE10)

namespace MoleMole
{
	inline static constexpr unsigned int DynamicObject_TypeDefinitionIndex = 81301;

	class DynamicObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* objectNameId; // 0x18
		::JMICCCNNAKJ dynamicObjectType; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* assetPath; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICOBJECT__CTOR_OFFSET))(this);
		}

		::MoleMole::GameplayTag GetObjectTag()
		{
			return ((::MoleMole::GameplayTag(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICOBJECT_GETOBJECTTAG_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICOBJECT_GETOBJECT_OFFSET))(this);
		}

		::System::Void SetActive(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICOBJECT_SETACTIVE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void ResetActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICOBJECT_RESETACTIVE_OFFSET))(this);
		}
	};
}
