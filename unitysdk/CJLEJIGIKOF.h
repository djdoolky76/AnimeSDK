#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJLEJIGIKOF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CJLEJIGIKOF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0E3A30)
#define CJLEJIGIKOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E3D00)
#define CJLEJIGIKOF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0E3680)
#define CJLEJIGIKOF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0E3650)
#define CJLEJIGIKOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E3640)
#define CJLEJIGIKOF_EIGGOMFFLGG_OFFSET UNITYSDK_OFFSET(0x1E0E3700)
#define CJLEJIGIKOF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0E37F0)
#define CJLEJIGIKOF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0E3710)
#define CJLEJIGIKOF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E0E36E0)
#define CJLEJIGIKOF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0E38C0)
#define CJLEJIGIKOF_GJFLEDCJGPG_OFFSET UNITYSDK_OFFSET(0x1E0E36F0)
#define CJLEJIGIKOF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0E3600)
#define CJLEJIGIKOF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0E3B80)
#define CJLEJIGIKOF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0E3B40)
#define CJLEJIGIKOF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E0E36D0)
#define CJLEJIGIKOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0E3630)
#define CJLEJIGIKOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0E38F0)
#define CJLEJIGIKOF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0E3950)

	class CJLEJIGIKOF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JEPIGMEMEKE; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CJLEJIGIKOF")->GetStaticField(0x1A480);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object GEPLKKBDGGD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLEJIGIKOF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CJLEJIGIKOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJLEJIGIKOF*))((::PBYTE)hIl2Cpp + CJLEJIGIKOF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJLEJIGIKOF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CJLEJIGIKOF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLEJIGIKOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CJLEJIGIKOF* Clone()
		{
			return ((::CJLEJIGIKOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLEJIGIKOF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLEJIGIKOF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJLEJIGIKOF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 GJFLEDCJGPG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLEJIGIKOF_GJFLEDCJGPG_OFFSET))(this);
		}

		::System::Void EIGGOMFFLGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJLEJIGIKOF_EIGGOMFFLGG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJLEJIGIKOF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CJLEJIGIKOF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJLEJIGIKOF*))((::PBYTE)hIl2Cpp + CJLEJIGIKOF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLEJIGIKOF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLEJIGIKOF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CJLEJIGIKOF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLEJIGIKOF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CJLEJIGIKOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJLEJIGIKOF*))((::PBYTE)hIl2Cpp + CJLEJIGIKOF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CJLEJIGIKOF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
