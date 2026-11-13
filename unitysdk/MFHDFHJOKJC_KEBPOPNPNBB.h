#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CharacterEffect; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define MFHDFHJOKJC_KEBPOPNPNBB_CTOR_OFFSET UNITYSDK_OFFSET(0x17C88330)
#define MFHDFHJOKJC_KEBPOPNPNBB_DNFGFHMNDEF_OFFSET UNITYSDK_OFFSET(0x17C878E0)
#define MFHDFHJOKJC_KEBPOPNPNBB_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x17C88990)
#define MFHDFHJOKJC_KEBPOPNPNBB_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0x17C87FC0)

inline static constexpr unsigned int MFHDFHJOKJC_KEBPOPNPNBB_TypeDefinitionIndex = 71825;

	class MFHDFHJOKJC_KEBPOPNPNBB : public ::System::Object
	{
	public:
		::UnityEngine::Material* EEOCHLOPPCH; // 0x10
		::RPG::Client::CharacterEffect* FIJPFBNGMJL; // 0x18
		::UnityEngine::LineRenderer* GGOANBOGFKL; // 0x20
		::UnityEngine::Transform* INNJMAABJDK; // 0x28
		::UnityEngine::Material* DOLIHDOBGEI; // 0x30
		::UnityEngine::Transform* MFJGOGDDHNM; // 0x38
		::System::Single PNFADLCDMFF; // 0x40
		::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::LineRenderer* a3, ::UnityEngine::Transform* a4, ::RPG::Client::CharacterEffect* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::LineRenderer*, ::UnityEngine::Transform*, ::RPG::Client::CharacterEffect*))((::PBYTE)hIl2Cpp + MFHDFHJOKJC_KEBPOPNPNBB_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DNFGFHMNDEF(::System::Single a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MFHDFHJOKJC_KEBPOPNPNBB_DNFGFHMNDEF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MFHDFHJOKJC_KEBPOPNPNBB_NHPDCPKMNAM_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHDFHJOKJC_KEBPOPNPNBB_HADOHLNHHGB_OFFSET))(this);
		}

	};
