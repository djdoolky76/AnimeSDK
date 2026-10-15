#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDJLHJDPEEK;
class GNLBCCHFILK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GNLBCCHFILK_BGNOACGNELJ_OFFSET UNITYSDK_OFFSET(0x1E4E44A0)
#define GNLBCCHFILK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4E4A90)
#define GNLBCCHFILK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4E4DE0)
#define GNLBCCHFILK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4E4410)
#define GNLBCCHFILK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4E4390)
#define GNLBCCHFILK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E4380)
#define GNLBCCHFILK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4E4660)
#define GNLBCCHFILK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4E44D0)
#define GNLBCCHFILK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4E47E0)
#define GNLBCCHFILK_JEDBKMHBAOE_OFFSET UNITYSDK_OFFSET(0x1E4E4490)
#define GNLBCCHFILK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4E4340)
#define GNLBCCHFILK_LJNIELKFMBK_OFFSET UNITYSDK_OFFSET(0x1E4E44C0)
#define GNLBCCHFILK_LMHNPLFICON_OFFSET UNITYSDK_OFFSET(0x1E4E44B0)
#define GNLBCCHFILK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4E4C00)
#define GNLBCCHFILK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4E4AF0)
#define GNLBCCHFILK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4E4370)
#define GNLBCCHFILK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4E4920)
#define GNLBCCHFILK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4E4980)

	class GNLBCCHFILK : public ::System::Object
	{
	public:
		::BDJLHJDPEEK* KBOHOGFFODA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean OPPDOCEGOOB; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GNLBCCHFILK")->GetStaticField(0x23A10);
		}

		// static const ::System::Object ICAIHHPIDOP; // 0x0
		// static const ::System::Object FJOKEIJPDEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLBCCHFILK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GNLBCCHFILK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNLBCCHFILK*))((::PBYTE)hIl2Cpp + GNLBCCHFILK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNLBCCHFILK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GNLBCCHFILK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLBCCHFILK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GNLBCCHFILK* Clone()
		{
			return ((::GNLBCCHFILK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLBCCHFILK_CLONE_OFFSET))(this);
		}

		::BDJLHJDPEEK* JEDBKMHBAOE()
		{
			return ((::BDJLHJDPEEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLBCCHFILK_JEDBKMHBAOE_OFFSET))(this);
		}

		::System::Void BGNOACGNELJ(::BDJLHJDPEEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDJLHJDPEEK*))((::PBYTE)hIl2Cpp + GNLBCCHFILK_BGNOACGNELJ_OFFSET))(this, a1);
		}

		::System::Boolean LMHNPLFICON()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLBCCHFILK_LMHNPLFICON_OFFSET))(this);
		}

		::System::Void LJNIELKFMBK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GNLBCCHFILK_LJNIELKFMBK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNLBCCHFILK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GNLBCCHFILK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GNLBCCHFILK*))((::PBYTE)hIl2Cpp + GNLBCCHFILK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLBCCHFILK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLBCCHFILK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GNLBCCHFILK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLBCCHFILK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GNLBCCHFILK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNLBCCHFILK*))((::PBYTE)hIl2Cpp + GNLBCCHFILK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GNLBCCHFILK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
