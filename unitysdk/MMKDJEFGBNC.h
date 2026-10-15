#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMKDJEFGBNC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MMKDJEFGBNC_ALIDAFMCJGG_OFFSET UNITYSDK_OFFSET(0x1EA8DE00)
#define MMKDJEFGBNC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA8E230)
#define MMKDJEFGBNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA8E510)
#define MMKDJEFGBNC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA8DD30)
#define MMKDJEFGBNC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA8DCF0)
#define MMKDJEFGBNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA8DCE0)
#define MMKDJEFGBNC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA8DF10)
#define MMKDJEFGBNC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA8DE10)
#define MMKDJEFGBNC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA8E010)
#define MMKDJEFGBNC_GGIPNHGMPCN_OFFSET UNITYSDK_OFFSET(0x1EA8DDF0)
#define MMKDJEFGBNC_HABCMACJEIN_OFFSET UNITYSDK_OFFSET(0x1EA8DDA0)
#define MMKDJEFGBNC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA8DCA0)
#define MMKDJEFGBNC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA8E360)
#define MMKDJEFGBNC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA8E310)
#define MMKDJEFGBNC_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x1EA8DD90)
#define MMKDJEFGBNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA8DCD0)
#define MMKDJEFGBNC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA8E0E0)
#define MMKDJEFGBNC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA8E140)

inline static constexpr unsigned int MMKDJEFGBNC_TypeDefinitionIndex = 33742;

	class MMKDJEFGBNC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* IOGCODPGEEA; // 0x18
		::System::UInt32 MDHELICKNPE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MMKDJEFGBNC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MMKDJEFGBNC*>**)UnitySDK::FromName("", "MMKDJEFGBNC")->GetStaticField(0x58F90);
		}

		// static const ::System::Object OLMIFJKILJG; // 0x0
		// static const ::System::Object HLKDEGJOKIO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKDJEFGBNC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MMKDJEFGBNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMKDJEFGBNC*))((::PBYTE)hIl2Cpp + MMKDJEFGBNC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMKDJEFGBNC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MMKDJEFGBNC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MMKDJEFGBNC*>*(*)())((::PBYTE)hIl2Cpp + MMKDJEFGBNC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKDJEFGBNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MMKDJEFGBNC* Clone()
		{
			return ((::MMKDJEFGBNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKDJEFGBNC_CLONE_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKDJEFGBNC_MLMGEFIOION_OFFSET))(this);
		}

		::System::Void HABCMACJEIN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MMKDJEFGBNC_HABCMACJEIN_OFFSET))(this, a1);
		}

		::System::UInt32 GGIPNHGMPCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKDJEFGBNC_GGIPNHGMPCN_OFFSET))(this);
		}

		::System::Void ALIDAFMCJGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MMKDJEFGBNC_ALIDAFMCJGG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMKDJEFGBNC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MMKDJEFGBNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MMKDJEFGBNC*))((::PBYTE)hIl2Cpp + MMKDJEFGBNC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKDJEFGBNC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKDJEFGBNC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MMKDJEFGBNC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKDJEFGBNC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MMKDJEFGBNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMKDJEFGBNC*))((::PBYTE)hIl2Cpp + MMKDJEFGBNC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MMKDJEFGBNC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
