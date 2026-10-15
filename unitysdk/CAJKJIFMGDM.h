#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAJKJIFMGDM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CAJKJIFMGDM_BNFOGOCGGNO_OFFSET UNITYSDK_OFFSET(0x1E05D710)
#define CAJKJIFMGDM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E05DA90)
#define CAJKJIFMGDM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E05DE30)
#define CAJKJIFMGDM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E05D670)
#define CAJKJIFMGDM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E05D630)
#define CAJKJIFMGDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E05D620)
#define CAJKJIFMGDM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E05D800)
#define CAJKJIFMGDM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E05D720)
#define CAJKJIFMGDM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E05D6D0)
#define CAJKJIFMGDM_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1E05D6E0)
#define CAJKJIFMGDM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E05D8D0)
#define CAJKJIFMGDM_GJJHBNAINKN_OFFSET UNITYSDK_OFFSET(0x1E05D700)
#define CAJKJIFMGDM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E05D5E0)
#define CAJKJIFMGDM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E05DC70)
#define CAJKJIFMGDM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E05DC20)
#define CAJKJIFMGDM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E05D6C0)
#define CAJKJIFMGDM_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1E05D6F0)
#define CAJKJIFMGDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E05D610)
#define CAJKJIFMGDM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E05D900)
#define CAJKJIFMGDM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E05D960)

inline static constexpr unsigned int CAJKJIFMGDM_TypeDefinitionIndex = 27234;

	class CAJKJIFMGDM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OPPNMFMNMGC; // 0x18
		::System::UInt32 DGKJJMLNHPD; // 0x1C
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CAJKJIFMGDM")->GetStaticField(0x2720);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BOIGPPCIPFF; // 0x0
		// static const ::System::Object BPHBBEIFAOI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJKJIFMGDM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CAJKJIFMGDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAJKJIFMGDM*))((::PBYTE)hIl2Cpp + CAJKJIFMGDM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAJKJIFMGDM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CAJKJIFMGDM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJKJIFMGDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CAJKJIFMGDM* Clone()
		{
			return ((::CAJKJIFMGDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJKJIFMGDM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJKJIFMGDM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CAJKJIFMGDM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJKJIFMGDM_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CAJKJIFMGDM_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::UInt32 GJJHBNAINKN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJKJIFMGDM_GJJHBNAINKN_OFFSET))(this);
		}

		::System::Void BNFOGOCGGNO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CAJKJIFMGDM_BNFOGOCGGNO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CAJKJIFMGDM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CAJKJIFMGDM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CAJKJIFMGDM*))((::PBYTE)hIl2Cpp + CAJKJIFMGDM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJKJIFMGDM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJKJIFMGDM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CAJKJIFMGDM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJKJIFMGDM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CAJKJIFMGDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAJKJIFMGDM*))((::PBYTE)hIl2Cpp + CAJKJIFMGDM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CAJKJIFMGDM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
