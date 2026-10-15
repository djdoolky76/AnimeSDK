#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MELHONKGEIM;
class NPEHFAHLDNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MELHONKGEIM_BLILPNPEACH_OFFSET UNITYSDK_OFFSET(0x1EA0FC00)
#define MELHONKGEIM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA10130)
#define MELHONKGEIM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA10400)
#define MELHONKGEIM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA0FBA0)
#define MELHONKGEIM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA0FB50)
#define MELHONKGEIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA0FB40)
#define MELHONKGEIM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA0FDC0)
#define MELHONKGEIM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA0FC40)
#define MELHONKGEIM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA0FF40)
#define MELHONKGEIM_HHAJEFIANLP_OFFSET UNITYSDK_OFFSET(0x1EA0FC30)
#define MELHONKGEIM_HHMADFFNEIG_OFFSET UNITYSDK_OFFSET(0x1EA0FC20)
#define MELHONKGEIM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA0FB00)
#define MELHONKGEIM_KIJDPPMHBME_OFFSET UNITYSDK_OFFSET(0x1EA0FC10)
#define MELHONKGEIM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA10270)
#define MELHONKGEIM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA10200)
#define MELHONKGEIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA0FB30)
#define MELHONKGEIM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA0FFF0)
#define MELHONKGEIM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA10050)

inline static constexpr unsigned int MELHONKGEIM_TypeDefinitionIndex = 34353;

	class MELHONKGEIM : public ::System::Object
	{
	public:
		::NPEHFAHLDNM* NJKEFHFILIF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 FOBLPJCIGJE; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MELHONKGEIM")->GetStaticField(0x4B150);
		}

		// static const ::System::Object NOBLDDEFEKI; // 0x0
		// static const ::System::Object BNCHEIFFFPK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MELHONKGEIM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MELHONKGEIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MELHONKGEIM*))((::PBYTE)hIl2Cpp + MELHONKGEIM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MELHONKGEIM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MELHONKGEIM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MELHONKGEIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MELHONKGEIM* Clone()
		{
			return ((::MELHONKGEIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MELHONKGEIM_CLONE_OFFSET))(this);
		}

		::System::UInt32 BLILPNPEACH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MELHONKGEIM_BLILPNPEACH_OFFSET))(this);
		}

		::System::Void KIJDPPMHBME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MELHONKGEIM_KIJDPPMHBME_OFFSET))(this, a1);
		}

		::NPEHFAHLDNM* HHMADFFNEIG()
		{
			return ((::NPEHFAHLDNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MELHONKGEIM_HHMADFFNEIG_OFFSET))(this);
		}

		::System::Void HHAJEFIANLP(::NPEHFAHLDNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + MELHONKGEIM_HHAJEFIANLP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MELHONKGEIM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MELHONKGEIM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MELHONKGEIM*))((::PBYTE)hIl2Cpp + MELHONKGEIM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MELHONKGEIM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MELHONKGEIM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MELHONKGEIM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MELHONKGEIM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MELHONKGEIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MELHONKGEIM*))((::PBYTE)hIl2Cpp + MELHONKGEIM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MELHONKGEIM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
