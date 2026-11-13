#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_INTERNALSECTIONNAME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F713260)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_INTERNALSECTIONNAME_ISBUILDIN_OFFSET UNITYSDK_OFFSET(0x1F710890)

namespace UnityEngine
{
	inline static constexpr unsigned int DefaultConsoleConfigReader_InternalSectionName_TypeDefinitionIndex = 4064;

	class DefaultConsoleConfigReader_InternalSectionName : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Platform()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xDE30);
		}

		static ::System::String** StaticGet_AsComponent()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xDE38);
		}

		static ::System::String** StaticGet_IsEditor()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xDE40);
		}

		static ::System::String** StaticGet_ModelNameRegEx()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xDE48);
		}

		static ::System::String** StaticGet_CVar()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xDE50);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_buildInSectionNames()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xDE58);
		}

		static ::System::String** StaticGet_Import()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xDE60);
		}

		static ::System::String** StaticGet_IsCloudPlatform()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xDE68);
		}

		static ::System::String** StaticGet_Condition()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0xDE70);
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
