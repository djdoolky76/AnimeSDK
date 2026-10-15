#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOPOBBPLHAE.h"
#include "unitysdk/System/Object.h"
class BGFJBBFHHCJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BGFJBBFHHCJ_AMEFBODJIHJ_OFFSET UNITYSDK_OFFSET(0x1EA75430)
#define BGFJBBFHHCJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA757A0)
#define BGFJBBFHHCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA75AB0)
#define BGFJBBFHHCJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA753E0)
#define BGFJBBFHHCJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA753B0)
#define BGFJBBFHHCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA753A0)
#define BGFJBBFHHCJ_DFAPPLENCIA_OFFSET UNITYSDK_OFFSET(0x1EA75450)
#define BGFJBBFHHCJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA75550)
#define BGFJBBFHHCJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA75470)
#define BGFJBBFHHCJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA75620)
#define BGFJBBFHHCJ_IPOAEBNIIBC_OFFSET UNITYSDK_OFFSET(0x1EA75460)
#define BGFJBBFHHCJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA75360)
#define BGFJBBFHHCJ_KMANAJJOLLP_OFFSET UNITYSDK_OFFSET(0x1EA75440)
#define BGFJBBFHHCJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA75930)
#define BGFJBBFHHCJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA758F0)
#define BGFJBBFHHCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA75390)
#define BGFJBBFHHCJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA75650)
#define BGFJBBFHHCJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA756B0)

	class BGFJBBFHHCJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::AOPOBBPLHAE BKDMACAFPDO; // 0x18
		::System::UInt32 AAGAKAIKGCM; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BGFJBBFHHCJ")->GetStaticField(0x42C00);
		}

		// static const ::System::Object MGPGDLIJKLM; // 0x0
		// static const ::System::Object MLOBICMDIHH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BGFJBBFHHCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGFJBBFHHCJ*))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BGFJBBFHHCJ* Clone()
		{
			return ((::BGFJBBFHHCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 AMEFBODJIHJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_AMEFBODJIHJ_OFFSET))(this);
		}

		::System::Void KMANAJJOLLP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_KMANAJJOLLP_OFFSET))(this, a1);
		}

		::AOPOBBPLHAE DFAPPLENCIA()
		{
			return ((::AOPOBBPLHAE(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_DFAPPLENCIA_OFFSET))(this);
		}

		::System::Void IPOAEBNIIBC(::AOPOBBPLHAE a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOPOBBPLHAE))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_IPOAEBNIIBC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BGFJBBFHHCJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGFJBBFHHCJ*))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BGFJBBFHHCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGFJBBFHHCJ*))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
