#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFKLIDNFCOP;
class OJHHACMHFKA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KFKLIDNFCOP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E81C7A0)
#define KFKLIDNFCOP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E81CAB0)
#define KFKLIDNFCOP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E81C250)
#define KFKLIDNFCOP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E81C1D0)
#define KFKLIDNFCOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E81C1C0)
#define KFKLIDNFCOP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E81C4A0)
#define KFKLIDNFCOP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E81C320)
#define KFKLIDNFCOP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E81C2F0)
#define KFKLIDNFCOP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E81C620)
#define KFKLIDNFCOP_IAGDODILOIH_OFFSET UNITYSDK_OFFSET(0x1E81C300)
#define KFKLIDNFCOP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E81C180)
#define KFKLIDNFCOP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E81C900)
#define KFKLIDNFCOP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E81C870)
#define KFKLIDNFCOP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E81C2E0)
#define KFKLIDNFCOP_PAGHNFFHKEO_OFFSET UNITYSDK_OFFSET(0x1E81C310)
#define KFKLIDNFCOP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E81C1B0)
#define KFKLIDNFCOP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E81C660)
#define KFKLIDNFCOP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E81C6C0)

	class KFKLIDNFCOP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::OJHHACMHFKA* IANPHEMCHDG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KFKLIDNFCOP")->GetStaticField(0x13D20);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CLMHGEKEEOH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKLIDNFCOP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KFKLIDNFCOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFKLIDNFCOP*))((::PBYTE)hIl2Cpp + KFKLIDNFCOP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFKLIDNFCOP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KFKLIDNFCOP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKLIDNFCOP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KFKLIDNFCOP* Clone()
		{
			return ((::KFKLIDNFCOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKLIDNFCOP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKLIDNFCOP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFKLIDNFCOP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::OJHHACMHFKA* IAGDODILOIH()
		{
			return ((::OJHHACMHFKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKLIDNFCOP_IAGDODILOIH_OFFSET))(this);
		}

		::System::Void PAGHNFFHKEO(::OJHHACMHFKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJHHACMHFKA*))((::PBYTE)hIl2Cpp + KFKLIDNFCOP_PAGHNFFHKEO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFKLIDNFCOP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KFKLIDNFCOP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KFKLIDNFCOP*))((::PBYTE)hIl2Cpp + KFKLIDNFCOP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKLIDNFCOP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKLIDNFCOP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KFKLIDNFCOP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKLIDNFCOP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KFKLIDNFCOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFKLIDNFCOP*))((::PBYTE)hIl2Cpp + KFKLIDNFCOP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KFKLIDNFCOP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
