#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAHBEAHIFCC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BAHBEAHIFCC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7B5DF0)
#define BAHBEAHIFCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7B60D0)
#define BAHBEAHIFCC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7B58F0)
#define BAHBEAHIFCC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7B58B0)
#define BAHBEAHIFCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B58A0)
#define BAHBEAHIFCC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7B5AD0)
#define BAHBEAHIFCC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7B59D0)
#define BAHBEAHIFCC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7B5BD0)
#define BAHBEAHIFCC_HJFPHKFDGPA_OFFSET UNITYSDK_OFFSET(0x1E7B5960)
#define BAHBEAHIFCC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7B5860)
#define BAHBEAHIFCC_LPNGGIMGEMI_OFFSET UNITYSDK_OFFSET(0x1E7B59B0)
#define BAHBEAHIFCC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7B5F20)
#define BAHBEAHIFCC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7B5ED0)
#define BAHBEAHIFCC_NIGNBJPJHBD_OFFSET UNITYSDK_OFFSET(0x1E7B59C0)
#define BAHBEAHIFCC_OJIDMNELKNF_OFFSET UNITYSDK_OFFSET(0x1E7B5950)
#define BAHBEAHIFCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7B5890)
#define BAHBEAHIFCC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7B5CA0)
#define BAHBEAHIFCC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7B5D00)

inline static constexpr unsigned int BAHBEAHIFCC_TypeDefinitionIndex = 26174;

	class BAHBEAHIFCC : public ::System::Object
	{
	public:
		::System::String* NFMDJEOKDLF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 IADNJCMLAGB; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BAHBEAHIFCC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BAHBEAHIFCC*>**)UnitySDK::FromName("", "BAHBEAHIFCC")->GetStaticField(0x45380);
		}

		// static const ::System::Object FOHJPMIFJKC; // 0x0
		// static const ::System::Object JMLKCFFEPPE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHBEAHIFCC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BAHBEAHIFCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAHBEAHIFCC*))((::PBYTE)hIl2Cpp + BAHBEAHIFCC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAHBEAHIFCC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BAHBEAHIFCC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BAHBEAHIFCC*>*(*)())((::PBYTE)hIl2Cpp + BAHBEAHIFCC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHBEAHIFCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BAHBEAHIFCC* Clone()
		{
			return ((::BAHBEAHIFCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHBEAHIFCC_CLONE_OFFSET))(this);
		}

		::System::String* OJIDMNELKNF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHBEAHIFCC_OJIDMNELKNF_OFFSET))(this);
		}

		::System::Void HJFPHKFDGPA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BAHBEAHIFCC_HJFPHKFDGPA_OFFSET))(this, a1);
		}

		::System::UInt32 LPNGGIMGEMI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHBEAHIFCC_LPNGGIMGEMI_OFFSET))(this);
		}

		::System::Void NIGNBJPJHBD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BAHBEAHIFCC_NIGNBJPJHBD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BAHBEAHIFCC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BAHBEAHIFCC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAHBEAHIFCC*))((::PBYTE)hIl2Cpp + BAHBEAHIFCC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHBEAHIFCC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHBEAHIFCC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BAHBEAHIFCC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHBEAHIFCC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BAHBEAHIFCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAHBEAHIFCC*))((::PBYTE)hIl2Cpp + BAHBEAHIFCC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BAHBEAHIFCC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
