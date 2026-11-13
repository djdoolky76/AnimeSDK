#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class FieldInfo; }

#define UNITYENGINE_RENDERING_VOLUMECOMPONENT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F665150)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F665180)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT___C__ONENABLE_B__10_0_OFFSET UNITYSDK_OFFSET(0x1F665190)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT___C__ONENABLE_B__10_1_OFFSET UNITYSDK_OFFSET(0x1F6652C0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeComponent___c_TypeDefinitionIndex = 36546;

	class VolumeComponent___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.Rendering", "<>c")->GetStaticField(0x62AB0);
		}

		static ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>**)UnitySDK::FromName("UnityEngine.Rendering", "<>c")->GetStaticField(0x62AB8);
		}

		static ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Int32>** StaticGet___9__10_1()
		{
			return (::System::Func_2<::System::Reflection::FieldInfo*, ::System::Int32>**)UnitySDK::FromName("UnityEngine.Rendering", "<>c")->GetStaticField(0x62AC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _OnEnable_b__10_0(::System::Reflection::FieldInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT___C__ONENABLE_B__10_0_OFFSET))(this, a1);
		}

		::System::Int32 _OnEnable_b__10_1(::System::Reflection::FieldInfo* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT___C__ONENABLE_B__10_1_OFFSET))(this, a1);
		}

	};
}
