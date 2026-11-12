#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PICONFLHMCD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PICONFLHMCD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F2146F0)
#define PICONFLHMCD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F214950)
#define PICONFLHMCD_CLONE_OFFSET UNITYSDK_OFFSET(0x1F2142F0)
#define PICONFLHMCD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F214260)
#define PICONFLHMCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F214210)
#define PICONFLHMCD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F214420)
#define PICONFLHMCD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F214330)
#define PICONFLHMCD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F214510)
#define PICONFLHMCD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F2141D0)
#define PICONFLHMCD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F2147B0)
#define PICONFLHMCD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F214760)
#define PICONFLHMCD_OODENDBBAJP_OFFSET UNITYSDK_OFFSET(0x1F214320)
#define PICONFLHMCD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F214200)
#define PICONFLHMCD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F214610)
#define PICONFLHMCD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F214670)

inline static constexpr unsigned int PICONFLHMCD_TypeDefinitionIndex = 31810;

	class PICONFLHMCD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BBEIGKKDDAF; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KDADAEGMHIO()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PICONFLHMCD")->GetStaticField(0x37AD0);
		}

		static ::Google::Protobuf::MessageParser_1<::PICONFLHMCD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PICONFLHMCD*>**)UnitySDK::FromName("", "PICONFLHMCD")->GetStaticField(0x37AD8);
		}

		// static const ::System::Object LLJHJADNDKB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PICONFLHMCD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PICONFLHMCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PICONFLHMCD*))((::PBYTE)hIl2Cpp + PICONFLHMCD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PICONFLHMCD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PICONFLHMCD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PICONFLHMCD*>*(*)())((::PBYTE)hIl2Cpp + PICONFLHMCD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICONFLHMCD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PICONFLHMCD* Clone()
		{
			return ((::PICONFLHMCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICONFLHMCD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OODENDBBAJP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICONFLHMCD_OODENDBBAJP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PICONFLHMCD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PICONFLHMCD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PICONFLHMCD*))((::PBYTE)hIl2Cpp + PICONFLHMCD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PICONFLHMCD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICONFLHMCD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PICONFLHMCD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PICONFLHMCD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PICONFLHMCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PICONFLHMCD*))((::PBYTE)hIl2Cpp + PICONFLHMCD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PICONFLHMCD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
