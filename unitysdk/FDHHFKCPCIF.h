#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDHHFKCPCIF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FDHHFKCPCIF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E32C520)
#define FDHHFKCPCIF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E32C820)
#define FDHHFKCPCIF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E32C090)
#define FDHHFKCPCIF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E32C000)
#define FDHHFKCPCIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E32BFB0)
#define FDHHFKCPCIF_DKJOHAMHMBD_OFFSET UNITYSDK_OFFSET(0x1E32C0C0)
#define FDHHFKCPCIF_EILPOOIECLM_OFFSET UNITYSDK_OFFSET(0x1E32C0D0)
#define FDHHFKCPCIF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E32C1F0)
#define FDHHFKCPCIF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E32C0F0)
#define FDHHFKCPCIF_FCCBPNELKAN_OFFSET UNITYSDK_OFFSET(0x1E32C0E0)
#define FDHHFKCPCIF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E32C2E0)
#define FDHHFKCPCIF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E32BF70)
#define FDHHFKCPCIF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E32C660)
#define FDHHFKCPCIF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E32C610)
#define FDHHFKCPCIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E32BFA0)
#define FDHHFKCPCIF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E32C3E0)
#define FDHHFKCPCIF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E32C440)

inline static constexpr unsigned int FDHHFKCPCIF_TypeDefinitionIndex = 33535;

	class FDHHFKCPCIF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JFDCOLNGGJC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NIAOPCJHKCG; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FDHHFKCPCIF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FDHHFKCPCIF*>**)UnitySDK::FromName("", "FDHHFKCPCIF")->GetStaticField(0x52A80);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DIFNGFODAED()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FDHHFKCPCIF")->GetStaticField(0x52A88);
		}

		// static const ::System::Object NDFHHFGKMAI; // 0x0
		// static const ::System::Object FDDDLMBHDMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHHFKCPCIF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FDHHFKCPCIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDHHFKCPCIF*))((::PBYTE)hIl2Cpp + FDHHFKCPCIF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDHHFKCPCIF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FDHHFKCPCIF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FDHHFKCPCIF*>*(*)())((::PBYTE)hIl2Cpp + FDHHFKCPCIF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHHFKCPCIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FDHHFKCPCIF* Clone()
		{
			return ((::FDHHFKCPCIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHHFKCPCIF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DKJOHAMHMBD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHHFKCPCIF_DKJOHAMHMBD_OFFSET))(this);
		}

		::System::UInt32 EILPOOIECLM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHHFKCPCIF_EILPOOIECLM_OFFSET))(this);
		}

		::System::Void FCCBPNELKAN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDHHFKCPCIF_FCCBPNELKAN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FDHHFKCPCIF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FDHHFKCPCIF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FDHHFKCPCIF*))((::PBYTE)hIl2Cpp + FDHHFKCPCIF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHHFKCPCIF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHHFKCPCIF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FDHHFKCPCIF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHHFKCPCIF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FDHHFKCPCIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDHHFKCPCIF*))((::PBYTE)hIl2Cpp + FDHHFKCPCIF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FDHHFKCPCIF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
