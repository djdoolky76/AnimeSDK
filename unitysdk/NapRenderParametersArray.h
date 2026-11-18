#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ArrayPropertyData.h"
#include "unitysdk/ArrayPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ForwardRendererData_ShaderFeature.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAPRENDERPARAMETERSARRAY_GETPROPERTYARRAYSIZE_OFFSET UNITYSDK_OFFSET(0x1CA323D0)
#define NAPRENDERPARAMETERSARRAY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA32430)

inline static constexpr unsigned int NapRenderParametersArray_TypeDefinitionIndex = 26537;

class NapRenderParametersArray : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::ArrayPropertyType, ::System::String*>>** StaticGet_vectorLayout()
	{
		return (::System::Collections::Generic::List_1<::System::ValueTuple_2<::ArrayPropertyType, ::System::String*>>**)Il2CppClass::FromTypeDefinitionIndex(NapRenderParametersArray_TypeDefinitionIndex)->GetStaticField(0x22F90);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::ArrayPropertyData>** StaticGet_propertyIDDict()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::ArrayPropertyData>**)Il2CppClass::FromTypeDefinitionIndex(NapRenderParametersArray_TypeDefinitionIndex)->GetStaticField(0x22F98);
	}
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_floatLayout()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NapRenderParametersArray_TypeDefinitionIndex)->GetStaticField(0x22FA0);
	}
	static ::System::Boolean* StaticGet_logOnSetArrayPropertyFromExt()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderParametersArray_TypeDefinitionIndex)->GetStaticField(0x5380);
	}
	static ::System::Int32* StaticGet_vectorArrayLength()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapRenderParametersArray_TypeDefinitionIndex)->GetStaticField(0x5384);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPRENDERPARAMETERSARRAY__CCTOR_OFFSET))();
	}

	static ::System::Int32 GetPropertyArraySize(::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderFeature shaderFeature)
	{
		return ((::System::Int32(*)(::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderFeature))((::PBYTE)hIl2Cpp + NAPRENDERPARAMETERSARRAY_GETPROPERTYARRAYSIZE_OFFSET))(shaderFeature);
	}
};
