#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System { class String; }
namespace UnityEngine { class GUIStyle; }
namespace UnityEngine { class Texture2D; }

#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_ANJDNJOAHGO_OFFSET UNITYSDK_OFFSET(0x14B4C0B0)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_CLEARCONTENT_OFFSET UNITYSDK_OFFSET(0x14B4BA60)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_EAOALEKPKKO_OFFSET UNITYSDK_OFFSET(0x14B4D090)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_ECPMILGDDMF_OFFSET UNITYSDK_OFFSET(0x14B4B870)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_EDGGPDJONGM_OFFSET UNITYSDK_OFFSET(0x14B4C870)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_EKJOLHJMDGB_OFFSET UNITYSDK_OFFSET(0x14B4C700)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x14B4B520)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_GET_CURRENTSPEAKER_OFFSET UNITYSDK_OFFSET(0x14B4B500)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_GET_CURRENTSUBTITLE_OFFSET UNITYSDK_OFFSET(0x14B4B4E0)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x14B4B4D0)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_GET_ISSHOWING_OFFSET UNITYSDK_OFFSET(0x14B4B540)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_HBNLFNHMBHB_OFFSET UNITYSDK_OFFSET(0x14B4D390)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_KDDJOFJCBLE_OFFSET UNITYSDK_OFFSET(0x14B4C920)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14B4B7C0)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x14B4B560)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_ONGUI_OFFSET UNITYSDK_OFFSET(0x14B4BAC0)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_SET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x14B4B530)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_SET_CURRENTSPEAKER_OFFSET UNITYSDK_OFFSET(0x14B4B510)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_SET_CURRENTSUBTITLE_OFFSET UNITYSDK_OFFSET(0x14B4B4F0)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_SET_ISSHOWING_OFFSET UNITYSDK_OFFSET(0x14B4B550)
#define MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x14B4CFA0)

namespace MoleMole::Timeline::Editor
{
	inline static constexpr unsigned int EditorSubtitleOverlay_TypeDefinitionIndex = 68179;

	class EditorSubtitleOverlay : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::Timeline::Editor::EditorSubtitleOverlay** StaticGet__PHJGLHAAHOG_k__BackingField()
		{
			return (::MoleMole::Timeline::Editor::EditorSubtitleOverlay**)Il2CppClass::FromTypeDefinitionIndex(EditorSubtitleOverlay_TypeDefinitionIndex)->GetStaticField(0x48830);
		}
		::System::String* _ICOICGMAJBB_k__BackingField; // 0x18
		::System::String* _MOIOBPALGMI_k__BackingField; // 0x20
		::System::Int32 _BINOIBDLFBM_k__BackingField; // 0x28
		::System::Boolean _BGPIIGMAMGJ_k__BackingField; // 0x2C
		::System::Byte _padding0[0x3];
		::System::String* SpeakerLineFormat; // 0x30
		::UnityEngine::Color TextColor; // 0x38
		::UnityEngine::Color BackgroundColor; // 0x48
		::System::Int32 FontSize; // 0x58
		::System::Single WidthRatio; // 0x5C
		::UnityEngine::Color SpeakerTextColor; // 0x60
		::System::Int32 SpeakerFontSize; // 0x70
		::UnityEngine::Color OutlineColor; // 0x74
		::System::Int32 OutlineThickness; // 0x84
		::System::Int32 SpeakerBodySpacing; // 0x88
		::System::Single PositionTopY; // 0x8C
		::System::Single PositionBottomY; // 0x90
		::System::Single PositionCenterBottomY; // 0x94
		::UnityEngine::GUIStyle* MANOMELPPMF; // 0x98
		::UnityEngine::GUIStyle* AOOGFEECDLA; // 0xA0
		::UnityEngine::Texture2D* PBDMPKKICAD; // 0xA8
		::UnityEngine::Color CJFGAGFMDED; // 0xB0
		::UnityEngine::Color FJHDDJDIEGI; // 0xC0
		::UnityEngine::Color PJEFLMAPPPK; // 0xD0
		::System::Int32 DIHGPDJEFFH; // 0xE0
		::System::Int32 DBAINAHDACP; // 0xE4
		::UnityEngine::Color FBPPOGBJOOE; // 0xE8
		::System::Int32 NJBIEKBNGGA; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Timeline::Editor::EditorSubtitleOverlay* get_Instance()
		{
			return ((::MoleMole::Timeline::Editor::EditorSubtitleOverlay*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_GET_INSTANCE_OFFSET))();
		}

		::System::String* get_CurrentSubtitle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_GET_CURRENTSUBTITLE_OFFSET))(this);
		}

		::System::Void set_CurrentSubtitle(::System::String* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_SET_CURRENTSUBTITLE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::String* get_CurrentSpeaker()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_GET_CURRENTSPEAKER_OFFSET))(this);
		}

		::System::Void set_CurrentSpeaker(::System::String* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_SET_CURRENTSPEAKER_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Int32 get_CurrentPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_GET_CURRENTPOSITION_OFFSET))(this);
		}

		::System::Void set_CurrentPosition(::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_SET_CURRENTPOSITION_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_IsShowing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_GET_ISSHOWING_OFFSET))(this);
		}

		::System::Void set_IsShowing(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_SET_ISSHOWING_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_ONDESTROY_OFFSET))(this);
		}

		::System::Void ClearContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_CLEARCONTENT_OFFSET))(this);
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_ONGUI_OFFSET))(this);
		}

		::System::String* EKJOLHJMDGB(::System::String* DOJCDHMJJKK)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_EKJOLHJMDGB_OFFSET))(this, DOJCDHMJJKK);
		}

		::System::Single EDGGPDJONGM(::System::Single CLLHNDNJBDH)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_EDGGPDJONGM_OFFSET))(this, CLLHNDNJBDH);
		}

		::System::Void ANJDNJOAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_ANJDNJOAHGO_OFFSET))(this);
		}

		static ::System::Void HBNLFNHMBHB(::MoleMole::Timeline::Editor::EditorSubtitleOverlay* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::MoleMole::Timeline::Editor::EditorSubtitleOverlay*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_HBNLFNHMBHB_OFFSET))(EGEGIMGMJHN);
		}

		static ::UnityEngine::Texture2D* EAOALEKPKKO(::System::Int32 ALPANKAJAGK, ::System::Int32 DMIAICJPPDL, ::UnityEngine::Color CHIFPJGLFPK)
		{
			return ((::UnityEngine::Texture2D*(*)(::System::Int32, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_EAOALEKPKKO_OFFSET))(ALPANKAJAGK, DMIAICJPPDL, CHIFPJGLFPK);
		}

		::System::Void ECPMILGDDMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_ECPMILGDDMF_OFFSET))(this);
		}

		::System::Void KDDJOFJCBLE(::UnityEngine::Rect MGOFOAFCFIJ, ::System::String* FCCLIEJAKLI, ::UnityEngine::GUIStyle* DEKJDEPKKLH, ::UnityEngine::Color IFKEABDPFCN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::String*, ::UnityEngine::GUIStyle*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDITOR_EDITORSUBTITLEOVERLAY_KDDJOFJCBLE_OFFSET))(this, MGOFOAFCFIJ, FCCLIEJAKLI, DEKJDEPKKLH, IFKEABDPFCN);
		}
	};
}
