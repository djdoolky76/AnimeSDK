#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROP_ROGUECOLLECTIONBUBBLETALK_CTOR_OFFSET UNITYSDK_OFFSET(0xDD7F140)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONBUBBLETALK_OHIMHELMOID_OFFSET UNITYSDK_OFFSET(0xDD7EF60)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONBUBBLETALK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xDD7F090)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONBUBBLETALK_SETBELONGENTITY_OFFSET UNITYSDK_OFFSET(0xDD7F0F0)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONBUBBLETALK_START_OFFSET UNITYSDK_OFFSET(0xDD7EDE0)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONBUBBLETALK_UPDATE_OFFSET UNITYSDK_OFFSET(0xDD7EE70)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RogueCollectionBubbleTalk_TypeDefinitionIndex = 78946;

	class RogueCollectionBubbleTalk : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::PlayNPCBubbleTalk* PlayNPCBubbleTalk; // 0x18
		::System::String* TriggerBubbleStateName; // 0x20
		::System::Int32 TriggerBubbleStateLayer; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::Animator* FDEHOEKKPLA; // 0x30
		::RPG::GameCore::GameEntity* DFPKPHCMLNN; // 0x38
		::System::Boolean IPDAPEPFILI; // 0x40
		// static const ::System::String* JPJAMENFBKD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONBUBBLETALK_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONBUBBLETALK_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONBUBBLETALK_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONBUBBLETALK_ONDISABLE_OFFSET))(this);
		}

		::System::Void SetBelongEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONBUBBLETALK_SETBELONGENTITY_OFFSET))(this, a1);
		}

		::System::Void OHIMHELMOID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONBUBBLETALK_OHIMHELMOID_OFFSET))(this);
		}

	};
}
