#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFDJAEDKGGB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GFDJAEDKGGB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E465E90)
#define GFDJAEDKGGB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4660B0)
#define GFDJAEDKGGB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E465AE0)
#define GFDJAEDKGGB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E465AB0)
#define GFDJAEDKGGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E465AA0)
#define GFDJAEDKGGB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E465C10)
#define GFDJAEDKGGB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E465B40)
#define GFDJAEDKGGB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E465D80)
#define GFDJAEDKGGB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E465A60)
#define GFDJAEDKGGB_LFCONKMAEKP_OFFSET UNITYSDK_OFFSET(0x1E465B20)
#define GFDJAEDKGGB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E465F50)
#define GFDJAEDKGGB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E465F20)
#define GFDJAEDKGGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E465A90)
#define GFDJAEDKGGB_PJEMNILJFEM_OFFSET UNITYSDK_OFFSET(0x1E465B30)
#define GFDJAEDKGGB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E465DB0)
#define GFDJAEDKGGB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E465E10)

	class GFDJAEDKGGB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IPHMBMOJMPH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GFDJAEDKGGB")->GetStaticField(0x13610);
		}

		// static const ::System::Object OBJFLAFCKGJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDJAEDKGGB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GFDJAEDKGGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFDJAEDKGGB*))((::PBYTE)hIl2Cpp + GFDJAEDKGGB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFDJAEDKGGB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GFDJAEDKGGB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDJAEDKGGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GFDJAEDKGGB* Clone()
		{
			return ((::GFDJAEDKGGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDJAEDKGGB_CLONE_OFFSET))(this);
		}

		::System::UInt32 LFCONKMAEKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDJAEDKGGB_LFCONKMAEKP_OFFSET))(this);
		}

		::System::Void PJEMNILJFEM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFDJAEDKGGB_PJEMNILJFEM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFDJAEDKGGB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GFDJAEDKGGB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFDJAEDKGGB*))((::PBYTE)hIl2Cpp + GFDJAEDKGGB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDJAEDKGGB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDJAEDKGGB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GFDJAEDKGGB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDJAEDKGGB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GFDJAEDKGGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFDJAEDKGGB*))((::PBYTE)hIl2Cpp + GFDJAEDKGGB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GFDJAEDKGGB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
