#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHFEIOEICNP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GHFEIOEICNP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F778150)
#define GHFEIOEICNP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7783B0)
#define GHFEIOEICNP_CLONE_OFFSET UNITYSDK_OFFSET(0x1F777D50)
#define GHFEIOEICNP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F777CC0)
#define GHFEIOEICNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F777C70)
#define GHFEIOEICNP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F777E80)
#define GHFEIOEICNP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F777D90)
#define GHFEIOEICNP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F777F70)
#define GHFEIOEICNP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F777C30)
#define GHFEIOEICNP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F778210)
#define GHFEIOEICNP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F7781C0)
#define GHFEIOEICNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F777C60)
#define GHFEIOEICNP_PCEAANOHGHB_OFFSET UNITYSDK_OFFSET(0x1F777D80)
#define GHFEIOEICNP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F778070)
#define GHFEIOEICNP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F7780D0)

inline static constexpr unsigned int GHFEIOEICNP_TypeDefinitionIndex = 31865;

	class GHFEIOEICNP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BMDODOIJGDF; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GHFEIOEICNP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GHFEIOEICNP*>**)UnitySDK::FromName("", "GHFEIOEICNP")->GetStaticField(0xF880);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JFLMJOGABHF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GHFEIOEICNP")->GetStaticField(0xF888);
		}

		// static const ::System::Object PIPPKAIHHNL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFEIOEICNP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GHFEIOEICNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHFEIOEICNP*))((::PBYTE)hIl2Cpp + GHFEIOEICNP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHFEIOEICNP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GHFEIOEICNP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GHFEIOEICNP*>*(*)())((::PBYTE)hIl2Cpp + GHFEIOEICNP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFEIOEICNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GHFEIOEICNP* Clone()
		{
			return ((::GHFEIOEICNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFEIOEICNP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PCEAANOHGHB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFEIOEICNP_PCEAANOHGHB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHFEIOEICNP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GHFEIOEICNP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHFEIOEICNP*))((::PBYTE)hIl2Cpp + GHFEIOEICNP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFEIOEICNP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFEIOEICNP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GHFEIOEICNP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFEIOEICNP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GHFEIOEICNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHFEIOEICNP*))((::PBYTE)hIl2Cpp + GHFEIOEICNP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GHFEIOEICNP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
