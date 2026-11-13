#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBLCEIPMLIF;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TUTORIALNODECOLLECTOR_TUTORIALNODE_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0x1C9BD090)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_TUTORIALNODE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9BD3F0)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_TUTORIALNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9BE040)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_TUTORIALNODE_EJBJLENMMAN_OFFSET UNITYSDK_OFFSET(0x1C9BDE10)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_TUTORIALNODE_GNCJAGHKEPO_OFFSET UNITYSDK_OFFSET(0x1C9BD500)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_TUTORIALNODE_IOKAHCJFGDH_OFFSET UNITYSDK_OFFSET(0x1C9BDFF0)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialNodeCollector_TutorialNode_TypeDefinitionIndex = 70162;

	class TutorialNodeCollector_TutorialNode : public ::System::Object
	{
	public:
		::System::String* ID; // 0x10
		::UnityEngine::GameObject* Node; // 0x18
		::System::Boolean IsPCOnly; // 0x20
		::System::Boolean IsMobileOnly; // 0x21
		::System::Byte _padding0[0x6];
		::System::String* _RegisterID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_TUTORIALNODE_CTOR_OFFSET))(this);
		}

		::System::Void BKJGMFOKKKN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_TUTORIALNODE_BKJGMFOKKKN_OFFSET))(this, a1);
		}

		::System::Void GNCJAGHKEPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_TUTORIALNODE_GNCJAGHKEPO_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_TUTORIALNODE_CLEAR_OFFSET))(this);
		}

		::System::Boolean EJBJLENMMAN(::LBLCEIPMLIF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LBLCEIPMLIF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_TUTORIALNODE_EJBJLENMMAN_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* IOKAHCJFGDH()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_TUTORIALNODE_IOKAHCJFGDH_OFFSET))(this);
		}

	};
}
