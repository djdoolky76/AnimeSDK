#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Xml::Serialization { class TypeData; }

#define SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF06D50)
#define SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_FROMENUM_OFFSET UNITYSDK_OFFSET(0x1EEF78A0)
#define SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_FROMXMLNAME_OFFSET UNITYSDK_OFFSET(0x1EF05770)
#define SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_FROMXMLNCNAME_OFFSET UNITYSDK_OFFSET(0x1EF05820)
#define SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_FROMXMLSTRING_OFFSET UNITYSDK_OFFSET(0x1EF06420)
#define SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_TOXMLSTRING_OFFSET UNITYSDK_OFFSET(0x1EF058D0)

namespace System::Xml::Serialization
{
	class XmlCustomFormatter : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_allTimeFormats()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("System.Xml.Serialization", "XmlCustomFormatter")->GetStaticField(0x26180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_CCTOR_OFFSET))();
		}

		static ::System::String* FromEnum(::System::Int64 a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::Int64>* a3, ::System::String* a4)
		{
			return ((::System::String*(*)(::System::Int64, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Int64>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_FROMENUM_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* FromXmlName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_FROMXMLNAME_OFFSET))(a1);
		}

		static ::System::String* FromXmlNCName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_FROMXMLNCNAME_OFFSET))(a1);
		}

		static ::System::String* ToXmlString(::System::Xml::Serialization::TypeData* a1, ::System::Object* a2)
		{
			return ((::System::String*(*)(::System::Xml::Serialization::TypeData*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_TOXMLSTRING_OFFSET))(a1, a2);
		}

		static ::System::Object* FromXmlString(::System::Xml::Serialization::TypeData* a1, ::System::String* a2)
		{
			return ((::System::Object*(*)(::System::Xml::Serialization::TypeData*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_FROMXMLSTRING_OFFSET))(a1, a2);
		}

	};
}
