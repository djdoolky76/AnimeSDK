#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDBDLBAPDBE;
class KLAEMDDHPNB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KLAEMDDHPNB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E880EB0)
#define KLAEMDDHPNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8811D0)
#define KLAEMDDHPNB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E880910)
#define KLAEMDDHPNB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8808A0)
#define KLAEMDDHPNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E880890)
#define KLAEMDDHPNB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E880B50)
#define KLAEMDDHPNB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8809D0)
#define KLAEMDDHPNB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8809C0)
#define KLAEMDDHPNB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E880CD0)
#define KLAEMDDHPNB_GHEIAEAOKAC_OFFSET UNITYSDK_OFFSET(0x1E8809A0)
#define KLAEMDDHPNB_IGJOIMKFBNG_OFFSET UNITYSDK_OFFSET(0x1E880990)
#define KLAEMDDHPNB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E880850)
#define KLAEMDDHPNB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E881010)
#define KLAEMDDHPNB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E880F80)
#define KLAEMDDHPNB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8809B0)
#define KLAEMDDHPNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E880880)
#define KLAEMDDHPNB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E880D70)
#define KLAEMDDHPNB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E880DD0)

	class KLAEMDDHPNB : public ::System::Object
	{
	public:
		::FDBDLBAPDBE* GMLPGJJJKDP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KLAEMDDHPNB")->GetStaticField(0x1F7F0);
		}

		// static const ::System::Object KIAJFAMLJEG; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAEMDDHPNB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KLAEMDDHPNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLAEMDDHPNB*))((::PBYTE)hIl2Cpp + KLAEMDDHPNB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLAEMDDHPNB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KLAEMDDHPNB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAEMDDHPNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KLAEMDDHPNB* Clone()
		{
			return ((::KLAEMDDHPNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAEMDDHPNB_CLONE_OFFSET))(this);
		}

		::FDBDLBAPDBE* IGJOIMKFBNG()
		{
			return ((::FDBDLBAPDBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAEMDDHPNB_IGJOIMKFBNG_OFFSET))(this);
		}

		::System::Void GHEIAEAOKAC(::FDBDLBAPDBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDBDLBAPDBE*))((::PBYTE)hIl2Cpp + KLAEMDDHPNB_GHEIAEAOKAC_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAEMDDHPNB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLAEMDDHPNB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLAEMDDHPNB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KLAEMDDHPNB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLAEMDDHPNB*))((::PBYTE)hIl2Cpp + KLAEMDDHPNB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAEMDDHPNB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAEMDDHPNB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KLAEMDDHPNB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAEMDDHPNB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KLAEMDDHPNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLAEMDDHPNB*))((::PBYTE)hIl2Cpp + KLAEMDDHPNB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KLAEMDDHPNB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
