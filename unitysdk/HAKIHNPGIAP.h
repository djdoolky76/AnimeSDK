#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NNEDFJMPCCK.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class GameObject; }

#define HAKIHNPGIAP_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x15B76C90)
#define HAKIHNPGIAP_CTOR_OFFSET UNITYSDK_OFFSET(0x15B769C0)
#define HAKIHNPGIAP_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x15B769A0)
#define HAKIHNPGIAP_GPBIACDBPNB_OFFSET UNITYSDK_OFFSET(0x15B76CF0)
#define HAKIHNPGIAP_KHNCMBEFIKI_OFFSET UNITYSDK_OFFSET(0x15B76D60)
#define HAKIHNPGIAP_LMJCDMPNBKE_OFFSET UNITYSDK_OFFSET(0x15B76B70)
#define HAKIHNPGIAP_SET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x15B769B0)

inline static constexpr unsigned int HAKIHNPGIAP_TypeDefinitionIndex = 47755;

	class HAKIHNPGIAP : public ::NNEDFJMPCCK
	{
	public:
		::UnityEngine::GameObject* _GameObject_k__BackingField; // 0x30
		::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HAKIHNPGIAP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::GameObject* get_GameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKIHNPGIAP_GET_GAMEOBJECT_OFFSET))(this);
		}

		::System::Void set_GameObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HAKIHNPGIAP_SET_GAMEOBJECT_OFFSET))(this, a1);
		}

		::System::Void LMJCDMPNBKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKIHNPGIAP_LMJCDMPNBKE_OFFSET))(this);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKIHNPGIAP_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Void GPBIACDBPNB(::System::Int32 a1, ::UnityEngine::Color a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + HAKIHNPGIAP_GPBIACDBPNB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KHNCMBEFIKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKIHNPGIAP_KHNCMBEFIKI_OFFSET))(this);
		}

	};
