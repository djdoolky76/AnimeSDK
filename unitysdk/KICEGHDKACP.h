#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCPMKHCPCPN;
class KICEGHDKACP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KICEGHDKACP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8551E0)
#define KICEGHDKACP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8555C0)
#define KICEGHDKACP_CEDIDAGDPDI_OFFSET UNITYSDK_OFFSET(0x1E854CD0)
#define KICEGHDKACP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E854BE0)
#define KICEGHDKACP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E854B50)
#define KICEGHDKACP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E854B40)
#define KICEGHDKACP_EHOGKGJGHFI_OFFSET UNITYSDK_OFFSET(0x1E854D10)
#define KICEGHDKACP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E854E50)
#define KICEGHDKACP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E854D20)
#define KICEGHDKACP_GEDFKJOCFCB_OFFSET UNITYSDK_OFFSET(0x1E854D00)
#define KICEGHDKACP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E854FE0)
#define KICEGHDKACP_HEDEJOHKKHL_OFFSET UNITYSDK_OFFSET(0x1E854CC0)
#define KICEGHDKACP_IGGOMOOMKGL_OFFSET UNITYSDK_OFFSET(0x1E854CF0)
#define KICEGHDKACP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E854AD0)
#define KICEGHDKACP_LPKPBFJGKEG_OFFSET UNITYSDK_OFFSET(0x1E854CE0)
#define KICEGHDKACP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E855400)
#define KICEGHDKACP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E855330)
#define KICEGHDKACP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E854B30)
#define KICEGHDKACP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E855040)
#define KICEGHDKACP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8550A0)

inline static constexpr unsigned int KICEGHDKACP_TypeDefinitionIndex = 34718;

	class KICEGHDKACP : public ::System::Object
	{
	public:
		::JCPMKHCPCPN* CFNNFEHPJDE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 JLDFJJGIAHG; // 0x20
		::System::UInt32 LKOGGOKONNN; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KICEGHDKACP")->GetStaticField(0x18D00);
		}

		// static const ::System::Object NIJKCNBHDHF; // 0x0
		// static const ::System::Object MIFNFFPJBEF; // 0x0
		// static const ::System::Object LGMBBNKHEGJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KICEGHDKACP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KICEGHDKACP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KICEGHDKACP*))((::PBYTE)hIl2Cpp + KICEGHDKACP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KICEGHDKACP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KICEGHDKACP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KICEGHDKACP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KICEGHDKACP* Clone()
		{
			return ((::KICEGHDKACP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KICEGHDKACP_CLONE_OFFSET))(this);
		}

		::System::UInt32 HEDEJOHKKHL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KICEGHDKACP_HEDEJOHKKHL_OFFSET))(this);
		}

		::System::Void CEDIDAGDPDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KICEGHDKACP_CEDIDAGDPDI_OFFSET))(this, a1);
		}

		::JCPMKHCPCPN* LPKPBFJGKEG()
		{
			return ((::JCPMKHCPCPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KICEGHDKACP_LPKPBFJGKEG_OFFSET))(this);
		}

		::System::Void IGGOMOOMKGL(::JCPMKHCPCPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCPMKHCPCPN*))((::PBYTE)hIl2Cpp + KICEGHDKACP_IGGOMOOMKGL_OFFSET))(this, a1);
		}

		::System::UInt32 GEDFKJOCFCB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KICEGHDKACP_GEDFKJOCFCB_OFFSET))(this);
		}

		::System::Void EHOGKGJGHFI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KICEGHDKACP_EHOGKGJGHFI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KICEGHDKACP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KICEGHDKACP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KICEGHDKACP*))((::PBYTE)hIl2Cpp + KICEGHDKACP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KICEGHDKACP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KICEGHDKACP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KICEGHDKACP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KICEGHDKACP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KICEGHDKACP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KICEGHDKACP*))((::PBYTE)hIl2Cpp + KICEGHDKACP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KICEGHDKACP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
