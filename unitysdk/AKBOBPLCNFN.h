#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKBOBPLCNFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AKBOBPLCNFN_CABNIPPLDOI_OFFSET UNITYSDK_OFFSET(0x1E3C8050)
#define AKBOBPLCNFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3C8420)
#define AKBOBPLCNFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C8680)
#define AKBOBPLCNFN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3C8020)
#define AKBOBPLCNFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3C7F90)
#define AKBOBPLCNFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C7F40)
#define AKBOBPLCNFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3C8150)
#define AKBOBPLCNFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3C8060)
#define AKBOBPLCNFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3C8240)
#define AKBOBPLCNFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3C7F00)
#define AKBOBPLCNFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3C84E0)
#define AKBOBPLCNFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3C8490)
#define AKBOBPLCNFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3C7F30)
#define AKBOBPLCNFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3C8340)
#define AKBOBPLCNFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3C83A0)

inline static constexpr unsigned int AKBOBPLCNFN_TypeDefinitionIndex = 34626;

	class AKBOBPLCNFN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BAFCDDLPJDA; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_LEFBBKKFLKN()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "AKBOBPLCNFN")->GetStaticField(0x36480);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AKBOBPLCNFN")->GetStaticField(0x36488);
		}

		// static const ::System::Object NKNFFPBDPJP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBOBPLCNFN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AKBOBPLCNFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKBOBPLCNFN*))((::PBYTE)hIl2Cpp + AKBOBPLCNFN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKBOBPLCNFN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AKBOBPLCNFN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBOBPLCNFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AKBOBPLCNFN* Clone()
		{
			return ((::AKBOBPLCNFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBOBPLCNFN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CABNIPPLDOI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBOBPLCNFN_CABNIPPLDOI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AKBOBPLCNFN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AKBOBPLCNFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AKBOBPLCNFN*))((::PBYTE)hIl2Cpp + AKBOBPLCNFN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBOBPLCNFN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBOBPLCNFN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AKBOBPLCNFN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBOBPLCNFN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AKBOBPLCNFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKBOBPLCNFN*))((::PBYTE)hIl2Cpp + AKBOBPLCNFN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AKBOBPLCNFN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
