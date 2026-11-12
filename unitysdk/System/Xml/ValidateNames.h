#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlCharType.h"
#include "unitysdk/System/Object.h"
namespace System { class Exception; }
namespace System { class String; }

#define SYSTEM_XML_VALIDATENAMES_CCTOR_OFFSET UNITYSDK_OFFSET(0x201EF190)
#define SYSTEM_XML_VALIDATENAMES_GETINVALIDNAMEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x201EEEB0)
#define SYSTEM_XML_VALIDATENAMES_ISNAMENONAMESPACES_OFFSET UNITYSDK_OFFSET(0x201EE720)
#define SYSTEM_XML_VALIDATENAMES_PARSENAMENONAMESPACES_OFFSET UNITYSDK_OFFSET(0x201EE500)
#define SYSTEM_XML_VALIDATENAMES_PARSENCNAME_1_OFFSET UNITYSDK_OFFSET(0x201EE940)
#define SYSTEM_XML_VALIDATENAMES_PARSENCNAME_OFFSET UNITYSDK_OFFSET(0x201EE7A0)
#define SYSTEM_XML_VALIDATENAMES_PARSENMTOKENNONAMESPACES_OFFSET UNITYSDK_OFFSET(0x201EE390)
#define SYSTEM_XML_VALIDATENAMES_PARSENMTOKEN_OFFSET UNITYSDK_OFFSET(0x201EE230)
#define SYSTEM_XML_VALIDATENAMES_PARSEQNAMETHROW_OFFSET UNITYSDK_OFFSET(0x201EEAB0)
#define SYSTEM_XML_VALIDATENAMES_PARSEQNAME_OFFSET UNITYSDK_OFFSET(0x201EE9A0)
#define SYSTEM_XML_VALIDATENAMES_THROWINVALIDNAME_OFFSET UNITYSDK_OFFSET(0x201EEC00)

namespace System::Xml
{
	inline static constexpr unsigned int ValidateNames_TypeDefinitionIndex = 1938;

	class ValidateNames : public ::System::Object
	{
	public:
		static ::System::Xml::XmlCharType* StaticGet_xmlCharType()
		{
			return (::System::Xml::XmlCharType*)UnitySDK::FromName("System.Xml", "ValidateNames")->GetStaticField(0x33FB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_CCTOR_OFFSET))();
		}

		static ::System::Int32 ParseNmtoken(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSENMTOKEN_OFFSET))(a1, a2);
		}

		static ::System::Int32 ParseNmtokenNoNamespaces(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSENMTOKENNONAMESPACES_OFFSET))(a1, a2);
		}

		static ::System::Int32 ParseNameNoNamespaces(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSENAMENONAMESPACES_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsNameNoNamespaces(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_ISNAMENONAMESPACES_OFFSET))(a1);
		}

		static ::System::Int32 ParseNCName(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSENCNAME_OFFSET))(a1, a2);
		}

		static ::System::Int32 ParseNCName_1(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSENCNAME_1_OFFSET))(a1);
		}

		static ::System::Int32 ParseQName(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSEQNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ParseQNameThrow(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSEQNAMETHROW_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ThrowInvalidName(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_THROWINVALIDNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Exception* GetInvalidNameException(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_GETINVALIDNAMEEXCEPTION_OFFSET))(a1, a2, a3);
		}

	};
}
