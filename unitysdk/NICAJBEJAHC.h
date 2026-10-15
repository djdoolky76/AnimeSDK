#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NICAJBEJAHC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NICAJBEJAHC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAF82E0)
#define NICAJBEJAHC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF8540)
#define NICAJBEJAHC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAF7EE0)
#define NICAJBEJAHC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAF7E50)
#define NICAJBEJAHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF7E00)
#define NICAJBEJAHC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAF8010)
#define NICAJBEJAHC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAF7F20)
#define NICAJBEJAHC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAF8100)
#define NICAJBEJAHC_GNAKEIEGCDI_OFFSET UNITYSDK_OFFSET(0x1EAF7F10)
#define NICAJBEJAHC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAF7DC0)
#define NICAJBEJAHC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAF83A0)
#define NICAJBEJAHC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAF8350)
#define NICAJBEJAHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAF7DF0)
#define NICAJBEJAHC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAF8200)
#define NICAJBEJAHC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAF8260)

inline static constexpr unsigned int NICAJBEJAHC_TypeDefinitionIndex = 33559;

	class NICAJBEJAHC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BCOHDKAHBCJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KBBPPNNDJDN()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NICAJBEJAHC")->GetStaticField(0x65030);
		}

		static ::Google::Protobuf::MessageParser_1<::NICAJBEJAHC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NICAJBEJAHC*>**)UnitySDK::FromName("", "NICAJBEJAHC")->GetStaticField(0x65038);
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

		static ::Google::Protobuf::MessageParser_1<::NICAJBEJAHC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NICAJBEJAHC*>*(*)())((::PBYTE)hIl2Cpp + NICAJBEJAHC_JJGHOBBFNJD_OFFSET))();
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
