#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBMDKDAKCNC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DBMDKDAKCNC_AMONAKNHNPL_OFFSET UNITYSDK_OFFSET(0x1E160A10)
#define DBMDKDAKCNC_BEKIAONFNHN_OFFSET UNITYSDK_OFFSET(0x1E160A30)
#define DBMDKDAKCNC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E160DE0)
#define DBMDKDAKCNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1610E0)
#define DBMDKDAKCNC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1609B0)
#define DBMDKDAKCNC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E160980)
#define DBMDKDAKCNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E160970)
#define DBMDKDAKCNC_EGBOLDOFOEM_OFFSET UNITYSDK_OFFSET(0x1E160A00)
#define DBMDKDAKCNC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E160AD0)
#define DBMDKDAKCNC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E160A80)
#define DBMDKDAKCNC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E160A70)
#define DBMDKDAKCNC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E160BB0)
#define DBMDKDAKCNC_JDIGIJMNHHI_OFFSET UNITYSDK_OFFSET(0x1E160A50)
#define DBMDKDAKCNC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E160930)
#define DBMDKDAKCNC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E161040)
#define DBMDKDAKCNC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E160FF0)
#define DBMDKDAKCNC_MHHDBKELGIO_OFFSET UNITYSDK_OFFSET(0x1E160A20)
#define DBMDKDAKCNC_NPFNPJJDJGJ_OFFSET UNITYSDK_OFFSET(0x1E160A40)
#define DBMDKDAKCNC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E160A60)
#define DBMDKDAKCNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E160960)
#define DBMDKDAKCNC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E160BF0)
#define DBMDKDAKCNC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E160C50)

	class DBMDKDAKCNC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ACJAAFJDNEK; // 0x18
		::System::UInt32 KLINKNMHOCI; // 0x1C
		::System::UInt32 IHODDKNKKOM; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DBMDKDAKCNC")->GetStaticField(0x26160);
		}

		// static const ::System::Object AKDGEBMBHAM; // 0x0
		// static const ::System::Object GKKKEHJAKII; // 0x0
		// static const ::System::Object KKPJADIBLCK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMDKDAKCNC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DBMDKDAKCNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBMDKDAKCNC*))((::PBYTE)hIl2Cpp + DBMDKDAKCNC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBMDKDAKCNC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DBMDKDAKCNC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMDKDAKCNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DBMDKDAKCNC* Clone()
		{
			return ((::DBMDKDAKCNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMDKDAKCNC_CLONE_OFFSET))(this);
		}

		::System::UInt32 EGBOLDOFOEM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMDKDAKCNC_EGBOLDOFOEM_OFFSET))(this);
		}

		::System::Void AMONAKNHNPL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBMDKDAKCNC_AMONAKNHNPL_OFFSET))(this, a1);
		}

		::System::UInt32 MHHDBKELGIO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMDKDAKCNC_MHHDBKELGIO_OFFSET))(this);
		}

		::System::Void BEKIAONFNHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBMDKDAKCNC_BEKIAONFNHN_OFFSET))(this, a1);
		}

		::System::UInt32 NPFNPJJDJGJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMDKDAKCNC_NPFNPJJDJGJ_OFFSET))(this);
		}

		::System::Void JDIGIJMNHHI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBMDKDAKCNC_JDIGIJMNHHI_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMDKDAKCNC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBMDKDAKCNC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBMDKDAKCNC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DBMDKDAKCNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DBMDKDAKCNC*))((::PBYTE)hIl2Cpp + DBMDKDAKCNC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMDKDAKCNC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMDKDAKCNC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DBMDKDAKCNC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMDKDAKCNC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DBMDKDAKCNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBMDKDAKCNC*))((::PBYTE)hIl2Cpp + DBMDKDAKCNC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DBMDKDAKCNC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
