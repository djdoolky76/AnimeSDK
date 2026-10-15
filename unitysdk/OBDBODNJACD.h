#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBDBODNJACD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OBDBODNJACD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EBAC5F0)
#define OBDBODNJACD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBAC940)
#define OBDBODNJACD_CDKKINMBCIE_OFFSET UNITYSDK_OFFSET(0x1EBAC160)
#define OBDBODNJACD_CLONE_OFFSET UNITYSDK_OFFSET(0x1EBAC030)
#define OBDBODNJACD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBABFF0)
#define OBDBODNJACD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBABFE0)
#define OBDBODNJACD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EBAC220)
#define OBDBODNJACD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EBAC170)
#define OBDBODNJACD_FHEIFCBDCFB_OFFSET UNITYSDK_OFFSET(0x1EBAC120)
#define OBDBODNJACD_FNNGIFBNMCH_OFFSET UNITYSDK_OFFSET(0x1EBAC0C0)
#define OBDBODNJACD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EBAC290)
#define OBDBODNJACD_IGHHFLHPCDN_OFFSET UNITYSDK_OFFSET(0x1EBAC140)
#define OBDBODNJACD_JDCGOPGHEHI_OFFSET UNITYSDK_OFFSET(0x1EBAC0B0)
#define OBDBODNJACD_JGKCDIFEMPL_OFFSET UNITYSDK_OFFSET(0x1EBAC130)
#define OBDBODNJACD_JGLKJJBBBIF_OFFSET UNITYSDK_OFFSET(0x1EBAC110)
#define OBDBODNJACD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EBABF70)
#define OBDBODNJACD_LHNNJOOMBGH_OFFSET UNITYSDK_OFFSET(0x1EBAC0D0)
#define OBDBODNJACD_LMHNIBJJPOD_OFFSET UNITYSDK_OFFSET(0x1EBAC150)
#define OBDBODNJACD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EBAC870)
#define OBDBODNJACD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EBAC810)
#define OBDBODNJACD_NAKADOAKEMN_OFFSET UNITYSDK_OFFSET(0x1EBAC0F0)
#define OBDBODNJACD_NLKDAOLEHJE_OFFSET UNITYSDK_OFFSET(0x1EBAC0E0)
#define OBDBODNJACD_PABMAPEIHIB_OFFSET UNITYSDK_OFFSET(0x1EBAC100)
#define OBDBODNJACD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EBABFD0)
#define OBDBODNJACD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBAC2E0)
#define OBDBODNJACD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EBAC340)

inline static constexpr unsigned int OBDBODNJACD_TypeDefinitionIndex = 27991;

	class OBDBODNJACD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean LFMNOJJAFOI; // 0x18
		::System::Boolean LLHKFFKMOBK; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 AJPNGCJCMEB; // 0x1C
		::System::UInt32 ADHIIGFDPNG; // 0x20
		::System::UInt32 LFCMKNPJFAK; // 0x24
		::System::UInt32 EHCFPHJABDL; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OBDBODNJACD")->GetStaticField(0xFFD0);
		}

		// static const ::System::Object KJDBNFHNEKC; // 0x0
		// static const ::System::Object GBBHNLJAKDO; // 0x0
		// static const ::System::Object KNKKAJKGKOI; // 0x0
		// static const ::System::Object FEGJODHHKKJ; // 0x0
		// static const ::System::Object FBCFBAPNOGL; // 0x0
		// static const ::System::Object KMHAHCHEEBP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDBODNJACD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OBDBODNJACD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBDBODNJACD*))((::PBYTE)hIl2Cpp + OBDBODNJACD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBDBODNJACD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OBDBODNJACD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDBODNJACD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OBDBODNJACD* Clone()
		{
			return ((::OBDBODNJACD*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDBODNJACD_CLONE_OFFSET))(this);
		}

		::System::Boolean JDCGOPGHEHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDBODNJACD_JDCGOPGHEHI_OFFSET))(this);
		}

		::System::Void FNNGIFBNMCH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBDBODNJACD_FNNGIFBNMCH_OFFSET))(this, a1);
		}

		::System::Boolean LHNNJOOMBGH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDBODNJACD_LHNNJOOMBGH_OFFSET))(this);
		}

		::System::Void NLKDAOLEHJE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBDBODNJACD_NLKDAOLEHJE_OFFSET))(this, a1);
		}

		::System::UInt32 NAKADOAKEMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDBODNJACD_NAKADOAKEMN_OFFSET))(this);
		}

		::System::Void PABMAPEIHIB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OBDBODNJACD_PABMAPEIHIB_OFFSET))(this, a1);
		}

		::System::UInt32 JGLKJJBBBIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDBODNJACD_JGLKJJBBBIF_OFFSET))(this);
		}

		::System::Void FHEIFCBDCFB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OBDBODNJACD_FHEIFCBDCFB_OFFSET))(this, a1);
		}

		::System::UInt32 JGKCDIFEMPL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDBODNJACD_JGKCDIFEMPL_OFFSET))(this);
		}

		::System::Void IGHHFLHPCDN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OBDBODNJACD_IGHHFLHPCDN_OFFSET))(this, a1);
		}

		::System::UInt32 LMHNIBJJPOD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDBODNJACD_LMHNIBJJPOD_OFFSET))(this);
		}

		::System::Void CDKKINMBCIE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OBDBODNJACD_CDKKINMBCIE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBDBODNJACD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OBDBODNJACD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OBDBODNJACD*))((::PBYTE)hIl2Cpp + OBDBODNJACD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDBODNJACD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDBODNJACD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OBDBODNJACD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDBODNJACD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OBDBODNJACD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBDBODNJACD*))((::PBYTE)hIl2Cpp + OBDBODNJACD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OBDBODNJACD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
