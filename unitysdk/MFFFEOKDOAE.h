#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCFGCHAMNOL;
class MFFFEOKDOAE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MFFFEOKDOAE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA19640)
#define MFFFEOKDOAE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA199E0)
#define MFFFEOKDOAE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA19010)
#define MFFFEOKDOAE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA18FA0)
#define MFFFEOKDOAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA18F90)
#define MFFFEOKDOAE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA19250)
#define MFFFEOKDOAE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA190D0)
#define MFFFEOKDOAE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA190C0)
#define MFFFEOKDOAE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA193D0)
#define MFFFEOKDOAE_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0x1EA19090)
#define MFFFEOKDOAE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA18F50)
#define MFFFEOKDOAE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA19800)
#define MFFFEOKDOAE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA19710)
#define MFFFEOKDOAE_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0x1EA190A0)
#define MFFFEOKDOAE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA190B0)
#define MFFFEOKDOAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA18F80)
#define MFFFEOKDOAE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA19500)
#define MFFFEOKDOAE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA19560)

	class MFFFEOKDOAE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GCFGCHAMNOL* MNJNMPKLFAI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MFFFEOKDOAE")->GetStaticField(0x4C600);
		}

		// static const ::System::Object KBMGGGHELJP; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFFEOKDOAE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MFFFEOKDOAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFFFEOKDOAE*))((::PBYTE)hIl2Cpp + MFFFEOKDOAE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFFFEOKDOAE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MFFFEOKDOAE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFFEOKDOAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MFFFEOKDOAE* Clone()
		{
			return ((::MFFFEOKDOAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFFEOKDOAE_CLONE_OFFSET))(this);
		}

		::GCFGCHAMNOL* JIFPIGBJFEH()
		{
			return ((::GCFGCHAMNOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFFEOKDOAE_JIFPIGBJFEH_OFFSET))(this);
		}

		::System::Void MIILIPJBOKO(::GCFGCHAMNOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCFGCHAMNOL*))((::PBYTE)hIl2Cpp + MFFFEOKDOAE_MIILIPJBOKO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFFEOKDOAE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MFFFEOKDOAE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFFFEOKDOAE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MFFFEOKDOAE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MFFFEOKDOAE*))((::PBYTE)hIl2Cpp + MFFFEOKDOAE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFFEOKDOAE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFFEOKDOAE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MFFFEOKDOAE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFFEOKDOAE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MFFFEOKDOAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFFFEOKDOAE*))((::PBYTE)hIl2Cpp + MFFFEOKDOAE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MFFFEOKDOAE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
