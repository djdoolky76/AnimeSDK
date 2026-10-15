#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class LMPPBDNFCJF;
namespace System { class Object; }

#define RPG_CLIENT_ANIMATORCLIPOVERRIDE_AWAKE_OFFSET UNITYSDK_OFFSET(0xC683660)
#define RPG_CLIENT_ANIMATORCLIPOVERRIDE_CTOR_OFFSET UNITYSDK_OFFSET(0xC6837E0)
#define RPG_CLIENT_ANIMATORCLIPOVERRIDE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC683780)

namespace RPG::Client
{
	inline static constexpr unsigned int AnimatorClipOverride_TypeDefinitionIndex = 70354;

	class AnimatorClipOverride : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::System::Object*>* AnimClipOverrides; // 0x18
		::LMPPBDNFCJF* KADDKEGNCHE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORCLIPOVERRIDE_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORCLIPOVERRIDE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORCLIPOVERRIDE_ONDESTROY_OFFSET))(this);
		}

	};
}
