#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapGradientAlphaKey.h"
#include "unitysdk/NapGradientColorKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GradientMode.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define NAPGRADIENT_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15F4D050)
#define NAPGRADIENT_GET_HDR_OFFSET UNITYSDK_OFFSET(0x15F4D030)
#define NAPGRADIENT_RENDER_OFFSET UNITYSDK_OFFSET(0x15F4D7E0)
#define NAPGRADIENT_SET_HDR_OFFSET UNITYSDK_OFFSET(0x15F4D040)
#define NAPGRADIENT_VALIDATION_OFFSET UNITYSDK_OFFSET(0x15F4D730)
#define NAPGRADIENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F4E760)
#define NAPGRADIENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15F4E620)
#define NAPGRADIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F4E220)

inline static constexpr unsigned int NapGradient_TypeDefinitionIndex = 66519;

class NapGradient : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Vector4>** StaticGet_alphas()
	{
		return (::Il2CppArray<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(NapGradient_TypeDefinitionIndex)->GetStaticField(0x3F820);
	}
	static ::Il2CppArray<::UnityEngine::Vector4>** StaticGet_colors()
	{
		return (::Il2CppArray<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(NapGradient_TypeDefinitionIndex)->GetStaticField(0x3F828);
	}
	static ::System::Int32* StaticGet__ColorKeyCount()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapGradient_TypeDefinitionIndex)->GetStaticField(0xEAC0);
	}
	static ::System::Int32* StaticGet__Offset()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapGradient_TypeDefinitionIndex)->GetStaticField(0xEAC4);
	}
	static ::System::Int32* StaticGet__Mode()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapGradient_TypeDefinitionIndex)->GetStaticField(0xEAC8);
	}
	static ::System::Int32* StaticGet__Scale()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapGradient_TypeDefinitionIndex)->GetStaticField(0xEACC);
	}
	static ::System::Int32* StaticGet__AlphaKeys()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapGradient_TypeDefinitionIndex)->GetStaticField(0xEAD0);
	}
	static ::System::Int32* StaticGet__ColorKeys()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapGradient_TypeDefinitionIndex)->GetStaticField(0xEAD4);
	}
	static ::System::Int32* StaticGet__AlphaKeyCount()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapGradient_TypeDefinitionIndex)->GetStaticField(0xEAD8);
	}
	::System::Collections::Generic::List_1<::NapGradientColorKey>* colorKeys; // 0x10
	::System::Collections::Generic::List_1<::NapGradientAlphaKey>* alphaKeys; // 0x18
	::UnityEngine::GradientMode mode; // 0x20
	::System::Boolean _HDR_k__BackingField; // 0x24
	::System::Byte _padding0[0x3];
	::UnityEngine::Material* _material; // 0x28

	::System::Void _ctor(::UnityEngine::Gradient* gradient)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + NAPGRADIENT__CTOR_OFFSET))(this, gradient);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPGRADIENT__CTOR_1_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPGRADIENT__CCTOR_OFFSET))();
	}

	::System::Boolean get_HDR()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPGRADIENT_GET_HDR_OFFSET))(this);
	}

	::System::Void set_HDR(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPGRADIENT_SET_HDR_OFFSET))(this, value);
	}

	::UnityEngine::Color Evaluate(::System::Single time)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPGRADIENT_EVALUATE_OFFSET))(this, time);
	}

	::System::Void Validation()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPGRADIENT_VALIDATION_OFFSET))(this);
	}

	::System::Void Render(::UnityEngine::RenderTexture* renderTexture, ::System::Single clipMin, ::System::Single clipMax, ::UnityEngine::Rendering::CommandBuffer* cmd)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::System::Single, ::System::Single, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + NAPGRADIENT_RENDER_OFFSET))(this, renderTexture, clipMin, clipMax, cmd);
	}
};
