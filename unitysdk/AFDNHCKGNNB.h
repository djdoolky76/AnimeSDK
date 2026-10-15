#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFDNHCKGNNB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AFDNHCKGNNB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0E8880)
#define AFDNHCKGNNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E8B70)
#define AFDNHCKGNNB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0E83F0)
#define AFDNHCKGNNB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0E8360)
#define AFDNHCKGNNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E8310)
#define AFDNHCKGNNB_DCAAIJACOOH_OFFSET UNITYSDK_OFFSET(0x1E0E8420)
#define AFDNHCKGNNB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0E8550)
#define AFDNHCKGNNB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0E8450)
#define AFDNHCKGNNB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E0E8440)
#define AFDNHCKGNNB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0E8640)
#define AFDNHCKGNNB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0E82D0)
#define AFDNHCKGNNB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0E89C0)
#define AFDNHCKGNNB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0E8970)
#define AFDNHCKGNNB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E0E8430)
#define AFDNHCKGNNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0E8300)
#define AFDNHCKGNNB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0E8740)
#define AFDNHCKGNNB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0E87A0)

inline static constexpr unsigned int AFDNHCKGNNB_TypeDefinitionIndex = 30554;

	class AFDNHCKGNNB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ENMDCGPDKGL; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FDPOEFGBOOA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "AFDNHCKGNNB")->GetStaticField(0x35190);
		}

		static ::Google::Protobuf::MessageParser_1<::AFDNHCKGNNB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AFDNHCKGNNB*>**)UnitySDK::FromName("", "AFDNHCKGNNB")->GetStaticField(0x35198);
		}

		// static const ::System::Object IMMIFHODMFM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDNHCKGNNB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AFDNHCKGNNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFDNHCKGNNB*))((::PBYTE)hIl2Cpp + AFDNHCKGNNB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFDNHCKGNNB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AFDNHCKGNNB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AFDNHCKGNNB*>*(*)())((::PBYTE)hIl2Cpp + AFDNHCKGNNB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDNHCKGNNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AFDNHCKGNNB* Clone()
		{
			return ((::AFDNHCKGNNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDNHCKGNNB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DCAAIJACOOH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDNHCKGNNB_DCAAIJACOOH_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDNHCKGNNB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFDNHCKGNNB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFDNHCKGNNB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AFDNHCKGNNB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AFDNHCKGNNB*))((::PBYTE)hIl2Cpp + AFDNHCKGNNB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDNHCKGNNB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDNHCKGNNB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AFDNHCKGNNB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDNHCKGNNB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AFDNHCKGNNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFDNHCKGNNB*))((::PBYTE)hIl2Cpp + AFDNHCKGNNB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AFDNHCKGNNB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
