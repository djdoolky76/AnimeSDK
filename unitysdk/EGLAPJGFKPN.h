#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APNCCNFJBKO;
class EGLAPJGFKPN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EGLAPJGFKPN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2966B0)
#define EGLAPJGFKPN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E296950)
#define EGLAPJGFKPN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E296040)
#define EGLAPJGFKPN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E295FD0)
#define EGLAPJGFKPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E295FC0)
#define EGLAPJGFKPN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E296250)
#define EGLAPJGFKPN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2960E0)
#define EGLAPJGFKPN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E296520)
#define EGLAPJGFKPN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E295F80)
#define EGLAPJGFKPN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2967A0)
#define EGLAPJGFKPN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E296710)
#define EGLAPJGFKPN_MLECHJMNCEC_OFFSET UNITYSDK_OFFSET(0x1E2960C0)
#define EGLAPJGFKPN_NEMHHFMIBOD_OFFSET UNITYSDK_OFFSET(0x1E2960D0)
#define EGLAPJGFKPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E295FB0)
#define EGLAPJGFKPN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2965C0)
#define EGLAPJGFKPN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E296620)

	class EGLAPJGFKPN : public ::System::Object
	{
	public:
		::APNCCNFJBKO* PIKILAEEHCL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EGLAPJGFKPN")->GetStaticField(0x46A50);
		}

		// static const ::System::Object LNFOONPAIDP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLAPJGFKPN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EGLAPJGFKPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGLAPJGFKPN*))((::PBYTE)hIl2Cpp + EGLAPJGFKPN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGLAPJGFKPN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EGLAPJGFKPN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLAPJGFKPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EGLAPJGFKPN* Clone()
		{
			return ((::EGLAPJGFKPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLAPJGFKPN_CLONE_OFFSET))(this);
		}

		::APNCCNFJBKO* MLECHJMNCEC()
		{
			return ((::APNCCNFJBKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLAPJGFKPN_MLECHJMNCEC_OFFSET))(this);
		}

		::System::Void NEMHHFMIBOD(::APNCCNFJBKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APNCCNFJBKO*))((::PBYTE)hIl2Cpp + EGLAPJGFKPN_NEMHHFMIBOD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGLAPJGFKPN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EGLAPJGFKPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EGLAPJGFKPN*))((::PBYTE)hIl2Cpp + EGLAPJGFKPN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLAPJGFKPN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLAPJGFKPN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EGLAPJGFKPN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLAPJGFKPN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EGLAPJGFKPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGLAPJGFKPN*))((::PBYTE)hIl2Cpp + EGLAPJGFKPN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EGLAPJGFKPN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
