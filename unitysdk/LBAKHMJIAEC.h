#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBAKHMJIAEC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LBAKHMJIAEC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8D5C60)
#define LBAKHMJIAEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8D5E80)
#define LBAKHMJIAEC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8D58B0)
#define LBAKHMJIAEC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8D5880)
#define LBAKHMJIAEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D5870)
#define LBAKHMJIAEC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8D59E0)
#define LBAKHMJIAEC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8D5910)
#define LBAKHMJIAEC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8D5B50)
#define LBAKHMJIAEC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8D5830)
#define LBAKHMJIAEC_JPBKDLBPKKK_OFFSET UNITYSDK_OFFSET(0x1E8D5900)
#define LBAKHMJIAEC_MBAJMGCICMJ_OFFSET UNITYSDK_OFFSET(0x1E8D58F0)
#define LBAKHMJIAEC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8D5D20)
#define LBAKHMJIAEC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8D5CF0)
#define LBAKHMJIAEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8D5860)
#define LBAKHMJIAEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8D5B80)
#define LBAKHMJIAEC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8D5BE0)

	class LBAKHMJIAEC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MJGHODIGFNF; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LBAKHMJIAEC")->GetStaticField(0x2FBD0);
		}

		// static const ::System::Object KJIEHNPKFEH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LBAKHMJIAEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBAKHMJIAEC*))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBAKHMJIAEC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LBAKHMJIAEC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LBAKHMJIAEC* Clone()
		{
			return ((::LBAKHMJIAEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_CLONE_OFFSET))(this);
		}

		::System::UInt32 MBAJMGCICMJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_MBAJMGCICMJ_OFFSET))(this);
		}

		::System::Void JPBKDLBPKKK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_JPBKDLBPKKK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LBAKHMJIAEC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LBAKHMJIAEC*))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LBAKHMJIAEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBAKHMJIAEC*))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
