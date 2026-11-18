#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Coffee/UIExtensions/AnimatableProperty_ShaderPropertyType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_GET_ID_OFFSET UNITYSDK_OFFSET(0x1E1DB560)
#define COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_GET_ISHDRCOLOR_OFFSET UNITYSDK_OFFSET(0x1E1DB580)
#define COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E1DB590)
#define COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_SET_ID_OFFSET UNITYSDK_OFFSET(0x1E1DB570)
#define COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E1DB790)
#define COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E1DB5A0)
#define COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_UPDATEMATERIALPROPERTIESTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1E1DB7E0)
#define COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_UPDATEMATERIALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E1DBC50)
#define COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1DC1F0)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int AnimatableProperty_TypeDefinitionIndex = 34398;

	class AnimatableProperty : public ::System::Object
	{
	public:
		::System::String* m_Name; // 0x10
		::Coffee::UIExtensions::AnimatableProperty_ShaderPropertyType m_Type; // 0x18
		::System::Boolean m_IsHDRColor; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Int32 _id_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Int32 get_id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_GET_ID_OFFSET))(this);
		}

		::System::Void set_id(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_SET_ID_OFFSET))(this, value);
		}

		::System::Boolean get_isHDRColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_GET_ISHDRCOLOR_OFFSET))(this);
		}

		::Coffee::UIExtensions::AnimatableProperty_ShaderPropertyType get_type()
		{
			return ((::Coffee::UIExtensions::AnimatableProperty_ShaderPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_GET_TYPE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void UpdateMaterialPropertiesThreadSafe(::System::Int32 materialInstanceId, ::System::Int32 rendererInstanceId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_UPDATEMATERIALPROPERTIESTHREADSAFE_OFFSET))(this, materialInstanceId, rendererInstanceId);
		}

		::System::Void UpdateMaterialProperties(::UnityEngine::Material* material, ::UnityEngine::MaterialPropertyBlock* mpb)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_UPDATEMATERIALPROPERTIES_OFFSET))(this, material, mpb);
		}
	};
}
