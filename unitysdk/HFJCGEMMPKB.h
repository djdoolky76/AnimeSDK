#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFJCGEMMPKB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HFJCGEMMPKB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E56CBB0)
#define HFJCGEMMPKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E56CDD0)
#define HFJCGEMMPKB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E56C800)
#define HFJCGEMMPKB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E56C7D0)
#define HFJCGEMMPKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E56C7C0)
#define HFJCGEMMPKB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E56C930)
#define HFJCGEMMPKB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E56C860)
#define HFJCGEMMPKB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E56C850)
#define HFJCGEMMPKB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E56CAA0)
#define HFJCGEMMPKB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E56C780)
#define HFJCGEMMPKB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E56CC70)
#define HFJCGEMMPKB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E56CC40)
#define HFJCGEMMPKB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E56C840)
#define HFJCGEMMPKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E56C7B0)
#define HFJCGEMMPKB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E56CAD0)
#define HFJCGEMMPKB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E56CB30)

	class HFJCGEMMPKB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HFJCGEMMPKB")->GetStaticField(0x357E0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HFJCGEMMPKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFJCGEMMPKB*))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFJCGEMMPKB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HFJCGEMMPKB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HFJCGEMMPKB* Clone()
		{
			return ((::HFJCGEMMPKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HFJCGEMMPKB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HFJCGEMMPKB*))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HFJCGEMMPKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFJCGEMMPKB*))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
