#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODIKKIMIMHO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ODIKKIMIMHO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE1E670)
#define ODIKKIMIMHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE1E890)
#define ODIKKIMIMHO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE1E2C0)
#define ODIKKIMIMHO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE1E290)
#define ODIKKIMIMHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE1E280)
#define ODIKKIMIMHO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE1E3F0)
#define ODIKKIMIMHO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE1E320)
#define ODIKKIMIMHO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE1E560)
#define ODIKKIMIMHO_GKEEEPODBJP_OFFSET UNITYSDK_OFFSET(0x1DE1E300)
#define ODIKKIMIMHO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE1E240)
#define ODIKKIMIMHO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE1E730)
#define ODIKKIMIMHO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE1E700)
#define ODIKKIMIMHO_MHLEHGCBKOD_OFFSET UNITYSDK_OFFSET(0x1DE1E310)
#define ODIKKIMIMHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE1E270)
#define ODIKKIMIMHO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE1E590)
#define ODIKKIMIMHO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE1E5F0)

inline static constexpr unsigned int ODIKKIMIMHO_TypeDefinitionIndex = 34527;

	class ODIKKIMIMHO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PFMACMAPMFP; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ODIKKIMIMHO")->GetStaticField(0x13AD0);
		}

		// static const ::System::Object FDNOENLLFGA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODIKKIMIMHO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ODIKKIMIMHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODIKKIMIMHO*))((::PBYTE)hIl2Cpp + ODIKKIMIMHO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODIKKIMIMHO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ODIKKIMIMHO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODIKKIMIMHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ODIKKIMIMHO* Clone()
		{
			return ((::ODIKKIMIMHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODIKKIMIMHO_CLONE_OFFSET))(this);
		}

		::System::UInt32 GKEEEPODBJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODIKKIMIMHO_GKEEEPODBJP_OFFSET))(this);
		}

		::System::Void MHLEHGCBKOD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ODIKKIMIMHO_MHLEHGCBKOD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ODIKKIMIMHO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ODIKKIMIMHO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ODIKKIMIMHO*))((::PBYTE)hIl2Cpp + ODIKKIMIMHO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODIKKIMIMHO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODIKKIMIMHO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ODIKKIMIMHO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODIKKIMIMHO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ODIKKIMIMHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODIKKIMIMHO*))((::PBYTE)hIl2Cpp + ODIKKIMIMHO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ODIKKIMIMHO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
