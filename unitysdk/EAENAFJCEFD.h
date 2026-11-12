#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAENAFJCEFD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EAENAFJCEFD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F5046D0)
#define EAENAFJCEFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F504940)
#define EAENAFJCEFD_CLONE_OFFSET UNITYSDK_OFFSET(0x1F504100)
#define EAENAFJCEFD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F504010)
#define EAENAFJCEFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F503F80)
#define EAENAFJCEFD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F5042C0)
#define EAENAFJCEFD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F504170)
#define EAENAFJCEFD_FAAAEBOAFGE_OFFSET UNITYSDK_OFFSET(0x1F504150)
#define EAENAFJCEFD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F5043D0)
#define EAENAFJCEFD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F503F10)
#define EAENAFJCEFD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F504800)
#define EAENAFJCEFD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F5047A0)
#define EAENAFJCEFD_NAMBLDAMOKO_OFFSET UNITYSDK_OFFSET(0x1F504160)
#define EAENAFJCEFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F503F70)
#define EAENAFJCEFD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F504590)
#define EAENAFJCEFD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F5045F0)

inline static constexpr unsigned int EAENAFJCEFD_TypeDefinitionIndex = 25970;

	class EAENAFJCEFD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GOJMBBGBNEL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DJKBEECIAAF; // 0x20
		static ::Google::Protobuf::MessageParser_1<::EAENAFJCEFD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EAENAFJCEFD*>**)UnitySDK::FromName("", "EAENAFJCEFD")->GetStaticField(0x44C70);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MADLJOLCBBI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "EAENAFJCEFD")->GetStaticField(0x44C78);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BLIBPCIAGOA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "EAENAFJCEFD")->GetStaticField(0x44C80);
		}

		// static const ::System::Object CEEMHKBMLLI; // 0x0
		// static const ::System::Object IKKDAMHFPBE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAENAFJCEFD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EAENAFJCEFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAENAFJCEFD*))((::PBYTE)hIl2Cpp + EAENAFJCEFD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAENAFJCEFD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EAENAFJCEFD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EAENAFJCEFD*>*(*)())((::PBYTE)hIl2Cpp + EAENAFJCEFD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAENAFJCEFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EAENAFJCEFD* Clone()
		{
			return ((::EAENAFJCEFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAENAFJCEFD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FAAAEBOAFGE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAENAFJCEFD_FAAAEBOAFGE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NAMBLDAMOKO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAENAFJCEFD_NAMBLDAMOKO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EAENAFJCEFD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EAENAFJCEFD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EAENAFJCEFD*))((::PBYTE)hIl2Cpp + EAENAFJCEFD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAENAFJCEFD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAENAFJCEFD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EAENAFJCEFD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAENAFJCEFD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EAENAFJCEFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAENAFJCEFD*))((::PBYTE)hIl2Cpp + EAENAFJCEFD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EAENAFJCEFD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
