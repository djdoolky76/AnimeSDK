#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOLMCHMNEIL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DOLMCHMNEIL_BJMCFNDFAKH_OFFSET UNITYSDK_OFFSET(0x1F4E2920)
#define DOLMCHMNEIL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F4E2C60)
#define DOLMCHMNEIL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4E2F30)
#define DOLMCHMNEIL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F4E28B0)
#define DOLMCHMNEIL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F4E2880)
#define DOLMCHMNEIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4E2870)
#define DOLMCHMNEIL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F4E2A20)
#define DOLMCHMNEIL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F4E2940)
#define DOLMCHMNEIL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F4E2AF0)
#define DOLMCHMNEIL_JFIECDHGGEJ_OFFSET UNITYSDK_OFFSET(0x1F4E2930)
#define DOLMCHMNEIL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F4E2830)
#define DOLMCHMNEIL_JNMHHAEPECA_OFFSET UNITYSDK_OFFSET(0x1F4E2910)
#define DOLMCHMNEIL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F4E2DB0)
#define DOLMCHMNEIL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F4E2D70)
#define DOLMCHMNEIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F4E2860)
#define DOLMCHMNEIL_PCKEJOJIOOM_OFFSET UNITYSDK_OFFSET(0x1F4E2900)
#define DOLMCHMNEIL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F4E2B20)
#define DOLMCHMNEIL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F4E2B80)

inline static constexpr unsigned int DOLMCHMNEIL_TypeDefinitionIndex = 33367;

	class DOLMCHMNEIL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KCIKBKIBOPB; // 0x18
		::System::UInt32 HBFDGCIFEEI; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::DOLMCHMNEIL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DOLMCHMNEIL*>**)UnitySDK::FromName("", "DOLMCHMNEIL")->GetStaticField(0x158F0);
		}

		// static const ::System::Object LKCCGCBCJJM; // 0x0
		// static const ::System::Object NLKOAHHMFLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLMCHMNEIL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DOLMCHMNEIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOLMCHMNEIL*))((::PBYTE)hIl2Cpp + DOLMCHMNEIL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOLMCHMNEIL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DOLMCHMNEIL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DOLMCHMNEIL*>*(*)())((::PBYTE)hIl2Cpp + DOLMCHMNEIL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLMCHMNEIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DOLMCHMNEIL* Clone()
		{
			return ((::DOLMCHMNEIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLMCHMNEIL_CLONE_OFFSET))(this);
		}

		::System::UInt32 PCKEJOJIOOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLMCHMNEIL_PCKEJOJIOOM_OFFSET))(this);
		}

		::System::Void JNMHHAEPECA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOLMCHMNEIL_JNMHHAEPECA_OFFSET))(this, a1);
		}

		::System::UInt32 BJMCFNDFAKH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLMCHMNEIL_BJMCFNDFAKH_OFFSET))(this);
		}

		::System::Void JFIECDHGGEJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOLMCHMNEIL_JFIECDHGGEJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DOLMCHMNEIL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DOLMCHMNEIL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DOLMCHMNEIL*))((::PBYTE)hIl2Cpp + DOLMCHMNEIL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLMCHMNEIL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLMCHMNEIL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DOLMCHMNEIL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLMCHMNEIL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DOLMCHMNEIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOLMCHMNEIL*))((::PBYTE)hIl2Cpp + DOLMCHMNEIL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DOLMCHMNEIL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
