#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGKLNOIKPPE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HGKLNOIKPPE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E57CD60)
#define HGKLNOIKPPE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E57CE00)
#define HGKLNOIKPPE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E57CA50)
#define HGKLNOIKPPE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E57CA20)
#define HGKLNOIKPPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E57CA10)
#define HGKLNOIKPPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E57CB60)
#define HGKLNOIKPPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E57CA90)
#define HGKLNOIKPPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E57CCC0)
#define HGKLNOIKPPE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E57C9D0)
#define HGKLNOIKPPE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E57CDB0)
#define HGKLNOIKPPE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E57CD80)
#define HGKLNOIKPPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E57CA00)
#define HGKLNOIKPPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E57CCF0)
#define HGKLNOIKPPE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E57CD50)

inline static constexpr unsigned int HGKLNOIKPPE_TypeDefinitionIndex = 30092;

	class HGKLNOIKPPE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::HGKLNOIKPPE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HGKLNOIKPPE*>**)UnitySDK::FromName("", "HGKLNOIKPPE")->GetStaticField(0x378D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKLNOIKPPE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HGKLNOIKPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGKLNOIKPPE*))((::PBYTE)hIl2Cpp + HGKLNOIKPPE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGKLNOIKPPE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HGKLNOIKPPE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HGKLNOIKPPE*>*(*)())((::PBYTE)hIl2Cpp + HGKLNOIKPPE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKLNOIKPPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HGKLNOIKPPE* Clone()
		{
			return ((::HGKLNOIKPPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKLNOIKPPE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HGKLNOIKPPE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HGKLNOIKPPE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGKLNOIKPPE*))((::PBYTE)hIl2Cpp + HGKLNOIKPPE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKLNOIKPPE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKLNOIKPPE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HGKLNOIKPPE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKLNOIKPPE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HGKLNOIKPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGKLNOIKPPE*))((::PBYTE)hIl2Cpp + HGKLNOIKPPE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HGKLNOIKPPE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
