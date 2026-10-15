#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_INTERNALSECTIONNAME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3E7200)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_INTERNALSECTIONNAME_ISBUILDIN_OFFSET UNITYSDK_OFFSET(0x1F3E4830)

namespace UnityEngine
{
	class DefaultConsoleConfigReader_InternalSectionName : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_ModelNameRegEx()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0x10140);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_buildInSectionNames()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0x10148);
		}

		static ::System::String** StaticGet_AsComponent()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0x10150);
		}

		static ::System::String** StaticGet_Platform()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0x10158);
		}

		static ::System::String** StaticGet_Import()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0x10160);
		}

		static ::System::String** StaticGet_IsEditor()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0x10168);
		}

		static ::System::String** StaticGet_Condition()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0x10170);
		}

		static ::System::String** StaticGet_CVar()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0x10178);
		}

		static ::System::String** StaticGet_IsCloudPlatform()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine", "InternalSectionName")->GetStaticField(0x10180);
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
