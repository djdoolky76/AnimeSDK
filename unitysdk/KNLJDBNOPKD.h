#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCJCLFOLBPP;
class KNLJDBNOPKD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KNLJDBNOPKD_BPAIPMIHAJE_OFFSET UNITYSDK_OFFSET(0x1E8A63C0)
#define KNLJDBNOPKD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8A6950)
#define KNLJDBNOPKD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A6BA0)
#define KNLJDBNOPKD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8A6330)
#define KNLJDBNOPKD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8A62C0)
#define KNLJDBNOPKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A62B0)
#define KNLJDBNOPKD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8A6540)
#define KNLJDBNOPKD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8A63D0)
#define KNLJDBNOPKD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8A6810)
#define KNLJDBNOPKD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8A6270)
#define KNLJDBNOPKD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8A6A20)
#define KNLJDBNOPKD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8A69B0)
#define KNLJDBNOPKD_NGCNAKCCCIG_OFFSET UNITYSDK_OFFSET(0x1E8A63B0)
#define KNLJDBNOPKD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8A62A0)
#define KNLJDBNOPKD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8A6860)
#define KNLJDBNOPKD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8A68C0)

	class KNLJDBNOPKD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GCJCLFOLBPP* GAMAPPEPKJO; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KNLJDBNOPKD")->GetStaticField(0x24820);
		}

		// static const ::System::Object JEILFPKNEPM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLJDBNOPKD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KNLJDBNOPKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNLJDBNOPKD*))((::PBYTE)hIl2Cpp + KNLJDBNOPKD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNLJDBNOPKD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KNLJDBNOPKD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLJDBNOPKD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KNLJDBNOPKD* Clone()
		{
			return ((::KNLJDBNOPKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLJDBNOPKD_CLONE_OFFSET))(this);
		}

		::GCJCLFOLBPP* NGCNAKCCCIG()
		{
			return ((::GCJCLFOLBPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLJDBNOPKD_NGCNAKCCCIG_OFFSET))(this);
		}

		::System::Void BPAIPMIHAJE(::GCJCLFOLBPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCJCLFOLBPP*))((::PBYTE)hIl2Cpp + KNLJDBNOPKD_BPAIPMIHAJE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KNLJDBNOPKD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KNLJDBNOPKD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KNLJDBNOPKD*))((::PBYTE)hIl2Cpp + KNLJDBNOPKD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLJDBNOPKD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLJDBNOPKD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KNLJDBNOPKD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLJDBNOPKD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KNLJDBNOPKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNLJDBNOPKD*))((::PBYTE)hIl2Cpp + KNLJDBNOPKD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KNLJDBNOPKD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
