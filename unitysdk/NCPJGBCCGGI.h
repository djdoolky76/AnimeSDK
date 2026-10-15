#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCPJGBCCGGI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NCPJGBCCGGI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAE3040)
#define NCPJGBCCGGI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE3260)
#define NCPJGBCCGGI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAE2C30)
#define NCPJGBCCGGI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAE2C00)
#define NCPJGBCCGGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE2BF0)
#define NCPJGBCCGGI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAE2DC0)
#define NCPJGBCCGGI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAE2CC0)
#define NCPJGBCCGGI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAE2F30)
#define NCPJGBCCGGI_JJCBOFBONPO_OFFSET UNITYSDK_OFFSET(0x1EAE2CB0)
#define NCPJGBCCGGI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAE2B80)
#define NCPJGBCCGGI_LCNGCANAPPJ_OFFSET UNITYSDK_OFFSET(0x1EAE2CA0)
#define NCPJGBCCGGI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAE3100)
#define NCPJGBCCGGI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAE30D0)
#define NCPJGBCCGGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAE2BE0)
#define NCPJGBCCGGI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAE2F60)
#define NCPJGBCCGGI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAE2FC0)

inline static constexpr unsigned int NCPJGBCCGGI_TypeDefinitionIndex = 31034;

	class NCPJGBCCGGI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LMBGHCAGODP; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NCPJGBCCGGI")->GetStaticField(0x5D400);
		}

		// static const ::System::Object AGMNNNMDIPG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPJGBCCGGI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NCPJGBCCGGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCPJGBCCGGI*))((::PBYTE)hIl2Cpp + NCPJGBCCGGI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCPJGBCCGGI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NCPJGBCCGGI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPJGBCCGGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NCPJGBCCGGI* Clone()
		{
			return ((::NCPJGBCCGGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPJGBCCGGI_CLONE_OFFSET))(this);
		}

		::System::UInt32 LCNGCANAPPJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPJGBCCGGI_LCNGCANAPPJ_OFFSET))(this);
		}

		::System::Void JJCBOFBONPO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NCPJGBCCGGI_JJCBOFBONPO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCPJGBCCGGI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NCPJGBCCGGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NCPJGBCCGGI*))((::PBYTE)hIl2Cpp + NCPJGBCCGGI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPJGBCCGGI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPJGBCCGGI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NCPJGBCCGGI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPJGBCCGGI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NCPJGBCCGGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCPJGBCCGGI*))((::PBYTE)hIl2Cpp + NCPJGBCCGGI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NCPJGBCCGGI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
