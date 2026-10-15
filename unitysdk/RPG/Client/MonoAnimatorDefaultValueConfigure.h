#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_MONOANIMATORDEFAULTVALUECONFIGURE_AWAKE_OFFSET UNITYSDK_OFFSET(0xD72DEC0)
#define RPG_CLIENT_MONOANIMATORDEFAULTVALUECONFIGURE_CTOR_OFFSET UNITYSDK_OFFSET(0xD72E080)

namespace RPG::Client
{
	class MonoAnimatorDefaultValueConfigure : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* Animator; // 0x18
		::Il2CppArray<::System::Object*>* DefaultValues; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORDEFAULTVALUECONFIGURE_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORDEFAULTVALUECONFIGURE_AWAKE_OFFSET))(this);
		}

	};
}
