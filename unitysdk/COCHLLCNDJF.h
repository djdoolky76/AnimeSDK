#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COCHLLCNDJF;
class EDKJELMPONH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define COCHLLCNDJF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E103B30)
#define COCHLLCNDJF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E103E30)
#define COCHLLCNDJF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E103710)
#define COCHLLCNDJF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E103660)
#define COCHLLCNDJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E103610)
#define COCHLLCNDJF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E103890)
#define COCHLLCNDJF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E103750)
#define COCHLLCNDJF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1039B0)
#define COCHLLCNDJF_GJGHABLELGJ_OFFSET UNITYSDK_OFFSET(0x1E103740)
#define COCHLLCNDJF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1035D0)
#define COCHLLCNDJF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E103C70)
#define COCHLLCNDJF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E103BD0)
#define COCHLLCNDJF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E103600)
#define COCHLLCNDJF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E103A20)
#define COCHLLCNDJF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E103A80)

inline static constexpr unsigned int COCHLLCNDJF_TypeDefinitionIndex = 27498;

	class COCHLLCNDJF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::EDKJELMPONH*>* GEPKKCJOFGO; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::EDKJELMPONH*>** StaticGet_OLFMPDAPINL()
		{
			return (::Google::Protobuf::FieldCodec_1<::EDKJELMPONH*>**)UnitySDK::FromName("", "COCHLLCNDJF")->GetStaticField(0x1DC70);
		}

		static ::Google::Protobuf::MessageParser_1<::COCHLLCNDJF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::COCHLLCNDJF*>**)UnitySDK::FromName("", "COCHLLCNDJF")->GetStaticField(0x1DC78);
		}

		// static const ::System::Object MGBNDLBFPEO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COCHLLCNDJF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::COCHLLCNDJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COCHLLCNDJF*))((::PBYTE)hIl2Cpp + COCHLLCNDJF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COCHLLCNDJF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::COCHLLCNDJF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::COCHLLCNDJF*>*(*)())((::PBYTE)hIl2Cpp + COCHLLCNDJF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + COCHLLCNDJF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::COCHLLCNDJF* Clone()
		{
			return ((::COCHLLCNDJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + COCHLLCNDJF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EDKJELMPONH*>* GJGHABLELGJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EDKJELMPONH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + COCHLLCNDJF_GJGHABLELGJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + COCHLLCNDJF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::COCHLLCNDJF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::COCHLLCNDJF*))((::PBYTE)hIl2Cpp + COCHLLCNDJF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COCHLLCNDJF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COCHLLCNDJF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + COCHLLCNDJF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COCHLLCNDJF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::COCHLLCNDJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COCHLLCNDJF*))((::PBYTE)hIl2Cpp + COCHLLCNDJF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + COCHLLCNDJF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
