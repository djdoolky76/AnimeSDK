#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicVisualization_BeatEffectElementSetAnim_AnimValueFrom.h"
#include "unitysdk/RPG/Client/MusicVisualization_BeatEffectElementVisualBase.h"
class BOMMJNIPOLG;
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTSETANIM_BPEGPGNCAHI_OFFSET UNITYSDK_OFFSET(0xD91B700)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTSETANIM_CTOR_OFFSET UNITYSDK_OFFSET(0xD91B950)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTSETANIM_LKHPLBHJEPH_OFFSET UNITYSDK_OFFSET(0xD91B750)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicVisualization_BeatEffectElementSetAnim_TypeDefinitionIndex = 70818;

	class MusicVisualization_BeatEffectElementSetAnim : public ::RPG::Client::MusicVisualization_BeatEffectElementVisualBase
	{
	public:
		::System::String* AnimatorIntegerParamName; // 0x30
		::RPG::Client::MusicVisualization_BeatEffectElementSetAnim_AnimValueFrom AnimValueFromMode; // 0x38
		::System::Byte _padding0[0x4];
		::UnityEngine::Animator* _Animator; // 0x40
		::System::Int32 _Value; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTSETANIM_CTOR_OFFSET))(this);
		}

		::System::Void BPEGPGNCAHI(::BOMMJNIPOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOMMJNIPOLG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTSETANIM_BPEGPGNCAHI_OFFSET))(this, a1);
		}

		::System::Void LKHPLBHJEPH(::BOMMJNIPOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOMMJNIPOLG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTSETANIM_LKHPLBHJEPH_OFFSET))(this, a1);
		}

	};
}
