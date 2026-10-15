#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHMFKPIAHCO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AHMFKPIAHCO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E275CF0)
#define AHMFKPIAHCO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E275FF0)
#define AHMFKPIAHCO_CFKILOICJDC_OFFSET UNITYSDK_OFFSET(0x1E275940)
#define AHMFKPIAHCO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E275860)
#define AHMFKPIAHCO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E275830)
#define AHMFKPIAHCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E275820)
#define AHMFKPIAHCO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2759E0)
#define AHMFKPIAHCO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E275950)
#define AHMFKPIAHCO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E275AC0)
#define AHMFKPIAHCO_GKPDGPEBKKI_OFFSET UNITYSDK_OFFSET(0x1E275910)
#define AHMFKPIAHCO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2757B0)
#define AHMFKPIAHCO_JMDPMLJBNPJ_OFFSET UNITYSDK_OFFSET(0x1E275920)
#define AHMFKPIAHCO_KAGDOIKBCKO_OFFSET UNITYSDK_OFFSET(0x1E275930)
#define AHMFKPIAHCO_KFBBJONBCAL_OFFSET UNITYSDK_OFFSET(0x1E2758E0)
#define AHMFKPIAHCO_KLLMFBAAMHD_OFFSET UNITYSDK_OFFSET(0x1E2758D0)
#define AHMFKPIAHCO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E275F50)
#define AHMFKPIAHCO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E275F00)
#define AHMFKPIAHCO_NEHNJBMDPOP_OFFSET UNITYSDK_OFFSET(0x1E275900)
#define AHMFKPIAHCO_OFGCIAIKBFM_OFFSET UNITYSDK_OFFSET(0x1E2758F0)
#define AHMFKPIAHCO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E275810)
#define AHMFKPIAHCO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E275B00)
#define AHMFKPIAHCO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E275B60)

	class AHMFKPIAHCO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NMGNBDHJCEF; // 0x18
		::System::UInt32 NPKONPPNAEO; // 0x1C
		::System::UInt32 JMLHGNFDAKK; // 0x20
		::System::UInt32 NFHNPPECJMM; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AHMFKPIAHCO")->GetStaticField(0x32680);
		}

		// static const ::System::Object PBPLAIBPEOJ; // 0x0
		// static const ::System::Object MCMAGGNDAGI; // 0x0
		// static const ::System::Object PGLGOMADELJ; // 0x0
		// static const ::System::Object GOHHODBFBAC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMFKPIAHCO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AHMFKPIAHCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHMFKPIAHCO*))((::PBYTE)hIl2Cpp + AHMFKPIAHCO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHMFKPIAHCO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AHMFKPIAHCO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMFKPIAHCO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AHMFKPIAHCO* Clone()
		{
			return ((::AHMFKPIAHCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMFKPIAHCO_CLONE_OFFSET))(this);
		}

		::System::UInt32 KLLMFBAAMHD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMFKPIAHCO_KLLMFBAAMHD_OFFSET))(this);
		}

		::System::Void KFBBJONBCAL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHMFKPIAHCO_KFBBJONBCAL_OFFSET))(this, a1);
		}

		::System::UInt32 OFGCIAIKBFM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMFKPIAHCO_OFGCIAIKBFM_OFFSET))(this);
		}

		::System::Void NEHNJBMDPOP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHMFKPIAHCO_NEHNJBMDPOP_OFFSET))(this, a1);
		}

		::System::UInt32 GKPDGPEBKKI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMFKPIAHCO_GKPDGPEBKKI_OFFSET))(this);
		}

		::System::Void JMDPMLJBNPJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHMFKPIAHCO_JMDPMLJBNPJ_OFFSET))(this, a1);
		}

		::System::UInt32 KAGDOIKBCKO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMFKPIAHCO_KAGDOIKBCKO_OFFSET))(this);
		}

		::System::Void CFKILOICJDC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHMFKPIAHCO_CFKILOICJDC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AHMFKPIAHCO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AHMFKPIAHCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AHMFKPIAHCO*))((::PBYTE)hIl2Cpp + AHMFKPIAHCO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMFKPIAHCO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMFKPIAHCO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AHMFKPIAHCO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMFKPIAHCO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AHMFKPIAHCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHMFKPIAHCO*))((::PBYTE)hIl2Cpp + AHMFKPIAHCO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AHMFKPIAHCO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
