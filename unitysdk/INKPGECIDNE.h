#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INKPGECIDNE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define INKPGECIDNE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6C5460)
#define INKPGECIDNE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C56C0)
#define INKPGECIDNE_CJKHFOADEAG_OFFSET UNITYSDK_OFFSET(0x1E6C5090)
#define INKPGECIDNE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6C5060)
#define INKPGECIDNE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6C4FD0)
#define INKPGECIDNE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C4F80)
#define INKPGECIDNE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6C5190)
#define INKPGECIDNE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6C50A0)
#define INKPGECIDNE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6C5280)
#define INKPGECIDNE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6C4F40)
#define INKPGECIDNE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6C5520)
#define INKPGECIDNE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6C54D0)
#define INKPGECIDNE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6C4F70)
#define INKPGECIDNE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6C5380)
#define INKPGECIDNE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6C53E0)

inline static constexpr unsigned int INKPGECIDNE_TypeDefinitionIndex = 32910;

	class INKPGECIDNE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MGJEHPPCIJO; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_HAEPDJMJMED()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "INKPGECIDNE")->GetStaticField(0x58780);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "INKPGECIDNE")->GetStaticField(0x58788);
		}

		// static const ::System::Object CNAPCBLOHIM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INKPGECIDNE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::INKPGECIDNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INKPGECIDNE*))((::PBYTE)hIl2Cpp + INKPGECIDNE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INKPGECIDNE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + INKPGECIDNE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + INKPGECIDNE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::INKPGECIDNE* Clone()
		{
			return ((::INKPGECIDNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + INKPGECIDNE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CJKHFOADEAG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INKPGECIDNE_CJKHFOADEAG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INKPGECIDNE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::INKPGECIDNE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INKPGECIDNE*))((::PBYTE)hIl2Cpp + INKPGECIDNE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INKPGECIDNE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INKPGECIDNE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + INKPGECIDNE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INKPGECIDNE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::INKPGECIDNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INKPGECIDNE*))((::PBYTE)hIl2Cpp + INKPGECIDNE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + INKPGECIDNE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
