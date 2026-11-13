#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCJCLFOLBPP;
class GOELKOBOCDI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GOELKOBOCDI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FCF6630)
#define GOELKOBOCDI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCF6910)
#define GOELKOBOCDI_CLONE_OFFSET UNITYSDK_OFFSET(0x1FCF6210)
#define GOELKOBOCDI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FCF6180)
#define GOELKOBOCDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCF6140)
#define GOELKOBOCDI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FCF6390)
#define GOELKOBOCDI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FCF6250)
#define GOELKOBOCDI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FCF64B0)
#define GOELKOBOCDI_HHPPFDBKMLC_OFFSET UNITYSDK_OFFSET(0x1FCF6240)
#define GOELKOBOCDI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FCF6100)
#define GOELKOBOCDI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FCF6770)
#define GOELKOBOCDI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FCF66D0)
#define GOELKOBOCDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FCF6130)
#define GOELKOBOCDI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FCF6520)
#define GOELKOBOCDI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FCF6580)

inline static constexpr unsigned int GOELKOBOCDI_TypeDefinitionIndex = 29043;

	class GOELKOBOCDI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::GCJCLFOLBPP*>* NPIFGBKJOAC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GOELKOBOCDI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GOELKOBOCDI*>**)UnitySDK::FromName("", "GOELKOBOCDI")->GetStaticField(0x1B6F0);
		}

		static ::Google::Protobuf::FieldCodec_1<::GCJCLFOLBPP*>** StaticGet_GPLGMIDEONO()
		{
			return (::Google::Protobuf::FieldCodec_1<::GCJCLFOLBPP*>**)UnitySDK::FromName("", "GOELKOBOCDI")->GetStaticField(0x1B6F8);
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

		static ::Google::Protobuf::MessageParser_1<::GOELKOBOCDI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GOELKOBOCDI*>*(*)())((::PBYTE)hIl2Cpp + GOELKOBOCDI_JJGHOBBFNJD_OFFSET))();
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
