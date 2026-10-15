#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBGGLDILCLK;
class MKDPFLPICJB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JBGGLDILCLK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6F5000)
#define JBGGLDILCLK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6F52D0)
#define JBGGLDILCLK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6F4A60)
#define JBGGLDILCLK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6F49F0)
#define JBGGLDILCLK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6F49E0)
#define JBGGLDILCLK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6F4CA0)
#define JBGGLDILCLK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6F4B20)
#define JBGGLDILCLK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E6F4B10)
#define JBGGLDILCLK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6F4E20)
#define JBGGLDILCLK_HPOGICMDJAM_OFFSET UNITYSDK_OFFSET(0x1E6F4AF0)
#define JBGGLDILCLK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6F49A0)
#define JBGGLDILCLK_LEAGPCLJHPB_OFFSET UNITYSDK_OFFSET(0x1E6F4AE0)
#define JBGGLDILCLK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6F5140)
#define JBGGLDILCLK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6F50D0)
#define JBGGLDILCLK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E6F4B00)
#define JBGGLDILCLK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6F49D0)
#define JBGGLDILCLK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6F4EC0)
#define JBGGLDILCLK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6F4F20)

	class JBGGLDILCLK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::MKDPFLPICJB* KONAGLKOCML; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JBGGLDILCLK")->GetStaticField(0x5C670);
		}

		// static const ::System::Object AKILEGOIBPO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGGLDILCLK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JBGGLDILCLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBGGLDILCLK*))((::PBYTE)hIl2Cpp + JBGGLDILCLK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBGGLDILCLK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JBGGLDILCLK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGGLDILCLK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JBGGLDILCLK* Clone()
		{
			return ((::JBGGLDILCLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGGLDILCLK_CLONE_OFFSET))(this);
		}

		::MKDPFLPICJB* LEAGPCLJHPB()
		{
			return ((::MKDPFLPICJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGGLDILCLK_LEAGPCLJHPB_OFFSET))(this);
		}

		::System::Void HPOGICMDJAM(::MKDPFLPICJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKDPFLPICJB*))((::PBYTE)hIl2Cpp + JBGGLDILCLK_HPOGICMDJAM_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGGLDILCLK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JBGGLDILCLK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JBGGLDILCLK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JBGGLDILCLK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBGGLDILCLK*))((::PBYTE)hIl2Cpp + JBGGLDILCLK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGGLDILCLK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGGLDILCLK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JBGGLDILCLK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGGLDILCLK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JBGGLDILCLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBGGLDILCLK*))((::PBYTE)hIl2Cpp + JBGGLDILCLK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JBGGLDILCLK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
