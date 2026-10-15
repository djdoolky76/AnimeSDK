#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHKIADBINML;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NHKIADBINML_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB1F710)
#define NHKIADBINML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB1F9E0)
#define NHKIADBINML_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB1F360)
#define NHKIADBINML_COEONDABKIH_OFFSET UNITYSDK_OFFSET(0x1EB1F3D0)
#define NHKIADBINML_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB1F330)
#define NHKIADBINML_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB1F320)
#define NHKIADBINML_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB1F4D0)
#define NHKIADBINML_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB1F3F0)
#define NHKIADBINML_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB1F3C0)
#define NHKIADBINML_FOCIPHMHHEB_OFFSET UNITYSDK_OFFSET(0x1EB1F3E0)
#define NHKIADBINML_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB1F5A0)
#define NHKIADBINML_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB1F2E0)
#define NHKIADBINML_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB1F860)
#define NHKIADBINML_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB1F820)
#define NHKIADBINML_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB1F3B0)
#define NHKIADBINML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB1F310)
#define NHKIADBINML_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB1F5D0)
#define NHKIADBINML_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB1F630)

	class NHKIADBINML : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 OCCJEGBDDNG; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NHKIADBINML")->GetStaticField(0x60600);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LCEHCAOINBN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKIADBINML_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NHKIADBINML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHKIADBINML*))((::PBYTE)hIl2Cpp + NHKIADBINML_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHKIADBINML_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NHKIADBINML_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKIADBINML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NHKIADBINML* Clone()
		{
			return ((::NHKIADBINML*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKIADBINML_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKIADBINML_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NHKIADBINML_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 COEONDABKIH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKIADBINML_COEONDABKIH_OFFSET))(this);
		}

		::System::Void FOCIPHMHHEB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NHKIADBINML_FOCIPHMHHEB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NHKIADBINML_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NHKIADBINML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NHKIADBINML*))((::PBYTE)hIl2Cpp + NHKIADBINML_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKIADBINML_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKIADBINML_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NHKIADBINML_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKIADBINML_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NHKIADBINML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHKIADBINML*))((::PBYTE)hIl2Cpp + NHKIADBINML_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NHKIADBINML_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
