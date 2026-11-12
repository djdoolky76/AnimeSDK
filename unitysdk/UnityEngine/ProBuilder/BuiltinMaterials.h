#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }

#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_CCTOR_OFFSET UNITYSDK_OFFSET(0x2044A940)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GETDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x20449E20)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GETLEGACYDIFFUSE_OFFSET UNITYSDK_OFFSET(0x2044A570)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_COLLIDERMATERIAL_OFFSET UNITYSDK_OFFSET(0x2044A3D0)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_DEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x2044A120)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_EDGEPICKERMATERIAL_OFFSET UNITYSDK_OFFSET(0x2044A2A0)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_FACEPICKERMATERIAL_OFFSET UNITYSDK_OFFSET(0x2044A1E0)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_GEOMETRYSHADERSSUPPORTED_OFFSET UNITYSDK_OFFSET(0x2044A0C0)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_NODRAWMATERIAL_OFFSET UNITYSDK_OFFSET(0x2044A4A0)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_SELECTIONPICKERSHADER_OFFSET UNITYSDK_OFFSET(0x2044A180)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_SHAPEPREVIEWMATERIAL_OFFSET UNITYSDK_OFFSET(0x2044A8E0)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_TRIGGERMATERIAL_OFFSET UNITYSDK_OFFSET(0x2044A300)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_UNLITVERTEXCOLOR_OFFSET UNITYSDK_OFFSET(0x2044A880)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_VERTEXPICKERMATERIAL_OFFSET UNITYSDK_OFFSET(0x2044A240)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_INIT_OFFSET UNITYSDK_OFFSET(0x20449570)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int BuiltinMaterials_TypeDefinitionIndex = 45415;

	class BuiltinMaterials : public ::System::Object
	{
	public:
		static ::UnityEngine::Material** StaticGet_s_ShapePreviewMaterial()
		{
			return (::UnityEngine::Material**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x66140);
		}

		static ::UnityEngine::Material** StaticGet_s_UnityDefaultDiffuse()
		{
			return (::UnityEngine::Material**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x66148);
		}

		static ::System::String** StaticGet_k_EdgePickerShader()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x66150);
		}

		static ::UnityEngine::Material** StaticGet_s_UnlitVertexColorMaterial()
		{
			return (::UnityEngine::Material**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x66158);
		}

		static ::UnityEngine::Material** StaticGet_s_VertexPickerMaterial()
		{
			return (::UnityEngine::Material**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x66160);
		}

		static ::UnityEngine::Shader** StaticGet_s_SelectionPickerShader()
		{
			return (::UnityEngine::Shader**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x66168);
		}

		static ::System::String** StaticGet_k_VertexPickerMaterial()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x66170);
		}

		static ::System::String** StaticGet_k_VertexPickerShader()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x66178);
		}

		static ::System::String** StaticGet_k_FacePickerMaterial()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x66180);
		}

		static ::System::String** StaticGet_k_FacePickerShader()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x66188);
		}

		static ::System::String** StaticGet_k_EdgePickerMaterial()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x66190);
		}

		static ::UnityEngine::Material** StaticGet_s_FacePickerMaterial()
		{
			return (::UnityEngine::Material**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x66198);
		}

		static ::UnityEngine::Material** StaticGet_s_EdgePickerMaterial()
		{
			return (::UnityEngine::Material**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x661A0);
		}

		static ::UnityEngine::Material** StaticGet_s_DefaultMaterial()
		{
			return (::UnityEngine::Material**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x661A8);
		}

		static ::System::Boolean* StaticGet_s_GeometryShadersSupported()
		{
			return (::System::Boolean*)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x147B0);
		}

		static ::System::Boolean* StaticGet_s_IsInitialized()
		{
			return (::System::Boolean*)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x147B1);
		}

		static ::UnityEngine::Color* StaticGet_previewColor()
		{
			return (::UnityEngine::Color*)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x147B4);
		}

		// static const ::System::String* faceShader; // 0x0
		// static const ::System::String* lineShader; // 0x0
		// static const ::System::String* lineShaderMetal; // 0x0
		// static const ::System::String* pointShader; // 0x0
		// static const ::System::String* wireShader; // 0x0
		// static const ::System::String* dotShader; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_CCTOR_OFFSET))();
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_INIT_OFFSET))();
		}

		static ::System::Boolean get_geometryShadersSupported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_GEOMETRYSHADERSSUPPORTED_OFFSET))();
		}

		static ::UnityEngine::Material* get_defaultMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_DEFAULTMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Shader* get_selectionPickerShader()
		{
			return ((::UnityEngine::Shader*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_SELECTIONPICKERSHADER_OFFSET))();
		}

		static ::UnityEngine::Material* get_facePickerMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_FACEPICKERMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* get_vertexPickerMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_VERTEXPICKERMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* get_edgePickerMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_EDGEPICKERMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* get_triggerMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_TRIGGERMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* get_colliderMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_COLLIDERMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* get_noDrawMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_NODRAWMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* GetLegacyDiffuse()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GETLEGACYDIFFUSE_OFFSET))();
		}

		static ::UnityEngine::Material* GetDefaultMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GETDEFAULTMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* get_unlitVertexColor()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_UNLITVERTEXCOLOR_OFFSET))();
		}

		static ::UnityEngine::Material* get_ShapePreviewMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_SHAPEPREVIEWMATERIAL_OFFSET))();
		}

	};
}
