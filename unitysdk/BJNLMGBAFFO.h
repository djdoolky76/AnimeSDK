#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJNLMGBAFFO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BJNLMGBAFFO_ALIDAFMCJGG_OFFSET UNITYSDK_OFFSET(0x1DF4B3B0)
#define BJNLMGBAFFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF4B7E0)
#define BJNLMGBAFFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF4BAC0)
#define BJNLMGBAFFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF4B2E0)
#define BJNLMGBAFFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF4B2A0)
#define BJNLMGBAFFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF4B290)
#define BJNLMGBAFFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF4B4C0)
#define BJNLMGBAFFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF4B3C0)
#define BJNLMGBAFFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF4B5C0)
#define BJNLMGBAFFO_GGIPNHGMPCN_OFFSET UNITYSDK_OFFSET(0x1DF4B3A0)
#define BJNLMGBAFFO_HABCMACJEIN_OFFSET UNITYSDK_OFFSET(0x1DF4B350)
#define BJNLMGBAFFO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF4B250)
#define BJNLMGBAFFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF4B910)
#define BJNLMGBAFFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF4B8C0)
#define BJNLMGBAFFO_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x1DF4B340)
#define BJNLMGBAFFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF4B280)
#define BJNLMGBAFFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF4B690)
#define BJNLMGBAFFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF4B6F0)

inline static constexpr unsigned int BJNLMGBAFFO_TypeDefinitionIndex = 33766;

	class BJNLMGBAFFO : public ::System::Object
	{
	public:
		::System::String* IOGCODPGEEA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 MDHELICKNPE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BJNLMGBAFFO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BJNLMGBAFFO*>**)UnitySDK::FromName("", "BJNLMGBAFFO")->GetStaticField(0x4A030);
		}

		// static const ::System::Object OLMIFJKILJG; // 0x0
		// static const ::System::Object HLKDEGJOKIO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNLMGBAFFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BJNLMGBAFFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJNLMGBAFFO*))((::PBYTE)hIl2Cpp + BJNLMGBAFFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJNLMGBAFFO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BJNLMGBAFFO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BJNLMGBAFFO*>*(*)())((::PBYTE)hIl2Cpp + BJNLMGBAFFO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNLMGBAFFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BJNLMGBAFFO* Clone()
		{
			return ((::BJNLMGBAFFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNLMGBAFFO_CLONE_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNLMGBAFFO_MLMGEFIOION_OFFSET))(this);
		}

		::System::Void HABCMACJEIN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BJNLMGBAFFO_HABCMACJEIN_OFFSET))(this, a1);
		}

		::System::UInt32 GGIPNHGMPCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNLMGBAFFO_GGIPNHGMPCN_OFFSET))(this);
		}

		::System::Void ALIDAFMCJGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJNLMGBAFFO_ALIDAFMCJGG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJNLMGBAFFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BJNLMGBAFFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJNLMGBAFFO*))((::PBYTE)hIl2Cpp + BJNLMGBAFFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNLMGBAFFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNLMGBAFFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BJNLMGBAFFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNLMGBAFFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BJNLMGBAFFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJNLMGBAFFO*))((::PBYTE)hIl2Cpp + BJNLMGBAFFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BJNLMGBAFFO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
