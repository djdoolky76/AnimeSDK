#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_UI3DGAME_CHIMERAANIMATIONTIMEPROXY_CTOR_OFFSET UNITYSDK_OFFSET(0x1A0D6410)
#define RPG_CLIENT_UI3DGAME_CHIMERAANIMATIONTIMEPROXY_JJEDEHBLMIA_OFFSET UNITYSDK_OFFSET(0x1A0D5F40)
#define RPG_CLIENT_UI3DGAME_CHIMERAANIMATIONTIMEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A0D5EC0)
#define RPG_CLIENT_UI3DGAME_CHIMERAANIMATIONTIMEPROXY_START_OFFSET UNITYSDK_OFFSET(0x1A0D58E0)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int ChimeraAnimationTimeProxy_TypeDefinitionIndex = 78096;

	class ChimeraAnimationTimeProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animation* PMOJILOJEPE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERAANIMATIONTIMEPROXY_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERAANIMATIONTIMEPROXY_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERAANIMATIONTIMEPROXY_ONDESTROY_OFFSET))(this);
		}

		::System::Void JJEDEHBLMIA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERAANIMATIONTIMEPROXY_JJEDEHBLMIA_OFFSET))(this, a1);
		}

	};
}
