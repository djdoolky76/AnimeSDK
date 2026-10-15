#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEJLPCAIODP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AEJLPCAIODP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDED360)
#define AEJLPCAIODP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDED580)
#define AEJLPCAIODP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDECF50)
#define AEJLPCAIODP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDECF20)
#define AEJLPCAIODP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDECF10)
#define AEJLPCAIODP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDED0E0)
#define AEJLPCAIODP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDECFE0)
#define AEJLPCAIODP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDED250)
#define AEJLPCAIODP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDECEA0)
#define AEJLPCAIODP_JOFMLPJKFBO_OFFSET UNITYSDK_OFFSET(0x1DDECFD0)
#define AEJLPCAIODP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDED420)
#define AEJLPCAIODP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDED3F0)
#define AEJLPCAIODP_NJDBBHCEOLG_OFFSET UNITYSDK_OFFSET(0x1DDECFC0)
#define AEJLPCAIODP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDECF00)
#define AEJLPCAIODP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDED280)
#define AEJLPCAIODP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDED2E0)

	class AEJLPCAIODP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ACMGLOOCIND; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AEJLPCAIODP")->GetStaticField(0x2C9D0);
		}

		// static const ::System::Object DPMPBNHNKCG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLPCAIODP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AEJLPCAIODP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEJLPCAIODP*))((::PBYTE)hIl2Cpp + AEJLPCAIODP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEJLPCAIODP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AEJLPCAIODP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLPCAIODP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AEJLPCAIODP* Clone()
		{
			return ((::AEJLPCAIODP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLPCAIODP_CLONE_OFFSET))(this);
		}

		::System::UInt32 NJDBBHCEOLG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLPCAIODP_NJDBBHCEOLG_OFFSET))(this);
		}

		::System::Void JOFMLPJKFBO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AEJLPCAIODP_JOFMLPJKFBO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AEJLPCAIODP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AEJLPCAIODP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AEJLPCAIODP*))((::PBYTE)hIl2Cpp + AEJLPCAIODP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLPCAIODP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLPCAIODP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AEJLPCAIODP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLPCAIODP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AEJLPCAIODP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEJLPCAIODP*))((::PBYTE)hIl2Cpp + AEJLPCAIODP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AEJLPCAIODP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
