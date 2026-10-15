#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::Client { class MonoEmoBlendShapesController; }
namespace System { class Object; }

#define DEKBOIPIBHM_CTOR_OFFSET UNITYSDK_OFFSET(0xE5117C0)
#define DEKBOIPIBHM_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE511730)

	class DEKBOIPIBHM : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPG::Client::MonoEmoBlendShapesController* JIIKAEMELPJ; // 0x10
		::System::Single EELKIDELOCC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKBOIPIBHM_CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + DEKBOIPIBHM_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

	};
