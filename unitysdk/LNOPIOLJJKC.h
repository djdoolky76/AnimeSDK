#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNOPIOLJJKC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LNOPIOLJJKC_BJILOJLKPLK_OFFSET UNITYSDK_OFFSET(0x1E9B66F0)
#define LNOPIOLJJKC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9B6BF0)
#define LNOPIOLJJKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9B6F80)
#define LNOPIOLJJKC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9B6670)
#define LNOPIOLJJKC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9B6620)
#define LNOPIOLJJKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9B6610)
#define LNOPIOLJJKC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9B6880)
#define LNOPIOLJJKC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9B6770)
#define LNOPIOLJJKC_GCFAEAPPIBP_OFFSET UNITYSDK_OFFSET(0x1E9B66D0)
#define LNOPIOLJJKC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9B6990)
#define LNOPIOLJJKC_HDMOMPOJCOK_OFFSET UNITYSDK_OFFSET(0x1E9B6700)
#define LNOPIOLJJKC_JDCNCBFKIBK_OFFSET UNITYSDK_OFFSET(0x1E9B6750)
#define LNOPIOLJJKC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9B65D0)
#define LNOPIOLJJKC_KIOKMHAIIKI_OFFSET UNITYSDK_OFFSET(0x1E9B66E0)
#define LNOPIOLJJKC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9B6DB0)
#define LNOPIOLJJKC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9B6D50)
#define LNOPIOLJJKC_NPBOCHOHANI_OFFSET UNITYSDK_OFFSET(0x1E9B6760)
#define LNOPIOLJJKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9B6600)
#define LNOPIOLJJKC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9B6A40)
#define LNOPIOLJJKC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9B6AA0)

	class LNOPIOLJJKC : public ::System::Object
	{
	public:
		::System::String* ACKBJCBOLAK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 KFLKHNMNBLE; // 0x20
		::System::UInt32 BHHCNHCDDMA; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LNOPIOLJJKC")->GetStaticField(0x50580);
		}

		// static const ::System::Object GIACAJKKEJF; // 0x0
		// static const ::System::Object AHBMGKCFAEL; // 0x0
		// static const ::System::Object FPIOLKELJJG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOPIOLJJKC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LNOPIOLJJKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNOPIOLJJKC*))((::PBYTE)hIl2Cpp + LNOPIOLJJKC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNOPIOLJJKC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LNOPIOLJJKC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOPIOLJJKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LNOPIOLJJKC* Clone()
		{
			return ((::LNOPIOLJJKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOPIOLJJKC_CLONE_OFFSET))(this);
		}

		::System::UInt32 GCFAEAPPIBP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOPIOLJJKC_GCFAEAPPIBP_OFFSET))(this);
		}

		::System::Void KIOKMHAIIKI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LNOPIOLJJKC_KIOKMHAIIKI_OFFSET))(this, a1);
		}

		::System::String* BJILOJLKPLK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOPIOLJJKC_BJILOJLKPLK_OFFSET))(this);
		}

		::System::Void HDMOMPOJCOK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LNOPIOLJJKC_HDMOMPOJCOK_OFFSET))(this, a1);
		}

		::System::UInt32 JDCNCBFKIBK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOPIOLJJKC_JDCNCBFKIBK_OFFSET))(this);
		}

		::System::Void NPBOCHOHANI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LNOPIOLJJKC_NPBOCHOHANI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LNOPIOLJJKC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LNOPIOLJJKC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LNOPIOLJJKC*))((::PBYTE)hIl2Cpp + LNOPIOLJJKC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOPIOLJJKC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOPIOLJJKC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LNOPIOLJJKC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOPIOLJJKC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LNOPIOLJJKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNOPIOLJJKC*))((::PBYTE)hIl2Cpp + LNOPIOLJJKC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LNOPIOLJJKC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
