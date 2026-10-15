#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLIOFILACMC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define CLIOFILACMC_AIFLNGGOLIK_OFFSET UNITYSDK_OFFSET(0x1E0F9A00)
#define CLIOFILACMC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0F9E70)
#define CLIOFILACMC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0FA1E0)
#define CLIOFILACMC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0F99B0)
#define CLIOFILACMC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0F9920)
#define CLIOFILACMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0F98E0)
#define CLIOFILACMC_EMJONBGEKGB_OFFSET UNITYSDK_OFFSET(0x1E0F99E0)
#define CLIOFILACMC_EOGHDDBKPDA_OFFSET UNITYSDK_OFFSET(0x1E0F99F0)
#define CLIOFILACMC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0F9B60)
#define CLIOFILACMC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0F9A10)
#define CLIOFILACMC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0F9C90)
#define CLIOFILACMC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0F98A0)
#define CLIOFILACMC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0FA020)
#define CLIOFILACMC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0F9F80)
#define CLIOFILACMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0F98D0)
#define CLIOFILACMC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0F9D00)
#define CLIOFILACMC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0F9D60)

inline static constexpr unsigned int CLIOFILACMC_TypeDefinitionIndex = 30873;

	class CLIOFILACMC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* BAKMJFEAFLM; // 0x18
		::System::UInt32 LNCOAPGLKGB; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_NFDGIKACNAN()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CLIOFILACMC")->GetStaticField(0x1D3C0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CLIOFILACMC")->GetStaticField(0x1D3C8);
		}

		// static const ::System::Object KJDJDPPBIFJ; // 0x0
		// static const ::System::Object CEPJFBBCEPP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIOFILACMC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CLIOFILACMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLIOFILACMC*))((::PBYTE)hIl2Cpp + CLIOFILACMC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLIOFILACMC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CLIOFILACMC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIOFILACMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CLIOFILACMC* Clone()
		{
			return ((::CLIOFILACMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIOFILACMC_CLONE_OFFSET))(this);
		}

		::System::UInt32 EMJONBGEKGB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIOFILACMC_EMJONBGEKGB_OFFSET))(this);
		}

		::System::Void EOGHDDBKPDA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLIOFILACMC_EOGHDDBKPDA_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* AIFLNGGOLIK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIOFILACMC_AIFLNGGOLIK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLIOFILACMC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CLIOFILACMC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CLIOFILACMC*))((::PBYTE)hIl2Cpp + CLIOFILACMC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIOFILACMC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIOFILACMC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLIOFILACMC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIOFILACMC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CLIOFILACMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLIOFILACMC*))((::PBYTE)hIl2Cpp + CLIOFILACMC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLIOFILACMC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
