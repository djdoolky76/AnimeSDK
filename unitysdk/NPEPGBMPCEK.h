#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPEPGBMPCEK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NPEPGBMPCEK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB977A0)
#define NPEPGBMPCEK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB979C0)
#define NPEPGBMPCEK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB973F0)
#define NPEPGBMPCEK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB973C0)
#define NPEPGBMPCEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB973B0)
#define NPEPGBMPCEK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB97520)
#define NPEPGBMPCEK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB97450)
#define NPEPGBMPCEK_FPJLEGMCENK_OFFSET UNITYSDK_OFFSET(0x1EB97430)
#define NPEPGBMPCEK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB97690)
#define NPEPGBMPCEK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB97370)
#define NPEPGBMPCEK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB97860)
#define NPEPGBMPCEK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB97830)
#define NPEPGBMPCEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB973A0)
#define NPEPGBMPCEK_PMPGMADMADA_OFFSET UNITYSDK_OFFSET(0x1EB97440)
#define NPEPGBMPCEK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB976C0)
#define NPEPGBMPCEK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB97720)

	class NPEPGBMPCEK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DBDCJHECJOO; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NPEPGBMPCEK")->GetStaticField(0xDB10);
		}

		// static const ::System::Object HACFLGOPALO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NPEPGBMPCEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPEPGBMPCEK*))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPEPGBMPCEK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NPEPGBMPCEK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NPEPGBMPCEK* Clone()
		{
			return ((::NPEPGBMPCEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_CLONE_OFFSET))(this);
		}

		::System::UInt32 FPJLEGMCENK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_FPJLEGMCENK_OFFSET))(this);
		}

		::System::Void PMPGMADMADA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_PMPGMADMADA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NPEPGBMPCEK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPEPGBMPCEK*))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NPEPGBMPCEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPEPGBMPCEK*))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
