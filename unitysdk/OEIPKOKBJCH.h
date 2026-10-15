#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBIEFHKNAFA.h"
#include "unitysdk/System/Object.h"
class OEIPKOKBJCH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OEIPKOKBJCH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDFF1F0)
#define OEIPKOKBJCH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDFF5F0)
#define OEIPKOKBJCH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDFEB40)
#define OEIPKOKBJCH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDFEAE0)
#define OEIPKOKBJCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFEAC0)
#define OEIPKOKBJCH_DHMKLHIDLNJ_OFFSET UNITYSDK_OFFSET(0x1DDFEC40)
#define OEIPKOKBJCH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDFED70)
#define OEIPKOKBJCH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDFECD0)
#define OEIPKOKBJCH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DDFEBC0)
#define OEIPKOKBJCH_FFFGHNJHLDK_OFFSET UNITYSDK_OFFSET(0x1DDFEC30)
#define OEIPKOKBJCH_GEPMNDDAPGC_OFFSET UNITYSDK_OFFSET(0x1DDFEC50)
#define OEIPKOKBJCH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDFEE20)
#define OEIPKOKBJCH_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1DDFECC0)
#define OEIPKOKBJCH_JJDDPDNDIFA_OFFSET UNITYSDK_OFFSET(0x1DDFEC60)
#define OEIPKOKBJCH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDFEA80)
#define OEIPKOKBJCH_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1DDFECB0)
#define OEIPKOKBJCH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDFF4D0)
#define OEIPKOKBJCH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDFF450)
#define OEIPKOKBJCH_MPJFHFOHKMC_OFFSET UNITYSDK_OFFSET(0x1DDFEBD0)
#define OEIPKOKBJCH_NHOOPGBEABP_OFFSET UNITYSDK_OFFSET(0x1DDFEBE0)
#define OEIPKOKBJCH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DDFEBB0)
#define OEIPKOKBJCH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDFEAB0)
#define OEIPKOKBJCH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDFEF60)
#define OEIPKOKBJCH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDFEFC0)

inline static constexpr unsigned int OEIPKOKBJCH_TypeDefinitionIndex = 32618;

	class OEIPKOKBJCH : public ::System::Object
	{
	public:
		::System::String* MLLMEPDJGFM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::String* DNCJBOCEJMI; // 0x20
		::System::UInt32 HJEGLCJEOKC; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x2C
		::PBIEFHKNAFA GPFPPGECIBL; // 0x30
		static ::Google::Protobuf::MessageParser_1<::OEIPKOKBJCH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OEIPKOKBJCH*>**)UnitySDK::FromName("", "OEIPKOKBJCH")->GetStaticField(0x13B30);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object KNPPOKKNOOD; // 0x0
		// static const ::System::Object DBKOOFPDGGI; // 0x0
		// static const ::System::Object OAHHPIDOACP; // 0x0
		// static const ::System::Object IEIFMNNMINA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEIPKOKBJCH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OEIPKOKBJCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEIPKOKBJCH*))((::PBYTE)hIl2Cpp + OEIPKOKBJCH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEIPKOKBJCH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OEIPKOKBJCH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OEIPKOKBJCH*>*(*)())((::PBYTE)hIl2Cpp + OEIPKOKBJCH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEIPKOKBJCH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OEIPKOKBJCH* Clone()
		{
			return ((::OEIPKOKBJCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEIPKOKBJCH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEIPKOKBJCH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OEIPKOKBJCH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::String* MPJFHFOHKMC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEIPKOKBJCH_MPJFHFOHKMC_OFFSET))(this);
		}

		::System::Void NHOOPGBEABP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OEIPKOKBJCH_NHOOPGBEABP_OFFSET))(this, a1);
		}

		::PBIEFHKNAFA FFFGHNJHLDK()
		{
			return ((::PBIEFHKNAFA(*)(::PVOID))((::PBYTE)hIl2Cpp + OEIPKOKBJCH_FFFGHNJHLDK_OFFSET))(this);
		}

		::System::Void DHMKLHIDLNJ(::PBIEFHKNAFA a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBIEFHKNAFA))((::PBYTE)hIl2Cpp + OEIPKOKBJCH_DHMKLHIDLNJ_OFFSET))(this, a1);
		}

		::System::String* GEPMNDDAPGC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEIPKOKBJCH_GEPMNDDAPGC_OFFSET))(this);
		}

		::System::Void JJDDPDNDIFA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OEIPKOKBJCH_JJDDPDNDIFA_OFFSET))(this, a1);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEIPKOKBJCH_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OEIPKOKBJCH_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OEIPKOKBJCH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OEIPKOKBJCH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OEIPKOKBJCH*))((::PBYTE)hIl2Cpp + OEIPKOKBJCH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEIPKOKBJCH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEIPKOKBJCH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OEIPKOKBJCH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEIPKOKBJCH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OEIPKOKBJCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEIPKOKBJCH*))((::PBYTE)hIl2Cpp + OEIPKOKBJCH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OEIPKOKBJCH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
