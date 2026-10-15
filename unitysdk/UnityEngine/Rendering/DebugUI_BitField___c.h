#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GUIContent; }

#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F28F7E0)
#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F28F820)
#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD___C__SET_ENUMTYPE_B__10_0_OFFSET UNITYSDK_OFFSET(0x1F28F830)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_BitField___c_TypeDefinitionIndex = 35538;

	class DebugUI_BitField___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::UnityEngine::GUIContent*>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::GUIContent*>**)UnitySDK::FromName("UnityEngine.Rendering", "<>c")->GetStaticField(0x5A6A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.Rendering", "<>c")->GetStaticField(0x5A6A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD___C_CTOR_OFFSET))(this);
		}

		::UnityEngine::GUIContent* _set_enumType_b__10_0(::System::String* a1)
		{
			return ((::UnityEngine::GUIContent*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD___C__SET_ENUMTYPE_B__10_0_OFFSET))(this, a1);
		}

	};
}
