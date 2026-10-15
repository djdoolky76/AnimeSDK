#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNGEEKCHHED;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DNGEEKCHHED_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1F54E0)
#define DNGEEKCHHED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1F57E0)
#define DNGEEKCHHED_CDIMIOFALEG_OFFSET UNITYSDK_OFFSET(0x1E1F5080)
#define DNGEEKCHHED_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1F5050)
#define DNGEEKCHHED_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1F4FC0)
#define DNGEEKCHHED_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F4F70)
#define DNGEEKCHHED_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1F51B0)
#define DNGEEKCHHED_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1F50B0)
#define DNGEEKCHHED_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1F52A0)
#define DNGEEKCHHED_GOLPFFCDICE_OFFSET UNITYSDK_OFFSET(0x1E1F50A0)
#define DNGEEKCHHED_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1F4F30)
#define DNGEEKCHHED_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1F5620)
#define DNGEEKCHHED_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1F55D0)
#define DNGEEKCHHED_OGMHHLBHKOF_OFFSET UNITYSDK_OFFSET(0x1E1F5090)
#define DNGEEKCHHED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1F4F60)
#define DNGEEKCHHED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1F53A0)
#define DNGEEKCHHED_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1F5400)

inline static constexpr unsigned int DNGEEKCHHED_TypeDefinitionIndex = 32898;

	class DNGEEKCHHED : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HPFPOIDPHNK; // 0x18
		::System::UInt32 JCGMPJONLCA; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_FNDJLGADNDI()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DNGEEKCHHED")->GetStaticField(0x40260);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DNGEEKCHHED")->GetStaticField(0x40268);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DNGEEKCHHED_JJGHOBBFNJD_OFFSET))();
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
