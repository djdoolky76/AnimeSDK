#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKJCADFCHAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BKJCADFCHAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF59BD0)
#define BKJCADFCHAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF59DF0)
#define BKJCADFCHAB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF59820)
#define BKJCADFCHAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF597F0)
#define BKJCADFCHAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF597E0)
#define BKJCADFCHAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF59950)
#define BKJCADFCHAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF59880)
#define BKJCADFCHAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF59AC0)
#define BKJCADFCHAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF597A0)
#define BKJCADFCHAB_JPBKDLBPKKK_OFFSET UNITYSDK_OFFSET(0x1DF59870)
#define BKJCADFCHAB_MBAJMGCICMJ_OFFSET UNITYSDK_OFFSET(0x1DF59860)
#define BKJCADFCHAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF59C90)
#define BKJCADFCHAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF59C60)
#define BKJCADFCHAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF597D0)
#define BKJCADFCHAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF59AF0)
#define BKJCADFCHAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF59B50)

	class BKJCADFCHAB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MJGHODIGFNF; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BKJCADFCHAB")->GetStaticField(0x4BC80);
		}

		// static const ::System::Object KJIEHNPKFEH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJCADFCHAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BKJCADFCHAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKJCADFCHAB*))((::PBYTE)hIl2Cpp + BKJCADFCHAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKJCADFCHAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BKJCADFCHAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJCADFCHAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BKJCADFCHAB* Clone()
		{
			return ((::BKJCADFCHAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJCADFCHAB_CLONE_OFFSET))(this);
		}

		::System::UInt32 MBAJMGCICMJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJCADFCHAB_MBAJMGCICMJ_OFFSET))(this);
		}

		::System::Void JPBKDLBPKKK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKJCADFCHAB_JPBKDLBPKKK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BKJCADFCHAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BKJCADFCHAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BKJCADFCHAB*))((::PBYTE)hIl2Cpp + BKJCADFCHAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJCADFCHAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJCADFCHAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BKJCADFCHAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJCADFCHAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BKJCADFCHAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKJCADFCHAB*))((::PBYTE)hIl2Cpp + BKJCADFCHAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BKJCADFCHAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
