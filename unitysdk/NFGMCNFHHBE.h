#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFAKMCIJFCB;
class NFGMCNFHHBE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NFGMCNFHHBE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB01C20)
#define NFGMCNFHHBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB01F90)
#define NFGMCNFHHBE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB016D0)
#define NFGMCNFHHBE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB01660)
#define NFGMCNFHHBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB01650)
#define NFGMCNFHHBE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB01910)
#define NFGMCNFHHBE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB01790)
#define NFGMCNFHHBE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB01780)
#define NFGMCNFHHBE_FIDDFCKIPBO_OFFSET UNITYSDK_OFFSET(0x1EB01760)
#define NFGMCNFHHBE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB01A90)
#define NFGMCNFHHBE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB01610)
#define NFGMCNFHHBE_KIIJMEIPKLE_OFFSET UNITYSDK_OFFSET(0x1EB01750)
#define NFGMCNFHHBE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB01DB0)
#define NFGMCNFHHBE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB01CF0)
#define NFGMCNFHHBE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB01770)
#define NFGMCNFHHBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB01640)
#define NFGMCNFHHBE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB01AE0)
#define NFGMCNFHHBE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB01B40)

	class NFGMCNFHHBE : public ::System::Object
	{
	public:
		::BFAKMCIJFCB* DFIPEOCEEKJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NFGMCNFHHBE")->GetStaticField(0x5E720);
		}

		// static const ::System::Object IFDGPJHCENL; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGMCNFHHBE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NFGMCNFHHBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFGMCNFHHBE*))((::PBYTE)hIl2Cpp + NFGMCNFHHBE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFGMCNFHHBE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NFGMCNFHHBE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGMCNFHHBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NFGMCNFHHBE* Clone()
		{
			return ((::NFGMCNFHHBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGMCNFHHBE_CLONE_OFFSET))(this);
		}

		::BFAKMCIJFCB* KIIJMEIPKLE()
		{
			return ((::BFAKMCIJFCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGMCNFHHBE_KIIJMEIPKLE_OFFSET))(this);
		}

		::System::Void FIDDFCKIPBO(::BFAKMCIJFCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFAKMCIJFCB*))((::PBYTE)hIl2Cpp + NFGMCNFHHBE_FIDDFCKIPBO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGMCNFHHBE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFGMCNFHHBE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NFGMCNFHHBE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NFGMCNFHHBE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NFGMCNFHHBE*))((::PBYTE)hIl2Cpp + NFGMCNFHHBE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGMCNFHHBE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGMCNFHHBE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NFGMCNFHHBE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGMCNFHHBE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NFGMCNFHHBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFGMCNFHHBE*))((::PBYTE)hIl2Cpp + NFGMCNFHHBE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NFGMCNFHHBE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
