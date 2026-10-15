#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABOFBLJPHHE;
class IODAFIBPAGM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ABOFBLJPHHE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDD0ED0)
#define ABOFBLJPHHE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD1240)
#define ABOFBLJPHHE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDD0A10)
#define ABOFBLJPHHE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDD0980)
#define ABOFBLJPHHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD0940)
#define ABOFBLJPHHE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDD0BC0)
#define ABOFBLJPHHE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDD0A70)
#define ABOFBLJPHHE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DDD0A50)
#define ABOFBLJPHHE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDD0CF0)
#define ABOFBLJPHHE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDD0900)
#define ABOFBLJPHHE_KGNFDJHEALE_OFFSET UNITYSDK_OFFSET(0x1DDD0A60)
#define ABOFBLJPHHE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDD1080)
#define ABOFBLJPHHE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDD0FE0)
#define ABOFBLJPHHE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DDD0A40)
#define ABOFBLJPHHE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDD0930)
#define ABOFBLJPHHE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDD0D60)
#define ABOFBLJPHHE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDD0DC0)

	class ABOFBLJPHHE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::IODAFIBPAGM*>* HEOGBMAEFDF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ABOFBLJPHHE")->GetStaticField(0x3A010);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_AEAPGJLBMBJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "ABOFBLJPHHE")->GetStaticField(0x3A018);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object OPHJFCAHAPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFBLJPHHE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ABOFBLJPHHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABOFBLJPHHE*))((::PBYTE)hIl2Cpp + ABOFBLJPHHE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABOFBLJPHHE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ABOFBLJPHHE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFBLJPHHE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ABOFBLJPHHE* Clone()
		{
			return ((::ABOFBLJPHHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFBLJPHHE_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFBLJPHHE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABOFBLJPHHE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IODAFIBPAGM*>* KGNFDJHEALE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IODAFIBPAGM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFBLJPHHE_KGNFDJHEALE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABOFBLJPHHE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ABOFBLJPHHE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABOFBLJPHHE*))((::PBYTE)hIl2Cpp + ABOFBLJPHHE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFBLJPHHE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFBLJPHHE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ABOFBLJPHHE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFBLJPHHE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ABOFBLJPHHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABOFBLJPHHE*))((::PBYTE)hIl2Cpp + ABOFBLJPHHE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ABOFBLJPHHE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
