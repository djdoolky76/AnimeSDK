#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDJLHJDPEEK;
class NKOBPBBONDJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NKOBPBBONDJ_BGNOACGNELJ_OFFSET UNITYSDK_OFFSET(0x1EB30360)
#define NKOBPBBONDJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB30930)
#define NKOBPBBONDJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB30C80)
#define NKOBPBBONDJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB302B0)
#define NKOBPBBONDJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB30240)
#define NKOBPBBONDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB30230)
#define NKOBPBBONDJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB30500)
#define NKOBPBBONDJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB30370)
#define NKOBPBBONDJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB30680)
#define NKOBPBBONDJ_JEDBKMHBAOE_OFFSET UNITYSDK_OFFSET(0x1EB30350)
#define NKOBPBBONDJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB301F0)
#define NKOBPBBONDJ_LJNIELKFMBK_OFFSET UNITYSDK_OFFSET(0x1EB30340)
#define NKOBPBBONDJ_LMHNPLFICON_OFFSET UNITYSDK_OFFSET(0x1EB30330)
#define NKOBPBBONDJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB30AA0)
#define NKOBPBBONDJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB30990)
#define NKOBPBBONDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB30220)
#define NKOBPBBONDJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB307C0)
#define NKOBPBBONDJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB30820)

inline static constexpr unsigned int NKOBPBBONDJ_TypeDefinitionIndex = 33038;

	class NKOBPBBONDJ : public ::System::Object
	{
	public:
		::BDJLHJDPEEK* KBOHOGFFODA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean OPPDOCEGOOB; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NKOBPBBONDJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NKOBPBBONDJ*>**)UnitySDK::FromName("", "NKOBPBBONDJ")->GetStaticField(0x69820);
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

		static ::Google::Protobuf::MessageParser_1<::NKOBPBBONDJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NKOBPBBONDJ*>*(*)())((::PBYTE)hIl2Cpp + NKOBPBBONDJ_JJGHOBBFNJD_OFFSET))();
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
