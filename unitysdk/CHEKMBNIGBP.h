#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHEKMBNIGBP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CHEKMBNIGBP_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E0C2F80)
#define CHEKMBNIGBP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0C32C0)
#define CHEKMBNIGBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C3590)
#define CHEKMBNIGBP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0C2F10)
#define CHEKMBNIGBP_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1E0C2F60)
#define CHEKMBNIGBP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0C2EE0)
#define CHEKMBNIGBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C2ED0)
#define CHEKMBNIGBP_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E0C2F90)
#define CHEKMBNIGBP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0C3080)
#define CHEKMBNIGBP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0C2FA0)
#define CHEKMBNIGBP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0C3150)
#define CHEKMBNIGBP_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1E0C2F70)
#define CHEKMBNIGBP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0C2E90)
#define CHEKMBNIGBP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0C3410)
#define CHEKMBNIGBP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0C33D0)
#define CHEKMBNIGBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0C2EC0)
#define CHEKMBNIGBP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0C3180)
#define CHEKMBNIGBP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0C31E0)

	class CHEKMBNIGBP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NPFBAFODCBI; // 0x18
		::System::UInt32 KJAENGKDFJD; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CHEKMBNIGBP")->GetStaticField(0x161A0);
		}

		// static const ::System::Object PIACMPBJOIK; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKMBNIGBP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CHEKMBNIGBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHEKMBNIGBP*))((::PBYTE)hIl2Cpp + CHEKMBNIGBP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHEKMBNIGBP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CHEKMBNIGBP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKMBNIGBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CHEKMBNIGBP* Clone()
		{
			return ((::CHEKMBNIGBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKMBNIGBP_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKMBNIGBP_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHEKMBNIGBP_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKMBNIGBP_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHEKMBNIGBP_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CHEKMBNIGBP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CHEKMBNIGBP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHEKMBNIGBP*))((::PBYTE)hIl2Cpp + CHEKMBNIGBP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKMBNIGBP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKMBNIGBP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CHEKMBNIGBP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKMBNIGBP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CHEKMBNIGBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHEKMBNIGBP*))((::PBYTE)hIl2Cpp + CHEKMBNIGBP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CHEKMBNIGBP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
