#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MMFOGJPOHGJ.h"
#include "unitysdk/System/Object.h"
class AKMCODLAEKI;
class KNOLJDOPBDG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KNOLJDOPBDG_AFDBLMGBHDJ_OFFSET UNITYSDK_OFFSET(0x1E8A8CA0)
#define KNOLJDOPBDG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8A91F0)
#define KNOLJDOPBDG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A96B0)
#define KNOLJDOPBDG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8A8C70)
#define KNOLJDOPBDG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8A8BD0)
#define KNOLJDOPBDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A8B90)
#define KNOLJDOPBDG_EPEFNNDEPLH_OFFSET UNITYSDK_OFFSET(0x1E8A8CB0)
#define KNOLJDOPBDG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8A8E50)
#define KNOLJDOPBDG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8A8CF0)
#define KNOLJDOPBDG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8A8F80)
#define KNOLJDOPBDG_IONLEMBGMHH_OFFSET UNITYSDK_OFFSET(0x1E8A8CE0)
#define KNOLJDOPBDG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8A8B50)
#define KNOLJDOPBDG_KNCKGIKIAPF_OFFSET UNITYSDK_OFFSET(0x1E8A8CD0)
#define KNOLJDOPBDG_LKJABHDNGDI_OFFSET UNITYSDK_OFFSET(0x1E8A8CC0)
#define KNOLJDOPBDG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8A94D0)
#define KNOLJDOPBDG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8A9420)
#define KNOLJDOPBDG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8A8B80)
#define KNOLJDOPBDG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8A9010)
#define KNOLJDOPBDG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8A9070)

	class KNOLJDOPBDG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::AKMCODLAEKI*>* ONHHGGFNDDO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt64 BPHNGKADNFE; // 0x20
		::MMFOGJPOHGJ DJHNBHFKLLH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KNOLJDOPBDG")->GetStaticField(0x24D70);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_FNGJDLMNOHJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KNOLJDOPBDG")->GetStaticField(0x24D78);
		}

		// static const ::System::Object FLDOFDJBLJB; // 0x0
		// static const ::System::Object MHALDDACAMI; // 0x0
		// static const ::System::Object EPDEJFFDDOD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOLJDOPBDG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KNOLJDOPBDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNOLJDOPBDG*))((::PBYTE)hIl2Cpp + KNOLJDOPBDG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNOLJDOPBDG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KNOLJDOPBDG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOLJDOPBDG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KNOLJDOPBDG* Clone()
		{
			return ((::KNOLJDOPBDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOLJDOPBDG_CLONE_OFFSET))(this);
		}

		::System::UInt64 AFDBLMGBHDJ()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOLJDOPBDG_AFDBLMGBHDJ_OFFSET))(this);
		}

		::System::Void EPEFNNDEPLH(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + KNOLJDOPBDG_EPEFNNDEPLH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AKMCODLAEKI*>* LKJABHDNGDI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AKMCODLAEKI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOLJDOPBDG_LKJABHDNGDI_OFFSET))(this);
		}

		::MMFOGJPOHGJ KNCKGIKIAPF()
		{
			return ((::MMFOGJPOHGJ(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOLJDOPBDG_KNCKGIKIAPF_OFFSET))(this);
		}

		::System::Void IONLEMBGMHH(::MMFOGJPOHGJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMFOGJPOHGJ))((::PBYTE)hIl2Cpp + KNOLJDOPBDG_IONLEMBGMHH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KNOLJDOPBDG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KNOLJDOPBDG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KNOLJDOPBDG*))((::PBYTE)hIl2Cpp + KNOLJDOPBDG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOLJDOPBDG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOLJDOPBDG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KNOLJDOPBDG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOLJDOPBDG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KNOLJDOPBDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNOLJDOPBDG*))((::PBYTE)hIl2Cpp + KNOLJDOPBDG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KNOLJDOPBDG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
