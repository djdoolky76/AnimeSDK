#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNGEEKCHHED;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DNGEEKCHHED_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1C7F40)
#define DNGEEKCHHED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1C8240)
#define DNGEEKCHHED_CDIMIOFALEG_OFFSET UNITYSDK_OFFSET(0x1E1C7AE0)
#define DNGEEKCHHED_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1C7AB0)
#define DNGEEKCHHED_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1C7A20)
#define DNGEEKCHHED_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C79D0)
#define DNGEEKCHHED_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1C7C10)
#define DNGEEKCHHED_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1C7B10)
#define DNGEEKCHHED_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1C7D00)
#define DNGEEKCHHED_GOLPFFCDICE_OFFSET UNITYSDK_OFFSET(0x1E1C7B00)
#define DNGEEKCHHED_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1C7990)
#define DNGEEKCHHED_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1C8080)
#define DNGEEKCHHED_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1C8030)
#define DNGEEKCHHED_OGMHHLBHKOF_OFFSET UNITYSDK_OFFSET(0x1E1C7AF0)
#define DNGEEKCHHED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1C79C0)
#define DNGEEKCHHED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1C7E00)
#define DNGEEKCHHED_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1C7E60)

inline static constexpr unsigned int DNGEEKCHHED_TypeDefinitionIndex = 32898;

	class DNGEEKCHHED : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HPFPOIDPHNK; // 0x18
		::System::UInt32 JCGMPJONLCA; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DNGEEKCHHED*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DNGEEKCHHED*>**)UnitySDK::FromName("", "DNGEEKCHHED")->GetStaticField(0x36D50);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FNDJLGADNDI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "DNGEEKCHHED")->GetStaticField(0x36D58);
		}

		// static const ::System::Object KDFONKLNGBC; // 0x0
		// static const ::System::Object GAHLJEECCFB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGEEKCHHED_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DNGEEKCHHED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNGEEKCHHED*))((::PBYTE)hIl2Cpp + DNGEEKCHHED_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNGEEKCHHED_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DNGEEKCHHED*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DNGEEKCHHED*>*(*)())((::PBYTE)hIl2Cpp + DNGEEKCHHED_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGEEKCHHED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DNGEEKCHHED* Clone()
		{
			return ((::DNGEEKCHHED*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGEEKCHHED_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CDIMIOFALEG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGEEKCHHED_CDIMIOFALEG_OFFSET))(this);
		}

		::System::UInt32 OGMHHLBHKOF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGEEKCHHED_OGMHHLBHKOF_OFFSET))(this);
		}

		::System::Void GOLPFFCDICE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DNGEEKCHHED_GOLPFFCDICE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNGEEKCHHED_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DNGEEKCHHED* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNGEEKCHHED*))((::PBYTE)hIl2Cpp + DNGEEKCHHED_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGEEKCHHED_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGEEKCHHED_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DNGEEKCHHED_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGEEKCHHED_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DNGEEKCHHED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNGEEKCHHED*))((::PBYTE)hIl2Cpp + DNGEEKCHHED_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DNGEEKCHHED_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
