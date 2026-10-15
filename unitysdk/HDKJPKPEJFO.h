#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDKJPKPEJFO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HDKJPKPEJFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E522EA0)
#define HDKJPKPEJFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5231E0)
#define HDKJPKPEJFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E522990)
#define HDKJPKPEJFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E522900)
#define HDKJPKPEJFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5228B0)
#define HDKJPKPEJFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E522B40)
#define HDKJPKPEJFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E522A10)
#define HDKJPKPEJFO_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1E5229E0)
#define HDKJPKPEJFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E522C30)
#define HDKJPKPEJFO_JHHEHACMNOM_OFFSET UNITYSDK_OFFSET(0x1E522A00)
#define HDKJPKPEJFO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E522840)
#define HDKJPKPEJFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E523000)
#define HDKJPKPEJFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E522FB0)
#define HDKJPKPEJFO_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1E5229F0)
#define HDKJPKPEJFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5228A0)
#define HDKJPKPEJFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E522D30)
#define HDKJPKPEJFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E522D90)

inline static constexpr unsigned int HDKJPKPEJFO_TypeDefinitionIndex = 30616;

	class HDKJPKPEJFO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AKILLLPLNGJ; // 0x18
		::System::UInt32 OPPNMFMNMGC; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HDKJPKPEJFO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HDKJPKPEJFO*>**)UnitySDK::FromName("", "HDKJPKPEJFO")->GetStaticField(0x2C0F0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CKIJNGLMOKI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "HDKJPKPEJFO")->GetStaticField(0x2C0F8);
		}

		// static const ::System::Object BOIGPPCIPFF; // 0x0
		// static const ::System::Object JNAONFGKBIE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKJPKPEJFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HDKJPKPEJFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDKJPKPEJFO*))((::PBYTE)hIl2Cpp + HDKJPKPEJFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDKJPKPEJFO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HDKJPKPEJFO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HDKJPKPEJFO*>*(*)())((::PBYTE)hIl2Cpp + HDKJPKPEJFO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKJPKPEJFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HDKJPKPEJFO* Clone()
		{
			return ((::HDKJPKPEJFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKJPKPEJFO_CLONE_OFFSET))(this);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKJPKPEJFO_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HDKJPKPEJFO_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JHHEHACMNOM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKJPKPEJFO_JHHEHACMNOM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDKJPKPEJFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HDKJPKPEJFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HDKJPKPEJFO*))((::PBYTE)hIl2Cpp + HDKJPKPEJFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKJPKPEJFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKJPKPEJFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HDKJPKPEJFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKJPKPEJFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HDKJPKPEJFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDKJPKPEJFO*))((::PBYTE)hIl2Cpp + HDKJPKPEJFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HDKJPKPEJFO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
