#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBMFAHMBLAA;
class NFMEALLIHPI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GBMFAHMBLAA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E431550)
#define GBMFAHMBLAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E431830)
#define GBMFAHMBLAA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E431130)
#define GBMFAHMBLAA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4310A0)
#define GBMFAHMBLAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E431060)
#define GBMFAHMBLAA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4312B0)
#define GBMFAHMBLAA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E431170)
#define GBMFAHMBLAA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4313D0)
#define GBMFAHMBLAA_IIHKPEENLDI_OFFSET UNITYSDK_OFFSET(0x1E431160)
#define GBMFAHMBLAA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E431020)
#define GBMFAHMBLAA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E431690)
#define GBMFAHMBLAA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4315F0)
#define GBMFAHMBLAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E431050)
#define GBMFAHMBLAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E431440)
#define GBMFAHMBLAA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4314A0)

inline static constexpr unsigned int GBMFAHMBLAA_TypeDefinitionIndex = 34005;

	class GBMFAHMBLAA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::NFMEALLIHPI*>* MAHCIOAFNAO; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GBMFAHMBLAA")->GetStaticField(0xDAE0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_HABHKECKCLO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GBMFAHMBLAA")->GetStaticField(0xDAE8);
		}

		// static const ::System::Object LEBGBPLPPNE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMFAHMBLAA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GBMFAHMBLAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBMFAHMBLAA*))((::PBYTE)hIl2Cpp + GBMFAHMBLAA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBMFAHMBLAA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GBMFAHMBLAA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMFAHMBLAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GBMFAHMBLAA* Clone()
		{
			return ((::GBMFAHMBLAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMFAHMBLAA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NFMEALLIHPI*>* IIHKPEENLDI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NFMEALLIHPI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMFAHMBLAA_IIHKPEENLDI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBMFAHMBLAA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GBMFAHMBLAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GBMFAHMBLAA*))((::PBYTE)hIl2Cpp + GBMFAHMBLAA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMFAHMBLAA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMFAHMBLAA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GBMFAHMBLAA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMFAHMBLAA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GBMFAHMBLAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBMFAHMBLAA*))((::PBYTE)hIl2Cpp + GBMFAHMBLAA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GBMFAHMBLAA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
