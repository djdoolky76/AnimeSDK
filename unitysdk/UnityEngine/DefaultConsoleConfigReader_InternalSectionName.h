#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_INTERNALSECTIONNAME_CCTOR_OFFSET UNITYSDK_OFFSET(0x20698060)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_INTERNALSECTIONNAME_ISBUILDIN_OFFSET UNITYSDK_OFFSET(0x206956A0)

namespace UnityEngine
{
	inline static constexpr unsigned int DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex = 4064;

	class DefaultConsoleConfigReader_InternalSectionName : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_buildInSectionNames()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xC3E0);
		}

		static ::System::String** StaticGet_Condition()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xC3E8);
		}

		static ::System::String** StaticGet_ModelNameRegEx()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xC3F0);
		}

		static ::System::String** StaticGet_Platform()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xC3F8);
		}

		static ::System::String** StaticGet_IsCloudPlatform()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xC400);
		}

		static ::System::String** StaticGet_IsEditor()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xC408);
		}

		static ::System::String** StaticGet_Import()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xC410);
		}

		static ::System::String** StaticGet_AsComponent()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xC418);
		}

		static ::System::String** StaticGet_CVar()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xC420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_INTERNALSECTIONNAME_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsBuildIn(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_INTERNALSECTIONNAME_ISBUILDIN_OFFSET))(a1);
		}

	};
}
