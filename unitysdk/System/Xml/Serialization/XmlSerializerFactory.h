#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Xml::Serialization { class XmlAttributeOverrides; }
namespace System::Xml::Serialization { class XmlRootAttribute; }
namespace System::Xml::Serialization { class XmlSerializer; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERFACTORY_CREATESERIALIZER_1_OFFSET UNITYSDK_OFFSET(0x1E5D0B10)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERFACTORY_CREATESERIALIZER_2_OFFSET UNITYSDK_OFFSET(0x1E5D0890)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERFACTORY_CREATESERIALIZER_OFFSET UNITYSDK_OFFSET(0x1E5D0870)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERFACTORY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5D0B40)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D0860)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializerFactory_TypeDefinitionIndex = 1917;

	class XmlSerializerFactory : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet_serializersBySource()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(XmlSerializerFactory_TypeDefinitionIndex)->GetStaticField(0x1D90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERFACTORY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERFACTORY__CCTOR_OFFSET))();
		}

		::System::Xml::Serialization::XmlSerializer* CreateSerializer(::System::Type* type)
		{
			return ((::System::Xml::Serialization::XmlSerializer*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERFACTORY_CREATESERIALIZER_OFFSET))(this, type);
		}

		::System::Xml::Serialization::XmlSerializer* CreateSerializer_1(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* root)
		{
			return ((::System::Xml::Serialization::XmlSerializer*(*)(::PVOID, ::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERFACTORY_CREATESERIALIZER_1_OFFSET))(this, type, root);
		}

		::System::Xml::Serialization::XmlSerializer* CreateSerializer_2(::System::Type* type, ::System::Xml::Serialization::XmlAttributeOverrides* overrides, ::Il2CppArray<::System::Type*>* extraTypes, ::System::Xml::Serialization::XmlRootAttribute* root, ::System::String* defaultNamespace)
		{
			return ((::System::Xml::Serialization::XmlSerializer*(*)(::PVOID, ::System::Type*, ::System::Xml::Serialization::XmlAttributeOverrides*, ::Il2CppArray<::System::Type*>*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERFACTORY_CREATESERIALIZER_2_OFFSET))(this, type, overrides, extraTypes, root, defaultNamespace);
		}
	};
}
