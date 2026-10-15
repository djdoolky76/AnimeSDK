#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFPHKOAFPCJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PFPHKOAFPCJ_BAIKLBAKKAA_OFFSET UNITYSDK_OFFSET(0x1DF2A710)
#define PFPHKOAFPCJ_BHAIJEPEKCC_OFFSET UNITYSDK_OFFSET(0x1DF2A700)
#define PFPHKOAFPCJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF2AAA0)
#define PFPHKOAFPCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF2ACC0)
#define PFPHKOAFPCJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF2A690)
#define PFPHKOAFPCJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF2A660)
#define PFPHKOAFPCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2A650)
#define PFPHKOAFPCJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF2A820)
#define PFPHKOAFPCJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF2A720)
#define PFPHKOAFPCJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF2A990)
#define PFPHKOAFPCJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF2A5E0)
#define PFPHKOAFPCJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF2AB60)
#define PFPHKOAFPCJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF2AB30)
#define PFPHKOAFPCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF2A640)
#define PFPHKOAFPCJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF2A9C0)
#define PFPHKOAFPCJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF2AA20)

	class PFPHKOAFPCJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FHFCAEIANDB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PFPHKOAFPCJ")->GetStaticField(0x3C440);
		}

		// static const ::System::Object PDANNONFHNI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPHKOAFPCJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PFPHKOAFPCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFPHKOAFPCJ*))((::PBYTE)hIl2Cpp + PFPHKOAFPCJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFPHKOAFPCJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PFPHKOAFPCJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPHKOAFPCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PFPHKOAFPCJ* Clone()
		{
			return ((::PFPHKOAFPCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPHKOAFPCJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 BHAIJEPEKCC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPHKOAFPCJ_BHAIJEPEKCC_OFFSET))(this);
		}

		::System::Void BAIKLBAKKAA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PFPHKOAFPCJ_BAIKLBAKKAA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PFPHKOAFPCJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PFPHKOAFPCJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PFPHKOAFPCJ*))((::PBYTE)hIl2Cpp + PFPHKOAFPCJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPHKOAFPCJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPHKOAFPCJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PFPHKOAFPCJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPHKOAFPCJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PFPHKOAFPCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFPHKOAFPCJ*))((::PBYTE)hIl2Cpp + PFPHKOAFPCJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PFPHKOAFPCJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
