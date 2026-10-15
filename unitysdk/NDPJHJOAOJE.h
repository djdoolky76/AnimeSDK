#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKMLLJNNKJB;
class NDPJHJOAOJE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NDPJHJOAOJE_BLEMHICDONK_OFFSET UNITYSDK_OFFSET(0x1EAED330)
#define NDPJHJOAOJE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAED950)
#define NDPJHJOAOJE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAEDDA0)
#define NDPJHJOAOJE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAED2E0)
#define NDPJHJOAOJE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAED200)
#define NDPJHJOAOJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAED1B0)
#define NDPJHJOAOJE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAED540)
#define NDPJHJOAOJE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAED360)
#define NDPJHJOAOJE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAED6E0)
#define NDPJHJOAOJE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAED140)
#define NDPJHJOAOJE_MEBKBJFEDCP_OFFSET UNITYSDK_OFFSET(0x1EAED340)
#define NDPJHJOAOJE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAEDB40)
#define NDPJHJOAOJE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAEDA30)
#define NDPJHJOAOJE_MPKLJKDEPCG_OFFSET UNITYSDK_OFFSET(0x1EAED350)
#define NDPJHJOAOJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAED1A0)
#define NDPJHJOAOJE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAED7F0)
#define NDPJHJOAOJE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAED850)

	class NDPJHJOAOJE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MHPNDLICKCL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::IKMLLJNNKJB* IMLFFCBFNPO; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NDPJHJOAOJE")->GetStaticField(0x5D8E0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_ENDGMHDHJCB()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NDPJHJOAOJE")->GetStaticField(0x5D8E8);
		}

		// static const ::System::Object NMFNIMPAKGP; // 0x0
		// static const ::System::Object DLNPIBCCOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPJHJOAOJE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NDPJHJOAOJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDPJHJOAOJE*))((::PBYTE)hIl2Cpp + NDPJHJOAOJE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDPJHJOAOJE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NDPJHJOAOJE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPJHJOAOJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NDPJHJOAOJE* Clone()
		{
			return ((::NDPJHJOAOJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPJHJOAOJE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BLEMHICDONK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPJHJOAOJE_BLEMHICDONK_OFFSET))(this);
		}

		::IKMLLJNNKJB* MEBKBJFEDCP()
		{
			return ((::IKMLLJNNKJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPJHJOAOJE_MEBKBJFEDCP_OFFSET))(this);
		}

		::System::Void MPKLJKDEPCG(::IKMLLJNNKJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKMLLJNNKJB*))((::PBYTE)hIl2Cpp + NDPJHJOAOJE_MPKLJKDEPCG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NDPJHJOAOJE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NDPJHJOAOJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NDPJHJOAOJE*))((::PBYTE)hIl2Cpp + NDPJHJOAOJE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPJHJOAOJE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPJHJOAOJE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NDPJHJOAOJE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPJHJOAOJE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NDPJHJOAOJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDPJHJOAOJE*))((::PBYTE)hIl2Cpp + NDPJHJOAOJE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NDPJHJOAOJE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
