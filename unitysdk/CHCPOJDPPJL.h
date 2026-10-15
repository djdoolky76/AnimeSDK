#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHCPOJDPPJL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CHCPOJDPPJL_BFCKKDBJEEJ_OFFSET UNITYSDK_OFFSET(0x1E0C2060)
#define CHCPOJDPPJL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0C23A0)
#define CHCPOJDPPJL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C2670)
#define CHCPOJDPPJL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0C1FF0)
#define CHCPOJDPPJL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0C1FC0)
#define CHCPOJDPPJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C1FB0)
#define CHCPOJDPPJL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0C2160)
#define CHCPOJDPPJL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0C2080)
#define CHCPOJDPPJL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E0C2050)
#define CHCPOJDPPJL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0C2230)
#define CHCPOJDPPJL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0C1F70)
#define CHCPOJDPPJL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0C24F0)
#define CHCPOJDPPJL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0C24B0)
#define CHCPOJDPPJL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E0C2040)
#define CHCPOJDPPJL_PBKMFMDLLKJ_OFFSET UNITYSDK_OFFSET(0x1E0C2070)
#define CHCPOJDPPJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0C1FA0)
#define CHCPOJDPPJL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0C2260)
#define CHCPOJDPPJL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0C22C0)

	class CHCPOJDPPJL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 FGDIKGKCCFN; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CHCPOJDPPJL")->GetStaticField(0x16070);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CLJJLLDPMBN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHCPOJDPPJL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CHCPOJDPPJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCPOJDPPJL*))((::PBYTE)hIl2Cpp + CHCPOJDPPJL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHCPOJDPPJL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CHCPOJDPPJL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHCPOJDPPJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CHCPOJDPPJL* Clone()
		{
			return ((::CHCPOJDPPJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHCPOJDPPJL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHCPOJDPPJL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHCPOJDPPJL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 BFCKKDBJEEJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHCPOJDPPJL_BFCKKDBJEEJ_OFFSET))(this);
		}

		::System::Void PBKMFMDLLKJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHCPOJDPPJL_PBKMFMDLLKJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CHCPOJDPPJL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CHCPOJDPPJL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHCPOJDPPJL*))((::PBYTE)hIl2Cpp + CHCPOJDPPJL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHCPOJDPPJL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHCPOJDPPJL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CHCPOJDPPJL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHCPOJDPPJL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CHCPOJDPPJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCPOJDPPJL*))((::PBYTE)hIl2Cpp + CHCPOJDPPJL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CHCPOJDPPJL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
