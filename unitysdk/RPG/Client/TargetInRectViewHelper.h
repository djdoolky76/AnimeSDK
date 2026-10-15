#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_TARGETINRECTVIEWHELPER_CTOR_OFFSET UNITYSDK_OFFSET(0xE1A0300)
#define RPG_CLIENT_TARGETINRECTVIEWHELPER_LNLCBAFPPBK_OFFSET UNITYSDK_OFFSET(0xE19ECA0)
#define RPG_CLIENT_TARGETINRECTVIEWHELPER_NOAHBJKPBGL_OFFSET UNITYSDK_OFFSET(0xE1A0130)
#define RPG_CLIENT_TARGETINRECTVIEWHELPER_START_OFFSET UNITYSDK_OFFSET(0xE19EAD0)
#define RPG_CLIENT_TARGETINRECTVIEWHELPER_UPDATE_OFFSET UNITYSDK_OFFSET(0xE19EED0)

namespace RPG::Client
{
	inline static constexpr unsigned int TargetInRectViewHelper_TypeDefinitionIndex = 69476;

	class TargetInRectViewHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* IAOBJIMIMJB; // 0x18
		::UnityEngine::GameObject* AFLMJMMOHHH; // 0x20
		::UnityEngine::GameObject* DJCJLMCNKPA; // 0x28
		::UnityEngine::GameObject* ILNEJCEKDJC; // 0x30
		::UnityEngine::RectTransform* PGGPJFHBIFO; // 0x38
		::UnityEngine::GameObject* LookAtTarget; // 0x40
		::UnityEngine::Vector2 Size; // 0x48
		::UnityEngine::Vector3 NodeOffect; // 0x50
		::System::Byte _padding0[0x4];
		::UnityEngine::RectTransform* DetectedTransform; // 0x60
		::System::Single Ratio; // 0x68
		::System::Boolean LeftUpInRect; // 0x6C
		::System::Boolean RightUpInRect; // 0x6D
		::System::Boolean RightDownInRect; // 0x6E
		::System::Boolean LeftDownInRect; // 0x6F
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TARGETINRECTVIEWHELPER_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TARGETINRECTVIEWHELPER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TARGETINRECTVIEWHELPER_UPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector2 NOAHBJKPBGL(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_TARGETINRECTVIEWHELPER_NOAHBJKPBGL_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* LNLCBAFPPBK(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TARGETINRECTVIEWHELPER_LNLCBAFPPBK_OFFSET))(this, a1);
		}

	};
}
