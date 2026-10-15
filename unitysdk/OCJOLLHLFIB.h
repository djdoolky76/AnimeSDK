#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPDBFGBJOFD;
class OCJOLLHLFIB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OCJOLLHLFIB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE15850)
#define OCJOLLHLFIB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE15AF0)
#define OCJOLLHLFIB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE151E0)
#define OCJOLLHLFIB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE15170)
#define OCJOLLHLFIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE15160)
#define OCJOLLHLFIB_EGOPGJLEHNI_OFFSET UNITYSDK_OFFSET(0x1DE15270)
#define OCJOLLHLFIB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE153F0)
#define OCJOLLHLFIB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE15280)
#define OCJOLLHLFIB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE156C0)
#define OCJOLLHLFIB_HIIFFHKBEOO_OFFSET UNITYSDK_OFFSET(0x1DE15260)
#define OCJOLLHLFIB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE15120)
#define OCJOLLHLFIB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE15940)
#define OCJOLLHLFIB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE158B0)
#define OCJOLLHLFIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE15150)
#define OCJOLLHLFIB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE15760)
#define OCJOLLHLFIB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE157C0)

	class OCJOLLHLFIB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FPDBFGBJOFD* FFNFNAPHAKG; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OCJOLLHLFIB")->GetStaticField(0x12D90);
		}

		// static const ::System::Object HBMLBLAJKKL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJOLLHLFIB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OCJOLLHLFIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCJOLLHLFIB*))((::PBYTE)hIl2Cpp + OCJOLLHLFIB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCJOLLHLFIB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OCJOLLHLFIB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJOLLHLFIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OCJOLLHLFIB* Clone()
		{
			return ((::OCJOLLHLFIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJOLLHLFIB_CLONE_OFFSET))(this);
		}

		::FPDBFGBJOFD* HIIFFHKBEOO()
		{
			return ((::FPDBFGBJOFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJOLLHLFIB_HIIFFHKBEOO_OFFSET))(this);
		}

		::System::Void EGOPGJLEHNI(::FPDBFGBJOFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPDBFGBJOFD*))((::PBYTE)hIl2Cpp + OCJOLLHLFIB_EGOPGJLEHNI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OCJOLLHLFIB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OCJOLLHLFIB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCJOLLHLFIB*))((::PBYTE)hIl2Cpp + OCJOLLHLFIB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJOLLHLFIB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJOLLHLFIB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OCJOLLHLFIB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJOLLHLFIB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OCJOLLHLFIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCJOLLHLFIB*))((::PBYTE)hIl2Cpp + OCJOLLHLFIB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OCJOLLHLFIB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
