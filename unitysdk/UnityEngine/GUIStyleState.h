#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

namespace UnityEngine { class GUIStyle; }

#define UNITYENGINE_GUISTYLESTATE_CLEANUP_OFFSET UNITYSDK_OFFSET(0x41985A0)
#define UNITYENGINE_GUISTYLESTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x41985E0)
#define UNITYENGINE_GUISTYLESTATE_GETGUISTYLESTATE_OFFSET UNITYSDK_OFFSET(0x4198670)
#define UNITYENGINE_GUISTYLESTATE_INIT_OFFSET UNITYSDK_OFFSET(0x41986F0)
#define UNITYENGINE_GUISTYLESTATE_SET_TEXTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x4198760)
#define UNITYENGINE_GUISTYLESTATE_SET_TEXTCOLOR_OFFSET UNITYSDK_OFFSET(0x41987B0)
#define UNITYENGINE_GUISTYLESTATE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x413D0E0)
#define UNITYENGINE_GUISTYLESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x4198720)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIStyleState_TypeDefinitionIndex = 20098;

	class GUIStyleState : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10
		::UnityEngine::GUIStyle* m_SourceStyle; // 0x18

		static ::System::IntPtr Init()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE_INIT_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE__CTOR_OFFSET))(this);
		}

		::System::Void set_textColor(::UnityEngine::E46B881AA2636190 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::E46B881AA2636190))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE_SET_TEXTCOLOR_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor_1(::UnityEngine::GUIStyle* B28B39886E9F3E63, ::System::IntPtr AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE__CTOR_1_OFFSET))(this, B28B39886E9F3E63, AFE8F10692F5139F);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE_FINALIZE_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE_CLEANUP_OFFSET))(this);
		}

		::System::Void set_textColor_Injected(::UnityEngine::E46B881AA2636190& E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::E46B881AA2636190&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE_SET_TEXTCOLOR_INJECTED_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::UnityEngine::GUIStyleState* GetGUIStyleState(::UnityEngine::GUIStyle* B28B39886E9F3E63, ::System::IntPtr AFE8F10692F5139F)
		{
			return ((::UnityEngine::GUIStyleState*(*)(::UnityEngine::GUIStyle*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLESTATE_GETGUISTYLESTATE_OFFSET))(B28B39886E9F3E63, AFE8F10692F5139F);
		}
	};
}
