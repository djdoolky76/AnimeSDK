#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class KJEOBMBMNIN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KJEOBMBMNIN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E83CE60)
#define KJEOBMBMNIN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E83D260)
#define KJEOBMBMNIN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E83C550)
#define KJEOBMBMNIN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E83C490)
#define KJEOBMBMNIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E83C480)
#define KJEOBMBMNIN_DFPNCEKLIHI_OFFSET UNITYSDK_OFFSET(0x1E83C700)
#define KJEOBMBMNIN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E83C880)
#define KJEOBMBMNIN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E83C710)
#define KJEOBMBMNIN_FOPLDCBOMFM_OFFSET UNITYSDK_OFFSET(0x1E83C680)
#define KJEOBMBMNIN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E83CA40)
#define KJEOBMBMNIN_JADFMCIJGHD_OFFSET UNITYSDK_OFFSET(0x1E83C660)
#define KJEOBMBMNIN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E83C410)
#define KJEOBMBMNIN_KCPAKINBGGL_OFFSET UNITYSDK_OFFSET(0x1E83C6B0)
#define KJEOBMBMNIN_KLDAIPMMLKP_OFFSET UNITYSDK_OFFSET(0x1E83C6E0)
#define KJEOBMBMNIN_MBJNDADEPHA_OFFSET UNITYSDK_OFFSET(0x1E83C650)
#define KJEOBMBMNIN_MCOODDIIOIH_OFFSET UNITYSDK_OFFSET(0x1E83C690)
#define KJEOBMBMNIN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E83D100)
#define KJEOBMBMNIN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E83CFF0)
#define KJEOBMBMNIN_MODHGCDKFOM_OFFSET UNITYSDK_OFFSET(0x1E83C6D0)
#define KJEOBMBMNIN_NNBHOEMFHIF_OFFSET UNITYSDK_OFFSET(0x1E83C670)
#define KJEOBMBMNIN_OKCNPELMAHN_OFFSET UNITYSDK_OFFSET(0x1E83C6F0)
#define KJEOBMBMNIN_OKDMBCANCBD_OFFSET UNITYSDK_OFFSET(0x1E83C6C0)
#define KJEOBMBMNIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E83C470)
#define KJEOBMBMNIN_PMODGCHEFJC_OFFSET UNITYSDK_OFFSET(0x1E83C6A0)
#define KJEOBMBMNIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E83CB50)
#define KJEOBMBMNIN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E83CBB0)

inline static constexpr unsigned int KJEOBMBMNIN_TypeDefinitionIndex = 32962;

	class KJEOBMBMNIN : public ::System::Object
	{
	public:
		::CAGKEDMHEOI* CFKIEEIPBIO; // 0x10
		::CAGKEDMHEOI* IPBMAGNJAML; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 IBNEONDCEIM; // 0x28
		::System::UInt32 GFMHFBDKDOE; // 0x2C
		::System::Boolean EOFHGAOJCPB; // 0x30
		::System::Boolean DKJPPBEDHKM; // 0x31
		static ::Google::Protobuf::MessageParser_1<::KJEOBMBMNIN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KJEOBMBMNIN*>**)UnitySDK::FromName("", "KJEOBMBMNIN")->GetStaticField(0x19DB0);
		}

		// static const ::System::Object OKGDGOPIAAK; // 0x0
		// static const ::System::Object CPDECFMCKEM; // 0x0
		// static const ::System::Object NGPKIDLBPIA; // 0x0
		// static const ::System::Object OKBPAIFAKND; // 0x0
		// static const ::System::Object MAIHMOEAOIJ; // 0x0
		// static const ::System::Object MJKHJDCILPC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEOBMBMNIN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KJEOBMBMNIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJEOBMBMNIN*))((::PBYTE)hIl2Cpp + KJEOBMBMNIN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJEOBMBMNIN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KJEOBMBMNIN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KJEOBMBMNIN*>*(*)())((::PBYTE)hIl2Cpp + KJEOBMBMNIN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEOBMBMNIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KJEOBMBMNIN* Clone()
		{
			return ((::KJEOBMBMNIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEOBMBMNIN_CLONE_OFFSET))(this);
		}

		::System::Boolean MBJNDADEPHA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEOBMBMNIN_MBJNDADEPHA_OFFSET))(this);
		}

		::System::Void JADFMCIJGHD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KJEOBMBMNIN_JADFMCIJGHD_OFFSET))(this, a1);
		}

		::System::UInt32 NNBHOEMFHIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEOBMBMNIN_NNBHOEMFHIF_OFFSET))(this);
		}

		::System::Void FOPLDCBOMFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJEOBMBMNIN_FOPLDCBOMFM_OFFSET))(this, a1);
		}

		::CAGKEDMHEOI* MCOODDIIOIH()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEOBMBMNIN_MCOODDIIOIH_OFFSET))(this);
		}

		::System::Void PMODGCHEFJC(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + KJEOBMBMNIN_PMODGCHEFJC_OFFSET))(this, a1);
		}

		::CAGKEDMHEOI* KCPAKINBGGL()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEOBMBMNIN_KCPAKINBGGL_OFFSET))(this);
		}

		::System::Void OKDMBCANCBD(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + KJEOBMBMNIN_OKDMBCANCBD_OFFSET))(this, a1);
		}

		::System::Boolean MODHGCDKFOM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEOBMBMNIN_MODHGCDKFOM_OFFSET))(this);
		}

		::System::Void KLDAIPMMLKP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KJEOBMBMNIN_KLDAIPMMLKP_OFFSET))(this, a1);
		}

		::System::UInt32 OKCNPELMAHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEOBMBMNIN_OKCNPELMAHN_OFFSET))(this);
		}

		::System::Void DFPNCEKLIHI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJEOBMBMNIN_DFPNCEKLIHI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJEOBMBMNIN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KJEOBMBMNIN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJEOBMBMNIN*))((::PBYTE)hIl2Cpp + KJEOBMBMNIN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEOBMBMNIN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEOBMBMNIN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KJEOBMBMNIN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEOBMBMNIN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KJEOBMBMNIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJEOBMBMNIN*))((::PBYTE)hIl2Cpp + KJEOBMBMNIN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KJEOBMBMNIN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
