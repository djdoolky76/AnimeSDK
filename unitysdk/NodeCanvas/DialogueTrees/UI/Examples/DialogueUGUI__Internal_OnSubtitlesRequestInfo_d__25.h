#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::DialogueTrees { class SubtitlesRequestInfo; }
namespace NodeCanvas::DialogueTrees::UI::Examples { class DialogueUGUI; }
namespace System { class String; }
namespace UnityEngine { class AudioClip; }
namespace UnityEngine { class AudioSource; }

#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__INTERNAL_ONSUBTITLESREQUESTINFO_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D5E5650)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__INTERNAL_ONSUBTITLESREQUESTINFO_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D5E6780)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__INTERNAL_ONSUBTITLESREQUESTINFO_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D5E67E0)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__INTERNAL_ONSUBTITLESREQUESTINFO_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D5E6790)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__INTERNAL_ONSUBTITLESREQUESTINFO_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D5E5640)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__INTERNAL_ONSUBTITLESREQUESTINFO_D__25__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E5630)

namespace NodeCanvas::DialogueTrees::UI::Examples
{
	inline static constexpr unsigned int DialogueUGUI__Internal_OnSubtitlesRequestInfo_d__25_TypeDefinitionIndex = 29800;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25>
	class DialogueUGUI__Internal_OnSubtitlesRequestInfo_d__25 : public ::System::Object
	{
	public:
		::System::String* _tempText_5__6; // 0x10
		::System::Object* __8__1; // 0x18
		::UnityEngine::AudioSource* _playSource_5__4; // 0x20
		::System::String* _text_5__2; // 0x28
		::System::Object* __2__current; // 0x30
		::NodeCanvas::DialogueTrees::SubtitlesRequestInfo* info; // 0x38
		::UnityEngine::AudioClip* _audio_5__3; // 0x40
		::NodeCanvas::DialogueTrees::UI::Examples::DialogueUGUI* __4__this; // 0x48
		::System::Char _c_5__8; // 0x50
		::System::Byte _padding0[0x2];
		::System::Int32 __1__state; // 0x54
		::System::Single _timer_5__5; // 0x58
		::System::Int32 _i_5__7; // 0x5C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__INTERNAL_ONSUBTITLESREQUESTINFO_D__25__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__INTERNAL_ONSUBTITLESREQUESTINFO_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__INTERNAL_ONSUBTITLESREQUESTINFO_D__25_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__INTERNAL_ONSUBTITLESREQUESTINFO_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__INTERNAL_ONSUBTITLESREQUESTINFO_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__INTERNAL_ONSUBTITLESREQUESTINFO_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
