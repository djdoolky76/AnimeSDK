#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJOACNKDPEI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CJOACNKDPEI_AEFBCEOMCEM_OFFSET UNITYSDK_OFFSET(0x1E0E52D0)
#define CJOACNKDPEI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0E5630)
#define CJOACNKDPEI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E5850)
#define CJOACNKDPEI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0E5280)
#define CJOACNKDPEI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0E5250)
#define CJOACNKDPEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E5240)
#define CJOACNKDPEI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0E53B0)
#define CJOACNKDPEI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0E52E0)
#define CJOACNKDPEI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0E5520)
#define CJOACNKDPEI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0E5200)
#define CJOACNKDPEI_KEFLCJPPJAO_OFFSET UNITYSDK_OFFSET(0x1E0E52C0)
#define CJOACNKDPEI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0E56F0)
#define CJOACNKDPEI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0E56C0)
#define CJOACNKDPEI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0E5230)
#define CJOACNKDPEI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0E5550)
#define CJOACNKDPEI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0E55B0)

inline static constexpr unsigned int CJOACNKDPEI_TypeDefinitionIndex = 30966;

	class CJOACNKDPEI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KNLKJFIKFCG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CJOACNKDPEI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CJOACNKDPEI*>**)UnitySDK::FromName("", "CJOACNKDPEI")->GetStaticField(0x1A700);
		}

		// static const ::System::Object PGLBLGGFDJF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOACNKDPEI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CJOACNKDPEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJOACNKDPEI*))((::PBYTE)hIl2Cpp + CJOACNKDPEI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJOACNKDPEI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CJOACNKDPEI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CJOACNKDPEI*>*(*)())((::PBYTE)hIl2Cpp + CJOACNKDPEI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOACNKDPEI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CJOACNKDPEI* Clone()
		{
			return ((::CJOACNKDPEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOACNKDPEI_CLONE_OFFSET))(this);
		}

		::System::UInt32 KEFLCJPPJAO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOACNKDPEI_KEFLCJPPJAO_OFFSET))(this);
		}

		::System::Void AEFBCEOMCEM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJOACNKDPEI_AEFBCEOMCEM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJOACNKDPEI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CJOACNKDPEI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJOACNKDPEI*))((::PBYTE)hIl2Cpp + CJOACNKDPEI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOACNKDPEI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOACNKDPEI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CJOACNKDPEI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOACNKDPEI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CJOACNKDPEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJOACNKDPEI*))((::PBYTE)hIl2Cpp + CJOACNKDPEI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CJOACNKDPEI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
