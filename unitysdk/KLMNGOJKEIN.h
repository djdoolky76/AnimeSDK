#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLMNGOJKEIN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KLMNGOJKEIN_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E891DF0)
#define KLMNGOJKEIN_BIPDNGFEOJD_OFFSET UNITYSDK_OFFSET(0x1E891DD0)
#define KLMNGOJKEIN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E892160)
#define KLMNGOJKEIN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E892430)
#define KLMNGOJKEIN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E891D60)
#define KLMNGOJKEIN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E891D30)
#define KLMNGOJKEIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E891D20)
#define KLMNGOJKEIN_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E891E00)
#define KLMNGOJKEIN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E891F20)
#define KLMNGOJKEIN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E891E10)
#define KLMNGOJKEIN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E891FF0)
#define KLMNGOJKEIN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E891CB0)
#define KLMNGOJKEIN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8922B0)
#define KLMNGOJKEIN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E892270)
#define KLMNGOJKEIN_PADEKOOCPNL_OFFSET UNITYSDK_OFFSET(0x1E891DE0)
#define KLMNGOJKEIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E891D10)
#define KLMNGOJKEIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E892020)
#define KLMNGOJKEIN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E892080)

	class KLMNGOJKEIN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JEIEBCCBBHI; // 0x18
		::System::UInt32 NPFBAFODCBI; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KLMNGOJKEIN")->GetStaticField(0x21850);
		}

		// static const ::System::Object NOFNNKGGIMD; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMNGOJKEIN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KLMNGOJKEIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLMNGOJKEIN*))((::PBYTE)hIl2Cpp + KLMNGOJKEIN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLMNGOJKEIN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KLMNGOJKEIN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMNGOJKEIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KLMNGOJKEIN* Clone()
		{
			return ((::KLMNGOJKEIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMNGOJKEIN_CLONE_OFFSET))(this);
		}

		::System::UInt32 BIPDNGFEOJD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMNGOJKEIN_BIPDNGFEOJD_OFFSET))(this);
		}

		::System::Void PADEKOOCPNL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLMNGOJKEIN_PADEKOOCPNL_OFFSET))(this, a1);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMNGOJKEIN_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLMNGOJKEIN_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLMNGOJKEIN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KLMNGOJKEIN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLMNGOJKEIN*))((::PBYTE)hIl2Cpp + KLMNGOJKEIN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMNGOJKEIN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMNGOJKEIN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KLMNGOJKEIN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMNGOJKEIN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KLMNGOJKEIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLMNGOJKEIN*))((::PBYTE)hIl2Cpp + KLMNGOJKEIN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KLMNGOJKEIN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
