#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJDIAHDLCNJ;
class GMDHIALLILJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GMDHIALLILJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4D0AC0)
#define GMDHIALLILJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4D0DC0)
#define GMDHIALLILJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4D0640)
#define GMDHIALLILJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4D0590)
#define GMDHIALLILJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D0540)
#define GMDHIALLILJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4D0820)
#define GMDHIALLILJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4D06A0)
#define GMDHIALLILJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4D0940)
#define GMDHIALLILJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4D04D0)
#define GMDHIALLILJ_KHAAEFIMKNF_OFFSET UNITYSDK_OFFSET(0x1E4D0690)
#define GMDHIALLILJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4D0C00)
#define GMDHIALLILJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4D0B60)
#define GMDHIALLILJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4D0530)
#define GMDHIALLILJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4D09B0)
#define GMDHIALLILJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4D0A10)

	class GMDHIALLILJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::CJDIAHDLCNJ*>* DEFHLMAFJLJ; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GMDHIALLILJ")->GetStaticField(0x21830);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_PAAJCHLEMGO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GMDHIALLILJ")->GetStaticField(0x21838);
		}

		// static const ::System::Object NAPFJOPLMAI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDHIALLILJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GMDHIALLILJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMDHIALLILJ*))((::PBYTE)hIl2Cpp + GMDHIALLILJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMDHIALLILJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GMDHIALLILJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDHIALLILJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GMDHIALLILJ* Clone()
		{
			return ((::GMDHIALLILJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDHIALLILJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CJDIAHDLCNJ*>* KHAAEFIMKNF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CJDIAHDLCNJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDHIALLILJ_KHAAEFIMKNF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GMDHIALLILJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GMDHIALLILJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GMDHIALLILJ*))((::PBYTE)hIl2Cpp + GMDHIALLILJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDHIALLILJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDHIALLILJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GMDHIALLILJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDHIALLILJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GMDHIALLILJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMDHIALLILJ*))((::PBYTE)hIl2Cpp + GMDHIALLILJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GMDHIALLILJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
