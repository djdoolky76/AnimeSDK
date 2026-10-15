#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJLFDFFBOHM.h"
#include "unitysdk/System/Object.h"
class IMPIBDBDHCA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IMPIBDBDHCA_BHCGNNPIAJG_OFFSET UNITYSDK_OFFSET(0x1E6BB3F0)
#define IMPIBDBDHCA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6BB780)
#define IMPIBDBDHCA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6BB9E0)
#define IMPIBDBDHCA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6BB3B0)
#define IMPIBDBDHCA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6BB380)
#define IMPIBDBDHCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6BB370)
#define IMPIBDBDHCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6BB4E0)
#define IMPIBDBDHCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6BB410)
#define IMPIBDBDHCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6BB650)
#define IMPIBDBDHCA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6BB330)
#define IMPIBDBDHCA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6BB880)
#define IMPIBDBDHCA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6BB850)
#define IMPIBDBDHCA_OLFFAPLBHMG_OFFSET UNITYSDK_OFFSET(0x1E6BB400)
#define IMPIBDBDHCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6BB360)
#define IMPIBDBDHCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6BB680)
#define IMPIBDBDHCA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6BB6E0)

	class IMPIBDBDHCA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CJLFDFFBOHM LLNJDFDFMDM; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IMPIBDBDHCA")->GetStaticField(0x57B90);
		}

		// static const ::System::Object OFAPNMPMGIA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPIBDBDHCA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IMPIBDBDHCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMPIBDBDHCA*))((::PBYTE)hIl2Cpp + IMPIBDBDHCA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMPIBDBDHCA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IMPIBDBDHCA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPIBDBDHCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IMPIBDBDHCA* Clone()
		{
			return ((::IMPIBDBDHCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPIBDBDHCA_CLONE_OFFSET))(this);
		}

		::CJLFDFFBOHM BHCGNNPIAJG()
		{
			return ((::CJLFDFFBOHM(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPIBDBDHCA_BHCGNNPIAJG_OFFSET))(this);
		}

		::System::Void OLFFAPLBHMG(::CJLFDFFBOHM a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJLFDFFBOHM))((::PBYTE)hIl2Cpp + IMPIBDBDHCA_OLFFAPLBHMG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IMPIBDBDHCA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IMPIBDBDHCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IMPIBDBDHCA*))((::PBYTE)hIl2Cpp + IMPIBDBDHCA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPIBDBDHCA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPIBDBDHCA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IMPIBDBDHCA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPIBDBDHCA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IMPIBDBDHCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMPIBDBDHCA*))((::PBYTE)hIl2Cpp + IMPIBDBDHCA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IMPIBDBDHCA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
