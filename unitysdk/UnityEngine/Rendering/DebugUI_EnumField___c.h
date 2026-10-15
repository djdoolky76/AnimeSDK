#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GUIContent; }

#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2BFFC0)
#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2C0000)
#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD___C__INITQUICKSEPARATORS_B__17_0_OFFSET UNITYSDK_OFFSET(0x1F2C0070)
#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD___C__SET_AUTOENUM_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F2C0010)

namespace UnityEngine::Rendering
{
	class DebugUI_EnumField___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.Rendering", "<>c")->GetStaticField(0x47EF0);
		}

		static ::System::Func_2<::System::String*, ::UnityEngine::GUIContent*>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::GUIContent*>**)UnitySDK::FromName("UnityEngine.Rendering", "<>c")->GetStaticField(0x47EF8);
		}

		static ::System::Func_2<::UnityEngine::GUIContent*, ::System::String*>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::UnityEngine::GUIContent*, ::System::String*>**)UnitySDK::FromName("UnityEngine.Rendering", "<>c")->GetStaticField(0x47F00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD___C_CTOR_OFFSET))(this);
		}

		::UnityEngine::GUIContent* _set_autoEnum_b__16_0(::System::String* a1)
		{
			return ((::UnityEngine::GUIContent*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD___C__SET_AUTOENUM_B__16_0_OFFSET))(this, a1);
		}

		::System::String* _InitQuickSeparators_b__17_0(::UnityEngine::GUIContent* a1)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::GUIContent*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD___C__INITQUICKSEPARATORS_B__17_0_OFFSET))(this, a1);
		}

	};
}
