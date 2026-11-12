#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCIBPGAFJFF;
class CIEEKOEECHB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CCIBPGAFJFF_BFLBEIIBIKN_OFFSET UNITYSDK_OFFSET(0x1F339EB0)
#define CCIBPGAFJFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F33A350)
#define CCIBPGAFJFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F33A640)
#define CCIBPGAFJFF_CLONE_OFFSET UNITYSDK_OFFSET(0x1F339E10)
#define CCIBPGAFJFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F339DA0)
#define CCIBPGAFJFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F339D90)
#define CCIBPGAFJFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F33A050)
#define CCIBPGAFJFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F339ED0)
#define CCIBPGAFJFF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F339EA0)
#define CCIBPGAFJFF_FLJOBDNCFEP_OFFSET UNITYSDK_OFFSET(0x1F339EC0)
#define CCIBPGAFJFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F33A1D0)
#define CCIBPGAFJFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F339D50)
#define CCIBPGAFJFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F33A4A0)
#define CCIBPGAFJFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F33A420)
#define CCIBPGAFJFF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F339E90)
#define CCIBPGAFJFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F339D80)
#define CCIBPGAFJFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F33A210)
#define CCIBPGAFJFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F33A270)

inline static constexpr unsigned int CCIBPGAFJFF_TypeDefinitionIndex = 27232;

	class CCIBPGAFJFF : public ::System::Object
	{
	public:
		::CIEEKOEECHB* ILEOLMKCJMB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CCIBPGAFJFF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CCIBPGAFJFF*>**)UnitySDK::FromName("", "CCIBPGAFJFF")->GetStaticField(0x5AF20);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IBBLPNOMPNG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCIBPGAFJFF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CCIBPGAFJFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCIBPGAFJFF*))((::PBYTE)hIl2Cpp + CCIBPGAFJFF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCIBPGAFJFF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CCIBPGAFJFF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CCIBPGAFJFF*>*(*)())((::PBYTE)hIl2Cpp + CCIBPGAFJFF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCIBPGAFJFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CCIBPGAFJFF* Clone()
		{
			return ((::CCIBPGAFJFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCIBPGAFJFF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCIBPGAFJFF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CCIBPGAFJFF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::CIEEKOEECHB* BFLBEIIBIKN()
		{
			return ((::CIEEKOEECHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCIBPGAFJFF_BFLBEIIBIKN_OFFSET))(this);
		}

		::System::Void FLJOBDNCFEP(::CIEEKOEECHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIEEKOEECHB*))((::PBYTE)hIl2Cpp + CCIBPGAFJFF_FLJOBDNCFEP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCIBPGAFJFF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CCIBPGAFJFF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCIBPGAFJFF*))((::PBYTE)hIl2Cpp + CCIBPGAFJFF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCIBPGAFJFF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCIBPGAFJFF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CCIBPGAFJFF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCIBPGAFJFF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CCIBPGAFJFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCIBPGAFJFF*))((::PBYTE)hIl2Cpp + CCIBPGAFJFF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CCIBPGAFJFF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
