#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAMLGHGHIOD;
class OBINJKCBALC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OBINJKCBALC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F0A5160)
#define OBINJKCBALC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0A5460)
#define OBINJKCBALC_CLONE_OFFSET UNITYSDK_OFFSET(0x1F0A4CE0)
#define OBINJKCBALC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F0A4C30)
#define OBINJKCBALC_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0A4BE0)
#define OBINJKCBALC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F0A4EC0)
#define OBINJKCBALC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F0A4D40)
#define OBINJKCBALC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F0A4FE0)
#define OBINJKCBALC_JHEFPOGNBND_OFFSET UNITYSDK_OFFSET(0x1F0A4D30)
#define OBINJKCBALC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F0A4B70)
#define OBINJKCBALC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F0A52A0)
#define OBINJKCBALC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F0A5200)
#define OBINJKCBALC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F0A4BD0)
#define OBINJKCBALC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F0A5050)
#define OBINJKCBALC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F0A50B0)

inline static constexpr unsigned int OBINJKCBALC_TypeDefinitionIndex = 28267;

	class OBINJKCBALC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::FAMLGHGHIOD*>* JLFDMJMJDND; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::FAMLGHGHIOD*>** StaticGet_JKBHDLODNOE()
		{
			return (::Google::Protobuf::FieldCodec_1<::FAMLGHGHIOD*>**)UnitySDK::FromName("", "OBINJKCBALC")->GetStaticField(0xB3F0);
		}

		static ::Google::Protobuf::MessageParser_1<::OBINJKCBALC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OBINJKCBALC*>**)UnitySDK::FromName("", "OBINJKCBALC")->GetStaticField(0xB3F8);
		}

		// static const ::System::Object CPBPPPJBFGH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBINJKCBALC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OBINJKCBALC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBINJKCBALC*))((::PBYTE)hIl2Cpp + OBINJKCBALC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBINJKCBALC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OBINJKCBALC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OBINJKCBALC*>*(*)())((::PBYTE)hIl2Cpp + OBINJKCBALC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBINJKCBALC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OBINJKCBALC* Clone()
		{
			return ((::OBINJKCBALC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBINJKCBALC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FAMLGHGHIOD*>* JHEFPOGNBND()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FAMLGHGHIOD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBINJKCBALC_JHEFPOGNBND_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBINJKCBALC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OBINJKCBALC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OBINJKCBALC*))((::PBYTE)hIl2Cpp + OBINJKCBALC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBINJKCBALC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBINJKCBALC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OBINJKCBALC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBINJKCBALC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OBINJKCBALC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBINJKCBALC*))((::PBYTE)hIl2Cpp + OBINJKCBALC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OBINJKCBALC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
