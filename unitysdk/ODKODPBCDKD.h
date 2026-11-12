#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODKODPBCDKD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ODKODPBCDKD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F0C0440)
#define ODKODPBCDKD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0C06A0)
#define ODKODPBCDKD_CLONE_OFFSET UNITYSDK_OFFSET(0x1F0C0040)
#define ODKODPBCDKD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F0BFFB0)
#define ODKODPBCDKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0BFF60)
#define ODKODPBCDKD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F0C0170)
#define ODKODPBCDKD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F0C0080)
#define ODKODPBCDKD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F0C0260)
#define ODKODPBCDKD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F0BFF20)
#define ODKODPBCDKD_JPJKELPHFDB_OFFSET UNITYSDK_OFFSET(0x1F0C0070)
#define ODKODPBCDKD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F0C0500)
#define ODKODPBCDKD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F0C04B0)
#define ODKODPBCDKD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F0BFF50)
#define ODKODPBCDKD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F0C0360)
#define ODKODPBCDKD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F0C03C0)

inline static constexpr unsigned int ODKODPBCDKD_TypeDefinitionIndex = 30489;

	class ODKODPBCDKD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MLOBGNNJHOO; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ODKODPBCDKD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ODKODPBCDKD*>**)UnitySDK::FromName("", "ODKODPBCDKD")->GetStaticField(0xE650);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MNEMHJMKLOD()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "ODKODPBCDKD")->GetStaticField(0xE658);
		}

		// static const ::System::Object KOFDEIOJIND; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKODPBCDKD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ODKODPBCDKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODKODPBCDKD*))((::PBYTE)hIl2Cpp + ODKODPBCDKD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODKODPBCDKD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ODKODPBCDKD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ODKODPBCDKD*>*(*)())((::PBYTE)hIl2Cpp + ODKODPBCDKD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKODPBCDKD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ODKODPBCDKD* Clone()
		{
			return ((::ODKODPBCDKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKODPBCDKD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JPJKELPHFDB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKODPBCDKD_JPJKELPHFDB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ODKODPBCDKD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ODKODPBCDKD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ODKODPBCDKD*))((::PBYTE)hIl2Cpp + ODKODPBCDKD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKODPBCDKD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKODPBCDKD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ODKODPBCDKD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKODPBCDKD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ODKODPBCDKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODKODPBCDKD*))((::PBYTE)hIl2Cpp + ODKODPBCDKD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ODKODPBCDKD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
