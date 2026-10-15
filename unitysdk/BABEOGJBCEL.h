#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BABEOGJBCEL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BABEOGJBCEL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7ADD60)
#define BABEOGJBCEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7ADFD0)
#define BABEOGJBCEL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7AD790)
#define BABEOGJBCEL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7AD6A0)
#define BABEOGJBCEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7AD610)
#define BABEOGJBCEL_EBPKBBDOBNC_OFFSET UNITYSDK_OFFSET(0x1E7AD7E0)
#define BABEOGJBCEL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7AD950)
#define BABEOGJBCEL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7AD800)
#define BABEOGJBCEL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7ADA60)
#define BABEOGJBCEL_JDFFEJFPHBJ_OFFSET UNITYSDK_OFFSET(0x1E7AD7F0)
#define BABEOGJBCEL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7AD5A0)
#define BABEOGJBCEL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7ADE90)
#define BABEOGJBCEL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7ADE30)
#define BABEOGJBCEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7AD600)
#define BABEOGJBCEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7ADC20)
#define BABEOGJBCEL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7ADC80)

inline static constexpr unsigned int BABEOGJBCEL_TypeDefinitionIndex = 25507;

	class BABEOGJBCEL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JBEPELLPAJC; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IPHOFPDFOLJ; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BABEOGJBCEL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BABEOGJBCEL*>**)UnitySDK::FromName("", "BABEOGJBCEL")->GetStaticField(0x440E0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PMCJBHIIPDN()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "BABEOGJBCEL")->GetStaticField(0x440E8);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_OKDIKGNLFBH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "BABEOGJBCEL")->GetStaticField(0x440F0);
		}

		// static const ::System::Object MPGNKBCIMDA; // 0x0
		// static const ::System::Object PDFFAKHMEPI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABEOGJBCEL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BABEOGJBCEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BABEOGJBCEL*))((::PBYTE)hIl2Cpp + BABEOGJBCEL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BABEOGJBCEL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BABEOGJBCEL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BABEOGJBCEL*>*(*)())((::PBYTE)hIl2Cpp + BABEOGJBCEL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABEOGJBCEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BABEOGJBCEL* Clone()
		{
			return ((::BABEOGJBCEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABEOGJBCEL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EBPKBBDOBNC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABEOGJBCEL_EBPKBBDOBNC_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JDFFEJFPHBJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABEOGJBCEL_JDFFEJFPHBJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BABEOGJBCEL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BABEOGJBCEL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BABEOGJBCEL*))((::PBYTE)hIl2Cpp + BABEOGJBCEL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BABEOGJBCEL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABEOGJBCEL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BABEOGJBCEL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BABEOGJBCEL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BABEOGJBCEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BABEOGJBCEL*))((::PBYTE)hIl2Cpp + BABEOGJBCEL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BABEOGJBCEL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
