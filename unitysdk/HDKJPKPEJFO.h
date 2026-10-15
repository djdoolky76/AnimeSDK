#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDKJPKPEJFO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HDKJPKPEJFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E550480)
#define HDKJPKPEJFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5507C0)
#define HDKJPKPEJFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E54FF70)
#define HDKJPKPEJFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E54FEE0)
#define HDKJPKPEJFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E54FE90)
#define HDKJPKPEJFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E550120)
#define HDKJPKPEJFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E54FFF0)
#define HDKJPKPEJFO_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1E54FFC0)
#define HDKJPKPEJFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E550210)
#define HDKJPKPEJFO_JHHEHACMNOM_OFFSET UNITYSDK_OFFSET(0x1E54FFE0)
#define HDKJPKPEJFO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E54FE20)
#define HDKJPKPEJFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5505E0)
#define HDKJPKPEJFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E550590)
#define HDKJPKPEJFO_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1E54FFD0)
#define HDKJPKPEJFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E54FE80)
#define HDKJPKPEJFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E550310)
#define HDKJPKPEJFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E550370)

inline static constexpr unsigned int HDKJPKPEJFO_TypeDefinitionIndex = 30616;

	class HDKJPKPEJFO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AKILLLPLNGJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 OPPNMFMNMGC; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_CKIJNGLMOKI()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HDKJPKPEJFO")->GetStaticField(0x32060);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HDKJPKPEJFO")->GetStaticField(0x32068);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HDKJPKPEJFO_JJGHOBBFNJD_OFFSET))();
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
