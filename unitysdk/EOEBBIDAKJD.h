#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOEBBIDAKJD;
class KLFNCLPCJGO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EOEBBIDAKJD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2F9000)
#define EOEBBIDAKJD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2F9320)
#define EOEBBIDAKJD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2F8A60)
#define EOEBBIDAKJD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2F89F0)
#define EOEBBIDAKJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F89E0)
#define EOEBBIDAKJD_DONCHPPEOBC_OFFSET UNITYSDK_OFFSET(0x1E2F8B10)
#define EOEBBIDAKJD_EBCHNOJGDOK_OFFSET UNITYSDK_OFFSET(0x1E2F8B00)
#define EOEBBIDAKJD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2F8CA0)
#define EOEBBIDAKJD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2F8B20)
#define EOEBBIDAKJD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2F8AF0)
#define EOEBBIDAKJD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2F8E20)
#define EOEBBIDAKJD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2F89A0)
#define EOEBBIDAKJD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2F9160)
#define EOEBBIDAKJD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2F90D0)
#define EOEBBIDAKJD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2F8AE0)
#define EOEBBIDAKJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2F89D0)
#define EOEBBIDAKJD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2F8EC0)
#define EOEBBIDAKJD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2F8F20)

	class EOEBBIDAKJD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KLFNCLPCJGO* BHLLDFKIMGN; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EOEBBIDAKJD")->GetStaticField(0x54AD0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BGJCBMELLGN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOEBBIDAKJD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EOEBBIDAKJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOEBBIDAKJD*))((::PBYTE)hIl2Cpp + EOEBBIDAKJD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOEBBIDAKJD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EOEBBIDAKJD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOEBBIDAKJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EOEBBIDAKJD* Clone()
		{
			return ((::EOEBBIDAKJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOEBBIDAKJD_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOEBBIDAKJD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EOEBBIDAKJD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::KLFNCLPCJGO* EBCHNOJGDOK()
		{
			return ((::KLFNCLPCJGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOEBBIDAKJD_EBCHNOJGDOK_OFFSET))(this);
		}

		::System::Void DONCHPPEOBC(::KLFNCLPCJGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLFNCLPCJGO*))((::PBYTE)hIl2Cpp + EOEBBIDAKJD_DONCHPPEOBC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EOEBBIDAKJD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EOEBBIDAKJD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EOEBBIDAKJD*))((::PBYTE)hIl2Cpp + EOEBBIDAKJD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOEBBIDAKJD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOEBBIDAKJD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EOEBBIDAKJD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOEBBIDAKJD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EOEBBIDAKJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOEBBIDAKJD*))((::PBYTE)hIl2Cpp + EOEBBIDAKJD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EOEBBIDAKJD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
