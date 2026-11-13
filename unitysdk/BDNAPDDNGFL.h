#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDNAPDDNGFL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BDNAPDDNGFL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F9F1DB0)
#define BDNAPDDNGFL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9F2070)
#define BDNAPDDNGFL_CHGHEIJODDN_OFFSET UNITYSDK_OFFSET(0x1F9F1980)
#define BDNAPDDNGFL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F9F1930)
#define BDNAPDDNGFL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F9F18A0)
#define BDNAPDDNGFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9F1850)
#define BDNAPDDNGFL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F9F1AB0)
#define BDNAPDDNGFL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F9F1990)
#define BDNAPDDNGFL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F9F1BA0)
#define BDNAPDDNGFL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F9F17E0)
#define BDNAPDDNGFL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F9F1EA0)
#define BDNAPDDNGFL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F9F1E50)
#define BDNAPDDNGFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F9F1840)
#define BDNAPDDNGFL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F9F1CA0)
#define BDNAPDDNGFL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F9F1D00)

inline static constexpr unsigned int BDNAPDDNGFL_TypeDefinitionIndex = 25879;

	class BDNAPDDNGFL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OBNLOILBHBP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BDNAPDDNGFL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BDNAPDDNGFL*>**)UnitySDK::FromName("", "BDNAPDDNGFL")->GetStaticField(0x3AC70);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NFPCCOMNKGK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "BDNAPDDNGFL")->GetStaticField(0x3AC78);
		}

		// static const ::System::Object JENJMFCCKPE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNAPDDNGFL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BDNAPDDNGFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDNAPDDNGFL*))((::PBYTE)hIl2Cpp + BDNAPDDNGFL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDNAPDDNGFL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BDNAPDDNGFL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BDNAPDDNGFL*>*(*)())((::PBYTE)hIl2Cpp + BDNAPDDNGFL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNAPDDNGFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BDNAPDDNGFL* Clone()
		{
			return ((::BDNAPDDNGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNAPDDNGFL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CHGHEIJODDN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNAPDDNGFL_CHGHEIJODDN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BDNAPDDNGFL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BDNAPDDNGFL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BDNAPDDNGFL*))((::PBYTE)hIl2Cpp + BDNAPDDNGFL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNAPDDNGFL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNAPDDNGFL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BDNAPDDNGFL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNAPDDNGFL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BDNAPDDNGFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDNAPDDNGFL*))((::PBYTE)hIl2Cpp + BDNAPDDNGFL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BDNAPDDNGFL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
