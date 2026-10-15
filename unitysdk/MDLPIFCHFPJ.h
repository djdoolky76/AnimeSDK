#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDBDLBAPDBE;
class MDLPIFCHFPJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MDLPIFCHFPJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA065A0)
#define MDLPIFCHFPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA068C0)
#define MDLPIFCHFPJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA06010)
#define MDLPIFCHFPJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA05FA0)
#define MDLPIFCHFPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA05F90)
#define MDLPIFCHFPJ_EHDMOKKGPEJ_OFFSET UNITYSDK_OFFSET(0x1EA060A0)
#define MDLPIFCHFPJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA06250)
#define MDLPIFCHFPJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA060D0)
#define MDLPIFCHFPJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA063D0)
#define MDLPIFCHFPJ_GHEIAEAOKAC_OFFSET UNITYSDK_OFFSET(0x1EA060C0)
#define MDLPIFCHFPJ_HCEENNEBBCJ_OFFSET UNITYSDK_OFFSET(0x1EA06090)
#define MDLPIFCHFPJ_IGJOIMKFBNG_OFFSET UNITYSDK_OFFSET(0x1EA060B0)
#define MDLPIFCHFPJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA05F50)
#define MDLPIFCHFPJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA06700)
#define MDLPIFCHFPJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA06670)
#define MDLPIFCHFPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA05F80)
#define MDLPIFCHFPJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA06460)
#define MDLPIFCHFPJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA064C0)

inline static constexpr unsigned int MDLPIFCHFPJ_TypeDefinitionIndex = 33714;

	class MDLPIFCHFPJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FDBDLBAPDBE* GMLPGJJJKDP; // 0x18
		::System::UInt32 PECBHBFEMEB; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MDLPIFCHFPJ")->GetStaticField(0x49E80);
		}

		// static const ::System::Object EMPALEMIDEB; // 0x0
		// static const ::System::Object KIAJFAMLJEG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MDLPIFCHFPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDLPIFCHFPJ*))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MDLPIFCHFPJ* Clone()
		{
			return ((::MDLPIFCHFPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCEENNEBBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_HCEENNEBBCJ_OFFSET))(this);
		}

		::System::Void EHDMOKKGPEJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_EHDMOKKGPEJ_OFFSET))(this, a1);
		}

		::FDBDLBAPDBE* IGJOIMKFBNG()
		{
			return ((::FDBDLBAPDBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_IGJOIMKFBNG_OFFSET))(this);
		}

		::System::Void GHEIAEAOKAC(::FDBDLBAPDBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDBDLBAPDBE*))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_GHEIAEAOKAC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MDLPIFCHFPJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MDLPIFCHFPJ*))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MDLPIFCHFPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDLPIFCHFPJ*))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
