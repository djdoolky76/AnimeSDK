#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCLKCHGMNAA;
class MDLPIFCHFPJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CCLKCHGMNAA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E04C080)
#define CCLKCHGMNAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E04C350)
#define CCLKCHGMNAA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E04BA80)
#define CCLKCHGMNAA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E04B960)
#define CCLKCHGMNAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E04B950)
#define CCLKCHGMNAA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E04BD70)
#define CCLKCHGMNAA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E04BBF0)
#define CCLKCHGMNAA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E04BBE0)
#define CCLKCHGMNAA_FLLHIBEOGJD_OFFSET UNITYSDK_OFFSET(0x1E04BBC0)
#define CCLKCHGMNAA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E04BEF0)
#define CCLKCHGMNAA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E04B910)
#define CCLKCHGMNAA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E04C1C0)
#define CCLKCHGMNAA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E04C150)
#define CCLKCHGMNAA_MMOKNHFMPDA_OFFSET UNITYSDK_OFFSET(0x1E04BBB0)
#define CCLKCHGMNAA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E04BBD0)
#define CCLKCHGMNAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E04B940)
#define CCLKCHGMNAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E04BF40)
#define CCLKCHGMNAA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E04BFA0)

inline static constexpr unsigned int CCLKCHGMNAA_TypeDefinitionIndex = 33784;

	class CCLKCHGMNAA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::MDLPIFCHFPJ* IDEANDBNCNN; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CCLKCHGMNAA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CCLKCHGMNAA*>**)UnitySDK::FromName("", "CCLKCHGMNAA")->GetStaticField(0xD6B0);
		}

		// static const ::System::Object FMIPLNJFOAF; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLKCHGMNAA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CCLKCHGMNAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCLKCHGMNAA*))((::PBYTE)hIl2Cpp + CCLKCHGMNAA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCLKCHGMNAA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CCLKCHGMNAA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CCLKCHGMNAA*>*(*)())((::PBYTE)hIl2Cpp + CCLKCHGMNAA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLKCHGMNAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CCLKCHGMNAA* Clone()
		{
			return ((::CCLKCHGMNAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLKCHGMNAA_CLONE_OFFSET))(this);
		}

		::MDLPIFCHFPJ* MMOKNHFMPDA()
		{
			return ((::MDLPIFCHFPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLKCHGMNAA_MMOKNHFMPDA_OFFSET))(this);
		}

		::System::Void FLLHIBEOGJD(::MDLPIFCHFPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDLPIFCHFPJ*))((::PBYTE)hIl2Cpp + CCLKCHGMNAA_FLLHIBEOGJD_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLKCHGMNAA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CCLKCHGMNAA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCLKCHGMNAA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CCLKCHGMNAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCLKCHGMNAA*))((::PBYTE)hIl2Cpp + CCLKCHGMNAA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLKCHGMNAA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLKCHGMNAA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CCLKCHGMNAA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLKCHGMNAA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CCLKCHGMNAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCLKCHGMNAA*))((::PBYTE)hIl2Cpp + CCLKCHGMNAA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CCLKCHGMNAA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
