#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHPEMLMHIHE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LHPEMLMHIHE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E969670)
#define LHPEMLMHIHE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E969940)
#define LHPEMLMHIHE_CJLMJHCHKHN_OFFSET UNITYSDK_OFFSET(0x1E969340)
#define LHPEMLMHIHE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9692C0)
#define LHPEMLMHIHE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E969290)
#define LHPEMLMHIHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E969280)
#define LHPEMLMHIHE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E969430)
#define LHPEMLMHIHE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E969350)
#define LHPEMLMHIHE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E969500)
#define LHPEMLMHIHE_IAJKFOOGAIG_OFFSET UNITYSDK_OFFSET(0x1E969320)
#define LHPEMLMHIHE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E969240)
#define LHPEMLMHIHE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9697C0)
#define LHPEMLMHIHE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E969780)
#define LHPEMLMHIHE_MPAPGAGAOGK_OFFSET UNITYSDK_OFFSET(0x1E969310)
#define LHPEMLMHIHE_PBIJKOCGLEO_OFFSET UNITYSDK_OFFSET(0x1E969330)
#define LHPEMLMHIHE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E969270)
#define LHPEMLMHIHE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E969530)
#define LHPEMLMHIHE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E969590)

	class LHPEMLMHIHE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CJELDLFFFOM; // 0x18
		::System::UInt32 CACDFJOCAHL; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LHPEMLMHIHE")->GetStaticField(0x44630);
		}

		// static const ::System::Object NEJHACHDJLN; // 0x0
		// static const ::System::Object JLMDACLBIAF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPEMLMHIHE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LHPEMLMHIHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHPEMLMHIHE*))((::PBYTE)hIl2Cpp + LHPEMLMHIHE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHPEMLMHIHE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LHPEMLMHIHE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPEMLMHIHE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LHPEMLMHIHE* Clone()
		{
			return ((::LHPEMLMHIHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPEMLMHIHE_CLONE_OFFSET))(this);
		}

		::System::UInt32 MPAPGAGAOGK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPEMLMHIHE_MPAPGAGAOGK_OFFSET))(this);
		}

		::System::Void IAJKFOOGAIG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LHPEMLMHIHE_IAJKFOOGAIG_OFFSET))(this, a1);
		}

		::System::UInt32 PBIJKOCGLEO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPEMLMHIHE_PBIJKOCGLEO_OFFSET))(this);
		}

		::System::Void CJLMJHCHKHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LHPEMLMHIHE_CJLMJHCHKHN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LHPEMLMHIHE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LHPEMLMHIHE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LHPEMLMHIHE*))((::PBYTE)hIl2Cpp + LHPEMLMHIHE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPEMLMHIHE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPEMLMHIHE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LHPEMLMHIHE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPEMLMHIHE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LHPEMLMHIHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHPEMLMHIHE*))((::PBYTE)hIl2Cpp + LHPEMLMHIHE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LHPEMLMHIHE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
