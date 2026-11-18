#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextEditor_DblClickSnapping.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class GUIStyle; }
namespace UnityEngine { class TouchScreenKeyboard; }

#define UNITYENGINE_TEXTEDITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6F8AF0)

namespace UnityEngine
{
	inline static constexpr unsigned int TextEditor_TypeDefinitionIndex = 6443;

	class TextEditor : public ::System::Object
	{
	public:
		::UnityEngine::TouchScreenKeyboard* keyboardOnScreen; // 0x10
		::System::Int32 controlID; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::GUIStyle* style; // 0x20
		::System::Boolean multiline; // 0x28
		::System::Boolean hasHorizontalCursorPos; // 0x29
		::System::Boolean isPasswordField; // 0x2A
		::System::Byte _padding1[0x1];
		::UnityEngine::Vector2 scrollOffset; // 0x2C
		::System::Byte _padding2[0x4];
		::UnityEngine::GUIContent* m_Content; // 0x38
		::System::Int32 m_CursorIndex; // 0x40
		::System::Int32 m_SelectIndex; // 0x44
		::System::Boolean m_RevealCursor; // 0x48
		::System::Boolean m_MouseDragSelectsWholeWords; // 0x49
		::System::Byte _padding3[0x2];
		::System::Int32 m_DblClickInitPos; // 0x4C
		::UnityEngine::TextEditor_DblClickSnapping m_DblClickSnap; // 0x50
		::System::Boolean m_bJustSelected; // 0x51
		::System::Byte _padding4[0x2];
		::System::Int32 m_iAltCursorPos; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR__CTOR_OFFSET))(this);
		}
	};
}
