#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SIRENIX_UTILITIES_SIRENIXASSETPATHS_TOPATHSAFESTRING_OFFSET UNITYSDK_OFFSET(0x1F662AC0)
#define SIRENIX_UTILITIES_SIRENIXASSETPATHS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6629D0)

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int SirenixAssetPaths_TypeDefinitionIndex = 6517;

	class SirenixAssetPaths : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_SirenixAssembliesPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SirenixAssetPaths_TypeDefinitionIndex)->GetStaticField(0x5940);
		}
		static ::System::String** StaticGet_SirenixAssetsPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SirenixAssetPaths_TypeDefinitionIndex)->GetStaticField(0x5948);
		}
		static ::System::String** StaticGet_SirenixPluginPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SirenixAssetPaths_TypeDefinitionIndex)->GetStaticField(0x5950);
		}
		static ::System::String** StaticGet_OdinEditorConfigsPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SirenixAssetPaths_TypeDefinitionIndex)->GetStaticField(0x5958);
		}
		static ::System::String** StaticGet_OdinTempPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SirenixAssetPaths_TypeDefinitionIndex)->GetStaticField(0x5960);
		}
		static ::System::String** StaticGet_OdinResourcesConfigsPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SirenixAssetPaths_TypeDefinitionIndex)->GetStaticField(0x5968);
		}
		static ::System::String** StaticGet_OdinResourcesPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SirenixAssetPaths_TypeDefinitionIndex)->GetStaticField(0x5970);
		}
		static ::System::String** StaticGet_OdinPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SirenixAssetPaths_TypeDefinitionIndex)->GetStaticField(0x5978);
		}
		// static const ::System::String* DefaultSirenixPluginPath; // 0x0
		// static const ::System::String* SirenixAssetPathsSOGuid; // 0x0
		// static const ::System::String* LookupAssetName; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_SIRENIXASSETPATHS__CCTOR_OFFSET))();
		}

		static ::System::String* ToPathSafeString(::System::String* name, ::System::Char replace)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_SIRENIXASSETPATHS_TOPATHSAFESTRING_OFFSET))(name, replace);
		}
	};
}
