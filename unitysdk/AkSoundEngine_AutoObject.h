#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }

#define AKSOUNDENGINE_AUTOOBJECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5DFC10)
#define AKSOUNDENGINE_AUTOOBJECT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F5DFEC0)

	class AkSoundEngine_AutoObject : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* gameObject; // 0x10
		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKSOUNDENGINE_AUTOOBJECT_CTOR_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOUNDENGINE_AUTOOBJECT_FINALIZE_OFFSET))(this);
		}

	};
