#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFCFMFONGIE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HFCFMFONGIE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F85E5C0)
#define HFCFMFONGIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F85E880)
#define HFCFMFONGIE_CLONE_OFFSET UNITYSDK_OFFSET(0x1F85E140)
#define HFCFMFONGIE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F85E0B0)
#define HFCFMFONGIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F85E060)
#define HFCFMFONGIE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F85E2C0)
#define HFCFMFONGIE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F85E1A0)
#define HFCFMFONGIE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F85E3B0)
#define HFCFMFONGIE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F85DFF0)
#define HFCFMFONGIE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F85E6B0)
#define HFCFMFONGIE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F85E660)
#define HFCFMFONGIE_OBNLDBJCBFH_OFFSET UNITYSDK_OFFSET(0x1F85E190)
#define HFCFMFONGIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F85E050)
#define HFCFMFONGIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F85E4B0)
#define HFCFMFONGIE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F85E510)

inline static constexpr unsigned int HFCFMFONGIE_TypeDefinitionIndex = 30218;

	class HFCFMFONGIE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KLIGEIBIPID; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HFCFMFONGIE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HFCFMFONGIE*>**)UnitySDK::FromName("", "HFCFMFONGIE")->GetStaticField(0x28F90);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EGPGKAEHPKN()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "HFCFMFONGIE")->GetStaticField(0x28F98);
		}

		// static const ::System::Object OPKDLIJKPNO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCFMFONGIE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HFCFMFONGIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCFMFONGIE*))((::PBYTE)hIl2Cpp + HFCFMFONGIE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFCFMFONGIE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HFCFMFONGIE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HFCFMFONGIE*>*(*)())((::PBYTE)hIl2Cpp + HFCFMFONGIE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCFMFONGIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HFCFMFONGIE* Clone()
		{
			return ((::HFCFMFONGIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCFMFONGIE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OBNLDBJCBFH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCFMFONGIE_OBNLDBJCBFH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFCFMFONGIE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HFCFMFONGIE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HFCFMFONGIE*))((::PBYTE)hIl2Cpp + HFCFMFONGIE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCFMFONGIE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCFMFONGIE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HFCFMFONGIE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCFMFONGIE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HFCFMFONGIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCFMFONGIE*))((::PBYTE)hIl2Cpp + HFCFMFONGIE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HFCFMFONGIE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
