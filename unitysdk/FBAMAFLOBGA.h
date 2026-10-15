#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBAMAFLOBGA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FBAMAFLOBGA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E32DAA0)
#define FBAMAFLOBGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E32DDD0)
#define FBAMAFLOBGA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E32D5A0)
#define FBAMAFLOBGA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E32D510)
#define FBAMAFLOBGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E32D4C0)
#define FBAMAFLOBGA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E32D750)
#define FBAMAFLOBGA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E32D620)
#define FBAMAFLOBGA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E32D840)
#define FBAMAFLOBGA_HKEOLEMDKKL_OFFSET UNITYSDK_OFFSET(0x1E32D610)
#define FBAMAFLOBGA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E32D450)
#define FBAMAFLOBGA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E32DC00)
#define FBAMAFLOBGA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E32DBB0)
#define FBAMAFLOBGA_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1E32D600)
#define FBAMAFLOBGA_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1E32D5F0)
#define FBAMAFLOBGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E32D4B0)
#define FBAMAFLOBGA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E32D940)
#define FBAMAFLOBGA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E32D9A0)

	class FBAMAFLOBGA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KAFIFNEDHFF; // 0x18
		::System::UInt32 ABPDPMHFFNN; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FBAMAFLOBGA")->GetStaticField(0x58C00);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_OMODMLGBAPL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "FBAMAFLOBGA")->GetStaticField(0x58C08);
		}

		// static const ::System::Object EDGGGCNOFHI; // 0x0
		// static const ::System::Object DLKCAAKGAJG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FBAMAFLOBGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBAMAFLOBGA*))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBAMAFLOBGA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FBAMAFLOBGA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FBAMAFLOBGA* Clone()
		{
			return ((::FBAMAFLOBGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_CLONE_OFFSET))(this);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HKEOLEMDKKL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_HKEOLEMDKKL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FBAMAFLOBGA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBAMAFLOBGA*))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FBAMAFLOBGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBAMAFLOBGA*))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FBAMAFLOBGA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
