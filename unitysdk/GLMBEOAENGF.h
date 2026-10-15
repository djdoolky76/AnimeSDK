#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLMBEOAENGF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GLMBEOAENGF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4C50D0)
#define GLMBEOAENGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C53E0)
#define GLMBEOAENGF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4C4C50)
#define GLMBEOAENGF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4C4C10)
#define GLMBEOAENGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C4C00)
#define GLMBEOAENGF_DPFLPFADJNK_OFFSET UNITYSDK_OFFSET(0x1E4C4CB0)
#define GLMBEOAENGF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4C4DF0)
#define GLMBEOAENGF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4C4D00)
#define GLMBEOAENGF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4C4CF0)
#define GLMBEOAENGF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4C4ED0)
#define GLMBEOAENGF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4C4BC0)
#define GLMBEOAENGF_JKLDHNNGNCK_OFFSET UNITYSDK_OFFSET(0x1E4C4CA0)
#define GLMBEOAENGF_LGIDEFJOLBC_OFFSET UNITYSDK_OFFSET(0x1E4C4CD0)
#define GLMBEOAENGF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4C5240)
#define GLMBEOAENGF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4C51F0)
#define GLMBEOAENGF_NPILNPEJEJF_OFFSET UNITYSDK_OFFSET(0x1E4C4CC0)
#define GLMBEOAENGF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4C4CE0)
#define GLMBEOAENGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4C4BF0)
#define GLMBEOAENGF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4C4F00)
#define GLMBEOAENGF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4C4F60)

	class GLMBEOAENGF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IDPMGABNGKO; // 0x18
		::System::Boolean IALIHEFEMDE; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GLMBEOAENGF")->GetStaticField(0x1FC40);
		}

		// static const ::System::Object OOGKNMKNJNI; // 0x0
		// static const ::System::Object FJNMCFIDCLM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMBEOAENGF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GLMBEOAENGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLMBEOAENGF*))((::PBYTE)hIl2Cpp + GLMBEOAENGF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLMBEOAENGF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GLMBEOAENGF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMBEOAENGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GLMBEOAENGF* Clone()
		{
			return ((::GLMBEOAENGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMBEOAENGF_CLONE_OFFSET))(this);
		}

		::System::UInt32 JKLDHNNGNCK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMBEOAENGF_JKLDHNNGNCK_OFFSET))(this);
		}

		::System::Void DPFLPFADJNK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GLMBEOAENGF_DPFLPFADJNK_OFFSET))(this, a1);
		}

		::System::Boolean NPILNPEJEJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMBEOAENGF_NPILNPEJEJF_OFFSET))(this);
		}

		::System::Void LGIDEFJOLBC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GLMBEOAENGF_LGIDEFJOLBC_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMBEOAENGF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GLMBEOAENGF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GLMBEOAENGF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GLMBEOAENGF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GLMBEOAENGF*))((::PBYTE)hIl2Cpp + GLMBEOAENGF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMBEOAENGF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMBEOAENGF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GLMBEOAENGF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMBEOAENGF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GLMBEOAENGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLMBEOAENGF*))((::PBYTE)hIl2Cpp + GLMBEOAENGF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GLMBEOAENGF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
