#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABDJMGPOAOK;
class EBPBMFBFEJA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ABDJMGPOAOK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDC8310)
#define ABDJMGPOAOK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDC8620)
#define ABDJMGPOAOK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDC7D80)
#define ABDJMGPOAOK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDC7D20)
#define ABDJMGPOAOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDC7D10)
#define ABDJMGPOAOK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDC7FB0)
#define ABDJMGPOAOK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDC7E30)
#define ABDJMGPOAOK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DDC7E20)
#define ABDJMGPOAOK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDC8130)
#define ABDJMGPOAOK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDC7CD0)
#define ABDJMGPOAOK_LHHJFCPCEBN_OFFSET UNITYSDK_OFFSET(0x1DDC7E00)
#define ABDJMGPOAOK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDC8470)
#define ABDJMGPOAOK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDC83E0)
#define ABDJMGPOAOK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DDC7E10)
#define ABDJMGPOAOK_OJIDKCOOHAH_OFFSET UNITYSDK_OFFSET(0x1DDC7DF0)
#define ABDJMGPOAOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDC7D00)
#define ABDJMGPOAOK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDC81D0)
#define ABDJMGPOAOK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDC8230)

	class ABDJMGPOAOK : public ::System::Object
	{
	public:
		::EBPBMFBFEJA* IHMPMDJPGAK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ABDJMGPOAOK")->GetStaticField(0x389F0);
		}

		// static const ::System::Object NOIGEGKODHB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDJMGPOAOK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ABDJMGPOAOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABDJMGPOAOK*))((::PBYTE)hIl2Cpp + ABDJMGPOAOK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABDJMGPOAOK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ABDJMGPOAOK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDJMGPOAOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ABDJMGPOAOK* Clone()
		{
			return ((::ABDJMGPOAOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDJMGPOAOK_CLONE_OFFSET))(this);
		}

		::EBPBMFBFEJA* OJIDKCOOHAH()
		{
			return ((::EBPBMFBFEJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDJMGPOAOK_OJIDKCOOHAH_OFFSET))(this);
		}

		::System::Void LHHJFCPCEBN(::EBPBMFBFEJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBPBMFBFEJA*))((::PBYTE)hIl2Cpp + ABDJMGPOAOK_LHHJFCPCEBN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDJMGPOAOK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABDJMGPOAOK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABDJMGPOAOK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ABDJMGPOAOK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABDJMGPOAOK*))((::PBYTE)hIl2Cpp + ABDJMGPOAOK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDJMGPOAOK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDJMGPOAOK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ABDJMGPOAOK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDJMGPOAOK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ABDJMGPOAOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABDJMGPOAOK*))((::PBYTE)hIl2Cpp + ABDJMGPOAOK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ABDJMGPOAOK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
