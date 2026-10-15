#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONJIANLPDBE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ONJIANLPDBE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEC7530)
#define ONJIANLPDBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC77F0)
#define ONJIANLPDBE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEC70B0)
#define ONJIANLPDBE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEC7020)
#define ONJIANLPDBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC6FD0)
#define ONJIANLPDBE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEC7230)
#define ONJIANLPDBE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEC7110)
#define ONJIANLPDBE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEC7320)
#define ONJIANLPDBE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEC6F60)
#define ONJIANLPDBE_KHKHJONDCGM_OFFSET UNITYSDK_OFFSET(0x1DEC7100)
#define ONJIANLPDBE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEC7620)
#define ONJIANLPDBE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEC75D0)
#define ONJIANLPDBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEC6FC0)
#define ONJIANLPDBE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEC7420)
#define ONJIANLPDBE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEC7480)

inline static constexpr unsigned int ONJIANLPDBE_TypeDefinitionIndex = 30718;

	class ONJIANLPDBE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EPICJBOOGNP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ONJIANLPDBE")->GetStaticField(0x2C6C0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_MKEIONKELDM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "ONJIANLPDBE")->GetStaticField(0x2C6C8);
		}

		// static const ::System::Object HMPBLJDPENH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONJIANLPDBE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ONJIANLPDBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONJIANLPDBE*))((::PBYTE)hIl2Cpp + ONJIANLPDBE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONJIANLPDBE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ONJIANLPDBE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONJIANLPDBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ONJIANLPDBE* Clone()
		{
			return ((::ONJIANLPDBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONJIANLPDBE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHKHJONDCGM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONJIANLPDBE_KHKHJONDCGM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONJIANLPDBE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ONJIANLPDBE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ONJIANLPDBE*))((::PBYTE)hIl2Cpp + ONJIANLPDBE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONJIANLPDBE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONJIANLPDBE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ONJIANLPDBE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONJIANLPDBE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ONJIANLPDBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONJIANLPDBE*))((::PBYTE)hIl2Cpp + ONJIANLPDBE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ONJIANLPDBE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
