#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFLOHLLMOJK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JFLOHLLMOJK_BBAMIPGKPPP_OFFSET UNITYSDK_OFFSET(0x1E7306C0)
#define JFLOHLLMOJK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E730A50)
#define JFLOHLLMOJK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E730D20)
#define JFLOHLLMOJK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E730650)
#define JFLOHLLMOJK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E730620)
#define JFLOHLLMOJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E730610)
#define JFLOHLLMOJK_DEIBFLDDPOC_OFFSET UNITYSDK_OFFSET(0x1E7306E0)
#define JFLOHLLMOJK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E730810)
#define JFLOHLLMOJK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E730700)
#define JFLOHLLMOJK_FMMICNKIBPG_OFFSET UNITYSDK_OFFSET(0x1E7306F0)
#define JFLOHLLMOJK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7308E0)
#define JFLOHLLMOJK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7305A0)
#define JFLOHLLMOJK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E730BA0)
#define JFLOHLLMOJK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E730B60)
#define JFLOHLLMOJK_NCKJHNKCBKM_OFFSET UNITYSDK_OFFSET(0x1E7306D0)
#define JFLOHLLMOJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E730600)
#define JFLOHLLMOJK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E730910)
#define JFLOHLLMOJK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E730970)

inline static constexpr unsigned int JFLOHLLMOJK_TypeDefinitionIndex = 28313;

	class JFLOHLLMOJK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HNDDHFKEKHC; // 0x18
		::System::UInt32 EHAMNNJEFNL; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JFLOHLLMOJK")->GetStaticField(0x600C0);
		}

		// static const ::System::Object EBJOALKHAFD; // 0x0
		// static const ::System::Object IHJHFCHBGGB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JFLOHLLMOJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFLOHLLMOJK*))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFLOHLLMOJK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JFLOHLLMOJK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JFLOHLLMOJK* Clone()
		{
			return ((::JFLOHLLMOJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_CLONE_OFFSET))(this);
		}

		::System::UInt32 BBAMIPGKPPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_BBAMIPGKPPP_OFFSET))(this);
		}

		::System::Void NCKJHNKCBKM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_NCKJHNKCBKM_OFFSET))(this, a1);
		}

		::System::UInt32 DEIBFLDDPOC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_DEIBFLDDPOC_OFFSET))(this);
		}

		::System::Void FMMICNKIBPG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_FMMICNKIBPG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JFLOHLLMOJK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JFLOHLLMOJK*))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JFLOHLLMOJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFLOHLLMOJK*))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
