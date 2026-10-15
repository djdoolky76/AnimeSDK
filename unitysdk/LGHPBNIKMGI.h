#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGHPBNIKMGI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LGHPBNIKMGI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E954440)
#define LGHPBNIKMGI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9546A0)
#define LGHPBNIKMGI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E954040)
#define LGHPBNIKMGI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E953FB0)
#define LGHPBNIKMGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E953F60)
#define LGHPBNIKMGI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E954170)
#define LGHPBNIKMGI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E954080)
#define LGHPBNIKMGI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E954260)
#define LGHPBNIKMGI_JGEBDHAOFMB_OFFSET UNITYSDK_OFFSET(0x1E954070)
#define LGHPBNIKMGI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E953F20)
#define LGHPBNIKMGI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E954500)
#define LGHPBNIKMGI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9544B0)
#define LGHPBNIKMGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E953F50)
#define LGHPBNIKMGI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E954360)
#define LGHPBNIKMGI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9543C0)

	class LGHPBNIKMGI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EFJNLBJKJKE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_ACHHIPPPEEI()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LGHPBNIKMGI")->GetStaticField(0x3F390);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LGHPBNIKMGI")->GetStaticField(0x3F398);
		}

		// static const ::System::Object LGEBDNALEIL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHPBNIKMGI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LGHPBNIKMGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGHPBNIKMGI*))((::PBYTE)hIl2Cpp + LGHPBNIKMGI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGHPBNIKMGI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LGHPBNIKMGI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHPBNIKMGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LGHPBNIKMGI* Clone()
		{
			return ((::LGHPBNIKMGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHPBNIKMGI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JGEBDHAOFMB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHPBNIKMGI_JGEBDHAOFMB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGHPBNIKMGI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LGHPBNIKMGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGHPBNIKMGI*))((::PBYTE)hIl2Cpp + LGHPBNIKMGI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHPBNIKMGI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHPBNIKMGI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LGHPBNIKMGI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHPBNIKMGI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LGHPBNIKMGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGHPBNIKMGI*))((::PBYTE)hIl2Cpp + LGHPBNIKMGI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LGHPBNIKMGI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
