#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_HTMLTERNARYTREE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EEA3760)

namespace System::Xml
{
	class HtmlTernaryTree : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_htmlAttributes()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("System.Xml", "HtmlTernaryTree")->GetStaticField(0x21610);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_htmlElements()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("System.Xml", "HtmlTernaryTree")->GetStaticField(0x21618);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLTERNARYTREE_CCTOR_OFFSET))();
		}

	};
}
