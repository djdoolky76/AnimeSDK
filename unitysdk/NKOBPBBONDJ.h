#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDJLHJDPEEK;
class NKOBPBBONDJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NKOBPBBONDJ_BGNOACGNELJ_OFFSET UNITYSDK_OFFSET(0x1EB5D9A0)
#define NKOBPBBONDJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB5DF70)
#define NKOBPBBONDJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB5E2C0)
#define NKOBPBBONDJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB5D8F0)
#define NKOBPBBONDJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB5D880)
#define NKOBPBBONDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB5D870)
#define NKOBPBBONDJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB5DB40)
#define NKOBPBBONDJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB5D9B0)
#define NKOBPBBONDJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB5DCC0)
#define NKOBPBBONDJ_JEDBKMHBAOE_OFFSET UNITYSDK_OFFSET(0x1EB5D990)
#define NKOBPBBONDJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB5D830)
#define NKOBPBBONDJ_LJNIELKFMBK_OFFSET UNITYSDK_OFFSET(0x1EB5D980)
#define NKOBPBBONDJ_LMHNPLFICON_OFFSET UNITYSDK_OFFSET(0x1EB5D970)
#define NKOBPBBONDJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB5E0E0)
#define NKOBPBBONDJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB5DFD0)
#define NKOBPBBONDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB5D860)
#define NKOBPBBONDJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB5DE00)
#define NKOBPBBONDJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB5DE60)

inline static constexpr unsigned int NKOBPBBONDJ_TypeDefinitionIndex = 33038;

	class NKOBPBBONDJ : public ::System::Object
	{
	public:
		::BDJLHJDPEEK* KBOHOGFFODA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean OPPDOCEGOOB; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NKOBPBBONDJ")->GetStaticField(0x665A0);
		}

		// static const ::System::Object FJOKEIJPDEN; // 0x0
		// static const ::System::Object ICAIHHPIDOP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBPBBONDJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NKOBPBBONDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKOBPBBONDJ*))((::PBYTE)hIl2Cpp + NKOBPBBONDJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKOBPBBONDJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NKOBPBBONDJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBPBBONDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NKOBPBBONDJ* Clone()
		{
			return ((::NKOBPBBONDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBPBBONDJ_CLONE_OFFSET))(this);
		}

		::System::Boolean LMHNPLFICON()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBPBBONDJ_LMHNPLFICON_OFFSET))(this);
		}

		::System::Void LJNIELKFMBK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKOBPBBONDJ_LJNIELKFMBK_OFFSET))(this, a1);
		}

		::BDJLHJDPEEK* JEDBKMHBAOE()
		{
			return ((::BDJLHJDPEEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBPBBONDJ_JEDBKMHBAOE_OFFSET))(this);
		}

		::System::Void BGNOACGNELJ(::BDJLHJDPEEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDJLHJDPEEK*))((::PBYTE)hIl2Cpp + NKOBPBBONDJ_BGNOACGNELJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NKOBPBBONDJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NKOBPBBONDJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKOBPBBONDJ*))((::PBYTE)hIl2Cpp + NKOBPBBONDJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBPBBONDJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBPBBONDJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NKOBPBBONDJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBPBBONDJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NKOBPBBONDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKOBPBBONDJ*))((::PBYTE)hIl2Cpp + NKOBPBBONDJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NKOBPBBONDJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
