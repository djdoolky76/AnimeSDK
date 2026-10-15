#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/VFX/VFXVolumeLightBloomBehaviour_VolumeLightBloomParam.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DEBEAKKOHLN;
class LCAGAOODECN;
namespace RPGTools::Timeline::VFX { class VFXVolumeLightBloomClip; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_CFOGDEPOJIP_OFFSET UNITYSDK_OFFSET(0xE94D7B0)
#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE94E180)
#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE94E160)
#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_GJNNBEJCFDJ_OFFSET UNITYSDK_OFFSET(0xE94E0B0)
#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_IBIMBCECMDF_OFFSET UNITYSDK_OFFSET(0xE94DBC0)
#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_JLOMPGPNPLM_OFFSET UNITYSDK_OFFSET(0xE94D650)
#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE94DA90)
#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE94D500)
#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xE94DB70)
#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_PDKDKBJFOPJ_OFFSET UNITYSDK_OFFSET(0xE94DF90)
#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE94D710)
#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE94E170)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int VFXVolumeLightBloomBehaviour_TypeDefinitionIndex = 48694;

	class VFXVolumeLightBloomBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::VFX::VFXVolumeLightBloomBehaviour_VolumeLightBloomParam Parameter; // 0x10
		::System::Byte _padding0[0x4];
		::RPGTools::Timeline::VFX::VFXVolumeLightBloomClip* _Clip_k__BackingField; // 0x30
		::LCAGAOODECN* _volumeLightBloomEffect; // 0x38
		::DEBEAKKOHLN* _rendererCache; // 0x40
		// static const ::System::String* VolumeLightBloomEffectPath; // 0x0
		// static const ::System::String* VolumeLightBloomEffectRendererNodeName; // 0x0
		// static const ::System::String* VolumeLightBloomEffectUniqueName; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void JLOMPGPNPLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_JLOMPGPNPLM_OFFSET))(this);
		}

		::System::Void CFOGDEPOJIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_CFOGDEPOJIP_OFFSET))(this);
		}

		::System::Boolean IBIMBCECMDF(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_IBIMBCECMDF_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* GJNNBEJCFDJ(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_GJNNBEJCFDJ_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Vector3 PDKDKBJFOPJ(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_PDKDKBJFOPJ_OFFSET))(a1, a2, a3);
		}

		::RPGTools::Timeline::VFX::VFXVolumeLightBloomClip* get_Clip()
		{
			return ((::RPGTools::Timeline::VFX::VFXVolumeLightBloomClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::VFX::VFXVolumeLightBloomClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VFX::VFXVolumeLightBloomClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

	};
}
