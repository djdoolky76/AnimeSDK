#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBMFCJLHNAA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LBMFCJLHNAA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8DEE20)
#define LBMFCJLHNAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8DF080)
#define LBMFCJLHNAA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8DEA20)
#define LBMFCJLHNAA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8DE990)
#define LBMFCJLHNAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8DE940)
#define LBMFCJLHNAA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8DEB50)
#define LBMFCJLHNAA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8DEA60)
#define LBMFCJLHNAA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8DEC40)
#define LBMFCJLHNAA_HBGGIJICLGF_OFFSET UNITYSDK_OFFSET(0x1E8DEA50)
#define LBMFCJLHNAA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8DE900)
#define LBMFCJLHNAA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8DEEE0)
#define LBMFCJLHNAA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8DEE90)
#define LBMFCJLHNAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8DE930)
#define LBMFCJLHNAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8DED40)
#define LBMFCJLHNAA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8DEDA0)

inline static constexpr unsigned int LBMFCJLHNAA_TypeDefinitionIndex = 35133;

	class LBMFCJLHNAA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MOCFIAEMBFL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LBMFCJLHNAA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LBMFCJLHNAA*>**)UnitySDK::FromName("", "LBMFCJLHNAA")->GetStaticField(0x30BB0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HPMBHPJILKK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LBMFCJLHNAA")->GetStaticField(0x30BB8);
		}

		// static const ::System::Object DDMCEKKKDHB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMFCJLHNAA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LBMFCJLHNAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBMFCJLHNAA*))((::PBYTE)hIl2Cpp + LBMFCJLHNAA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBMFCJLHNAA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LBMFCJLHNAA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LBMFCJLHNAA*>*(*)())((::PBYTE)hIl2Cpp + LBMFCJLHNAA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMFCJLHNAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LBMFCJLHNAA* Clone()
		{
			return ((::LBMFCJLHNAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMFCJLHNAA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HBGGIJICLGF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMFCJLHNAA_HBGGIJICLGF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LBMFCJLHNAA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LBMFCJLHNAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LBMFCJLHNAA*))((::PBYTE)hIl2Cpp + LBMFCJLHNAA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMFCJLHNAA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMFCJLHNAA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LBMFCJLHNAA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMFCJLHNAA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LBMFCJLHNAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBMFCJLHNAA*))((::PBYTE)hIl2Cpp + LBMFCJLHNAA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LBMFCJLHNAA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
