#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKJMGFOPHHN;
class FLFHACPLDJE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FKJMGFOPHHN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3B0D10)
#define FKJMGFOPHHN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3B1090)
#define FKJMGFOPHHN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3B0800)
#define FKJMGFOPHHN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3B0740)
#define FKJMGFOPHHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B06F0)
#define FKJMGFOPHHN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3B0A10)
#define FKJMGFOPHHN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3B0880)
#define FKJMGFOPHHN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3B0B40)
#define FKJMGFOPHHN_GLDKEOMJEBI_OFFSET UNITYSDK_OFFSET(0x1E3B0870)
#define FKJMGFOPHHN_HLEOFMBAIKL_OFFSET UNITYSDK_OFFSET(0x1E3B0860)
#define FKJMGFOPHHN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3B0680)
#define FKJMGFOPHHN_JPAPEJBMCON_OFFSET UNITYSDK_OFFSET(0x1E3B0850)
#define FKJMGFOPHHN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3B0EC0)
#define FKJMGFOPHHN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3B0E20)
#define FKJMGFOPHHN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3B06E0)
#define FKJMGFOPHHN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3B0BB0)
#define FKJMGFOPHHN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3B0C10)

	class FKJMGFOPHHN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::FLFHACPLDJE*>* EJGPLBIGAJK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 BIBJLJPBEGM; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_MEKNLBBHAND()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "FKJMGFOPHHN")->GetStaticField(0x63D60);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FKJMGFOPHHN")->GetStaticField(0x63D68);
		}

		// static const ::System::Object MEEPAJDICIE; // 0x0
		// static const ::System::Object BAAJCNPLNLK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJMGFOPHHN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FKJMGFOPHHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKJMGFOPHHN*))((::PBYTE)hIl2Cpp + FKJMGFOPHHN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKJMGFOPHHN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FKJMGFOPHHN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJMGFOPHHN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FKJMGFOPHHN* Clone()
		{
			return ((::FKJMGFOPHHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJMGFOPHHN_CLONE_OFFSET))(this);
		}

		::System::UInt32 JPAPEJBMCON()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJMGFOPHHN_JPAPEJBMCON_OFFSET))(this);
		}

		::System::Void HLEOFMBAIKL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FKJMGFOPHHN_HLEOFMBAIKL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FLFHACPLDJE*>* GLDKEOMJEBI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FLFHACPLDJE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJMGFOPHHN_GLDKEOMJEBI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKJMGFOPHHN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FKJMGFOPHHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKJMGFOPHHN*))((::PBYTE)hIl2Cpp + FKJMGFOPHHN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJMGFOPHHN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJMGFOPHHN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FKJMGFOPHHN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJMGFOPHHN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FKJMGFOPHHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKJMGFOPHHN*))((::PBYTE)hIl2Cpp + FKJMGFOPHHN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FKJMGFOPHHN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
