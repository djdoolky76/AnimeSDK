#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBBINLLONGI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NBBINLLONGI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EACCDB0)
#define NBBINLLONGI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EACCFD0)
#define NBBINLLONGI_CJJDNMIPMNM_OFFSET UNITYSDK_OFFSET(0x1EACCA50)
#define NBBINLLONGI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EACCA00)
#define NBBINLLONGI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EACC9D0)
#define NBBINLLONGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EACC9C0)
#define NBBINLLONGI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EACCB30)
#define NBBINLLONGI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EACCA60)
#define NBBINLLONGI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EACCCA0)
#define NBBINLLONGI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EACC980)
#define NBBINLLONGI_KJMBBIGBLDK_OFFSET UNITYSDK_OFFSET(0x1EACCA40)
#define NBBINLLONGI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EACCE70)
#define NBBINLLONGI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EACCE40)
#define NBBINLLONGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EACC9B0)
#define NBBINLLONGI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EACCCD0)
#define NBBINLLONGI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EACCD30)

inline static constexpr unsigned int NBBINLLONGI_TypeDefinitionIndex = 31662;

	class NBBINLLONGI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OJDOJFBJOOE; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NBBINLLONGI")->GetStaticField(0x5CD10);
		}

		// static const ::System::Object FIEDIDHOLDJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBINLLONGI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NBBINLLONGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBBINLLONGI*))((::PBYTE)hIl2Cpp + NBBINLLONGI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBBINLLONGI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NBBINLLONGI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBINLLONGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NBBINLLONGI* Clone()
		{
			return ((::NBBINLLONGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBINLLONGI_CLONE_OFFSET))(this);
		}

		::System::UInt32 KJMBBIGBLDK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBINLLONGI_KJMBBIGBLDK_OFFSET))(this);
		}

		::System::Void CJJDNMIPMNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBBINLLONGI_CJJDNMIPMNM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBBINLLONGI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NBBINLLONGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBBINLLONGI*))((::PBYTE)hIl2Cpp + NBBINLLONGI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBINLLONGI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBINLLONGI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NBBINLLONGI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBINLLONGI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NBBINLLONGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBBINLLONGI*))((::PBYTE)hIl2Cpp + NBBINLLONGI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NBBINLLONGI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
