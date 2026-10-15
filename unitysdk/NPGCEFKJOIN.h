#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPGCEFKJOIN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NPGCEFKJOIN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB98070)
#define NPGCEFKJOIN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB982D0)
#define NPGCEFKJOIN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB97C20)
#define NPGCEFKJOIN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB97BE0)
#define NPGCEFKJOIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB97BD0)
#define NPGCEFKJOIN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB97DF0)
#define NPGCEFKJOIN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB97CE0)
#define NPGCEFKJOIN_FGICNJPNNCB_OFFSET UNITYSDK_OFFSET(0x1EB97CA0)
#define NPGCEFKJOIN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB97ED0)
#define NPGCEFKJOIN_HOBGIFCPFPA_OFFSET UNITYSDK_OFFSET(0x1EB97CD0)
#define NPGCEFKJOIN_IJCHBCGOIII_OFFSET UNITYSDK_OFFSET(0x1EB97CB0)
#define NPGCEFKJOIN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB97B60)
#define NPGCEFKJOIN_KDHCFNMNLKG_OFFSET UNITYSDK_OFFSET(0x1EB97CC0)
#define NPGCEFKJOIN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB98150)
#define NPGCEFKJOIN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB98110)
#define NPGCEFKJOIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB97BC0)
#define NPGCEFKJOIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB97F00)
#define NPGCEFKJOIN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB97F60)

	class NPGCEFKJOIN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean EBOKNBIEGFD; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 HJMOOPDHIBK; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NPGCEFKJOIN")->GetStaticField(0xE360);
		}

		// static const ::System::Object IODEPPMGDLO; // 0x0
		// static const ::System::Object GKCEEMGELBL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGCEFKJOIN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NPGCEFKJOIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPGCEFKJOIN*))((::PBYTE)hIl2Cpp + NPGCEFKJOIN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPGCEFKJOIN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NPGCEFKJOIN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGCEFKJOIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NPGCEFKJOIN* Clone()
		{
			return ((::NPGCEFKJOIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGCEFKJOIN_CLONE_OFFSET))(this);
		}

		::System::Boolean FGICNJPNNCB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGCEFKJOIN_FGICNJPNNCB_OFFSET))(this);
		}

		::System::Void IJCHBCGOIII(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPGCEFKJOIN_IJCHBCGOIII_OFFSET))(this, a1);
		}

		::System::UInt32 KDHCFNMNLKG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGCEFKJOIN_KDHCFNMNLKG_OFFSET))(this);
		}

		::System::Void HOBGIFCPFPA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPGCEFKJOIN_HOBGIFCPFPA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPGCEFKJOIN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NPGCEFKJOIN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPGCEFKJOIN*))((::PBYTE)hIl2Cpp + NPGCEFKJOIN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGCEFKJOIN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGCEFKJOIN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NPGCEFKJOIN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGCEFKJOIN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NPGCEFKJOIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPGCEFKJOIN*))((::PBYTE)hIl2Cpp + NPGCEFKJOIN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NPGCEFKJOIN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
