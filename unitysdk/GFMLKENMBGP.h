#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFMLKENMBGP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GFMLKENMBGP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4729F0)
#define GFMLKENMBGP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E472C10)
#define GFMLKENMBGP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E472640)
#define GFMLKENMBGP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E472610)
#define GFMLKENMBGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E472600)
#define GFMLKENMBGP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E472770)
#define GFMLKENMBGP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4726A0)
#define GFMLKENMBGP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4728E0)
#define GFMLKENMBGP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4725C0)
#define GFMLKENMBGP_JNMHHAEPECA_OFFSET UNITYSDK_OFFSET(0x1E472690)
#define GFMLKENMBGP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E472AB0)
#define GFMLKENMBGP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E472A80)
#define GFMLKENMBGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4725F0)
#define GFMLKENMBGP_PCKEJOJIOOM_OFFSET UNITYSDK_OFFSET(0x1E472680)
#define GFMLKENMBGP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E472910)
#define GFMLKENMBGP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E472970)

inline static constexpr unsigned int GFMLKENMBGP_TypeDefinitionIndex = 30388;

	class GFMLKENMBGP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KCIKBKIBOPB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GFMLKENMBGP")->GetStaticField(0x14C60);
		}

		// static const ::System::Object LKCCGCBCJJM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMLKENMBGP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GFMLKENMBGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFMLKENMBGP*))((::PBYTE)hIl2Cpp + GFMLKENMBGP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFMLKENMBGP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GFMLKENMBGP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMLKENMBGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GFMLKENMBGP* Clone()
		{
			return ((::GFMLKENMBGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMLKENMBGP_CLONE_OFFSET))(this);
		}

		::System::UInt32 PCKEJOJIOOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMLKENMBGP_PCKEJOJIOOM_OFFSET))(this);
		}

		::System::Void JNMHHAEPECA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFMLKENMBGP_JNMHHAEPECA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFMLKENMBGP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GFMLKENMBGP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFMLKENMBGP*))((::PBYTE)hIl2Cpp + GFMLKENMBGP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMLKENMBGP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMLKENMBGP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GFMLKENMBGP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMLKENMBGP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GFMLKENMBGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFMLKENMBGP*))((::PBYTE)hIl2Cpp + GFMLKENMBGP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GFMLKENMBGP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
