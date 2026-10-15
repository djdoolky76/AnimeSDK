#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKMNFJIPCMI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EKMNFJIPCMI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2C5FD0)
#define EKMNFJIPCMI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C61F0)
#define EKMNFJIPCMI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2C5C20)
#define EKMNFJIPCMI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2C5BF0)
#define EKMNFJIPCMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C5BE0)
#define EKMNFJIPCMI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2C5D50)
#define EKMNFJIPCMI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2C5C80)
#define EKMNFJIPCMI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2C5C70)
#define EKMNFJIPCMI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2C5EC0)
#define EKMNFJIPCMI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2C5BA0)
#define EKMNFJIPCMI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2C6090)
#define EKMNFJIPCMI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2C6060)
#define EKMNFJIPCMI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2C5C60)
#define EKMNFJIPCMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2C5BD0)
#define EKMNFJIPCMI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2C5EF0)
#define EKMNFJIPCMI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2C5F50)

	class EKMNFJIPCMI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EKMNFJIPCMI")->GetStaticField(0x4DBB0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMNFJIPCMI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EKMNFJIPCMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKMNFJIPCMI*))((::PBYTE)hIl2Cpp + EKMNFJIPCMI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKMNFJIPCMI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EKMNFJIPCMI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMNFJIPCMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EKMNFJIPCMI* Clone()
		{
			return ((::EKMNFJIPCMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMNFJIPCMI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMNFJIPCMI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EKMNFJIPCMI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EKMNFJIPCMI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EKMNFJIPCMI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKMNFJIPCMI*))((::PBYTE)hIl2Cpp + EKMNFJIPCMI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMNFJIPCMI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMNFJIPCMI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EKMNFJIPCMI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMNFJIPCMI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EKMNFJIPCMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKMNFJIPCMI*))((::PBYTE)hIl2Cpp + EKMNFJIPCMI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EKMNFJIPCMI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
