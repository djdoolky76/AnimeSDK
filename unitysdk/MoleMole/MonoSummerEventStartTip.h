#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOSUMMEREVENTSTARTTIP_JPPNEEBKNNE_OFFSET UNITYSDK_OFFSET(0x18106480)
#define MOLEMOLE_MONOSUMMEREVENTSTARTTIP_RUN_OFFSET UNITYSDK_OFFSET(0x18106290)
#define MOLEMOLE_MONOSUMMEREVENTSTARTTIP__CTOR_OFFSET UNITYSDK_OFFSET(0x18106510)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSummerEventStartTip_TypeDefinitionIndex = 55731;

	class MonoSummerEventStartTip : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* go; // 0x18
		::UnityEngine::Transform* start; // 0x20
		::UnityEngine::Animation* root; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTSTARTTIP__CTOR_OFFSET))(this);
		}

		::System::Void Run(::System::Action* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTSTARTTIP_RUN_OFFSET))(this, EJGDHCIBCJH);
		}

		::System::Collections::IEnumerator* JPPNEEBKNNE(::System::Action* EJGDHCIBCJH)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTSTARTTIP_JPPNEEBKNNE_OFFSET))(this, EJGDHCIBCJH);
		}
	};
}
