#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class OMLMOJIGLEE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OMLMOJIGLEE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEBB790)
#define OMLMOJIGLEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEBBB10)
#define OMLMOJIGLEE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEBAF10)
#define OMLMOJIGLEE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEBAE60)
#define OMLMOJIGLEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBAE50)
#define OMLMOJIGLEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEBB1F0)
#define OMLMOJIGLEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEBB000)
#define OMLMOJIGLEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEBB3B0)
#define OMLMOJIGLEE_IAHPMMCNAHF_OFFSET UNITYSDK_OFFSET(0x1DEBAFE0)
#define OMLMOJIGLEE_JADFMCIJGHD_OFFSET UNITYSDK_OFFSET(0x1DEBAFB0)
#define OMLMOJIGLEE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEBADE0)
#define OMLMOJIGLEE_KCPAKINBGGL_OFFSET UNITYSDK_OFFSET(0x1DEBAF60)
#define OMLMOJIGLEE_KLDAIPMMLKP_OFFSET UNITYSDK_OFFSET(0x1DEBAFD0)
#define OMLMOJIGLEE_MBJNDADEPHA_OFFSET UNITYSDK_OFFSET(0x1DEBAFA0)
#define OMLMOJIGLEE_MCOODDIIOIH_OFFSET UNITYSDK_OFFSET(0x1DEBAF80)
#define OMLMOJIGLEE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEBB9B0)
#define OMLMOJIGLEE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEBB8B0)
#define OMLMOJIGLEE_MODHGCDKFOM_OFFSET UNITYSDK_OFFSET(0x1DEBAFC0)
#define OMLMOJIGLEE_OKDMBCANCBD_OFFSET UNITYSDK_OFFSET(0x1DEBAF70)
#define OMLMOJIGLEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEBAE40)
#define OMLMOJIGLEE_PMODGCHEFJC_OFFSET UNITYSDK_OFFSET(0x1DEBAF90)
#define OMLMOJIGLEE_PNOBGLEHPPO_OFFSET UNITYSDK_OFFSET(0x1DEBAFF0)
#define OMLMOJIGLEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEBB4D0)
#define OMLMOJIGLEE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEBB530)

	class OMLMOJIGLEE : public ::System::Object
	{
	public:
		::CAGKEDMHEOI* CFKIEEIPBIO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::CAGKEDMHEOI* IPBMAGNJAML; // 0x20
		::System::UInt32 DKMLFMFKHGM; // 0x28
		::System::Boolean EOFHGAOJCPB; // 0x2C
		::System::Boolean DKJPPBEDHKM; // 0x2D
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OMLMOJIGLEE")->GetStaticField(0xE250);
		}

		// static const ::System::Object OKBPAIFAKND; // 0x0
		// static const ::System::Object NGPKIDLBPIA; // 0x0
		// static const ::System::Object OKGDGOPIAAK; // 0x0
		// static const ::System::Object MAIHMOEAOIJ; // 0x0
		// static const ::System::Object PMMGMKNIEKP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLMOJIGLEE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OMLMOJIGLEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMLMOJIGLEE*))((::PBYTE)hIl2Cpp + OMLMOJIGLEE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMLMOJIGLEE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OMLMOJIGLEE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLMOJIGLEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OMLMOJIGLEE* Clone()
		{
			return ((::OMLMOJIGLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLMOJIGLEE_CLONE_OFFSET))(this);
		}

		::CAGKEDMHEOI* KCPAKINBGGL()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLMOJIGLEE_KCPAKINBGGL_OFFSET))(this);
		}

		::System::Void OKDMBCANCBD(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + OMLMOJIGLEE_OKDMBCANCBD_OFFSET))(this, a1);
		}

		::CAGKEDMHEOI* MCOODDIIOIH()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLMOJIGLEE_MCOODDIIOIH_OFFSET))(this);
		}

		::System::Void PMODGCHEFJC(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + OMLMOJIGLEE_PMODGCHEFJC_OFFSET))(this, a1);
		}

		::System::Boolean MBJNDADEPHA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLMOJIGLEE_MBJNDADEPHA_OFFSET))(this);
		}

		::System::Void JADFMCIJGHD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMLMOJIGLEE_JADFMCIJGHD_OFFSET))(this, a1);
		}

		::System::Boolean MODHGCDKFOM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLMOJIGLEE_MODHGCDKFOM_OFFSET))(this);
		}

		::System::Void KLDAIPMMLKP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMLMOJIGLEE_KLDAIPMMLKP_OFFSET))(this, a1);
		}

		::System::UInt32 IAHPMMCNAHF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLMOJIGLEE_IAHPMMCNAHF_OFFSET))(this);
		}

		::System::Void PNOBGLEHPPO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OMLMOJIGLEE_PNOBGLEHPPO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMLMOJIGLEE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OMLMOJIGLEE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OMLMOJIGLEE*))((::PBYTE)hIl2Cpp + OMLMOJIGLEE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLMOJIGLEE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLMOJIGLEE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OMLMOJIGLEE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLMOJIGLEE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OMLMOJIGLEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMLMOJIGLEE*))((::PBYTE)hIl2Cpp + OMLMOJIGLEE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OMLMOJIGLEE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
