#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEOMGIBLHJB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IEOMGIBLHJB_AHEMBHKFADF_OFFSET UNITYSDK_OFFSET(0x1E640D60)
#define IEOMGIBLHJB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6410C0)
#define IEOMGIBLHJB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E641390)
#define IEOMGIBLHJB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E640CC0)
#define IEOMGIBLHJB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E640C90)
#define IEOMGIBLHJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E640C80)
#define IEOMGIBLHJB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E640E80)
#define IEOMGIBLHJB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E640D70)
#define IEOMGIBLHJB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E640F50)
#define IEOMGIBLHJB_HBIIAFIBINB_OFFSET UNITYSDK_OFFSET(0x1E640D40)
#define IEOMGIBLHJB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E640C10)
#define IEOMGIBLHJB_KFHEPBKFBMM_OFFSET UNITYSDK_OFFSET(0x1E640D50)
#define IEOMGIBLHJB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E641210)
#define IEOMGIBLHJB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6411D0)
#define IEOMGIBLHJB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E640C70)
#define IEOMGIBLHJB_PMBIFIHANOI_OFFSET UNITYSDK_OFFSET(0x1E640D30)
#define IEOMGIBLHJB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E640F80)
#define IEOMGIBLHJB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E640FE0)

	class IEOMGIBLHJB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GNBAANFEAGG; // 0x18
		::System::UInt32 HAAPPMOCIOE; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IEOMGIBLHJB")->GetStaticField(0x49870);
		}

		// static const ::System::Object MJGCDMOFALP; // 0x0
		// static const ::System::Object GKAGKBGGHBH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOMGIBLHJB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IEOMGIBLHJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEOMGIBLHJB*))((::PBYTE)hIl2Cpp + IEOMGIBLHJB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEOMGIBLHJB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IEOMGIBLHJB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOMGIBLHJB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IEOMGIBLHJB* Clone()
		{
			return ((::IEOMGIBLHJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOMGIBLHJB_CLONE_OFFSET))(this);
		}

		::System::UInt32 PMBIFIHANOI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOMGIBLHJB_PMBIFIHANOI_OFFSET))(this);
		}

		::System::Void HBIIAFIBINB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IEOMGIBLHJB_HBIIAFIBINB_OFFSET))(this, a1);
		}

		::System::UInt32 KFHEPBKFBMM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOMGIBLHJB_KFHEPBKFBMM_OFFSET))(this);
		}

		::System::Void AHEMBHKFADF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IEOMGIBLHJB_AHEMBHKFADF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEOMGIBLHJB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IEOMGIBLHJB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IEOMGIBLHJB*))((::PBYTE)hIl2Cpp + IEOMGIBLHJB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOMGIBLHJB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOMGIBLHJB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IEOMGIBLHJB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOMGIBLHJB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IEOMGIBLHJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEOMGIBLHJB*))((::PBYTE)hIl2Cpp + IEOMGIBLHJB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IEOMGIBLHJB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
