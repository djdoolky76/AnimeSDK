#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NICAJBEJAHC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NICAJBEJAHC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB25960)
#define NICAJBEJAHC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB25BC0)
#define NICAJBEJAHC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB25560)
#define NICAJBEJAHC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB254D0)
#define NICAJBEJAHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB25480)
#define NICAJBEJAHC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB25690)
#define NICAJBEJAHC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB255A0)
#define NICAJBEJAHC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB25780)
#define NICAJBEJAHC_GNAKEIEGCDI_OFFSET UNITYSDK_OFFSET(0x1EB25590)
#define NICAJBEJAHC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB25440)
#define NICAJBEJAHC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB25A20)
#define NICAJBEJAHC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB259D0)
#define NICAJBEJAHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB25470)
#define NICAJBEJAHC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB25880)
#define NICAJBEJAHC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB258E0)

	class NICAJBEJAHC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BCOHDKAHBCJ; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_KBBPPNNDJDN()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NICAJBEJAHC")->GetStaticField(0x60A80);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NICAJBEJAHC")->GetStaticField(0x60A88);
		}

		// static const ::System::Object LLMAPPDKOPI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NICAJBEJAHC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NICAJBEJAHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NICAJBEJAHC*))((::PBYTE)hIl2Cpp + NICAJBEJAHC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NICAJBEJAHC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NICAJBEJAHC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NICAJBEJAHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NICAJBEJAHC* Clone()
		{
			return ((::NICAJBEJAHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NICAJBEJAHC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GNAKEIEGCDI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NICAJBEJAHC_GNAKEIEGCDI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NICAJBEJAHC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NICAJBEJAHC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NICAJBEJAHC*))((::PBYTE)hIl2Cpp + NICAJBEJAHC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NICAJBEJAHC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NICAJBEJAHC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NICAJBEJAHC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NICAJBEJAHC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NICAJBEJAHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NICAJBEJAHC*))((::PBYTE)hIl2Cpp + NICAJBEJAHC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NICAJBEJAHC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
