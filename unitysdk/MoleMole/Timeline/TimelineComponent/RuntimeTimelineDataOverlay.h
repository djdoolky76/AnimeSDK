#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_ABDLEONNPAJ_OFFSET UNITYSDK_OFFSET(0x15AECC90)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_CBGAJOGCGFF_OFFSET UNITYSDK_OFFSET(0x15AED8C0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_ENJPNOPOKDE_OFFSET UNITYSDK_OFFSET(0x15AED0F0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_HCNACBEBBMC_OFFSET UNITYSDK_OFFSET(0x15AEB570)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_ILOLAFPFMKA_OFFSET UNITYSDK_OFFSET(0x15AEB5D0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15AEB460)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_JACBDJLLLHB_OFFSET UNITYSDK_OFFSET(0x15AED980)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15AED010)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15AED5F0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15AED060)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x15AED830)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int RuntimeTimelineDataOverlay_TypeDefinitionIndex = 89354;

	class RuntimeTimelineDataOverlay : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Canvas** StaticGet_INJNBIJGBPO()
		{
			return (::UnityEngine::Canvas**)Il2CppClass::FromTypeDefinitionIndex(RuntimeTimelineDataOverlay_TypeDefinitionIndex)->GetStaticField(0x4F920);
		}
		static ::System::Boolean* StaticGet_CIJOCGBEOID()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RuntimeTimelineDataOverlay_TypeDefinitionIndex)->GetStaticField(0x12E30);
		}
		// static const ::System::String* MAGOOMCNPLP; // 0x0
		// static const ::System::String* BOJOMCIEKAJ; // 0x0
		::UnityEngine::Playables::PlayableDirector* EGGKOIFINIH; // 0x18
		::System::String* ICMEKMKNBLB; // 0x20
		::UnityEngine::GameObject* FNEKMIEDMEP; // 0x28
		::UnityEngine::UI::Image* KOPOGJIPHAK; // 0x30
		::UnityEngine::UI::Text* MIDLNNFPBCL; // 0x38
		::System::Single BIOKHJMJEGL; // 0x40
		::System::Int32 _fontSize; // 0x44
		::UnityEngine::Vector2 _textSize; // 0x48
		::UnityEngine::Vector2 _textAnchoredPosition; // 0x50
		::UnityEngine::Color _textColor; // 0x58
		::UnityEngine::Color _backgroundColor; // 0x68
		::System::Single _fadeInTime; // 0x78
		::System::Single _fadeOutTime; // 0x7C
		::System::Double KKJKPJEGKJC; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::UnityEngine::Playables::PlayableDirector* GALAOBFOBFA, ::System::String* KHLKJIAOLFK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_INITIALIZE_OFFSET))(this, GALAOBFOBFA, KHLKJIAOLFK);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_ONDESTROY_OFFSET))(this);
		}

		::System::Void CBGAJOGCGFF(::System::Single IODNJOJIBED)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_CBGAJOGCGFF_OFFSET))(this, IODNJOJIBED);
		}

		::System::Void ABDLEONNPAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_ABDLEONNPAJ_OFFSET))(this);
		}

		::System::Void HCNACBEBBMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_HCNACBEBBMC_OFFSET))(this);
		}

		::System::Void ILOLAFPFMKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_ILOLAFPFMKA_OFFSET))(this);
		}

		::System::Void ENJPNOPOKDE(::System::Single EJCBEJMGFAJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_ENJPNOPOKDE_OFFSET))(this, EJCBEJMGFAJ);
		}

		static ::UnityEngine::Canvas* JACBDJLLLHB()
		{
			return ((::UnityEngine::Canvas*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_JACBDJLLLHB_OFFSET))();
		}
	};
}
