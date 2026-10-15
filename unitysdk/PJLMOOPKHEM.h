#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBPDACMBHGL.h"
#include "unitysdk/System/Object.h"
class PJLMOOPKHEM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PJLMOOPKHEM_BJNBLLGKIEB_OFFSET UNITYSDK_OFFSET(0x1DF50AA0)
#define PJLMOOPKHEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF50E30)
#define PJLMOOPKHEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF51140)
#define PJLMOOPKHEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF50A20)
#define PJLMOOPKHEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF509F0)
#define PJLMOOPKHEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF509E0)
#define PJLMOOPKHEM_EMAAFBHHJBI_OFFSET UNITYSDK_OFFSET(0x1DF50A90)
#define PJLMOOPKHEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF50BE0)
#define PJLMOOPKHEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF50AD0)
#define PJLMOOPKHEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF50CB0)
#define PJLMOOPKHEM_HHLEPFCDNHN_OFFSET UNITYSDK_OFFSET(0x1DF50AC0)
#define PJLMOOPKHEM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF50970)
#define PJLMOOPKHEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF50FC0)
#define PJLMOOPKHEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF50F80)
#define PJLMOOPKHEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF509D0)
#define PJLMOOPKHEM_PGGMGJJGBDG_OFFSET UNITYSDK_OFFSET(0x1DF50AB0)
#define PJLMOOPKHEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF50CE0)
#define PJLMOOPKHEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF50D40)

inline static constexpr unsigned int PJLMOOPKHEM_TypeDefinitionIndex = 25203;

	class PJLMOOPKHEM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OCHKJGFHCLC; // 0x18
		::CBPDACMBHGL AOCFCLGNENH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::PJLMOOPKHEM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PJLMOOPKHEM*>**)UnitySDK::FromName("", "PJLMOOPKHEM")->GetStaticField(0x36D30);
		}

		// static const ::System::Object JOFLFBJMGKI; // 0x0
		// static const ::System::Object JICOMNMICGN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLMOOPKHEM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PJLMOOPKHEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJLMOOPKHEM*))((::PBYTE)hIl2Cpp + PJLMOOPKHEM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJLMOOPKHEM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PJLMOOPKHEM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PJLMOOPKHEM*>*(*)())((::PBYTE)hIl2Cpp + PJLMOOPKHEM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLMOOPKHEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PJLMOOPKHEM* Clone()
		{
			return ((::PJLMOOPKHEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLMOOPKHEM_CLONE_OFFSET))(this);
		}

		::CBPDACMBHGL EMAAFBHHJBI()
		{
			return ((::CBPDACMBHGL(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLMOOPKHEM_EMAAFBHHJBI_OFFSET))(this);
		}

		::System::Void BJNBLLGKIEB(::CBPDACMBHGL a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBPDACMBHGL))((::PBYTE)hIl2Cpp + PJLMOOPKHEM_BJNBLLGKIEB_OFFSET))(this, a1);
		}

		::System::UInt32 PGGMGJJGBDG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLMOOPKHEM_PGGMGJJGBDG_OFFSET))(this);
		}

		::System::Void HHLEPFCDNHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJLMOOPKHEM_HHLEPFCDNHN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJLMOOPKHEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PJLMOOPKHEM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PJLMOOPKHEM*))((::PBYTE)hIl2Cpp + PJLMOOPKHEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLMOOPKHEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLMOOPKHEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PJLMOOPKHEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLMOOPKHEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PJLMOOPKHEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJLMOOPKHEM*))((::PBYTE)hIl2Cpp + PJLMOOPKHEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PJLMOOPKHEM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
