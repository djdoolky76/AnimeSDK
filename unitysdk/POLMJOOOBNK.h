#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POLMJOOOBNK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define POLMJOOOBNK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFCD910)
#define POLMJOOOBNK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFCDC90)
#define POLMJOOOBNK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFCD4F0)
#define POLMJOOOBNK_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1DFCD580)
#define POLMJOOOBNK_COKGJAJDFBN_OFFSET UNITYSDK_OFFSET(0x1DFCD560)
#define POLMJOOOBNK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFCD4B0)
#define POLMJOOOBNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFCD4A0)
#define POLMJOOOBNK_DCIDHPGBHJF_OFFSET UNITYSDK_OFFSET(0x1DFCD570)
#define POLMJOOOBNK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFCD680)
#define POLMJOOOBNK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFCD5A0)
#define POLMJOOOBNK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DFCD550)
#define POLMJOOOBNK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFCD750)
#define POLMJOOOBNK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFCD460)
#define POLMJOOOBNK_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1DFCD590)
#define POLMJOOOBNK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFCDAF0)
#define POLMJOOOBNK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFCDAA0)
#define POLMJOOOBNK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DFCD540)
#define POLMJOOOBNK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFCD490)
#define POLMJOOOBNK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFCD780)
#define POLMJOOOBNK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFCD7E0)

inline static constexpr unsigned int POLMJOOOBNK_TypeDefinitionIndex = 26322;

	class POLMJOOOBNK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PDNLLKHCOBO; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		::System::UInt32 DNKADAFBILN; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "POLMJOOOBNK")->GetStaticField(0x43560);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object MEDEPMKJNBB; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POLMJOOOBNK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::POLMJOOOBNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POLMJOOOBNK*))((::PBYTE)hIl2Cpp + POLMJOOOBNK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POLMJOOOBNK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + POLMJOOOBNK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + POLMJOOOBNK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::POLMJOOOBNK* Clone()
		{
			return ((::POLMJOOOBNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + POLMJOOOBNK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POLMJOOOBNK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POLMJOOOBNK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 COKGJAJDFBN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POLMJOOOBNK_COKGJAJDFBN_OFFSET))(this);
		}

		::System::Void DCIDHPGBHJF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POLMJOOOBNK_DCIDHPGBHJF_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POLMJOOOBNK_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POLMJOOOBNK_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + POLMJOOOBNK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::POLMJOOOBNK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::POLMJOOOBNK*))((::PBYTE)hIl2Cpp + POLMJOOOBNK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POLMJOOOBNK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POLMJOOOBNK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + POLMJOOOBNK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POLMJOOOBNK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::POLMJOOOBNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POLMJOOOBNK*))((::PBYTE)hIl2Cpp + POLMJOOOBNK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + POLMJOOOBNK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
