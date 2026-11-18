#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_SEQFRAMERUNTIMESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xE121C70)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdFrameKeyManager_SeqFrameRuntimeState_TypeDefinitionIndex = 91483;

	class NPCCrowdFrameKeyManager_SeqFrameRuntimeState : public ::System::Object
	{
	public:
		::System::String* textureSheetKey; // 0x10
		::UnityEngine::GameObject* targetGo; // 0x18
		::System::Single playStartTime; // 0x20
		::System::Int32 activeLayer; // 0x24
		::System::Boolean loop; // 0x28
		::System::Boolean autoTick; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_SEQFRAMERUNTIMESTATE__CTOR_OFFSET))(this);
		}
	};
}
