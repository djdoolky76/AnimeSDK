#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDIEIOFFMKM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CDIEIOFFMKM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E085810)
#define CDIEIOFFMKM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E085A70)
#define CDIEIOFFMKM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E085410)
#define CDIEIOFFMKM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E085380)
#define CDIEIOFFMKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E085330)
#define CDIEIOFFMKM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E085540)
#define CDIEIOFFMKM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E085450)
#define CDIEIOFFMKM_FJDHCGKAJFF_OFFSET UNITYSDK_OFFSET(0x1E085440)
#define CDIEIOFFMKM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E085630)
#define CDIEIOFFMKM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0852F0)
#define CDIEIOFFMKM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0858D0)
#define CDIEIOFFMKM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E085880)
#define CDIEIOFFMKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E085320)
#define CDIEIOFFMKM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E085730)
#define CDIEIOFFMKM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E085790)

inline static constexpr unsigned int CDIEIOFFMKM_TypeDefinitionIndex = 34100;

	class CDIEIOFFMKM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FHILLFEJDMP; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HDFENDPFEIH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CDIEIOFFMKM")->GetStaticField(0xF190);
		}

		static ::Google::Protobuf::MessageParser_1<::CDIEIOFFMKM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CDIEIOFFMKM*>**)UnitySDK::FromName("", "CDIEIOFFMKM")->GetStaticField(0xF198);
		}

		// static const ::System::Object JLACJFPMHLG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIEIOFFMKM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CDIEIOFFMKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDIEIOFFMKM*))((::PBYTE)hIl2Cpp + CDIEIOFFMKM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDIEIOFFMKM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CDIEIOFFMKM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CDIEIOFFMKM*>*(*)())((::PBYTE)hIl2Cpp + CDIEIOFFMKM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIEIOFFMKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CDIEIOFFMKM* Clone()
		{
			return ((::CDIEIOFFMKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIEIOFFMKM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FJDHCGKAJFF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIEIOFFMKM_FJDHCGKAJFF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDIEIOFFMKM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CDIEIOFFMKM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDIEIOFFMKM*))((::PBYTE)hIl2Cpp + CDIEIOFFMKM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIEIOFFMKM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIEIOFFMKM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CDIEIOFFMKM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIEIOFFMKM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CDIEIOFFMKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDIEIOFFMKM*))((::PBYTE)hIl2Cpp + CDIEIOFFMKM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CDIEIOFFMKM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
