#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNOPIOLJJKC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LNOPIOLJJKC_BJILOJLKPLK_OFFSET UNITYSDK_OFFSET(0x1E989040)
#define LNOPIOLJJKC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E989540)
#define LNOPIOLJJKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9898D0)
#define LNOPIOLJJKC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E988FC0)
#define LNOPIOLJJKC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E988F70)
#define LNOPIOLJJKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E988F60)
#define LNOPIOLJJKC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9891D0)
#define LNOPIOLJJKC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9890C0)
#define LNOPIOLJJKC_GCFAEAPPIBP_OFFSET UNITYSDK_OFFSET(0x1E989020)
#define LNOPIOLJJKC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9892E0)
#define LNOPIOLJJKC_HDMOMPOJCOK_OFFSET UNITYSDK_OFFSET(0x1E989050)
#define LNOPIOLJJKC_JDCNCBFKIBK_OFFSET UNITYSDK_OFFSET(0x1E9890A0)
#define LNOPIOLJJKC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E988F20)
#define LNOPIOLJJKC_KIOKMHAIIKI_OFFSET UNITYSDK_OFFSET(0x1E989030)
#define LNOPIOLJJKC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E989700)
#define LNOPIOLJJKC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9896A0)
#define LNOPIOLJJKC_NPBOCHOHANI_OFFSET UNITYSDK_OFFSET(0x1E9890B0)
#define LNOPIOLJJKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E988F50)
#define LNOPIOLJJKC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E989390)
#define LNOPIOLJJKC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9893F0)

inline static constexpr unsigned int LNOPIOLJJKC_TypeDefinitionIndex = 32044;

	class LNOPIOLJJKC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* ACKBJCBOLAK; // 0x18
		::System::UInt32 KFLKHNMNBLE; // 0x20
		::System::UInt32 BHHCNHCDDMA; // 0x24
		static ::Google::Protobuf::MessageParser_1<::LNOPIOLJJKC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LNOPIOLJJKC*>**)UnitySDK::FromName("", "LNOPIOLJJKC")->GetStaticField(0x40640);
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

		static ::Google::Protobuf::MessageParser_1<::LNOPIOLJJKC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LNOPIOLJJKC*>*(*)())((::PBYTE)hIl2Cpp + LNOPIOLJJKC_JJGHOBBFNJD_OFFSET))();
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
