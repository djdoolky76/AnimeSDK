#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MMLAPDEBFJM.h"
#include "unitysdk/System/Object.h"
class KEHOGIENDKC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KEHOGIENDKC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E80A560)
#define KEHOGIENDKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E80A920)
#define KEHOGIENDKC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E80A140)
#define KEHOGIENDKC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E80A100)
#define KEHOGIENDKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E80A0F0)
#define KEHOGIENDKC_EOFNEJIAOJI_OFFSET UNITYSDK_OFFSET(0x1E80A1C0)
#define KEHOGIENDKC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E80A2A0)
#define KEHOGIENDKC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E80A220)
#define KEHOGIENDKC_GCDCAALLHHL_OFFSET UNITYSDK_OFFSET(0x1E80A1E0)
#define KEHOGIENDKC_GCFAEAPPIBP_OFFSET UNITYSDK_OFFSET(0x1E80A200)
#define KEHOGIENDKC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E80A370)
#define KEHOGIENDKC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E80A080)
#define KEHOGIENDKC_JLOHFHNNCBJ_OFFSET UNITYSDK_OFFSET(0x1E80A1D0)
#define KEHOGIENDKC_KIOKMHAIIKI_OFFSET UNITYSDK_OFFSET(0x1E80A210)
#define KEHOGIENDKC_KPMOLDNDPDN_OFFSET UNITYSDK_OFFSET(0x1E80A1F0)
#define KEHOGIENDKC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E80A780)
#define KEHOGIENDKC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E80A730)
#define KEHOGIENDKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E80A0E0)
#define KEHOGIENDKC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E80A3A0)
#define KEHOGIENDKC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E80A400)

	class KEHOGIENDKC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JPBNOBHKPJC; // 0x18
		::System::UInt32 PPJPIACOHMF; // 0x1C
		::MMLAPDEBFJM BHHCNHCDDMA; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KEHOGIENDKC")->GetStaticField(0x12850);
		}

		// static const ::System::Object BGLLEEOCPHM; // 0x0
		// static const ::System::Object AJJMKABBLOE; // 0x0
		// static const ::System::Object GIACAJKKEJF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHOGIENDKC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KEHOGIENDKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KEHOGIENDKC*))((::PBYTE)hIl2Cpp + KEHOGIENDKC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEHOGIENDKC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KEHOGIENDKC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHOGIENDKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KEHOGIENDKC* Clone()
		{
			return ((::KEHOGIENDKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHOGIENDKC_CLONE_OFFSET))(this);
		}

		::System::UInt32 EOFNEJIAOJI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHOGIENDKC_EOFNEJIAOJI_OFFSET))(this);
		}

		::System::Void JLOHFHNNCBJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KEHOGIENDKC_JLOHFHNNCBJ_OFFSET))(this, a1);
		}

		::System::UInt32 GCDCAALLHHL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHOGIENDKC_GCDCAALLHHL_OFFSET))(this);
		}

		::System::Void KPMOLDNDPDN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KEHOGIENDKC_KPMOLDNDPDN_OFFSET))(this, a1);
		}

		::MMLAPDEBFJM GCFAEAPPIBP()
		{
			return ((::MMLAPDEBFJM(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHOGIENDKC_GCFAEAPPIBP_OFFSET))(this);
		}

		::System::Void KIOKMHAIIKI(::MMLAPDEBFJM a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMLAPDEBFJM))((::PBYTE)hIl2Cpp + KEHOGIENDKC_KIOKMHAIIKI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KEHOGIENDKC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KEHOGIENDKC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KEHOGIENDKC*))((::PBYTE)hIl2Cpp + KEHOGIENDKC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHOGIENDKC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHOGIENDKC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KEHOGIENDKC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHOGIENDKC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KEHOGIENDKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KEHOGIENDKC*))((::PBYTE)hIl2Cpp + KEHOGIENDKC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KEHOGIENDKC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
