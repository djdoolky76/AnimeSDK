#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLOFPKHFPJL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OLOFPKHFPJL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEABB70)
#define OLOFPKHFPJL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEABE40)
#define OLOFPKHFPJL_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEAB7C0)
#define OLOFPKHFPJL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEAB790)
#define OLOFPKHFPJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEAB780)
#define OLOFPKHFPJL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEAB930)
#define OLOFPKHFPJL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEAB850)
#define OLOFPKHFPJL_FLKPPAKPLHM_OFFSET UNITYSDK_OFFSET(0x1DEAB810)
#define OLOFPKHFPJL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEABA00)
#define OLOFPKHFPJL_HADLEOMNCJC_OFFSET UNITYSDK_OFFSET(0x1DEAB830)
#define OLOFPKHFPJL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEAB740)
#define OLOFPKHFPJL_MBCGMKOAHIM_OFFSET UNITYSDK_OFFSET(0x1DEAB820)
#define OLOFPKHFPJL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEABCC0)
#define OLOFPKHFPJL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEABC80)
#define OLOFPKHFPJL_MKBAHHJODPG_OFFSET UNITYSDK_OFFSET(0x1DEAB840)
#define OLOFPKHFPJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEAB770)
#define OLOFPKHFPJL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEABA30)
#define OLOFPKHFPJL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEABA90)

inline static constexpr unsigned int OLOFPKHFPJL_TypeDefinitionIndex = 26978;

	class OLOFPKHFPJL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AJHOJKFPMLL; // 0x18
		::System::UInt32 ONKGPIBKMPL; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OLOFPKHFPJL")->GetStaticField(0x24030);
		}

		// static const ::System::Object KABHDCOPEGH; // 0x0
		// static const ::System::Object EMAAFDGEFOA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OLOFPKHFPJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLOFPKHFPJL*))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLOFPKHFPJL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OLOFPKHFPJL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OLOFPKHFPJL* Clone()
		{
			return ((::OLOFPKHFPJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_CLONE_OFFSET))(this);
		}

		::System::UInt32 FLKPPAKPLHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_FLKPPAKPLHM_OFFSET))(this);
		}

		::System::Void MBCGMKOAHIM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_MBCGMKOAHIM_OFFSET))(this, a1);
		}

		::System::UInt32 HADLEOMNCJC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_HADLEOMNCJC_OFFSET))(this);
		}

		::System::Void MKBAHHJODPG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_MKBAHHJODPG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OLOFPKHFPJL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OLOFPKHFPJL*))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OLOFPKHFPJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLOFPKHFPJL*))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OLOFPKHFPJL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
