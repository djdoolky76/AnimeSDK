#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class FieldInfo; }

#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_F5628F8349D4A8A6_A7DED07294310C98_OFFSET UNITYSDK_OFFSET(0x403C0D0)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x403C4A0)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeComponent_F5628F8349D4A8A6_TypeDefinitionIndex = 20362;

	class VolumeComponent_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::VolumeComponent_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::UnityEngine::Rendering::VolumeComponent_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(VolumeComponent_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Int32>** StaticGet_AD569E9A79F860BB()
		{
			return (::System::Func_2<::System::Reflection::FieldInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(VolumeComponent_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Int32 A7DED07294310C98(::System::Reflection::FieldInfo* BBCFEC7DB309E927)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_F5628F8349D4A8A6_A7DED07294310C98_OFFSET))(this, BBCFEC7DB309E927);
		}
	};
}
