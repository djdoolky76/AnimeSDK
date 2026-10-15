#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicVisualization_BeatEffectElementVisualBase.h"
#include "unitysdk/UnityEngine/AnimatorClipInfo.h"
class BOMMJNIPOLG;
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED_CTOR_OFFSET UNITYSDK_OFFSET(0xD921AC0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED_HGPDJBBICOA_OFFSET UNITYSDK_OFFSET(0xD921950)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED_JPPILOBIOJO_OFFSET UNITYSDK_OFFSET(0xD9219B0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED_KFDMIOANNDO_OFFSET UNITYSDK_OFFSET(0xD9216C0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED_LKHPLBHJEPH_OFFSET UNITYSDK_OFFSET(0xD921710)

namespace RPG::Client
{
	class MusicVisualization_BeatEffectElementAnimSpeed : public ::RPG::Client::MusicVisualization_BeatEffectElementVisualBase
	{
	public:
		::Il2CppArray<::System::Object*>* AnimStateParams; // 0x30
		::System::String* _ClipName; // 0x38
		::Il2CppArray<::UnityEngine::AnimatorClipInfo>* _ClipInfos; // 0x40
		::System::Single _AnimationDuration; // 0x48
		::System::Byte _padding0[0x4];
		::UnityEngine::Animator* _Animator; // 0x50
		::System::Int32 _RandomIndex; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED_CTOR_OFFSET))(this);
		}

		::System::Void KFDMIOANNDO(::BOMMJNIPOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOMMJNIPOLG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED_KFDMIOANNDO_OFFSET))(this, a1);
		}

		::System::Void HGPDJBBICOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED_HGPDJBBICOA_OFFSET))(this);
		}

		static ::System::Int32 JPPILOBIOJO(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED_JPPILOBIOJO_OFFSET))(a1);
		}

		::System::Void LKHPLBHJEPH(::BOMMJNIPOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOMMJNIPOLG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED_LKHPLBHJEPH_OFFSET))(this, a1);
		}

	};
}
