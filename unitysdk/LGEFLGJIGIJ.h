#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MMFOGJPOHGJ.h"
#include "unitysdk/System/Object.h"
class AKMCODLAEKI;
class LGEFLGJIGIJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LGEFLGJIGIJ_AFDBLMGBHDJ_OFFSET UNITYSDK_OFFSET(0x1E94EC80)
#define LGEFLGJIGIJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E94F1C0)
#define LGEFLGJIGIJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E94F670)
#define LGEFLGJIGIJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E94EC40)
#define LGEFLGJIGIJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E94EBA0)
#define LGEFLGJIGIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E94EB60)
#define LGEFLGJIGIJ_EPEFNNDEPLH_OFFSET UNITYSDK_OFFSET(0x1E94EC90)
#define LGEFLGJIGIJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E94EE20)
#define LGEFLGJIGIJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E94ECC0)
#define LGEFLGJIGIJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E94EF50)
#define LGEFLGJIGIJ_IONLEMBGMHH_OFFSET UNITYSDK_OFFSET(0x1E94ECB0)
#define LGEFLGJIGIJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E94EB20)
#define LGEFLGJIGIJ_KNCKGIKIAPF_OFFSET UNITYSDK_OFFSET(0x1E94ECA0)
#define LGEFLGJIGIJ_LKJABHDNGDI_OFFSET UNITYSDK_OFFSET(0x1E94EC70)
#define LGEFLGJIGIJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E94F4A0)
#define LGEFLGJIGIJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E94F3F0)
#define LGEFLGJIGIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E94EB50)
#define LGEFLGJIGIJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E94EFD0)
#define LGEFLGJIGIJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E94F030)

inline static constexpr unsigned int LGEFLGJIGIJ_TypeDefinitionIndex = 33392;

	class LGEFLGJIGIJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::AKMCODLAEKI*>* ONHHGGFNDDO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt64 BPHNGKADNFE; // 0x20
		::MMFOGJPOHGJ DJHNBHFKLLH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::LGEFLGJIGIJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LGEFLGJIGIJ*>**)UnitySDK::FromName("", "LGEFLGJIGIJ")->GetStaticField(0x24E40);
		}

		static ::Google::Protobuf::FieldCodec_1<::AKMCODLAEKI*>** StaticGet_FNGJDLMNOHJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::AKMCODLAEKI*>**)UnitySDK::FromName("", "LGEFLGJIGIJ")->GetStaticField(0x24E48);
		}

		// static const ::System::Object MHALDDACAMI; // 0x0
		// static const ::System::Object FLDOFDJBLJB; // 0x0
		// static const ::System::Object EPDEJFFDDOD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEFLGJIGIJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LGEFLGJIGIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGEFLGJIGIJ*))((::PBYTE)hIl2Cpp + LGEFLGJIGIJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGEFLGJIGIJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LGEFLGJIGIJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LGEFLGJIGIJ*>*(*)())((::PBYTE)hIl2Cpp + LGEFLGJIGIJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEFLGJIGIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LGEFLGJIGIJ* Clone()
		{
			return ((::LGEFLGJIGIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEFLGJIGIJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AKMCODLAEKI*>* LKJABHDNGDI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AKMCODLAEKI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEFLGJIGIJ_LKJABHDNGDI_OFFSET))(this);
		}

		::System::UInt64 AFDBLMGBHDJ()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEFLGJIGIJ_AFDBLMGBHDJ_OFFSET))(this);
		}

		::System::Void EPEFNNDEPLH(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + LGEFLGJIGIJ_EPEFNNDEPLH_OFFSET))(this, a1);
		}

		::MMFOGJPOHGJ KNCKGIKIAPF()
		{
			return ((::MMFOGJPOHGJ(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEFLGJIGIJ_KNCKGIKIAPF_OFFSET))(this);
		}

		::System::Void IONLEMBGMHH(::MMFOGJPOHGJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMFOGJPOHGJ))((::PBYTE)hIl2Cpp + LGEFLGJIGIJ_IONLEMBGMHH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGEFLGJIGIJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LGEFLGJIGIJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGEFLGJIGIJ*))((::PBYTE)hIl2Cpp + LGEFLGJIGIJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEFLGJIGIJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEFLGJIGIJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LGEFLGJIGIJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEFLGJIGIJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LGEFLGJIGIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGEFLGJIGIJ*))((::PBYTE)hIl2Cpp + LGEFLGJIGIJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LGEFLGJIGIJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
