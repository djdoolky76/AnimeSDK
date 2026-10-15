#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBJLNKAFNAD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HBJLNKAFNAD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E52D700)
#define HBJLNKAFNAD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E52D960)
#define HBJLNKAFNAD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E52D300)
#define HBJLNKAFNAD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E52D270)
#define HBJLNKAFNAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E52D220)
#define HBJLNKAFNAD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E52D430)
#define HBJLNKAFNAD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E52D340)
#define HBJLNKAFNAD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E52D520)
#define HBJLNKAFNAD_HONGLJECAAC_OFFSET UNITYSDK_OFFSET(0x1E52D330)
#define HBJLNKAFNAD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E52D1E0)
#define HBJLNKAFNAD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E52D7C0)
#define HBJLNKAFNAD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E52D770)
#define HBJLNKAFNAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E52D210)
#define HBJLNKAFNAD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E52D620)
#define HBJLNKAFNAD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E52D680)

inline static constexpr unsigned int HBJLNKAFNAD_TypeDefinitionIndex = 25319;

	class HBJLNKAFNAD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AFNHANNCAMC; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_FCNMONMFJEF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HBJLNKAFNAD")->GetStaticField(0x2EB80);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HBJLNKAFNAD")->GetStaticField(0x2EB88);
		}

		// static const ::System::Object GEJEJNNMGGP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJLNKAFNAD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HBJLNKAFNAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBJLNKAFNAD*))((::PBYTE)hIl2Cpp + HBJLNKAFNAD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBJLNKAFNAD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HBJLNKAFNAD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJLNKAFNAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HBJLNKAFNAD* Clone()
		{
			return ((::HBJLNKAFNAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJLNKAFNAD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HONGLJECAAC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJLNKAFNAD_HONGLJECAAC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBJLNKAFNAD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HBJLNKAFNAD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBJLNKAFNAD*))((::PBYTE)hIl2Cpp + HBJLNKAFNAD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJLNKAFNAD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJLNKAFNAD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HBJLNKAFNAD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJLNKAFNAD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HBJLNKAFNAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBJLNKAFNAD*))((::PBYTE)hIl2Cpp + HBJLNKAFNAD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HBJLNKAFNAD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
