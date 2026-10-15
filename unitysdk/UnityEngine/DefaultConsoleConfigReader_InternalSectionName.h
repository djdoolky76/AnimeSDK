#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_INTERNALSECTIONNAME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3B9430)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_INTERNALSECTIONNAME_ISBUILDIN_OFFSET UNITYSDK_OFFSET(0x1F3B6A70)

namespace UnityEngine
{
	inline static constexpr unsigned int DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex = 4064;

	class DefaultConsoleConfigReader_InternalSectionName : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_buildInSectionNames()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xF900);
		}

		static ::System::String** StaticGet_Platform()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xF908);
		}

		static ::System::String** StaticGet_CVar()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xF910);
		}

		static ::System::String** StaticGet_ModelNameRegEx()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xF918);
		}

		static ::System::String** StaticGet_Import()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xF920);
		}

		static ::System::String** StaticGet_AsComponent()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xF928);
		}

		static ::System::String** StaticGet_IsCloudPlatform()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xF930);
		}

		static ::System::String** StaticGet_IsEditor()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xF938);
		}

		static ::System::String** StaticGet_Condition()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xF940);
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
