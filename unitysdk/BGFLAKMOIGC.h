#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGFLAKMOIGC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BGFLAKMOIGC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA48A40)
#define BGFLAKMOIGC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA48C30)
#define BGFLAKMOIGC_CIBOLCHOICI_OFFSET UNITYSDK_OFFSET(0x1EA48650)
#define BGFLAKMOIGC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA48600)
#define BGFLAKMOIGC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA485C0)
#define BGFLAKMOIGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA485B0)
#define BGFLAKMOIGC_DBHINLKEHNM_OFFSET UNITYSDK_OFFSET(0x1EA48670)
#define BGFLAKMOIGC_DDDDEPHJCGO_OFFSET UNITYSDK_OFFSET(0x1EA48660)
#define BGFLAKMOIGC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA48780)
#define BGFLAKMOIGC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA48690)
#define BGFLAKMOIGC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA48870)
#define BGFLAKMOIGC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA48570)
#define BGFLAKMOIGC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA48AB0)
#define BGFLAKMOIGC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA48A70)
#define BGFLAKMOIGC_PAAHGNJPOHE_OFFSET UNITYSDK_OFFSET(0x1EA48680)
#define BGFLAKMOIGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA485A0)
#define BGFLAKMOIGC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA488A0)
#define BGFLAKMOIGC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA48900)

inline static constexpr unsigned int BGFLAKMOIGC_TypeDefinitionIndex = 33916;

	class BGFLAKMOIGC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean NALNGGEIFHO; // 0x18
		::System::Boolean BDCMDMFDAMB; // 0x19
		static ::Google::Protobuf::MessageParser_1<::BGFLAKMOIGC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BGFLAKMOIGC*>**)UnitySDK::FromName("", "BGFLAKMOIGC")->GetStaticField(0x54A20);
		}

		// static const ::System::Object EIDEDFMJOID; // 0x0
		// static const ::System::Object OOEKHNCDOEB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFLAKMOIGC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BGFLAKMOIGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGFLAKMOIGC*))((::PBYTE)hIl2Cpp + BGFLAKMOIGC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGFLAKMOIGC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BGFLAKMOIGC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BGFLAKMOIGC*>*(*)())((::PBYTE)hIl2Cpp + BGFLAKMOIGC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFLAKMOIGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BGFLAKMOIGC* Clone()
		{
			return ((::BGFLAKMOIGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFLAKMOIGC_CLONE_OFFSET))(this);
		}

		::System::Boolean CIBOLCHOICI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFLAKMOIGC_CIBOLCHOICI_OFFSET))(this);
		}

		::System::Void DDDDEPHJCGO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BGFLAKMOIGC_DDDDEPHJCGO_OFFSET))(this, a1);
		}

		::System::Boolean DBHINLKEHNM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFLAKMOIGC_DBHINLKEHNM_OFFSET))(this);
		}

		::System::Void PAAHGNJPOHE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BGFLAKMOIGC_PAAHGNJPOHE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGFLAKMOIGC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BGFLAKMOIGC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGFLAKMOIGC*))((::PBYTE)hIl2Cpp + BGFLAKMOIGC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFLAKMOIGC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFLAKMOIGC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BGFLAKMOIGC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFLAKMOIGC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BGFLAKMOIGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGFLAKMOIGC*))((::PBYTE)hIl2Cpp + BGFLAKMOIGC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BGFLAKMOIGC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
