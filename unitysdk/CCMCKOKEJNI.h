#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCMCKOKEJNI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CCMCKOKEJNI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FEBB9B0)
#define CCMCKOKEJNI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEBBC70)
#define CCMCKOKEJNI_CLONE_OFFSET UNITYSDK_OFFSET(0x1FEBB530)
#define CCMCKOKEJNI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FEBB4A0)
#define CCMCKOKEJNI_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEBB450)
#define CCMCKOKEJNI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FEBB6B0)
#define CCMCKOKEJNI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FEBB590)
#define CCMCKOKEJNI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FEBB7A0)
#define CCMCKOKEJNI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FEBB3E0)
#define CCMCKOKEJNI_MEFIIOBCDLF_OFFSET UNITYSDK_OFFSET(0x1FEBB580)
#define CCMCKOKEJNI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FEBBAA0)
#define CCMCKOKEJNI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FEBBA50)
#define CCMCKOKEJNI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FEBB440)
#define CCMCKOKEJNI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FEBB8A0)
#define CCMCKOKEJNI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FEBB900)

inline static constexpr unsigned int CCMCKOKEJNI_TypeDefinitionIndex = 31923;

	class CCMCKOKEJNI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BFHGILEDGFL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CCMCKOKEJNI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CCMCKOKEJNI*>**)UnitySDK::FromName("", "CCMCKOKEJNI")->GetStaticField(0x612C0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NDCOOABFHKG()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CCMCKOKEJNI")->GetStaticField(0x612C8);
		}

		// static const ::System::Object LJIGBOOPPLJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMCKOKEJNI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CCMCKOKEJNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCMCKOKEJNI*))((::PBYTE)hIl2Cpp + CCMCKOKEJNI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCMCKOKEJNI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CCMCKOKEJNI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CCMCKOKEJNI*>*(*)())((::PBYTE)hIl2Cpp + CCMCKOKEJNI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMCKOKEJNI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CCMCKOKEJNI* Clone()
		{
			return ((::CCMCKOKEJNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMCKOKEJNI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MEFIIOBCDLF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMCKOKEJNI_MEFIIOBCDLF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCMCKOKEJNI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CCMCKOKEJNI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCMCKOKEJNI*))((::PBYTE)hIl2Cpp + CCMCKOKEJNI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMCKOKEJNI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMCKOKEJNI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CCMCKOKEJNI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMCKOKEJNI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CCMCKOKEJNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCMCKOKEJNI*))((::PBYTE)hIl2Cpp + CCMCKOKEJNI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CCMCKOKEJNI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
