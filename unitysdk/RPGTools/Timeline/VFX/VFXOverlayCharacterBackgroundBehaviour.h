#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/VFX/VFXOverlayCharacterBackgroundPositionInfo.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class LLFKNCJJAIG;
namespace RPGTools { class MonoTimelineEffect; }
namespace RPGTools::Timeline::VFX { class VFXOverlayCharacterBackgroundBehaviour_KINIDNJCNKL; }
namespace RPGTools::Timeline::VFX { class VFXOverlayCharacterBackgroundClip; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Texture2D; }

#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_CKPEKGHFENH_OFFSET UNITYSDK_OFFSET(0xE949EC0)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE94B6F0)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_DBKHFCDNMAA_OFFSET UNITYSDK_OFFSET(0xE94A130)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_EBMHEPPHCNN_OFFSET UNITYSDK_OFFSET(0xE94A750)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_FAJJCAJCKGM_OFFSET UNITYSDK_OFFSET(0xE94A930)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_FFFNHAGEFIE_OFFSET UNITYSDK_OFFSET(0xE949BA0)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_GEGAHDEDCPH_OFFSET UNITYSDK_OFFSET(0xE94B150)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE948D80)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_GFHJODLMCEE_OFFSET UNITYSDK_OFFSET(0xE949610)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_GKJLBDHLPKG_OFFSET UNITYSDK_OFFSET(0xE9499A0)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_HFLCBABNAOP_OFFSET UNITYSDK_OFFSET(0xE9490C0)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_HOLJJEDBHPB_OFFSET UNITYSDK_OFFSET(0xE94A8C0)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_IKHGADEMNBE_OFFSET UNITYSDK_OFFSET(0xE949770)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_JEOLDLNBJGB_OFFSET UNITYSDK_OFFSET(0xE949440)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_JFKFGLPLICB_OFFSET UNITYSDK_OFFSET(0xE94A610)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_KFAIPDNIMAA_OFFSET UNITYSDK_OFFSET(0xE94B010)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_KMBMFFMICEH_OFFSET UNITYSDK_OFFSET(0xE9497F0)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_LNOAEODAJIK_OFFSET UNITYSDK_OFFSET(0xE949D40)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_MOAKCAJJOOL_OFFSET UNITYSDK_OFFSET(0xE949080)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE949880)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE948DA0)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xE949AE0)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_PDIMIGKEJDI_OFFSET UNITYSDK_OFFSET(0xE94A290)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE949F10)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE948D90)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int VFXOverlayCharacterBackgroundBehaviour_TypeDefinitionIndex = 48667;

	class VFXOverlayCharacterBackgroundBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::VFX::VFXOverlayCharacterBackgroundPositionInfo PositionInfo; // 0x10
		::RPGTools::Timeline::VFX::VFXOverlayCharacterBackgroundClip* _Clip_k__BackingField; // 0x20
		::RPGTools::Timeline::VFX::VFXOverlayCharacterBackgroundBehaviour_KINIDNJCNKL* _EffectController; // 0x28
		::System::Single _BackgroundBlend; // 0x30
		::System::Boolean _HasPreviousBackground; // 0x34
		::System::Byte _padding0[0x3];
		::UnityEngine::Color _FrontBackgroundColor; // 0x38
		::UnityEngine::Color _BackBackgroundColor; // 0x48
		::System::String* _FrontTexturePath; // 0x58
		::System::String* _BackTexturePath; // 0x60
		::UnityEngine::Texture2D* _FrontTexture; // 0x68
		::UnityEngine::Texture2D* _BackTexture; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>* _TextureCache; // 0x78
		::LLFKNCJJAIG* _BackLayer; // 0x80
		::LLFKNCJJAIG* _FrontLayer; // 0x88
		::RPGTools::MonoTimelineEffect* _PersistentTextureOwner; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::VFX::VFXOverlayCharacterBackgroundClip* get_Clip()
		{
			return ((::RPGTools::Timeline::VFX::VFXOverlayCharacterBackgroundClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::VFX::VFXOverlayCharacterBackgroundClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VFX::VFXOverlayCharacterBackgroundClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void GKJLBDHLPKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_GKJLBDHLPKG_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HFLCBABNAOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_HFLCBABNAOP_OFFSET))(this);
		}

		::System::Single DBKHFCDNMAA(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_DBKHFCDNMAA_OFFSET))(this, a1, a2);
		}

		::System::Void PDIMIGKEJDI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_PDIMIGKEJDI_OFFSET))(this, a1);
		}

		::System::Void EBMHEPPHCNN(::LLFKNCJJAIG* a1, ::UnityEngine::Color a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::LLFKNCJJAIG*, ::UnityEngine::Color, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_EBMHEPPHCNN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HOLJJEDBHPB(::LLFKNCJJAIG* a1, ::UnityEngine::Texture2D* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LLFKNCJJAIG*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_HOLJJEDBHPB_OFFSET))(this, a1, a2);
		}

		::System::Void JFKFGLPLICB(::LLFKNCJJAIG* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::LLFKNCJJAIG*, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_JFKFGLPLICB_OFFSET))(this, a1, a2);
		}

		::System::Void IKHGADEMNBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_IKHGADEMNBE_OFFSET))(this);
		}

		::System::Void FAJJCAJCKGM(::LLFKNCJJAIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLFKNCJJAIG*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_FAJJCAJCKGM_OFFSET))(this, a1);
		}

		::System::Void GFHJODLMCEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_GFHJODLMCEE_OFFSET))(this);
		}

		::UnityEngine::Texture2D* KFAIPDNIMAA(::System::String* a1)
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_KFAIPDNIMAA_OFFSET))(this, a1);
		}

		::System::Void LNOAEODAJIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_LNOAEODAJIK_OFFSET))(this);
		}

		::System::Boolean FFFNHAGEFIE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_FFFNHAGEFIE_OFFSET))(this);
		}

		::System::Void JEOLDLNBJGB(::System::Double a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_JEOLDLNBJGB_OFFSET))(this, a1, a2);
		}

		::System::Void CKPEKGHFENH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_CKPEKGHFENH_OFFSET))(this);
		}

		::System::Void GEGAHDEDCPH(::System::Double a1, ::UnityEngine::Color a2, ::System::String* a3, ::UnityEngine::Color a4, ::System::String* a5, ::System::Single a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::UnityEngine::Color, ::System::String*, ::UnityEngine::Color, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_GEGAHDEDCPH_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean MOAKCAJJOOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_MOAKCAJJOOL_OFFSET))(this);
		}

		::System::Void KMBMFFMICEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDBEHAVIOUR_KMBMFFMICEH_OFFSET))(this);
		}

	};
}
