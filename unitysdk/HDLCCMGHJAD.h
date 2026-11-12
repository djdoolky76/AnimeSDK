#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDLCCMGHJAD;
class NNDKLIBALLC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HDLCCMGHJAD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F84A5F0)
#define HDLCCMGHJAD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F84A8F0)
#define HDLCCMGHJAD_CLONE_OFFSET UNITYSDK_OFFSET(0x1F84A1D0)
#define HDLCCMGHJAD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F84A120)
#define HDLCCMGHJAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F84A0D0)
#define HDLCCMGHJAD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F84A350)
#define HDLCCMGHJAD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F84A210)
#define HDLCCMGHJAD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F84A470)
#define HDLCCMGHJAD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F84A090)
#define HDLCCMGHJAD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F84A730)
#define HDLCCMGHJAD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F84A690)
#define HDLCCMGHJAD_OGEJENKCCCC_OFFSET UNITYSDK_OFFSET(0x1F84A200)
#define HDLCCMGHJAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F84A0C0)
#define HDLCCMGHJAD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F84A4E0)
#define HDLCCMGHJAD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F84A540)

inline static constexpr unsigned int HDLCCMGHJAD_TypeDefinitionIndex = 32058;

	class HDLCCMGHJAD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::NNDKLIBALLC*>* NJLIDDBENAE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::NNDKLIBALLC*>** StaticGet_NFOGMGFHFCM()
		{
			return (::Google::Protobuf::FieldCodec_1<::NNDKLIBALLC*>**)UnitySDK::FromName("", "HDLCCMGHJAD")->GetStaticField(0x27960);
		}

		static ::Google::Protobuf::MessageParser_1<::HDLCCMGHJAD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HDLCCMGHJAD*>**)UnitySDK::FromName("", "HDLCCMGHJAD")->GetStaticField(0x27968);
		}

		// static const ::System::Object DHHDFBEEHKA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLCCMGHJAD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HDLCCMGHJAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDLCCMGHJAD*))((::PBYTE)hIl2Cpp + HDLCCMGHJAD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDLCCMGHJAD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HDLCCMGHJAD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HDLCCMGHJAD*>*(*)())((::PBYTE)hIl2Cpp + HDLCCMGHJAD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLCCMGHJAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HDLCCMGHJAD* Clone()
		{
			return ((::HDLCCMGHJAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLCCMGHJAD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NNDKLIBALLC*>* OGEJENKCCCC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NNDKLIBALLC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLCCMGHJAD_OGEJENKCCCC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDLCCMGHJAD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HDLCCMGHJAD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HDLCCMGHJAD*))((::PBYTE)hIl2Cpp + HDLCCMGHJAD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLCCMGHJAD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLCCMGHJAD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HDLCCMGHJAD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLCCMGHJAD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HDLCCMGHJAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDLCCMGHJAD*))((::PBYTE)hIl2Cpp + HDLCCMGHJAD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HDLCCMGHJAD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
