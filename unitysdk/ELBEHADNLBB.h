#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELBEHADNLBB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ELBEHADNLBB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FE5F170)
#define ELBEHADNLBB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE5F4D0)
#define ELBEHADNLBB_CKCIFOBGMKD_OFFSET UNITYSDK_OFFSET(0x1FE5ECB0)
#define ELBEHADNLBB_CLONE_OFFSET UNITYSDK_OFFSET(0x1FE5EC60)
#define ELBEHADNLBB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE5EBD0)
#define ELBEHADNLBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE5EB80)
#define ELBEHADNLBB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FE5EE10)
#define ELBEHADNLBB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE5ECE0)
#define ELBEHADNLBB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FE5EF00)
#define ELBEHADNLBB_HJNCBOIGDMC_OFFSET UNITYSDK_OFFSET(0x1FE5ECD0)
#define ELBEHADNLBB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FE5EB10)
#define ELBEHADNLBB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE5F2F0)
#define ELBEHADNLBB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FE5F2A0)
#define ELBEHADNLBB_MHFOGOAKADH_OFFSET UNITYSDK_OFFSET(0x1FE5ECC0)
#define ELBEHADNLBB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FE5EB70)
#define ELBEHADNLBB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE5F000)
#define ELBEHADNLBB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FE5F060)

inline static constexpr unsigned int ELBEHADNLBB_TypeDefinitionIndex = 30234;

	class ELBEHADNLBB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BJIOBHPOEIC; // 0x18
		::System::UInt32 BHIPOEABFBB; // 0x20
		static ::Google::Protobuf::MessageParser_1<::ELBEHADNLBB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ELBEHADNLBB*>**)UnitySDK::FromName("", "ELBEHADNLBB")->GetStaticField(0x435A0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GOKCHGKCBMD()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "ELBEHADNLBB")->GetStaticField(0x435A8);
		}

		// static const ::System::Object CFNLKMMLIIO; // 0x0
		// static const ::System::Object KNEIDLJLJJM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBEHADNLBB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ELBEHADNLBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELBEHADNLBB*))((::PBYTE)hIl2Cpp + ELBEHADNLBB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELBEHADNLBB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ELBEHADNLBB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ELBEHADNLBB*>*(*)())((::PBYTE)hIl2Cpp + ELBEHADNLBB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBEHADNLBB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ELBEHADNLBB* Clone()
		{
			return ((::ELBEHADNLBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBEHADNLBB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CKCIFOBGMKD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBEHADNLBB_CKCIFOBGMKD_OFFSET))(this);
		}

		::System::UInt32 MHFOGOAKADH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBEHADNLBB_MHFOGOAKADH_OFFSET))(this);
		}

		::System::Void HJNCBOIGDMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ELBEHADNLBB_HJNCBOIGDMC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ELBEHADNLBB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ELBEHADNLBB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ELBEHADNLBB*))((::PBYTE)hIl2Cpp + ELBEHADNLBB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBEHADNLBB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBEHADNLBB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ELBEHADNLBB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBEHADNLBB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ELBEHADNLBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELBEHADNLBB*))((::PBYTE)hIl2Cpp + ELBEHADNLBB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ELBEHADNLBB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
