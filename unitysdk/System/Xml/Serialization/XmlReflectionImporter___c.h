#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Xml::Serialization { class XmlReflectionMember; }

#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x18A28250)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x18A28290)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER___C__IMPORTCLASSMAPPING_B__28_0_OFFSET UNITYSDK_OFFSET(0x18A282A0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlReflectionImporter___c_TypeDefinitionIndex = 2019;

	class XmlReflectionImporter___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Xml::Serialization::XmlReflectionMember*>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::System::Xml::Serialization::XmlReflectionMember*>**)UnitySDK::FromName("System.Xml.Serialization", "<>c")->GetStaticField(0x22A90);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("System.Xml.Serialization", "<>c")->GetStaticField(0x22A98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _ImportClassMapping_b__28_0(::System::Xml::Serialization::XmlReflectionMember* a1, ::System::Xml::Serialization::XmlReflectionMember* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::Serialization::XmlReflectionMember*, ::System::Xml::Serialization::XmlReflectionMember*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER___C__IMPORTCLASSMAPPING_B__28_0_OFFSET))(this, a1, a2);
		}

	};
}
