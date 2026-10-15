#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFDHOCKEPGD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NFDHOCKEPGD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB000A0)
#define NFDHOCKEPGD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB002C0)
#define NFDHOCKEPGD_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAFFC90)
#define NFDHOCKEPGD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAFFC60)
#define NFDHOCKEPGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAFFC50)
#define NFDHOCKEPGD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAFFE20)
#define NFDHOCKEPGD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAFFD20)
#define NFDHOCKEPGD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAFFF90)
#define NFDHOCKEPGD_IGHHFLHPCDN_OFFSET UNITYSDK_OFFSET(0x1EAFFD10)
#define NFDHOCKEPGD_JGKCDIFEMPL_OFFSET UNITYSDK_OFFSET(0x1EAFFD00)
#define NFDHOCKEPGD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAFFBE0)
#define NFDHOCKEPGD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB00160)
#define NFDHOCKEPGD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB00130)
#define NFDHOCKEPGD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAFFC40)
#define NFDHOCKEPGD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAFFFC0)
#define NFDHOCKEPGD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB00020)

inline static constexpr unsigned int NFDHOCKEPGD_TypeDefinitionIndex = 25798;

	class NFDHOCKEPGD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AJPNGCJCMEB; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NFDHOCKEPGD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NFDHOCKEPGD*>**)UnitySDK::FromName("", "NFDHOCKEPGD")->GetStaticField(0x5E5E0);
		}

		// static const ::System::Object FBCFBAPNOGL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDHOCKEPGD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NFDHOCKEPGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFDHOCKEPGD*))((::PBYTE)hIl2Cpp + NFDHOCKEPGD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFDHOCKEPGD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NFDHOCKEPGD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NFDHOCKEPGD*>*(*)())((::PBYTE)hIl2Cpp + NFDHOCKEPGD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDHOCKEPGD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NFDHOCKEPGD* Clone()
		{
			return ((::NFDHOCKEPGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDHOCKEPGD_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGKCDIFEMPL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDHOCKEPGD_JGKCDIFEMPL_OFFSET))(this);
		}

		::System::Void IGHHFLHPCDN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFDHOCKEPGD_IGHHFLHPCDN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NFDHOCKEPGD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NFDHOCKEPGD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NFDHOCKEPGD*))((::PBYTE)hIl2Cpp + NFDHOCKEPGD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDHOCKEPGD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDHOCKEPGD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NFDHOCKEPGD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDHOCKEPGD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NFDHOCKEPGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFDHOCKEPGD*))((::PBYTE)hIl2Cpp + NFDHOCKEPGD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NFDHOCKEPGD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
