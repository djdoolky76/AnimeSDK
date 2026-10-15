#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAFMDBBAJHA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LAFMDBBAJHA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8CC090)
#define LAFMDBBAJHA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8CC360)
#define LAFMDBBAJHA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8CBCE0)
#define LAFMDBBAJHA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8CBCB0)
#define LAFMDBBAJHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8CBCA0)
#define LAFMDBBAJHA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8CBE50)
#define LAFMDBBAJHA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8CBD70)
#define LAFMDBBAJHA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8CBF20)
#define LAFMDBBAJHA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8CBC60)
#define LAFMDBBAJHA_JPBKDLBPKKK_OFFSET UNITYSDK_OFFSET(0x1E8CBD40)
#define LAFMDBBAJHA_KBMMCIAAPMN_OFFSET UNITYSDK_OFFSET(0x1E8CBD50)
#define LAFMDBBAJHA_KEPGFKBDMGN_OFFSET UNITYSDK_OFFSET(0x1E8CBD60)
#define LAFMDBBAJHA_MBAJMGCICMJ_OFFSET UNITYSDK_OFFSET(0x1E8CBD30)
#define LAFMDBBAJHA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8CC1E0)
#define LAFMDBBAJHA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8CC1A0)
#define LAFMDBBAJHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8CBC90)
#define LAFMDBBAJHA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8CBF50)
#define LAFMDBBAJHA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8CBFB0)

inline static constexpr unsigned int LAFMDBBAJHA_TypeDefinitionIndex = 27431;

	class LAFMDBBAJHA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EDPNBNADCHN; // 0x18
		::System::UInt32 MJGHODIGFNF; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LAFMDBBAJHA")->GetStaticField(0x2EFE0);
		}

		// static const ::System::Object KJIEHNPKFEH; // 0x0
		// static const ::System::Object MGMPKBACCJH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFMDBBAJHA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LAFMDBBAJHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAFMDBBAJHA*))((::PBYTE)hIl2Cpp + LAFMDBBAJHA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAFMDBBAJHA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LAFMDBBAJHA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFMDBBAJHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LAFMDBBAJHA* Clone()
		{
			return ((::LAFMDBBAJHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFMDBBAJHA_CLONE_OFFSET))(this);
		}

		::System::UInt32 MBAJMGCICMJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFMDBBAJHA_MBAJMGCICMJ_OFFSET))(this);
		}

		::System::Void JPBKDLBPKKK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LAFMDBBAJHA_JPBKDLBPKKK_OFFSET))(this, a1);
		}

		::System::UInt32 KBMMCIAAPMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFMDBBAJHA_KBMMCIAAPMN_OFFSET))(this);
		}

		::System::Void KEPGFKBDMGN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LAFMDBBAJHA_KEPGFKBDMGN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LAFMDBBAJHA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LAFMDBBAJHA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LAFMDBBAJHA*))((::PBYTE)hIl2Cpp + LAFMDBBAJHA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFMDBBAJHA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFMDBBAJHA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LAFMDBBAJHA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFMDBBAJHA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LAFMDBBAJHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAFMDBBAJHA*))((::PBYTE)hIl2Cpp + LAFMDBBAJHA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LAFMDBBAJHA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
