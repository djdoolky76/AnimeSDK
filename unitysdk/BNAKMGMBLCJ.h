#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNAKMGMBLCJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BNAKMGMBLCJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E030980)
#define BNAKMGMBLCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E030A20)
#define BNAKMGMBLCJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E030670)
#define BNAKMGMBLCJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E030640)
#define BNAKMGMBLCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E030630)
#define BNAKMGMBLCJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E030780)
#define BNAKMGMBLCJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0306B0)
#define BNAKMGMBLCJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0308E0)
#define BNAKMGMBLCJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0305F0)
#define BNAKMGMBLCJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0309D0)
#define BNAKMGMBLCJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0309A0)
#define BNAKMGMBLCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E030620)
#define BNAKMGMBLCJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E030910)
#define BNAKMGMBLCJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E030970)

	class BNAKMGMBLCJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BNAKMGMBLCJ")->GetStaticField(0x51DF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAKMGMBLCJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BNAKMGMBLCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNAKMGMBLCJ*))((::PBYTE)hIl2Cpp + BNAKMGMBLCJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNAKMGMBLCJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BNAKMGMBLCJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAKMGMBLCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BNAKMGMBLCJ* Clone()
		{
			return ((::BNAKMGMBLCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAKMGMBLCJ_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BNAKMGMBLCJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BNAKMGMBLCJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BNAKMGMBLCJ*))((::PBYTE)hIl2Cpp + BNAKMGMBLCJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAKMGMBLCJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAKMGMBLCJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BNAKMGMBLCJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAKMGMBLCJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BNAKMGMBLCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNAKMGMBLCJ*))((::PBYTE)hIl2Cpp + BNAKMGMBLCJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BNAKMGMBLCJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
