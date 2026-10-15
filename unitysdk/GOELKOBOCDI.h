#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCJCLFOLBPP;
class GOELKOBOCDI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GOELKOBOCDI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4EEB60)
#define GOELKOBOCDI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4EEE40)
#define GOELKOBOCDI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4EE740)
#define GOELKOBOCDI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4EE6B0)
#define GOELKOBOCDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4EE670)
#define GOELKOBOCDI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4EE8C0)
#define GOELKOBOCDI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4EE780)
#define GOELKOBOCDI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4EE9E0)
#define GOELKOBOCDI_HHPPFDBKMLC_OFFSET UNITYSDK_OFFSET(0x1E4EE770)
#define GOELKOBOCDI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4EE630)
#define GOELKOBOCDI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4EECA0)
#define GOELKOBOCDI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4EEC00)
#define GOELKOBOCDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4EE660)
#define GOELKOBOCDI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4EEA50)
#define GOELKOBOCDI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4EEAB0)

inline static constexpr unsigned int GOELKOBOCDI_TypeDefinitionIndex = 28453;

	class GOELKOBOCDI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::GCJCLFOLBPP*>* NPIFGBKJOAC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GOELKOBOCDI")->GetStaticField(0x2B0E0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_GPLGMIDEONO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GOELKOBOCDI")->GetStaticField(0x2B0E8);
		}

		// static const ::System::Object DECGLGGCELI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOELKOBOCDI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GOELKOBOCDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOELKOBOCDI*))((::PBYTE)hIl2Cpp + GOELKOBOCDI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOELKOBOCDI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GOELKOBOCDI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOELKOBOCDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GOELKOBOCDI* Clone()
		{
			return ((::GOELKOBOCDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOELKOBOCDI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GCJCLFOLBPP*>* HHPPFDBKMLC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GCJCLFOLBPP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOELKOBOCDI_HHPPFDBKMLC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOELKOBOCDI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GOELKOBOCDI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GOELKOBOCDI*))((::PBYTE)hIl2Cpp + GOELKOBOCDI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOELKOBOCDI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOELKOBOCDI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOELKOBOCDI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOELKOBOCDI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GOELKOBOCDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOELKOBOCDI*))((::PBYTE)hIl2Cpp + GOELKOBOCDI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOELKOBOCDI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
