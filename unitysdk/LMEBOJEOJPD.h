#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMEBOJEOJPD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LMEBOJEOJPD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9A3990)
#define LMEBOJEOJPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9A3A30)
#define LMEBOJEOJPD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9A3680)
#define LMEBOJEOJPD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9A3650)
#define LMEBOJEOJPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A3640)
#define LMEBOJEOJPD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9A3790)
#define LMEBOJEOJPD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9A36C0)
#define LMEBOJEOJPD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9A38F0)
#define LMEBOJEOJPD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9A3600)
#define LMEBOJEOJPD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9A39E0)
#define LMEBOJEOJPD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9A39B0)
#define LMEBOJEOJPD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9A3630)
#define LMEBOJEOJPD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9A3920)
#define LMEBOJEOJPD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9A3980)

	class LMEBOJEOJPD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LMEBOJEOJPD")->GetStaticField(0x4CC90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEBOJEOJPD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LMEBOJEOJPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMEBOJEOJPD*))((::PBYTE)hIl2Cpp + LMEBOJEOJPD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMEBOJEOJPD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LMEBOJEOJPD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEBOJEOJPD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LMEBOJEOJPD* Clone()
		{
			return ((::LMEBOJEOJPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEBOJEOJPD_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LMEBOJEOJPD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LMEBOJEOJPD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LMEBOJEOJPD*))((::PBYTE)hIl2Cpp + LMEBOJEOJPD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEBOJEOJPD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEBOJEOJPD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LMEBOJEOJPD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEBOJEOJPD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LMEBOJEOJPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMEBOJEOJPD*))((::PBYTE)hIl2Cpp + LMEBOJEOJPD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LMEBOJEOJPD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
