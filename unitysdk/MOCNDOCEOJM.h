#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOCNDOCEOJM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MOCNDOCEOJM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAA5120)
#define MOCNDOCEOJM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAA53E0)
#define MOCNDOCEOJM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAA4CA0)
#define MOCNDOCEOJM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAA4C10)
#define MOCNDOCEOJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAA4BC0)
#define MOCNDOCEOJM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAA4E20)
#define MOCNDOCEOJM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAA4D00)
#define MOCNDOCEOJM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAA4F10)
#define MOCNDOCEOJM_JDFFEJFPHBJ_OFFSET UNITYSDK_OFFSET(0x1EAA4CF0)
#define MOCNDOCEOJM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAA4B50)
#define MOCNDOCEOJM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAA5210)
#define MOCNDOCEOJM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAA51C0)
#define MOCNDOCEOJM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAA4BB0)
#define MOCNDOCEOJM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAA5010)
#define MOCNDOCEOJM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAA5070)

	class MOCNDOCEOJM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JBEPELLPAJC; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_OKDIKGNLFBH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MOCNDOCEOJM")->GetStaticField(0x5A270);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MOCNDOCEOJM")->GetStaticField(0x5A278);
		}

		// static const ::System::Object PDFFAKHMEPI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCNDOCEOJM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MOCNDOCEOJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOCNDOCEOJM*))((::PBYTE)hIl2Cpp + MOCNDOCEOJM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOCNDOCEOJM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MOCNDOCEOJM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCNDOCEOJM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MOCNDOCEOJM* Clone()
		{
			return ((::MOCNDOCEOJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCNDOCEOJM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JDFFEJFPHBJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCNDOCEOJM_JDFFEJFPHBJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOCNDOCEOJM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MOCNDOCEOJM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MOCNDOCEOJM*))((::PBYTE)hIl2Cpp + MOCNDOCEOJM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCNDOCEOJM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCNDOCEOJM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MOCNDOCEOJM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCNDOCEOJM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MOCNDOCEOJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOCNDOCEOJM*))((::PBYTE)hIl2Cpp + MOCNDOCEOJM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MOCNDOCEOJM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
