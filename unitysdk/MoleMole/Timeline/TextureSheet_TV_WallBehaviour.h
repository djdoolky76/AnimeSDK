#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole { class SceneObjectStateWidget; }
namespace MoleMole::Timeline { class TextureSheet_TV_WallClip; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x198E27A0)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x198E2870)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_INEKBCHAPNC_OFFSET UNITYSDK_OFFSET(0x198E2730)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_MOONNIIOGKP_OFFSET UNITYSDK_OFFSET(0x198E2550)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x198E2400)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x198E2450)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x198E2680)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x198E2690)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x198E2560)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x198E21E0)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x198E2540)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int TextureSheet_TV_WallBehaviour_TypeDefinitionIndex = 46594;

	class TextureSheet_TV_WallBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::Il2CppArray<::MoleMole::SceneObjectStateWidget*>* walls; // 0x10
		::MoleMole::Timeline::TextureSheet_TV_WallClip* clip; // 0x18
		::System::String* configKey; // 0x20
		::System::Double lastTime; // 0x28
		::System::Double deltaTime; // 0x30
		::System::String* lastConfigKey; // 0x38
		::System::Boolean isInit; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void MOONNIIOGKP(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_MOONNIIOGKP_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void PLPONJAKNEB(::System::Double PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void PGHAJOMNDDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_PGHAJOMNDDJ_OFFSET))(this);
		}

		::System::Boolean INEKBCHAPNC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_INEKBCHAPNC_OFFSET))(this);
		}

		::System::Void BBOMJDBNHIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_BBOMJDBNHIC_OFFSET))(this);
		}

		::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}
	};
}
