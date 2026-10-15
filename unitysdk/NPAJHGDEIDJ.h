#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPCEBDCJBOI.h"
#include "unitysdk/System/Object.h"
class NPAJHGDEIDJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NPAJHGDEIDJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB65310)
#define NPAJHGDEIDJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB65620)
#define NPAJHGDEIDJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB64F50)
#define NPAJHGDEIDJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB64F20)
#define NPAJHGDEIDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB64F10)
#define NPAJHGDEIDJ_EPPIFNICDED_OFFSET UNITYSDK_OFFSET(0x1EB64FC0)
#define NPAJHGDEIDJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB650C0)
#define NPAJHGDEIDJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB64FE0)
#define NPAJHGDEIDJ_GAIKIHDIOBM_OFFSET UNITYSDK_OFFSET(0x1EB64FB0)
#define NPAJHGDEIDJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB65190)
#define NPAJHGDEIDJ_HFPMAPKAJHB_OFFSET UNITYSDK_OFFSET(0x1EB64FD0)
#define NPAJHGDEIDJ_JBENBABCOGB_OFFSET UNITYSDK_OFFSET(0x1EB64FA0)
#define NPAJHGDEIDJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB64ED0)
#define NPAJHGDEIDJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB654A0)
#define NPAJHGDEIDJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB65460)
#define NPAJHGDEIDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB64F00)
#define NPAJHGDEIDJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB651C0)
#define NPAJHGDEIDJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB65220)

inline static constexpr unsigned int NPAJHGDEIDJ_TypeDefinitionIndex = 33366;

	class NPAJHGDEIDJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::LPCEBDCJBOI AFHHMCKLLAJ; // 0x18
		::System::UInt32 ACOMDMEILHC; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::NPAJHGDEIDJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NPAJHGDEIDJ*>**)UnitySDK::FromName("", "NPAJHGDEIDJ")->GetStaticField(0xC4C0);
		}

		// static const ::System::Object LFMHICIGAPC; // 0x0
		// static const ::System::Object LPJFEABAFED; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NPAJHGDEIDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPAJHGDEIDJ*))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NPAJHGDEIDJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NPAJHGDEIDJ*>*(*)())((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NPAJHGDEIDJ* Clone()
		{
			return ((::NPAJHGDEIDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_CLONE_OFFSET))(this);
		}

		::LPCEBDCJBOI JBENBABCOGB()
		{
			return ((::LPCEBDCJBOI(*)(::PVOID))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_JBENBABCOGB_OFFSET))(this);
		}

		::System::Void GAIKIHDIOBM(::LPCEBDCJBOI a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPCEBDCJBOI))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_GAIKIHDIOBM_OFFSET))(this, a1);
		}

		::System::UInt32 EPPIFNICDED()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_EPPIFNICDED_OFFSET))(this);
		}

		::System::Void HFPMAPKAJHB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_HFPMAPKAJHB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NPAJHGDEIDJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPAJHGDEIDJ*))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NPAJHGDEIDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPAJHGDEIDJ*))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
