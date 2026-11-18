#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace System { class String; }

#define SHADERVARIANTCOLLECTOR_ENDSHADERCOMPILECOLLECT_OFFSET UNITYSDK_OFFSET(0x20072310)
#define SHADERVARIANTCOLLECTOR_GETP4VERSION_OFFSET UNITYSDK_OFFSET(0x20072280)
#define SHADERVARIANTCOLLECTOR_ONGETINSTANCE_OFFSET UNITYSDK_OFFSET(0x20072300)
#define SHADERVARIANTCOLLECTOR_ONSHADERCOMPILE_OFFSET UNITYSDK_OFFSET(0x20072320)
#define SHADERVARIANTCOLLECTOR_SETP4VERSION_OFFSET UNITYSDK_OFFSET(0x200720C0)
#define SHADERVARIANTCOLLECTOR_STARTSHADERCOMPILECOLLECT_OFFSET UNITYSDK_OFFSET(0x200722F0)
#define SHADERVARIANTCOLLECTOR_STARTSHADERVARIANTCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x200722E0)
#define SHADERVARIANTCOLLECTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x20072340)
#define SHADERVARIANTCOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x20072330)

inline static constexpr unsigned int ShaderVariantCollector_TypeDefinitionIndex = 37158;

class ShaderVariantCollector : public ::System::Object
{
public:
	static ::System::String** StaticGet__sceneName()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderVariantCollector_TypeDefinitionIndex)->GetStaticField(0x2BCD0);
	}
	static ::System::String** StaticGet__p4Version()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderVariantCollector_TypeDefinitionIndex)->GetStaticField(0x2BCD8);
	}
	static ::System::Boolean* StaticGet__collectorStart()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ShaderVariantCollector_TypeDefinitionIndex)->GetStaticField(0x93D0);
	}
	static ::System::Boolean* StaticGet_s_EnableShaderCollector()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ShaderVariantCollector_TypeDefinitionIndex)->GetStaticField(0x93D1);
	}
	static ::System::Int32* StaticGet__levelID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderVariantCollector_TypeDefinitionIndex)->GetStaticField(0x93D4);
	}
	// static const ::System::String* PLATFORM; // 0x0
	// static const ::System::String* VERSION; // 0x0
	// static const ::System::String* CONTENT; // 0x0
	// static const ::System::String* P4VERSION; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERVARIANTCOLLECTOR__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SHADERVARIANTCOLLECTOR__CCTOR_OFFSET))();
	}

	static ::System::Void SetP4Version(::System::String* buildPkgVersion)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SHADERVARIANTCOLLECTOR_SETP4VERSION_OFFSET))(buildPkgVersion);
	}

	static ::System::String* GetP4Version()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SHADERVARIANTCOLLECTOR_GETP4VERSION_OFFSET))();
	}

	static ::System::Void StartShaderVariantCollector()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SHADERVARIANTCOLLECTOR_STARTSHADERVARIANTCOLLECTOR_OFFSET))();
	}

	static ::System::Void StartShaderCompileCollect(::System::String* sceneName, ::System::Int32 levelID)
	{
		return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SHADERVARIANTCOLLECTOR_STARTSHADERCOMPILECOLLECT_OFFSET))(sceneName, levelID);
	}

	static ::System::Void OnGetInstance(::Foundation::AssetPath path)
	{
		return ((::System::Void(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + SHADERVARIANTCOLLECTOR_ONGETINSTANCE_OFFSET))(path);
	}

	static ::System::Void EndShaderCompileCollect()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SHADERVARIANTCOLLECTOR_ENDSHADERCOMPILECOLLECT_OFFSET))();
	}

	static ::System::Void OnShaderCompile(::System::String* shaderCompileInfos)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SHADERVARIANTCOLLECTOR_ONSHADERCOMPILE_OFFSET))(shaderCompileInfos);
	}
};
