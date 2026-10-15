#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::Client { class RendererMaterialCache; }
namespace RPGTools::Timeline { class EyeBloomData; }
namespace System { class Object; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define RPGTOOLS_TIMELINE_EMOEYEBLOOMMIXER_CIPPNKDIIJE_OFFSET UNITYSDK_OFFSET(0xE8D5340)
#define RPGTOOLS_TIMELINE_EMOEYEBLOOMMIXER_CTOR_OFFSET UNITYSDK_OFFSET(0xE8D57F0)
#define RPGTOOLS_TIMELINE_EMOEYEBLOOMMIXER_KJFOLKPAOHG_OFFSET UNITYSDK_OFFSET(0xE8D5660)
#define RPGTOOLS_TIMELINE_EMOEYEBLOOMMIXER_LGANALGCCAO_OFFSET UNITYSDK_OFFSET(0xE8D51F0)
#define RPGTOOLS_TIMELINE_EMOEYEBLOOMMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE8D4BB0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EmoEyeBloomMixer_TypeDefinitionIndex = 48113;

	class EmoEyeBloomMixer : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::SkinnedMeshRenderer* Renderer; // 0x10
		::System::Boolean _FirstFrame; // 0x18
		::System::Byte _padding0[0x7];
		::RPGTools::Timeline::EyeBloomData* _OriginData; // 0x20
		::System::Int32 _FaceMatIndex; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYEBLOOMMIXER_CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYEBLOOMMIXER_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 LGANALGCCAO(::UnityEngine::SkinnedMeshRenderer* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYEBLOOMMIXER_LGANALGCCAO_OFFSET))(this, a1);
		}

		::System::Void CIPPNKDIIJE(::RPGTools::Timeline::EyeBloomData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::EyeBloomData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYEBLOOMMIXER_CIPPNKDIIJE_OFFSET))(this, a1);
		}

		::System::Void KJFOLKPAOHG(::RPG::Client::RendererMaterialCache* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RendererMaterialCache*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYEBLOOMMIXER_KJFOLKPAOHG_OFFSET))(this, a1, a2);
		}

	};
}
