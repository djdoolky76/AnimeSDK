#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNHFCHGALDA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DNHFCHGALDA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x201E5E30)
#define DNHFCHGALDA_CCTOR_OFFSET UNITYSDK_OFFSET(0x201E6160)
#define DNHFCHGALDA_CLONE_OFFSET UNITYSDK_OFFSET(0x201E5990)
#define DNHFCHGALDA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x201E5920)
#define DNHFCHGALDA_CTOR_OFFSET UNITYSDK_OFFSET(0x201E58F0)
#define DNHFCHGALDA_EBHAOMACJKF_OFFSET UNITYSDK_OFFSET(0x201E5A50)
#define DNHFCHGALDA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x201E5B90)
#define DNHFCHGALDA_EQUALS_OFFSET UNITYSDK_OFFSET(0x201E5A60)
#define DNHFCHGALDA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x201E5C80)
#define DNHFCHGALDA_IKDPGIGDDDC_OFFSET UNITYSDK_OFFSET(0x201E5A30)
#define DNHFCHGALDA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x201E5880)
#define DNHFCHGALDA_KLCGEBLIANF_OFFSET UNITYSDK_OFFSET(0x201E5A40)
#define DNHFCHGALDA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x201E5F90)
#define DNHFCHGALDA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x201E5F40)
#define DNHFCHGALDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x201E58E0)
#define DNHFCHGALDA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x201E5CD0)
#define DNHFCHGALDA_WRITETO_OFFSET UNITYSDK_OFFSET(0x201E5D30)

inline static constexpr unsigned int DNHFCHGALDA_TypeDefinitionIndex = 30019;

	class DNHFCHGALDA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* OAOFHKOAOCL; // 0x18
		::System::UInt32 BJCGANEHKEO; // 0x20
		static ::System::Object** StaticGet_JMPPLPMCHEH()
		{
			return (::System::Object**)UnitySDK::FromName("", "DNHFCHGALDA")->GetStaticField(0x36090);
		}

		static ::Google::Protobuf::MessageParser_1<::DNHFCHGALDA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DNHFCHGALDA*>**)UnitySDK::FromName("", "DNHFCHGALDA")->GetStaticField(0x36098);
		}

		// static const ::System::Object AFKPGOJFAFJ; // 0x0
		// static const ::System::Object LKLFJFMEEAJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFCHGALDA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DNHFCHGALDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNHFCHGALDA*))((::PBYTE)hIl2Cpp + DNHFCHGALDA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNHFCHGALDA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DNHFCHGALDA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DNHFCHGALDA*>*(*)())((::PBYTE)hIl2Cpp + DNHFCHGALDA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFCHGALDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DNHFCHGALDA* Clone()
		{
			return ((::DNHFCHGALDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFCHGALDA_CLONE_OFFSET))(this);
		}

		::System::UInt32 IKDPGIGDDDC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFCHGALDA_IKDPGIGDDDC_OFFSET))(this);
		}

		::System::Void KLCGEBLIANF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DNHFCHGALDA_KLCGEBLIANF_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* EBHAOMACJKF()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFCHGALDA_EBHAOMACJKF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNHFCHGALDA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DNHFCHGALDA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNHFCHGALDA*))((::PBYTE)hIl2Cpp + DNHFCHGALDA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFCHGALDA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFCHGALDA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DNHFCHGALDA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFCHGALDA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DNHFCHGALDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNHFCHGALDA*))((::PBYTE)hIl2Cpp + DNHFCHGALDA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DNHFCHGALDA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
