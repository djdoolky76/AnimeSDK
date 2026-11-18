#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole { class UIAvatarGraphics; }
namespace System { class Object; }

#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x124A0600)
#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_EEEPHBMCNEN_OFFSET UNITYSDK_OFFSET(0x124A07A0)
#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x124A07C0)
#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_JEINNALOJDE_OFFSET UNITYSDK_OFFSET(0x124A0790)
#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_OFMFPDACPLH_OFFSET UNITYSDK_OFFSET(0x124A07B0)
#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x124A05A0)
#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x124A03F0)
#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x124A0000)
#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_ONPROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x124A01B0)
#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x124A05F0)

namespace MoleMole::Timeline::AvatarGraphics
{
	inline static constexpr unsigned int AvatarGraphicsBehavior_TypeDefinitionIndex = 50874;

	class AvatarGraphicsBehavior : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		::MoleMole::UIAvatarGraphics* graphicsComp; // 0x18
		::UnityEngine::Vector2 InitHairOffset; // 0x20
		::UnityEngine::Vector2 hairOffset; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_ONPLAY_OFFSET))(this);
		}

		::System::Void OnProcessFrame(::UnityEngine::Playables::Playable BBAPGLCBDOF, ::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC, ::System::Single IECOJPMPJMP, ::System::Int32 DFDHKJHBBAD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_ONPROCESSFRAME_OFFSET))(this, BBAPGLCBDOF, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC, IECOJPMPJMP, DFDHKJHBBAD);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void CNHBDOMKKDE(::MoleMole::UIAvatarGraphics* HANEFIAGDEF)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarGraphics*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_CNHBDOMKKDE_OFFSET))(this, HANEFIAGDEF);
		}

		::System::Void JEINNALOJDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_JEINNALOJDE_OFFSET))(this);
		}

		::System::Void EEEPHBMCNEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_EEEPHBMCNEN_OFFSET))(this);
		}

		::System::Void OFMFPDACPLH(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::Playable KMGKAIDEIBA, ::UnityEngine::Playables::FrameData FDHMCIFPNCK, ::System::Object* MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::System::Int32 CEIDLKIHMLC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_OFMFPDACPLH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
		}

		::System::Void IFHNMAGGFAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_IFHNMAGGFAE_OFFSET))(this);
		}
	};
}
