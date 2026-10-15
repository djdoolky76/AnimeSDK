#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine::Rendering { class DebugManager; }

#define UNITYENGINE_RENDERING_DEBUGMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2B9E40)
#define UNITYENGINE_RENDERING_DEBUGMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2B9E70)
#define UNITYENGINE_RENDERING_DEBUGMANAGER___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1F2B9EA0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER___C___CTOR_B__51_0_OFFSET UNITYSDK_OFFSET(0x1F2B9E80)
#define UNITYENGINE_RENDERING_DEBUGMANAGER___C___CTOR_B__51_1_OFFSET UNITYSDK_OFFSET(0x1F2B9E90)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugManager___c_TypeDefinitionIndex = 35517;

	class DebugManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.Rendering", "<>c")->GetStaticField(0x47770);
		}

		static ::System::Action** StaticGet___9__51_1()
		{
			return (::System::Action**)UnitySDK::FromName("UnityEngine.Rendering", "<>c")->GetStaticField(0x47778);
		}

		static ::System::Action** StaticGet___9__51_0()
		{
			return (::System::Action**)UnitySDK::FromName("UnityEngine.Rendering", "<>c")->GetStaticField(0x47780);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__51_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER___C___CTOR_B__51_0_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__51_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER___C___CTOR_B__51_1_OFFSET))(this);
		}

		::UnityEngine::Rendering::DebugManager* __cctor_b__68_0()
		{
			return ((::UnityEngine::Rendering::DebugManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
}
