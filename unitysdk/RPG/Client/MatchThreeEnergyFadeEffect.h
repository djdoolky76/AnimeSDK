#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class EKOGCACGADH;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C6E80)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1D8C6D10)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_EGNMELNENAC_OFFSET UNITYSDK_OFFSET(0x1D8C6B70)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_LCKLLKKGAKO_OFFSET UNITYSDK_OFFSET(0x1D8C6890)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_OBJFFCNONCG_OFFSET UNITYSDK_OFFSET(0x1D8C6AC0)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1D8C6DA0)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D8C6D50)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x1D8BEB60)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1D8C6CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeEnergyFadeEffect_TypeDefinitionIndex = 67863;

	class MatchThreeEnergyFadeEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animation* PMOJILOJEPE; // 0x18
		::UnityEngine::RectTransform* IGLNACMFMHF; // 0x20
		::UnityEngine::UI::Image* JLHDCKNHDJH; // 0x28
		::EKOGCACGADH* DLALHGJDNNO; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_CTOR_OFFSET))(this);
		}

		::System::Void Play(::UnityEngine::RectTransform* a1, ::System::String* a2, ::System::String* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_PLAY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void LCKLLKKGAKO(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_LCKLLKKGAKO_OFFSET))(this, a1);
		}

		::System::Void OBJFFCNONCG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_OBJFFCNONCG_OFFSET))(this, a1);
		}

		::System::Void EGNMELNENAC(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_EGNMELNENAC_OFFSET))(this, a1, a2);
		}

	};
}
