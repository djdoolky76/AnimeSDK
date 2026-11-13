#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/ShaderPropertyType.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Rendering/ShaderKeyword.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class String; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_SHADER_CACHESHADERHOTRELOADCOMMAND_OFFSET UNITYSDK_OFFSET(0x1F52F630)
#define UNITYENGINE_SHADER_CHECKPROPERTYINDEX_OFFSET UNITYSDK_OFFSET(0x1F52F9A0)
#define UNITYENGINE_SHADER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F52F900)
#define UNITYENGINE_SHADER_DISABLEKEYWORDBYKEYWORD_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F52F390)
#define UNITYENGINE_SHADER_DISABLEKEYWORDBYKEYWORD_OFFSET UNITYSDK_OFFSET(0x1F52F370)
#define UNITYENGINE_SHADER_DISABLEKEYWORD_1_OFFSET UNITYSDK_OFFSET(0x1F52F3F0)
#define UNITYENGINE_SHADER_DISABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1F52F320)
#define UNITYENGINE_SHADER_ENABLEKEYWORDBYKEYWORD_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F52F360)
#define UNITYENGINE_SHADER_ENABLEKEYWORDBYKEYWORD_OFFSET UNITYSDK_OFFSET(0x1F52F340)
#define UNITYENGINE_SHADER_ENABLEKEYWORD_1_OFFSET UNITYSDK_OFFSET(0x1F52F3D0)
#define UNITYENGINE_SHADER_ENABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1F52F310)
#define UNITYENGINE_SHADER_FINDPASSTAGVALUE_OFFSET UNITYSDK_OFFSET(0x1F52F470)
#define UNITYENGINE_SHADER_FIND_OFFSET UNITYSDK_OFFSET(0x1F52F2E0)
#define UNITYENGINE_SHADER_GETGLOBALFLOATIMPL_OFFSET UNITYSDK_OFFSET(0x1F52F5C0)
#define UNITYENGINE_SHADER_GETGLOBALFLOAT_OFFSET UNITYSDK_OFFSET(0x1F52F870)
#define UNITYENGINE_SHADER_GETGLOBALTEXTUREIMPL_OFFSET UNITYSDK_OFFSET(0x1F52F610)
#define UNITYENGINE_SHADER_GETGLOBALTEXTURE_OFFSET UNITYSDK_OFFSET(0x1F52F8F0)
#define UNITYENGINE_SHADER_GETGLOBALVECTORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F52F600)
#define UNITYENGINE_SHADER_GETGLOBALVECTORIMPL_OFFSET UNITYSDK_OFFSET(0x1F52F5D0)
#define UNITYENGINE_SHADER_GETGLOBALVECTOR_1_OFFSET UNITYSDK_OFFSET(0x1F52F8C0)
#define UNITYENGINE_SHADER_GETGLOBALVECTOR_OFFSET UNITYSDK_OFFSET(0x1F52F880)
#define UNITYENGINE_SHADER_GETPASSTAGID_OFFSET UNITYSDK_OFFSET(0x1F52F2C0)
#define UNITYENGINE_SHADER_GETPROPERTYCOUNT_OFFSET UNITYSDK_OFFSET(0x1F52FA20)
#define UNITYENGINE_SHADER_GETPROPERTYDEFAULTVALUE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F52F980)
#define UNITYENGINE_SHADER_GETPROPERTYDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1F52F940)
#define UNITYENGINE_SHADER_GETPROPERTYNAMEID_1_OFFSET UNITYSDK_OFFSET(0x1F52FAC0)
#define UNITYENGINE_SHADER_GETPROPERTYNAMEID_OFFSET UNITYSDK_OFFSET(0x1F52F920)
#define UNITYENGINE_SHADER_GETPROPERTYNAME_1_OFFSET UNITYSDK_OFFSET(0x1F52FA30)
#define UNITYENGINE_SHADER_GETPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1F52F910)
#define UNITYENGINE_SHADER_GETPROPERTYRANGELIMITS_OFFSET UNITYSDK_OFFSET(0x1F52FBE0)
#define UNITYENGINE_SHADER_GETPROPERTYTEXTUREDIMENSION_1_OFFSET UNITYSDK_OFFSET(0x1F52FD70)
#define UNITYENGINE_SHADER_GETPROPERTYTEXTUREDIMENSION_OFFSET UNITYSDK_OFFSET(0x1F52F990)
#define UNITYENGINE_SHADER_GETPROPERTYTYPE_1_OFFSET UNITYSDK_OFFSET(0x1F52FB50)
#define UNITYENGINE_SHADER_GETPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1F52F930)
#define UNITYENGINE_SHADER_GETSHADERPASSTAGID_OFFSET UNITYSDK_OFFSET(0x1F52F2D0)
#define UNITYENGINE_SHADER_GETSHADERSIZEINFOIMPL_OFFSET UNITYSDK_OFFSET(0x1F52F540)
#define UNITYENGINE_SHADER_GETSHADERSIZEINFO_1_OFFSET UNITYSDK_OFFSET(0x1F52F520)
#define UNITYENGINE_SHADER_GETSHADERSIZEINFO_OFFSET UNITYSDK_OFFSET(0x1F52F510)
#define UNITYENGINE_SHADER_GET_ISSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1F52F2F0)
#define UNITYENGINE_SHADER_GET_PASSCOUNT_OFFSET UNITYSDK_OFFSET(0x1F52F460)
#define UNITYENGINE_SHADER_IDTOTAG_OFFSET UNITYSDK_OFFSET(0x1F52A900)
#define UNITYENGINE_SHADER_INTERNAL_FINDPASSTAGVALUE_OFFSET UNITYSDK_OFFSET(0x1F52F500)
#define UNITYENGINE_SHADER_ISKEYWORDENABLEDBYKEYWORD_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F52F3C0)
#define UNITYENGINE_SHADER_ISKEYWORDENABLEDBYKEYWORD_OFFSET UNITYSDK_OFFSET(0x1F52F3A0)
#define UNITYENGINE_SHADER_ISKEYWORDENABLED_1_OFFSET UNITYSDK_OFFSET(0x1F52F410)
#define UNITYENGINE_SHADER_ISKEYWORDENABLED_OFFSET UNITYSDK_OFFSET(0x1F52F330)
#define UNITYENGINE_SHADER_LOADBUILTBYTES_OFFSET UNITYSDK_OFFSET(0x1F52F620)
#define UNITYENGINE_SHADER_NAMETOKEYWORD_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F52F450)
#define UNITYENGINE_SHADER_NAMETOKEYWORD_OFFSET UNITYSDK_OFFSET(0x1F52F430)
#define UNITYENGINE_SHADER_PROPERTYTOID_OFFSET UNITYSDK_OFFSET(0x1F523E00)
#define UNITYENGINE_SHADER_SETGLOBALBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0x1F52F5B0)
#define UNITYENGINE_SHADER_SETGLOBALBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1F52F860)
#define UNITYENGINE_SHADER_SETGLOBALBUFFER_OFFSET UNITYSDK_OFFSET(0x1F52F830)
#define UNITYENGINE_SHADER_SETGLOBALCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1F52F740)
#define UNITYENGINE_SHADER_SETGLOBALCOLOR_OFFSET UNITYSDK_OFFSET(0x1F52F710)
#define UNITYENGINE_SHADER_SETGLOBALFLOATIMPL_OFFSET UNITYSDK_OFFSET(0x1F52F550)
#define UNITYENGINE_SHADER_SETGLOBALFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1F52F670)
#define UNITYENGINE_SHADER_SETGLOBALFLOAT_OFFSET UNITYSDK_OFFSET(0x1F52F640)
#define UNITYENGINE_SHADER_SETGLOBALINT_1_OFFSET UNITYSDK_OFFSET(0x1F52F6B0)
#define UNITYENGINE_SHADER_SETGLOBALINT_OFFSET UNITYSDK_OFFSET(0x1F52F680)
#define UNITYENGINE_SHADER_SETGLOBALMATRIXIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F52F590)
#define UNITYENGINE_SHADER_SETGLOBALMATRIXIMPL_OFFSET UNITYSDK_OFFSET(0x1F52F580)
#define UNITYENGINE_SHADER_SETGLOBALMATRIX_1_OFFSET UNITYSDK_OFFSET(0x1F52F7B0)
#define UNITYENGINE_SHADER_SETGLOBALMATRIX_OFFSET UNITYSDK_OFFSET(0x1F52F760)
#define UNITYENGINE_SHADER_SETGLOBALTEXTUREIMPL_OFFSET UNITYSDK_OFFSET(0x1F52F5A0)
#define UNITYENGINE_SHADER_SETGLOBALTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1F52F820)
#define UNITYENGINE_SHADER_SETGLOBALTEXTURE_OFFSET UNITYSDK_OFFSET(0x1F52F7F0)
#define UNITYENGINE_SHADER_SETGLOBALVECTORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F52F570)
#define UNITYENGINE_SHADER_SETGLOBALVECTORIMPL_OFFSET UNITYSDK_OFFSET(0x1F52F560)
#define UNITYENGINE_SHADER_SETGLOBALVECTOR_1_OFFSET UNITYSDK_OFFSET(0x1F52F6F0)
#define UNITYENGINE_SHADER_SETGLOBALVECTOR_OFFSET UNITYSDK_OFFSET(0x1F52F6C0)
#define UNITYENGINE_SHADER_SET_GLOBALRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x1F52F300)
#define UNITYENGINE_SHADER_TAGTOID_OFFSET UNITYSDK_OFFSET(0x1F52A8E0)

namespace UnityEngine
{
	inline static constexpr unsigned int Shader_TypeDefinitionIndex = 4139;

	class Shader : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_CTOR_OFFSET))(this);
		}

		::System::Int32 GetPassTagID(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPASSTAGID_OFFSET))(this, a1);
		}

		static ::System::Int32 GetShaderPassTagID(::UnityEngine::Shader* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETSHADERPASSTAGID_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Shader* Find(::System::String* a1)
		{
			return ((::UnityEngine::Shader*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_FIND_OFFSET))(a1);
		}

		::System::Boolean get_isSupported()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_ISSUPPORTED_OFFSET))(this);
		}

		static ::System::Void set_globalRenderPipeline(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SET_GLOBALRENDERPIPELINE_OFFSET))(a1);
		}

		static ::System::Void EnableKeyword(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ENABLEKEYWORD_OFFSET))(a1);
		}

		static ::System::Void DisableKeyword(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_DISABLEKEYWORD_OFFSET))(a1);
		}

		static ::System::Boolean IsKeywordEnabled(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ISKEYWORDENABLED_OFFSET))(a1);
		}

		static ::System::Void EnableKeywordByKeyword(::UnityEngine::Rendering::ShaderKeyword a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ShaderKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ENABLEKEYWORDBYKEYWORD_OFFSET))(a1);
		}

		static ::System::Void DisableKeywordByKeyword(::UnityEngine::Rendering::ShaderKeyword a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ShaderKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_DISABLEKEYWORDBYKEYWORD_OFFSET))(a1);
		}

		static ::System::Boolean IsKeywordEnabledByKeyword(::UnityEngine::Rendering::ShaderKeyword a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::ShaderKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ISKEYWORDENABLEDBYKEYWORD_OFFSET))(a1);
		}

		static ::System::Void EnableKeyword_1(::UnityEngine::Rendering::ShaderKeyword a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ShaderKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ENABLEKEYWORD_1_OFFSET))(a1);
		}

		static ::System::Void DisableKeyword_1(::UnityEngine::Rendering::ShaderKeyword a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ShaderKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_DISABLEKEYWORD_1_OFFSET))(a1);
		}

		static ::System::Boolean IsKeywordEnabled_1(::UnityEngine::Rendering::ShaderKeyword a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::ShaderKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ISKEYWORDENABLED_1_OFFSET))(a1);
		}

		static ::UnityEngine::Rendering::ShaderKeyword NameToKeyword(::System::String* a1)
		{
			return ((::UnityEngine::Rendering::ShaderKeyword(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_NAMETOKEYWORD_OFFSET))(a1);
		}

		static ::System::Int32 TagToID(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_TAGTOID_OFFSET))(a1);
		}

		static ::System::String* IDToTag(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_IDTOTAG_OFFSET))(a1);
		}

		static ::System::Int32 PropertyToID(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_PROPERTYTOID_OFFSET))(a1);
		}

		::System::Int32 get_passCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_PASSCOUNT_OFFSET))(this);
		}

		::UnityEngine::Rendering::ShaderTagId FindPassTagValue(::System::Int32 a1, ::UnityEngine::Rendering::ShaderTagId a2)
		{
			return ((::UnityEngine::Rendering::ShaderTagId(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::ShaderTagId))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_FINDPASSTAGVALUE_OFFSET))(this, a1, a2);
		}

		::System::Int32 Internal_FindPassTagValue(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_INTERNAL_FINDPASSTAGVALUE_OFFSET))(this, a1, a2);
		}

		static ::System::String* GetShaderSizeInfo()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETSHADERSIZEINFO_OFFSET))();
		}

		static ::System::Void GetShaderSizeInfo_1(::Unity::Collections::NativeArray_1<::System::Byte> a1)
		{
			return ((::System::Void(*)(::Unity::Collections::NativeArray_1<::System::Byte>))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETSHADERSIZEINFO_1_OFFSET))(a1);
		}

		static ::System::Void GetShaderSizeInfoImpl(::PVOID a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETSHADERSIZEINFOIMPL_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalFloatImpl(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOATIMPL_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalVectorImpl(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTORIMPL_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalMatrixImpl(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIXIMPL_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalTextureImpl(::System::Int32 a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALTEXTUREIMPL_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalBufferImpl(::System::Int32 a1, ::UnityEngine::ComputeBuffer* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALBUFFERIMPL_OFFSET))(a1, a2);
		}

		static ::System::Single GetGlobalFloatImpl(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALFLOATIMPL_OFFSET))(a1);
		}

		static ::UnityEngine::Vector4 GetGlobalVectorImpl(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector4(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTORIMPL_OFFSET))(a1);
		}

		static ::UnityEngine::Texture* GetGlobalTextureImpl(::System::Int32 a1)
		{
			return ((::UnityEngine::Texture*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALTEXTUREIMPL_OFFSET))(a1);
		}

		::System::Void LoadBuiltBytes(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_LOADBUILTBYTES_OFFSET))(this, a1);
		}

		static ::System::Void CacheShaderHotReloadCommand(::System::String* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_CACHESHADERHOTRELOADCOMMAND_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalFloat(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOAT_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalFloat_1(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOAT_1_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalInt(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALINT_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalInt_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALINT_1_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalVector(::System::String* a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTOR_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalVector_1(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTOR_1_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalColor(::System::String* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALCOLOR_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalColor_1(::System::Int32 a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALCOLOR_1_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalMatrix(::System::String* a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIX_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalMatrix_1(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIX_1_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalTexture(::System::String* a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALTEXTURE_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalTexture_1(::System::Int32 a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALTEXTURE_1_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalBuffer(::System::String* a1, ::UnityEngine::ComputeBuffer* a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALBUFFER_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalBuffer_1(::System::Int32 a1, ::UnityEngine::ComputeBuffer* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALBUFFER_1_OFFSET))(a1, a2);
		}

		static ::System::Single GetGlobalFloat(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALFLOAT_OFFSET))(a1);
		}

		static ::UnityEngine::Vector4 GetGlobalVector(::System::String* a1)
		{
			return ((::UnityEngine::Vector4(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTOR_OFFSET))(a1);
		}

		static ::UnityEngine::Vector4 GetGlobalVector_1(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector4(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTOR_1_OFFSET))(a1);
		}

		static ::UnityEngine::Texture* GetGlobalTexture(::System::Int32 a1)
		{
			return ((::UnityEngine::Texture*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALTEXTURE_OFFSET))(a1);
		}

		static ::System::String* GetPropertyName(::UnityEngine::Shader* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYNAME_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetPropertyNameId(::UnityEngine::Shader* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYNAMEID_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType(::UnityEngine::Shader* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Rendering::ShaderPropertyType(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYTYPE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector4 GetPropertyDefaultValue(::UnityEngine::Shader* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYDEFAULTVALUE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(::UnityEngine::Shader* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Rendering::TextureDimension(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYTEXTUREDIMENSION_OFFSET))(a1, a2);
		}

		static ::System::Void CheckPropertyIndex(::UnityEngine::Shader* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_CHECKPROPERTYINDEX_OFFSET))(a1, a2);
		}

		::System::Int32 GetPropertyCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYCOUNT_OFFSET))(this);
		}

		::System::String* GetPropertyName_1(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYNAME_1_OFFSET))(this, a1);
		}

		::System::Int32 GetPropertyNameId_1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYNAMEID_1_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::ShaderPropertyType GetPropertyType_1(::System::Int32 a1)
		{
			return ((::UnityEngine::Rendering::ShaderPropertyType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYTYPE_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetPropertyRangeLimits(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYRANGELIMITS_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension_1(::System::Int32 a1)
		{
			return ((::UnityEngine::Rendering::TextureDimension(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYTEXTUREDIMENSION_1_OFFSET))(this, a1);
		}

		static ::System::Void EnableKeywordByKeyword_Injected(::UnityEngine::Rendering::ShaderKeyword a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ShaderKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ENABLEKEYWORDBYKEYWORD_INJECTED_OFFSET))(a1);
		}

		static ::System::Void DisableKeywordByKeyword_Injected(::UnityEngine::Rendering::ShaderKeyword a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ShaderKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_DISABLEKEYWORDBYKEYWORD_INJECTED_OFFSET))(a1);
		}

		static ::System::Boolean IsKeywordEnabledByKeyword_Injected(::UnityEngine::Rendering::ShaderKeyword a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::ShaderKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ISKEYWORDENABLEDBYKEYWORD_INJECTED_OFFSET))(a1);
		}

		static ::System::Void NameToKeyword_Injected(::System::String* a1, ::UnityEngine::Rendering::ShaderKeyword a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Rendering::ShaderKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_NAMETOKEYWORD_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalVectorImpl_Injected(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTORIMPL_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalMatrixImpl_Injected(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIXIMPL_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void GetGlobalVectorImpl_Injected(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTORIMPL_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void GetPropertyDefaultValue_Injected(::UnityEngine::Shader* a1, ::System::Int32 a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::UnityEngine::Shader*, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYDEFAULTVALUE_INJECTED_OFFSET))(a1, a2, a3);
		}

	};
}
