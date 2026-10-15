#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFMNPNJADFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GFMNPNJADFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4731E0)
#define GFMNPNJADFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4734B0)
#define GFMNPNJADFN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E472E30)
#define GFMNPNJADFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E472E00)
#define GFMNPNJADFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E472DF0)
#define GFMNPNJADFN_ELKCDNIFAAL_OFFSET UNITYSDK_OFFSET(0x1E472E80)
#define GFMNPNJADFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E472FA0)
#define GFMNPNJADFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E472EC0)
#define GFMNPNJADFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E473070)
#define GFMNPNJADFN_IMGJKLCIGEL_OFFSET UNITYSDK_OFFSET(0x1E472EA0)
#define GFMNPNJADFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E472DB0)
#define GFMNPNJADFN_LCJOCJCLLJP_OFFSET UNITYSDK_OFFSET(0x1E472E90)
#define GFMNPNJADFN_MDGCDKHDKEB_OFFSET UNITYSDK_OFFSET(0x1E472EB0)
#define GFMNPNJADFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E473330)
#define GFMNPNJADFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4732F0)
#define GFMNPNJADFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E472DE0)
#define GFMNPNJADFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4730A0)
#define GFMNPNJADFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E473100)

	class GFMNPNJADFN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MFDNOFMLPDO; // 0x18
		::System::UInt32 ONPFGKIELHM; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GFMNPNJADFN")->GetStaticField(0x14D00);
		}

		// static const ::System::Object FHGKAKJJCNG; // 0x0
		// static const ::System::Object NDBLLNDJADG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMNPNJADFN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GFMNPNJADFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFMNPNJADFN*))((::PBYTE)hIl2Cpp + GFMNPNJADFN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFMNPNJADFN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GFMNPNJADFN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMNPNJADFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GFMNPNJADFN* Clone()
		{
			return ((::GFMNPNJADFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMNPNJADFN_CLONE_OFFSET))(this);
		}

		::System::UInt32 ELKCDNIFAAL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMNPNJADFN_ELKCDNIFAAL_OFFSET))(this);
		}

		::System::Void LCJOCJCLLJP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFMNPNJADFN_LCJOCJCLLJP_OFFSET))(this, a1);
		}

		::System::UInt32 IMGJKLCIGEL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMNPNJADFN_IMGJKLCIGEL_OFFSET))(this);
		}

		::System::Void MDGCDKHDKEB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFMNPNJADFN_MDGCDKHDKEB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFMNPNJADFN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GFMNPNJADFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFMNPNJADFN*))((::PBYTE)hIl2Cpp + GFMNPNJADFN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMNPNJADFN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMNPNJADFN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GFMNPNJADFN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMNPNJADFN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GFMNPNJADFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFMNPNJADFN*))((::PBYTE)hIl2Cpp + GFMNPNJADFN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GFMNPNJADFN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
