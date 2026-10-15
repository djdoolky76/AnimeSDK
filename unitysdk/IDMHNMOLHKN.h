#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MMFOGJPOHGJ.h"
#include "unitysdk/System/Object.h"
class AKMCODLAEKI;
class IDMHNMOLHKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IDMHNMOLHKN_AFDBLMGBHDJ_OFFSET UNITYSDK_OFFSET(0x1E62FF80)
#define IDMHNMOLHKN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6304E0)
#define IDMHNMOLHKN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E630990)
#define IDMHNMOLHKN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E62FF50)
#define IDMHNMOLHKN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E62FEB0)
#define IDMHNMOLHKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E62FE70)
#define IDMHNMOLHKN_EPEFNNDEPLH_OFFSET UNITYSDK_OFFSET(0x1E62FF90)
#define IDMHNMOLHKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E630130)
#define IDMHNMOLHKN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E62FFD0)
#define IDMHNMOLHKN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E630270)
#define IDMHNMOLHKN_IONLEMBGMHH_OFFSET UNITYSDK_OFFSET(0x1E62FFB0)
#define IDMHNMOLHKN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E62FE30)
#define IDMHNMOLHKN_KNCKGIKIAPF_OFFSET UNITYSDK_OFFSET(0x1E62FFA0)
#define IDMHNMOLHKN_LKJABHDNGDI_OFFSET UNITYSDK_OFFSET(0x1E62FFC0)
#define IDMHNMOLHKN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6307B0)
#define IDMHNMOLHKN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E630700)
#define IDMHNMOLHKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E62FE60)
#define IDMHNMOLHKN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E630300)
#define IDMHNMOLHKN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E630360)

	class IDMHNMOLHKN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::AKMCODLAEKI*>* ONHHGGFNDDO; // 0x18
		::MMFOGJPOHGJ DJHNBHFKLLH; // 0x20
		::System::Byte _padding0[0x4];
		::System::UInt64 BPHNGKADNFE; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IDMHNMOLHKN")->GetStaticField(0x46FB0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_FNGJDLMNOHJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "IDMHNMOLHKN")->GetStaticField(0x46FB8);
		}

		// static const ::System::Object FLDOFDJBLJB; // 0x0
		// static const ::System::Object EPDEJFFDDOD; // 0x0
		// static const ::System::Object MHALDDACAMI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMHNMOLHKN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IDMHNMOLHKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDMHNMOLHKN*))((::PBYTE)hIl2Cpp + IDMHNMOLHKN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDMHNMOLHKN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IDMHNMOLHKN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMHNMOLHKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IDMHNMOLHKN* Clone()
		{
			return ((::IDMHNMOLHKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMHNMOLHKN_CLONE_OFFSET))(this);
		}

		::System::UInt64 AFDBLMGBHDJ()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMHNMOLHKN_AFDBLMGBHDJ_OFFSET))(this);
		}

		::System::Void EPEFNNDEPLH(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + IDMHNMOLHKN_EPEFNNDEPLH_OFFSET))(this, a1);
		}

		::MMFOGJPOHGJ KNCKGIKIAPF()
		{
			return ((::MMFOGJPOHGJ(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMHNMOLHKN_KNCKGIKIAPF_OFFSET))(this);
		}

		::System::Void IONLEMBGMHH(::MMFOGJPOHGJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMFOGJPOHGJ))((::PBYTE)hIl2Cpp + IDMHNMOLHKN_IONLEMBGMHH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AKMCODLAEKI*>* LKJABHDNGDI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AKMCODLAEKI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMHNMOLHKN_LKJABHDNGDI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDMHNMOLHKN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IDMHNMOLHKN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDMHNMOLHKN*))((::PBYTE)hIl2Cpp + IDMHNMOLHKN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMHNMOLHKN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMHNMOLHKN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IDMHNMOLHKN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMHNMOLHKN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IDMHNMOLHKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDMHNMOLHKN*))((::PBYTE)hIl2Cpp + IDMHNMOLHKN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IDMHNMOLHKN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
