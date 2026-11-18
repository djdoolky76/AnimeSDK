#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MonoRenderEntity;
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_CBGLIBMMFMH_OFFSET UNITYSDK_OFFSET(0x19CF6C60)
#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_CBPBDCKIBAL_OFFSET UNITYSDK_OFFSET(0x19CF6800)
#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_DCKJMLMNNEM_OFFSET UNITYSDK_OFFSET(0x19CF6A90)
#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_EEEPHBMCNEN_OFFSET UNITYSDK_OFFSET(0x19CF6A80)
#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_JEINNALOJDE_OFFSET UNITYSDK_OFFSET(0x19CF6E40)
#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_JKBKAFMKGJM_OFFSET UNITYSDK_OFFSET(0x19CF6B90)
#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x19CF6900)
#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x19CF6690)
#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF6A40)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MonoRenderEntityBehavior_TypeDefinitionIndex = 84652;

	class MonoRenderEntityBehavior : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		::MonoRenderEntity* RenderEntity; // 0x18
		::UnityEngine::Transform* middlePoint; // 0x20
		::System::String* middlePointPath; // 0x28
		::UnityEngine::Transform* headBone; // 0x30
		::System::String* headBonePath; // 0x38
		::UnityEngine::Transform* preMiddlePoint; // 0x40
		::UnityEngine::Transform* preHead; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_ONPLAY_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_ONPAUSE_OFFSET))(this);
		}

		::System::Void CBPBDCKIBAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_CBPBDCKIBAL_OFFSET))(this);
		}

		::System::Void EEEPHBMCNEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_EEEPHBMCNEN_OFFSET))(this);
		}

		::System::Void DCKJMLMNNEM(::UnityEngine::Vector3& DFCAPDBFMIA, ::UnityEngine::Vector3& IABMIDALMCB, ::UnityEngine::Vector3& KBLDCLGLFLG)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_DCKJMLMNNEM_OFFSET))(this, DFCAPDBFMIA, IABMIDALMCB, KBLDCLGLFLG);
		}

		::System::Void JKBKAFMKGJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_JKBKAFMKGJM_OFFSET))(this);
		}

		::System::Void CBGLIBMMFMH(::MonoRenderEntity* PBNKKFANGEH)
		{
			return ((::System::Void(*)(::PVOID, ::MonoRenderEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_CBGLIBMMFMH_OFFSET))(this, PBNKKFANGEH);
		}

		::System::Void JEINNALOJDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_JEINNALOJDE_OFFSET))(this);
		}
	};
}
