#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJNHIKIGKJC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JJNHIKIGKJC_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1FF33EC0)
#define JJNHIKIGKJC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FF34220)
#define JJNHIKIGKJC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF344F0)
#define JJNHIKIGKJC_CLONE_OFFSET UNITYSDK_OFFSET(0x1FF33E70)
#define JJNHIKIGKJC_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1FF33EE0)
#define JJNHIKIGKJC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF33E40)
#define JJNHIKIGKJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF33E30)
#define JJNHIKIGKJC_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1FF33ED0)
#define JJNHIKIGKJC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FF33FE0)
#define JJNHIKIGKJC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FF33F00)
#define JJNHIKIGKJC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FF340B0)
#define JJNHIKIGKJC_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1FF33EF0)
#define JJNHIKIGKJC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FF33DF0)
#define JJNHIKIGKJC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FF34370)
#define JJNHIKIGKJC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FF34330)
#define JJNHIKIGKJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FF33E20)
#define JJNHIKIGKJC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FF340E0)
#define JJNHIKIGKJC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FF34140)

inline static constexpr unsigned int JJNHIKIGKJC_TypeDefinitionIndex = 28086;

	class JJNHIKIGKJC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NPFBAFODCBI; // 0x18
		::System::UInt32 KJAENGKDFJD; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::JJNHIKIGKJC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JJNHIKIGKJC*>**)UnitySDK::FromName("", "JJNHIKIGKJC")->GetStaticField(0x619F0);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object PIACMPBJOIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNHIKIGKJC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JJNHIKIGKJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJNHIKIGKJC*))((::PBYTE)hIl2Cpp + JJNHIKIGKJC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJNHIKIGKJC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JJNHIKIGKJC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JJNHIKIGKJC*>*(*)())((::PBYTE)hIl2Cpp + JJNHIKIGKJC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNHIKIGKJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JJNHIKIGKJC* Clone()
		{
			return ((::JJNHIKIGKJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNHIKIGKJC_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNHIKIGKJC_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JJNHIKIGKJC_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNHIKIGKJC_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JJNHIKIGKJC_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JJNHIKIGKJC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JJNHIKIGKJC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJNHIKIGKJC*))((::PBYTE)hIl2Cpp + JJNHIKIGKJC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNHIKIGKJC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNHIKIGKJC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JJNHIKIGKJC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNHIKIGKJC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JJNHIKIGKJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJNHIKIGKJC*))((::PBYTE)hIl2Cpp + JJNHIKIGKJC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JJNHIKIGKJC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
