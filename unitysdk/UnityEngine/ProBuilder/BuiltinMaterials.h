#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }

#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_CCTOR_OFFSET UNITYSDK_OFFSET(0xD684150)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GETDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0xD683630)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GETLEGACYDIFFUSE_OFFSET UNITYSDK_OFFSET(0xD683D80)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_COLLIDERMATERIAL_OFFSET UNITYSDK_OFFSET(0xD683BE0)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_DEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0xD683930)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_EDGEPICKERMATERIAL_OFFSET UNITYSDK_OFFSET(0xD683AB0)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_FACEPICKERMATERIAL_OFFSET UNITYSDK_OFFSET(0xD6839F0)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_GEOMETRYSHADERSSUPPORTED_OFFSET UNITYSDK_OFFSET(0xD6838D0)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_NODRAWMATERIAL_OFFSET UNITYSDK_OFFSET(0xD683CB0)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_SELECTIONPICKERSHADER_OFFSET UNITYSDK_OFFSET(0xD683990)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_SHAPEPREVIEWMATERIAL_OFFSET UNITYSDK_OFFSET(0xD6840F0)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_TRIGGERMATERIAL_OFFSET UNITYSDK_OFFSET(0xD683B10)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_UNLITVERTEXCOLOR_OFFSET UNITYSDK_OFFSET(0xD684090)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_VERTEXPICKERMATERIAL_OFFSET UNITYSDK_OFFSET(0xD683A50)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_INIT_OFFSET UNITYSDK_OFFSET(0xD682D80)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int BuiltinMaterials_TypeDefinitionIndex = 45415;

	class BuiltinMaterials : public ::System::Object
	{
	public:
		static ::UnityEngine::Material** StaticGet_s_ShapePreviewMaterial()
		{
			return (::UnityEngine::Material**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x62310);
		}

		static ::UnityEngine::Shader** StaticGet_s_SelectionPickerShader()
		{
			return (::UnityEngine::Shader**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x62318);
		}

		static ::System::String** StaticGet_k_VertexPickerMaterial()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x62320);
		}

		static ::UnityEngine::Material** StaticGet_s_UnityDefaultDiffuse()
		{
			return (::UnityEngine::Material**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x62328);
		}

		static ::System::String** StaticGet_k_EdgePickerMaterial()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x62330);
		}

		static ::System::String** StaticGet_k_FacePickerMaterial()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x62338);
		}

		static ::UnityEngine::Material** StaticGet_s_FacePickerMaterial()
		{
			return (::UnityEngine::Material**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x62340);
		}

		static ::System::String** StaticGet_k_FacePickerShader()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x62348);
		}

		static ::System::String** StaticGet_k_EdgePickerShader()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x62350);
		}

		static ::UnityEngine::Material** StaticGet_s_EdgePickerMaterial()
		{
			return (::UnityEngine::Material**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x62358);
		}

		static ::System::String** StaticGet_k_VertexPickerShader()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x62360);
		}

		static ::UnityEngine::Material** StaticGet_s_VertexPickerMaterial()
		{
			return (::UnityEngine::Material**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x62368);
		}

		static ::UnityEngine::Material** StaticGet_s_UnlitVertexColorMaterial()
		{
			return (::UnityEngine::Material**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x62370);
		}

		static ::UnityEngine::Material** StaticGet_s_DefaultMaterial()
		{
			return (::UnityEngine::Material**)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x62378);
		}

		static ::UnityEngine::Color* StaticGet_previewColor()
		{
			return (::UnityEngine::Color*)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x14260);
		}

		static ::System::Boolean* StaticGet_s_IsInitialized()
		{
			return (::System::Boolean*)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x14270);
		}

		static ::System::Boolean* StaticGet_s_GeometryShadersSupported()
		{
			return (::System::Boolean*)UnitySDK::FromName("UnityEngine.ProBuilder", "BuiltinMaterials")->GetStaticField(0x14271);
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
