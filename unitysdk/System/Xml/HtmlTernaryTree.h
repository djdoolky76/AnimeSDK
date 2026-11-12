#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_HTMLTERNARYTREE_CCTOR_OFFSET UNITYSDK_OFFSET(0x20152EE0)

namespace System::Xml
{
	inline static constexpr unsigned int HtmlTernaryTree_TypeDefinitionIndex = 1803;

	class HtmlTernaryTree : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_htmlElements()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("System.Xml", "HtmlTernaryTree")->GetStaticField(0x2B9E0);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_htmlAttributes()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("System.Xml", "HtmlTernaryTree")->GetStaticField(0x2B9E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLTERNARYTREE_CCTOR_OFFSET))();
		}

	};
}
