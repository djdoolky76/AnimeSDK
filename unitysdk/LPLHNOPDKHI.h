#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MMFOGJPOHGJ.h"
#include "unitysdk/System/Object.h"
class AKMCODLAEKI;
class LPLHNOPDKHI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LPLHNOPDKHI_AFDBLMGBHDJ_OFFSET UNITYSDK_OFFSET(0x1E9D2A10)
#define LPLHNOPDKHI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9D2F60)
#define LPLHNOPDKHI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D3420)
#define LPLHNOPDKHI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9D29E0)
#define LPLHNOPDKHI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9D2940)
#define LPLHNOPDKHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D2900)
#define LPLHNOPDKHI_EPEFNNDEPLH_OFFSET UNITYSDK_OFFSET(0x1E9D2A20)
#define LPLHNOPDKHI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9D2BC0)
#define LPLHNOPDKHI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9D2A60)
#define LPLHNOPDKHI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9D2CF0)
#define LPLHNOPDKHI_IONLEMBGMHH_OFFSET UNITYSDK_OFFSET(0x1E9D2A50)
#define LPLHNOPDKHI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9D28C0)
#define LPLHNOPDKHI_KNCKGIKIAPF_OFFSET UNITYSDK_OFFSET(0x1E9D2A40)
#define LPLHNOPDKHI_LKJABHDNGDI_OFFSET UNITYSDK_OFFSET(0x1E9D2A30)
#define LPLHNOPDKHI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9D3240)
#define LPLHNOPDKHI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9D3190)
#define LPLHNOPDKHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9D28F0)
#define LPLHNOPDKHI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9D2D80)
#define LPLHNOPDKHI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9D2DE0)

	class LPLHNOPDKHI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::AKMCODLAEKI*>* ONHHGGFNDDO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt64 BPHNGKADNFE; // 0x20
		::MMFOGJPOHGJ DJHNBHFKLLH; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_FNGJDLMNOHJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LPLHNOPDKHI")->GetStaticField(0x42210);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LPLHNOPDKHI")->GetStaticField(0x42218);
		}

		// static const ::System::Object FLDOFDJBLJB; // 0x0
		// static const ::System::Object MHALDDACAMI; // 0x0
		// static const ::System::Object EPDEJFFDDOD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLHNOPDKHI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LPLHNOPDKHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPLHNOPDKHI*))((::PBYTE)hIl2Cpp + LPLHNOPDKHI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPLHNOPDKHI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LPLHNOPDKHI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLHNOPDKHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LPLHNOPDKHI* Clone()
		{
			return ((::LPLHNOPDKHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLHNOPDKHI_CLONE_OFFSET))(this);
		}

		::System::UInt64 AFDBLMGBHDJ()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLHNOPDKHI_AFDBLMGBHDJ_OFFSET))(this);
		}

		::System::Void EPEFNNDEPLH(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + LPLHNOPDKHI_EPEFNNDEPLH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AKMCODLAEKI*>* LKJABHDNGDI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AKMCODLAEKI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLHNOPDKHI_LKJABHDNGDI_OFFSET))(this);
		}

		::MMFOGJPOHGJ KNCKGIKIAPF()
		{
			return ((::MMFOGJPOHGJ(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLHNOPDKHI_KNCKGIKIAPF_OFFSET))(this);
		}

		::System::Void IONLEMBGMHH(::MMFOGJPOHGJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMFOGJPOHGJ))((::PBYTE)hIl2Cpp + LPLHNOPDKHI_IONLEMBGMHH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LPLHNOPDKHI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LPLHNOPDKHI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPLHNOPDKHI*))((::PBYTE)hIl2Cpp + LPLHNOPDKHI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLHNOPDKHI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLHNOPDKHI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LPLHNOPDKHI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLHNOPDKHI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LPLHNOPDKHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPLHNOPDKHI*))((::PBYTE)hIl2Cpp + LPLHNOPDKHI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LPLHNOPDKHI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
