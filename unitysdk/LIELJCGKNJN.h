#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIELJCGKNJN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LIELJCGKNJN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E96C170)
#define LIELJCGKNJN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E96C4A0)
#define LIELJCGKNJN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E96BC70)
#define LIELJCGKNJN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E96BBE0)
#define LIELJCGKNJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E96BB90)
#define LIELJCGKNJN_ENNGEMOHLDL_OFFSET UNITYSDK_OFFSET(0x1E96BCE0)
#define LIELJCGKNJN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E96BE20)
#define LIELJCGKNJN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E96BCF0)
#define LIELJCGKNJN_FKOAKEAIONC_OFFSET UNITYSDK_OFFSET(0x1E96BCD0)
#define LIELJCGKNJN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E96BF10)
#define LIELJCGKNJN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E96BB20)
#define LIELJCGKNJN_JOJBKFBPCNP_OFFSET UNITYSDK_OFFSET(0x1E96BCC0)
#define LIELJCGKNJN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E96C2D0)
#define LIELJCGKNJN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E96C280)
#define LIELJCGKNJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E96BB80)
#define LIELJCGKNJN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E96C010)
#define LIELJCGKNJN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E96C070)

	class LIELJCGKNJN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OEKNGPJINHM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 DBDEKDEJDCP; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LIELJCGKNJN")->GetStaticField(0x44D10);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_MLOJEKIEIEL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LIELJCGKNJN")->GetStaticField(0x44D18);
		}

		// static const ::System::Object CHIJOPBIANF; // 0x0
		// static const ::System::Object DFDMPBDJELA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIELJCGKNJN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LIELJCGKNJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIELJCGKNJN*))((::PBYTE)hIl2Cpp + LIELJCGKNJN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIELJCGKNJN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LIELJCGKNJN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIELJCGKNJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LIELJCGKNJN* Clone()
		{
			return ((::LIELJCGKNJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIELJCGKNJN_CLONE_OFFSET))(this);
		}

		::System::UInt32 JOJBKFBPCNP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIELJCGKNJN_JOJBKFBPCNP_OFFSET))(this);
		}

		::System::Void FKOAKEAIONC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LIELJCGKNJN_FKOAKEAIONC_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ENNGEMOHLDL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIELJCGKNJN_ENNGEMOHLDL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LIELJCGKNJN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LIELJCGKNJN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LIELJCGKNJN*))((::PBYTE)hIl2Cpp + LIELJCGKNJN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIELJCGKNJN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIELJCGKNJN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LIELJCGKNJN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIELJCGKNJN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LIELJCGKNJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIELJCGKNJN*))((::PBYTE)hIl2Cpp + LIELJCGKNJN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LIELJCGKNJN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
