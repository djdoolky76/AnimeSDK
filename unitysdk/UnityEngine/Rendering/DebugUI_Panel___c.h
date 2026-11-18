#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Rendering { class DebugUI_Panel; }

#define UNITYENGINE_RENDERING_DEBUGUI_PANEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D07AB90)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D07ABD0)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL___C___CTOR_B__29_0_OFFSET UNITYSDK_OFFSET(0x1D07ABE0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_Panel___c_TypeDefinitionIndex = 17853;

	class DebugUI_Panel___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet___9__29_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(DebugUI_Panel___c_TypeDefinitionIndex)->GetStaticField(0x7B80);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DebugUI_Panel___c_TypeDefinitionIndex)->GetStaticField(0x7B88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__29_0(::UnityEngine::Rendering::DebugUI_Panel* _p0_)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Panel*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL___C___CTOR_B__29_0_OFFSET))(this, _p0_);
		}
	};
}
