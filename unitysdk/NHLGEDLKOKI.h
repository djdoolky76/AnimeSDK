#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKCBFFIOBAB;
class NHLGEDLKOKI;
class NPEHFAHLDNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NHLGEDLKOKI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB21C90)
#define NHLGEDLKOKI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB22090)
#define NHLGEDLKOKI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB21460)
#define NHLGEDLKOKI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB213A0)
#define NHLGEDLKOKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB21390)
#define NHLGEDLKOKI_DDBNPAPKCMA_OFFSET UNITYSDK_OFFSET(0x1EB21570)
#define NHLGEDLKOKI_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1EB21550)
#define NHLGEDLKOKI_EMBDACAJHCG_OFFSET UNITYSDK_OFFSET(0x1EB21580)
#define NHLGEDLKOKI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB217C0)
#define NHLGEDLKOKI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB21590)
#define NHLGEDLKOKI_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1EB21560)
#define NHLGEDLKOKI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB219F0)
#define NHLGEDLKOKI_GFNAIKCBHNO_OFFSET UNITYSDK_OFFSET(0x1EB21540)
#define NHLGEDLKOKI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB21350)
#define NHLGEDLKOKI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB21EB0)
#define NHLGEDLKOKI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB21DA0)
#define NHLGEDLKOKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB21380)
#define NHLGEDLKOKI_PDGHKFIPNHC_OFFSET UNITYSDK_OFFSET(0x1EB21530)
#define NHLGEDLKOKI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB21AF0)
#define NHLGEDLKOKI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB21B50)

inline static constexpr unsigned int NHLGEDLKOKI_TypeDefinitionIndex = 35099;

	class NHLGEDLKOKI : public ::System::Object
	{
	public:
		::MKCBFFIOBAB* LNCJBCJGOFP; // 0x10
		::NPEHFAHLDNM* DIOPPNPPOLH; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 GEMFJILOPLL; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NHLGEDLKOKI")->GetStaticField(0x60750);
		}

		// static const ::System::Object MPMEBEMMDPL; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object OAMMBKNIIJL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGEDLKOKI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NHLGEDLKOKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHLGEDLKOKI*))((::PBYTE)hIl2Cpp + NHLGEDLKOKI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHLGEDLKOKI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NHLGEDLKOKI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGEDLKOKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NHLGEDLKOKI* Clone()
		{
			return ((::NHLGEDLKOKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGEDLKOKI_CLONE_OFFSET))(this);
		}

		::MKCBFFIOBAB* PDGHKFIPNHC()
		{
			return ((::MKCBFFIOBAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGEDLKOKI_PDGHKFIPNHC_OFFSET))(this);
		}

		::System::Void GFNAIKCBHNO(::MKCBFFIOBAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKCBFFIOBAB*))((::PBYTE)hIl2Cpp + NHLGEDLKOKI_GFNAIKCBHNO_OFFSET))(this, a1);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGEDLKOKI_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NHLGEDLKOKI_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::NPEHFAHLDNM* DDBNPAPKCMA()
		{
			return ((::NPEHFAHLDNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGEDLKOKI_DDBNPAPKCMA_OFFSET))(this);
		}

		::System::Void EMBDACAJHCG(::NPEHFAHLDNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + NHLGEDLKOKI_EMBDACAJHCG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NHLGEDLKOKI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NHLGEDLKOKI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NHLGEDLKOKI*))((::PBYTE)hIl2Cpp + NHLGEDLKOKI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGEDLKOKI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGEDLKOKI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NHLGEDLKOKI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGEDLKOKI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NHLGEDLKOKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHLGEDLKOKI*))((::PBYTE)hIl2Cpp + NHLGEDLKOKI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NHLGEDLKOKI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
