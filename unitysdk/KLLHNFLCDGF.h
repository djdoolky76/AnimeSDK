#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLLHNFLCDGF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KLLHNFLCDGF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8907B0)
#define KLLHNFLCDGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8909D0)
#define KLLHNFLCDGF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E890400)
#define KLLHNFLCDGF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8903D0)
#define KLLHNFLCDGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8903C0)
#define KLLHNFLCDGF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E890530)
#define KLLHNFLCDGF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E890460)
#define KLLHNFLCDGF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E890450)
#define KLLHNFLCDGF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8906A0)
#define KLLHNFLCDGF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E890380)
#define KLLHNFLCDGF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E890870)
#define KLLHNFLCDGF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E890840)
#define KLLHNFLCDGF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E890440)
#define KLLHNFLCDGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8903B0)
#define KLLHNFLCDGF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8906D0)
#define KLLHNFLCDGF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E890730)

	class KLLHNFLCDGF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KLLHNFLCDGF")->GetStaticField(0x21740);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KLLHNFLCDGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLLHNFLCDGF*))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLLHNFLCDGF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KLLHNFLCDGF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KLLHNFLCDGF* Clone()
		{
			return ((::KLLHNFLCDGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KLLHNFLCDGF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLLHNFLCDGF*))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KLLHNFLCDGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLLHNFLCDGF*))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KLLHNFLCDGF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
