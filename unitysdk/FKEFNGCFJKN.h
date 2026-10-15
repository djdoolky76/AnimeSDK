#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKEFNGCFJKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FKEFNGCFJKN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3ADF70)
#define FKEFNGCFJKN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3AE190)
#define FKEFNGCFJKN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3ADBC0)
#define FKEFNGCFJKN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3ADB90)
#define FKEFNGCFJKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3ADB80)
#define FKEFNGCFJKN_DNGEOHDDIHA_OFFSET UNITYSDK_OFFSET(0x1E3ADC10)
#define FKEFNGCFJKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3ADCF0)
#define FKEFNGCFJKN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3ADC20)
#define FKEFNGCFJKN_FAHNIHCFNOG_OFFSET UNITYSDK_OFFSET(0x1E3ADC00)
#define FKEFNGCFJKN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3ADE60)
#define FKEFNGCFJKN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3ADB40)
#define FKEFNGCFJKN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3AE030)
#define FKEFNGCFJKN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3AE000)
#define FKEFNGCFJKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3ADB70)
#define FKEFNGCFJKN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3ADE90)
#define FKEFNGCFJKN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3ADEF0)

inline static constexpr unsigned int FKEFNGCFJKN_TypeDefinitionIndex = 32770;

	class FKEFNGCFJKN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DDKDAHKMBFL; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FKEFNGCFJKN")->GetStaticField(0x61220);
		}

		// static const ::System::Object OBJDFPPBDAA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEFNGCFJKN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FKEFNGCFJKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKEFNGCFJKN*))((::PBYTE)hIl2Cpp + FKEFNGCFJKN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKEFNGCFJKN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FKEFNGCFJKN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEFNGCFJKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FKEFNGCFJKN* Clone()
		{
			return ((::FKEFNGCFJKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEFNGCFJKN_CLONE_OFFSET))(this);
		}

		::System::UInt32 FAHNIHCFNOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEFNGCFJKN_FAHNIHCFNOG_OFFSET))(this);
		}

		::System::Void DNGEOHDDIHA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FKEFNGCFJKN_DNGEOHDDIHA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKEFNGCFJKN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FKEFNGCFJKN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKEFNGCFJKN*))((::PBYTE)hIl2Cpp + FKEFNGCFJKN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEFNGCFJKN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEFNGCFJKN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FKEFNGCFJKN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEFNGCFJKN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FKEFNGCFJKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKEFNGCFJKN*))((::PBYTE)hIl2Cpp + FKEFNGCFJKN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FKEFNGCFJKN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
