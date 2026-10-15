#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCFKHDIKCNI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NCFKHDIKCNI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EADB230)
#define NCFKHDIKCNI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EADB4F0)
#define NCFKHDIKCNI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EADADB0)
#define NCFKHDIKCNI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EADAD20)
#define NCFKHDIKCNI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EADACD0)
#define NCFKHDIKCNI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EADAF30)
#define NCFKHDIKCNI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EADAE10)
#define NCFKHDIKCNI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EADB020)
#define NCFKHDIKCNI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EADAC60)
#define NCFKHDIKCNI_LKJABHDNGDI_OFFSET UNITYSDK_OFFSET(0x1EADAE00)
#define NCFKHDIKCNI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EADB320)
#define NCFKHDIKCNI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EADB2D0)
#define NCFKHDIKCNI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EADACC0)
#define NCFKHDIKCNI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EADB120)
#define NCFKHDIKCNI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EADB180)

inline static constexpr unsigned int NCFKHDIKCNI_TypeDefinitionIndex = 31737;

	class NCFKHDIKCNI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ONHHGGFNDDO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NCFKHDIKCNI")->GetStaticField(0x5D230);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_FNGJDLMNOHJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NCFKHDIKCNI")->GetStaticField(0x5D238);
		}

		// static const ::System::Object MHALDDACAMI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFKHDIKCNI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NCFKHDIKCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCFKHDIKCNI*))((::PBYTE)hIl2Cpp + NCFKHDIKCNI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCFKHDIKCNI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NCFKHDIKCNI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFKHDIKCNI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NCFKHDIKCNI* Clone()
		{
			return ((::NCFKHDIKCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFKHDIKCNI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LKJABHDNGDI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFKHDIKCNI_LKJABHDNGDI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCFKHDIKCNI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NCFKHDIKCNI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NCFKHDIKCNI*))((::PBYTE)hIl2Cpp + NCFKHDIKCNI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFKHDIKCNI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFKHDIKCNI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NCFKHDIKCNI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFKHDIKCNI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NCFKHDIKCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCFKHDIKCNI*))((::PBYTE)hIl2Cpp + NCFKHDIKCNI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NCFKHDIKCNI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
