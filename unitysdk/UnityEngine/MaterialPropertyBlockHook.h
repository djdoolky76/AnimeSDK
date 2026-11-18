#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define UNITYENGINE_MATERIALPROPERTYBLOCKHOOK_INVOKE_ONHOOKMATERIALPROPERTYBLOCKSETCOLOR_OFFSET UNITYSDK_OFFSET(0x1ECA1E40)
#define UNITYENGINE_MATERIALPROPERTYBLOCKHOOK_INVOKE_ONHOOKMATERIALPROPERTYBLOCKSETCONSTANTBUFFER_OFFSET UNITYSDK_OFFSET(0x1ECA1CC0)
#define UNITYENGINE_MATERIALPROPERTYBLOCKHOOK_INVOKE_ONHOOKMATERIALPROPERTYBLOCKSETFLOAT_OFFSET UNITYSDK_OFFSET(0x1ECA1D40)
#define UNITYENGINE_MATERIALPROPERTYBLOCKHOOK_INVOKE_ONHOOKMATERIALPROPERTYBLOCKSETVECTOR_OFFSET UNITYSDK_OFFSET(0x1ECA1DC0)
#define UNITYENGINE_MATERIALPROPERTYBLOCKHOOK__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECA1EC0)

namespace UnityEngine
{
	inline static constexpr unsigned int MaterialPropertyBlockHook_TypeDefinitionIndex = 5350;

	class MaterialPropertyBlockHook : public ::System::Object
	{
	public:
		static ::System::Action_4<::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::UnityEngine::Vector2>** StaticGet_onHookSetConstantBuffer()
		{
			return (::System::Action_4<::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyBlockHook_TypeDefinitionIndex)->GetStaticField(0x5420);
		}
		static ::System::Action_3<::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Vector4>** StaticGet_onHookSetVector()
		{
			return (::System::Action_3<::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyBlockHook_TypeDefinitionIndex)->GetStaticField(0x5428);
		}
		static ::System::Action_3<::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Color>** StaticGet_onHookSetColor()
		{
			return (::System::Action_3<::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyBlockHook_TypeDefinitionIndex)->GetStaticField(0x5430);
		}
		static ::System::Action_3<::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::System::Single>** StaticGet_onHookSetFloat()
		{
			return (::System::Action_3<::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyBlockHook_TypeDefinitionIndex)->GetStaticField(0x5438);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCKHOOK__CTOR_OFFSET))(this);
		}

		static ::System::Void invoke_onHookMaterialPropertyBlockSetConstantBuffer(::UnityEngine::MaterialPropertyBlock* block, ::System::Int32 nameId, ::UnityEngine::ComputeBuffer* value, ::UnityEngine::Vector2 offsetAndSize)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCKHOOK_INVOKE_ONHOOKMATERIALPROPERTYBLOCKSETCONSTANTBUFFER_OFFSET))(block, nameId, value, offsetAndSize);
		}

		static ::System::Void invoke_onHookMaterialPropertyBlockSetFloat(::UnityEngine::MaterialPropertyBlock* block, ::System::Int32 nameId, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCKHOOK_INVOKE_ONHOOKMATERIALPROPERTYBLOCKSETFLOAT_OFFSET))(block, nameId, value);
		}

		static ::System::Void invoke_onHookMaterialPropertyBlockSetVector(::UnityEngine::MaterialPropertyBlock* block, ::System::Int32 nameId, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCKHOOK_INVOKE_ONHOOKMATERIALPROPERTYBLOCKSETVECTOR_OFFSET))(block, nameId, value);
		}

		static ::System::Void invoke_onHookMaterialPropertyBlockSetColor(::UnityEngine::MaterialPropertyBlock* block, ::System::Int32 nameId, ::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCKHOOK_INVOKE_ONHOOKMATERIALPROPERTYBLOCKSETCOLOR_OFFSET))(block, nameId, value);
		}
	};
}
