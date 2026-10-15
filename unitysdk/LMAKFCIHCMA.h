#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCPMKHCPCPN;
class LMAKFCIHCMA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LMAKFCIHCMA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9A1820)
#define LMAKFCIHCMA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9A1B60)
#define LMAKFCIHCMA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9A1250)
#define LMAKFCIHCMA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9A11C0)
#define LMAKFCIHCMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A11B0)
#define LMAKFCIHCMA_EHOGKGJGHFI_OFFSET UNITYSDK_OFFSET(0x1E9A1330)
#define LMAKFCIHCMA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9A1510)
#define LMAKFCIHCMA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9A1360)
#define LMAKFCIHCMA_GEDFKJOCFCB_OFFSET UNITYSDK_OFFSET(0x1E9A1320)
#define LMAKFCIHCMA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9A1690)
#define LMAKFCIHCMA_IGGOMOOMKGL_OFFSET UNITYSDK_OFFSET(0x1E9A1350)
#define LMAKFCIHCMA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9A1140)
#define LMAKFCIHCMA_LPKPBFJGKEG_OFFSET UNITYSDK_OFFSET(0x1E9A1340)
#define LMAKFCIHCMA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9A19B0)
#define LMAKFCIHCMA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9A18F0)
#define LMAKFCIHCMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9A11A0)
#define LMAKFCIHCMA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9A16E0)
#define LMAKFCIHCMA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9A1740)

	class LMAKFCIHCMA : public ::System::Object
	{
	public:
		::JCPMKHCPCPN* CFNNFEHPJDE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 JLDFJJGIAHG; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LMAKFCIHCMA")->GetStaticField(0x2DFC0);
		}

		// static const ::System::Object LGMBBNKHEGJ; // 0x0
		// static const ::System::Object MIFNFFPJBEF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMAKFCIHCMA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LMAKFCIHCMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMAKFCIHCMA*))((::PBYTE)hIl2Cpp + LMAKFCIHCMA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMAKFCIHCMA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LMAKFCIHCMA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMAKFCIHCMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LMAKFCIHCMA* Clone()
		{
			return ((::LMAKFCIHCMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMAKFCIHCMA_CLONE_OFFSET))(this);
		}

		::System::UInt32 GEDFKJOCFCB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMAKFCIHCMA_GEDFKJOCFCB_OFFSET))(this);
		}

		::System::Void EHOGKGJGHFI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LMAKFCIHCMA_EHOGKGJGHFI_OFFSET))(this, a1);
		}

		::JCPMKHCPCPN* LPKPBFJGKEG()
		{
			return ((::JCPMKHCPCPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMAKFCIHCMA_LPKPBFJGKEG_OFFSET))(this);
		}

		::System::Void IGGOMOOMKGL(::JCPMKHCPCPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCPMKHCPCPN*))((::PBYTE)hIl2Cpp + LMAKFCIHCMA_IGGOMOOMKGL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LMAKFCIHCMA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LMAKFCIHCMA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LMAKFCIHCMA*))((::PBYTE)hIl2Cpp + LMAKFCIHCMA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMAKFCIHCMA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMAKFCIHCMA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LMAKFCIHCMA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMAKFCIHCMA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LMAKFCIHCMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMAKFCIHCMA*))((::PBYTE)hIl2Cpp + LMAKFCIHCMA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LMAKFCIHCMA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
