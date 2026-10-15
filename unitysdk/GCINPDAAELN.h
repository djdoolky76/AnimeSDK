#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCINPDAAELN;
class JPEBEDHMNLA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GCINPDAAELN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E410820)
#define GCINPDAAELN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E410B20)
#define GCINPDAAELN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4103A0)
#define GCINPDAAELN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4102F0)
#define GCINPDAAELN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4102A0)
#define GCINPDAAELN_DCKAMLHKADM_OFFSET UNITYSDK_OFFSET(0x1E4103F0)
#define GCINPDAAELN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E410580)
#define GCINPDAAELN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E410400)
#define GCINPDAAELN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4106A0)
#define GCINPDAAELN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E410230)
#define GCINPDAAELN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E410960)
#define GCINPDAAELN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4108C0)
#define GCINPDAAELN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E410290)
#define GCINPDAAELN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E410710)
#define GCINPDAAELN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E410770)

inline static constexpr unsigned int GCINPDAAELN_TypeDefinitionIndex = 31621;

	class GCINPDAAELN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JPEBEDHMNLA*>* ELBGFDFFBPH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GCINPDAAELN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GCINPDAAELN*>**)UnitySDK::FromName("", "GCINPDAAELN")->GetStaticField(0xE760);
		}

		static ::Google::Protobuf::FieldCodec_1<::JPEBEDHMNLA*>** StaticGet_EHPMIHMAMFE()
		{
			return (::Google::Protobuf::FieldCodec_1<::JPEBEDHMNLA*>**)UnitySDK::FromName("", "GCINPDAAELN")->GetStaticField(0xE768);
		}

		// static const ::System::Object JBKGNCCMBND; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCINPDAAELN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GCINPDAAELN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCINPDAAELN*))((::PBYTE)hIl2Cpp + GCINPDAAELN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCINPDAAELN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GCINPDAAELN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GCINPDAAELN*>*(*)())((::PBYTE)hIl2Cpp + GCINPDAAELN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCINPDAAELN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GCINPDAAELN* Clone()
		{
			return ((::GCINPDAAELN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCINPDAAELN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JPEBEDHMNLA*>* DCKAMLHKADM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JPEBEDHMNLA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCINPDAAELN_DCKAMLHKADM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GCINPDAAELN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GCINPDAAELN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GCINPDAAELN*))((::PBYTE)hIl2Cpp + GCINPDAAELN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCINPDAAELN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCINPDAAELN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GCINPDAAELN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCINPDAAELN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GCINPDAAELN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCINPDAAELN*))((::PBYTE)hIl2Cpp + GCINPDAAELN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GCINPDAAELN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
