#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDKMOFFMGEL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LDKMOFFMGEL_BJIHPAGKCBP_OFFSET UNITYSDK_OFFSET(0x1E8FB720)
#define LDKMOFFMGEL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8FBAA0)
#define LDKMOFFMGEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8FBE20)
#define LDKMOFFMGEL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8FB680)
#define LDKMOFFMGEL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8FB640)
#define LDKMOFFMGEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8FB630)
#define LDKMOFFMGEL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8FB810)
#define LDKMOFFMGEL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8FB730)
#define LDKMOFFMGEL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8FB8E0)
#define LDKMOFFMGEL_HHLOJEAHIDB_OFFSET UNITYSDK_OFFSET(0x1E8FB710)
#define LDKMOFFMGEL_IEGCGBGEJMA_OFFSET UNITYSDK_OFFSET(0x1E8FB700)
#define LDKMOFFMGEL_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1E8FB6E0)
#define LDKMOFFMGEL_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1E8FB6D0)
#define LDKMOFFMGEL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8FB5F0)
#define LDKMOFFMGEL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8FBC80)
#define LDKMOFFMGEL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8FBC30)
#define LDKMOFFMGEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8FB620)
#define LDKMOFFMGEL_PMBLNJLGBHE_OFFSET UNITYSDK_OFFSET(0x1E8FB6F0)
#define LDKMOFFMGEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8FB910)
#define LDKMOFFMGEL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8FB970)

	class LDKMOFFMGEL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CMLMANGAIOH; // 0x18
		::System::UInt32 CMCCOIIMHMC; // 0x1C
		::System::UInt32 GMPNCOBOFDM; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LDKMOFFMGEL")->GetStaticField(0x34EB0);
		}

		// static const ::System::Object GDFHGOOLLFD; // 0x0
		// static const ::System::Object NLAPNDADCIN; // 0x0
		// static const ::System::Object LLHBHLCEKNK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKMOFFMGEL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LDKMOFFMGEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDKMOFFMGEL*))((::PBYTE)hIl2Cpp + LDKMOFFMGEL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDKMOFFMGEL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LDKMOFFMGEL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKMOFFMGEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LDKMOFFMGEL* Clone()
		{
			return ((::LDKMOFFMGEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKMOFFMGEL_CLONE_OFFSET))(this);
		}

		::System::UInt32 JBIOGKPHKKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKMOFFMGEL_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDKMOFFMGEL_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::UInt32 PMBLNJLGBHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKMOFFMGEL_PMBLNJLGBHE_OFFSET))(this);
		}

		::System::Void IEGCGBGEJMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDKMOFFMGEL_IEGCGBGEJMA_OFFSET))(this, a1);
		}

		::System::UInt32 HHLOJEAHIDB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKMOFFMGEL_HHLOJEAHIDB_OFFSET))(this);
		}

		::System::Void BJIHPAGKCBP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDKMOFFMGEL_BJIHPAGKCBP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDKMOFFMGEL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LDKMOFFMGEL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDKMOFFMGEL*))((::PBYTE)hIl2Cpp + LDKMOFFMGEL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKMOFFMGEL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKMOFFMGEL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LDKMOFFMGEL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKMOFFMGEL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LDKMOFFMGEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDKMOFFMGEL*))((::PBYTE)hIl2Cpp + LDKMOFFMGEL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LDKMOFFMGEL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
