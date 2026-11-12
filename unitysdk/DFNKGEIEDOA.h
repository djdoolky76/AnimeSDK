#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFNKGEIEDOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DFNKGEIEDOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F483740)
#define DFNKGEIEDOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F483A50)
#define DFNKGEIEDOA_CLONE_OFFSET UNITYSDK_OFFSET(0x1F4832C0)
#define DFNKGEIEDOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F483280)
#define DFNKGEIEDOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F483270)
#define DFNKGEIEDOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F483460)
#define DFNKGEIEDOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F483370)
#define DFNKGEIEDOA_FJGPHFGJMAB_OFFSET UNITYSDK_OFFSET(0x1F483320)
#define DFNKGEIEDOA_FKINHPCJMED_OFFSET UNITYSDK_OFFSET(0x1F483330)
#define DFNKGEIEDOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F483540)
#define DFNKGEIEDOA_IMGJKLCIGEL_OFFSET UNITYSDK_OFFSET(0x1F483350)
#define DFNKGEIEDOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F483230)
#define DFNKGEIEDOA_LECPGJGHNPB_OFFSET UNITYSDK_OFFSET(0x1F483340)
#define DFNKGEIEDOA_LIPJFEJPBIL_OFFSET UNITYSDK_OFFSET(0x1F483310)
#define DFNKGEIEDOA_MDGCDKHDKEB_OFFSET UNITYSDK_OFFSET(0x1F483360)
#define DFNKGEIEDOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F4838B0)
#define DFNKGEIEDOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F483860)
#define DFNKGEIEDOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F483260)
#define DFNKGEIEDOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F483570)
#define DFNKGEIEDOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F4835D0)

inline static constexpr unsigned int DFNKGEIEDOA_TypeDefinitionIndex = 32809;

	class DFNKGEIEDOA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean OFFPHNFCIKL; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 LIGJAGENICG; // 0x1C
		::System::UInt32 ONPFGKIELHM; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DFNKGEIEDOA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DFNKGEIEDOA*>**)UnitySDK::FromName("", "DFNKGEIEDOA")->GetStaticField(0x2E9D0);
		}

		// static const ::System::Object JMLBKMKHMNK; // 0x0
		// static const ::System::Object HGJOJKJMBKH; // 0x0
		// static const ::System::Object NDBLLNDJADG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNKGEIEDOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DFNKGEIEDOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFNKGEIEDOA*))((::PBYTE)hIl2Cpp + DFNKGEIEDOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFNKGEIEDOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DFNKGEIEDOA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DFNKGEIEDOA*>*(*)())((::PBYTE)hIl2Cpp + DFNKGEIEDOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNKGEIEDOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DFNKGEIEDOA* Clone()
		{
			return ((::DFNKGEIEDOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNKGEIEDOA_CLONE_OFFSET))(this);
		}

		::System::UInt32 LIPJFEJPBIL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNKGEIEDOA_LIPJFEJPBIL_OFFSET))(this);
		}

		::System::Void FJGPHFGJMAB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFNKGEIEDOA_FJGPHFGJMAB_OFFSET))(this, a1);
		}

		::System::Boolean FKINHPCJMED()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNKGEIEDOA_FKINHPCJMED_OFFSET))(this);
		}

		::System::Void LECPGJGHNPB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFNKGEIEDOA_LECPGJGHNPB_OFFSET))(this, a1);
		}

		::System::UInt32 IMGJKLCIGEL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNKGEIEDOA_IMGJKLCIGEL_OFFSET))(this);
		}

		::System::Void MDGCDKHDKEB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFNKGEIEDOA_MDGCDKHDKEB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFNKGEIEDOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DFNKGEIEDOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFNKGEIEDOA*))((::PBYTE)hIl2Cpp + DFNKGEIEDOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNKGEIEDOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNKGEIEDOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DFNKGEIEDOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNKGEIEDOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DFNKGEIEDOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFNKGEIEDOA*))((::PBYTE)hIl2Cpp + DFNKGEIEDOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DFNKGEIEDOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
