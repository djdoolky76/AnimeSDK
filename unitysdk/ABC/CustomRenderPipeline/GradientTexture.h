#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

namespace UnityEngine { class B196ACFA9D2AE729; }
namespace UnityEngine { class Texture2D; }

#define ABC_CUSTOMRENDERPIPELINE_GRADIENTTEXTURE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x2830D40)
#define ABC_CUSTOMRENDERPIPELINE_GRADIENTTEXTURE_UPDATEGRADIENTTEXTURE_OFFSET UNITYSDK_OFFSET(0x2830F30)
#define ABC_CUSTOMRENDERPIPELINE_GRADIENTTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x2831050)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int GradientTexture_TypeDefinitionIndex = 16942;

	class GradientTexture : public ::System::Object
	{
	public:
		::UnityEngine::B196ACFA9D2AE729* gradient; // 0x10
		::UnityEngine::Texture2D* Tex; // 0x18
		::System::Boolean isDirty; // 0x20
		::System::Byte _padding0[0x7];
		::Il2CppArray<::UnityEngine::E46B881AA2636190>* _tempColorArrayForGradientTex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_GRADIENTTEXTURE__CTOR_OFFSET))(this);
		}

		::System::Void Evaluate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_GRADIENTTEXTURE_EVALUATE_OFFSET))(this);
		}

		::System::Void UpdateGradientTexture(::System::Boolean ED663A2DE16B068C)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_GRADIENTTEXTURE_UPDATEGRADIENTTEXTURE_OFFSET))(this, ED663A2DE16B068C);
		}
	};
}
