#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class CharacterEffect; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define MFHDFHJOKJC_LCLMBMLHCNP_CTOR_OFFSET UNITYSDK_OFFSET(0xB8FE510)
#define MFHDFHJOKJC_LCLMBMLHCNP_DNFGFHMNDEF_OFFSET UNITYSDK_OFFSET(0xB8FDA40)
#define MFHDFHJOKJC_LCLMBMLHCNP_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB8FE900)
#define MFHDFHJOKJC_LCLMBMLHCNP_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0xB8FDED0)

inline static constexpr unsigned int MFHDFHJOKJC_LCLMBMLHCNP_TypeDefinitionIndex = 69867;

	class MFHDFHJOKJC_LCLMBMLHCNP : public ::System::Object
	{
	public:
		::UnityEngine::Material* DOLIHDOBGEI; // 0x10
		::UnityEngine::Material* EEOCHLOPPCH; // 0x18
		::RPG::Client::CharacterEffect* FIJPFBNGMJL; // 0x20
		::UnityEngine::Transform* LEMMBOLAPII; // 0x28
		::UnityEngine::GameObject* GIGLHCOCKMP; // 0x30
		::UnityEngine::Vector3 GBELOEHECEC; // 0x38
		::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Transform* a3, ::System::Single a4, ::RPG::Client::CharacterEffect* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::System::Single, ::RPG::Client::CharacterEffect*))((::PBYTE)hIl2Cpp + MFHDFHJOKJC_LCLMBMLHCNP_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DNFGFHMNDEF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MFHDFHJOKJC_LCLMBMLHCNP_DNFGFHMNDEF_OFFSET))(this, a1);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MFHDFHJOKJC_LCLMBMLHCNP_NHPDCPKMNAM_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHDFHJOKJC_LCLMBMLHCNP_HADOHLNHHGB_OFFSET))(this);
		}

	};
