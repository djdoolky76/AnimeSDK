#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKPKLHICPFO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FKPKLHICPFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3B3E30)
#define FKPKLHICPFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3B4100)
#define FKPKLHICPFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3B3A80)
#define FKPKLHICPFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3B3A50)
#define FKPKLHICPFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B3A40)
#define FKPKLHICPFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3B3BF0)
#define FKPKLHICPFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3B3B10)
#define FKPKLHICPFO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3B3AE0)
#define FKPKLHICPFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3B3CC0)
#define FKPKLHICPFO_IAKOHDKKOAI_OFFSET UNITYSDK_OFFSET(0x1E3B3AF0)
#define FKPKLHICPFO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3B3A00)
#define FKPKLHICPFO_LMGOICEFBPN_OFFSET UNITYSDK_OFFSET(0x1E3B3B00)
#define FKPKLHICPFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3B3F80)
#define FKPKLHICPFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3B3F40)
#define FKPKLHICPFO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3B3AD0)
#define FKPKLHICPFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3B3A30)
#define FKPKLHICPFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3B3CF0)
#define FKPKLHICPFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3B3D50)

	class FKPKLHICPFO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 GFIEPBFOMON; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FKPKLHICPFO")->GetStaticField(0x63FB0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object ABBONIGHCMB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPKLHICPFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FKPKLHICPFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKPKLHICPFO*))((::PBYTE)hIl2Cpp + FKPKLHICPFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKPKLHICPFO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FKPKLHICPFO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPKLHICPFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FKPKLHICPFO* Clone()
		{
			return ((::FKPKLHICPFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPKLHICPFO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPKLHICPFO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FKPKLHICPFO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 IAKOHDKKOAI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPKLHICPFO_IAKOHDKKOAI_OFFSET))(this);
		}

		::System::Void LMGOICEFBPN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FKPKLHICPFO_LMGOICEFBPN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKPKLHICPFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FKPKLHICPFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKPKLHICPFO*))((::PBYTE)hIl2Cpp + FKPKLHICPFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPKLHICPFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPKLHICPFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FKPKLHICPFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPKLHICPFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FKPKLHICPFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKPKLHICPFO*))((::PBYTE)hIl2Cpp + FKPKLHICPFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FKPKLHICPFO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
