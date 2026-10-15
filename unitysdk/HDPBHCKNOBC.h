#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDPBHCKNOBC;
class PLOHACFCDKF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HDPBHCKNOBC_AIFLNGGOLIK_OFFSET UNITYSDK_OFFSET(0x1E553CC0)
#define HDPBHCKNOBC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E554140)
#define HDPBHCKNOBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5544E0)
#define HDPBHCKNOBC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E553C90)
#define HDPBHCKNOBC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E553BD0)
#define HDPBHCKNOBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E553B80)
#define HDPBHCKNOBC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E553E40)
#define HDPBHCKNOBC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E553CF0)
#define HDPBHCKNOBC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E553CE0)
#define HDPBHCKNOBC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E553F60)
#define HDPBHCKNOBC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E553B40)
#define HDPBHCKNOBC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E554310)
#define HDPBHCKNOBC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E554270)
#define HDPBHCKNOBC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E553CD0)
#define HDPBHCKNOBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E553B70)
#define HDPBHCKNOBC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E553FD0)
#define HDPBHCKNOBC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E554030)

inline static constexpr unsigned int HDPBHCKNOBC_TypeDefinitionIndex = 28058;

	class HDPBHCKNOBC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::PLOHACFCDKF*>* BAKMJFEAFLM; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HDPBHCKNOBC")->GetStaticField(0x32520);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_NFDGIKACNAN()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HDPBHCKNOBC")->GetStaticField(0x32528);
		}

		// static const ::System::Object CEPJFBBCEPP; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPBHCKNOBC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HDPBHCKNOBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDPBHCKNOBC*))((::PBYTE)hIl2Cpp + HDPBHCKNOBC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDPBHCKNOBC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HDPBHCKNOBC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPBHCKNOBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HDPBHCKNOBC* Clone()
		{
			return ((::HDPBHCKNOBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPBHCKNOBC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PLOHACFCDKF*>* AIFLNGGOLIK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PLOHACFCDKF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPBHCKNOBC_AIFLNGGOLIK_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPBHCKNOBC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HDPBHCKNOBC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDPBHCKNOBC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HDPBHCKNOBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HDPBHCKNOBC*))((::PBYTE)hIl2Cpp + HDPBHCKNOBC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPBHCKNOBC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPBHCKNOBC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HDPBHCKNOBC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPBHCKNOBC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HDPBHCKNOBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDPBHCKNOBC*))((::PBYTE)hIl2Cpp + HDPBHCKNOBC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HDPBHCKNOBC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
