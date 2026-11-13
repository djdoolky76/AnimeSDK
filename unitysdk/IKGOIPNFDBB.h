#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKGOIPNFDBB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IKGOIPNFDBB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20066670)
#define IKGOIPNFDBB_CCTOR_OFFSET UNITYSDK_OFFSET(0x20066930)
#define IKGOIPNFDBB_CLONE_OFFSET UNITYSDK_OFFSET(0x200661F0)
#define IKGOIPNFDBB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20066160)
#define IKGOIPNFDBB_CTOR_OFFSET UNITYSDK_OFFSET(0x20066110)
#define IKGOIPNFDBB_EBPKBBDOBNC_OFFSET UNITYSDK_OFFSET(0x20066240)
#define IKGOIPNFDBB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20066370)
#define IKGOIPNFDBB_EQUALS_OFFSET UNITYSDK_OFFSET(0x20066250)
#define IKGOIPNFDBB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20066460)
#define IKGOIPNFDBB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x200660A0)
#define IKGOIPNFDBB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20066760)
#define IKGOIPNFDBB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20066710)
#define IKGOIPNFDBB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20066100)
#define IKGOIPNFDBB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20066560)
#define IKGOIPNFDBB_WRITETO_OFFSET UNITYSDK_OFFSET(0x200665C0)

inline static constexpr unsigned int IKGOIPNFDBB_TypeDefinitionIndex = 29788;

	class IKGOIPNFDBB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IPHOFPDFOLJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IKGOIPNFDBB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IKGOIPNFDBB*>**)UnitySDK::FromName("", "IKGOIPNFDBB")->GetStaticField(0x4A270);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PMCJBHIIPDN()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "IKGOIPNFDBB")->GetStaticField(0x4A278);
		}

		// static const ::System::Object MPGNKBCIMDA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGOIPNFDBB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IKGOIPNFDBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKGOIPNFDBB*))((::PBYTE)hIl2Cpp + IKGOIPNFDBB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKGOIPNFDBB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IKGOIPNFDBB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IKGOIPNFDBB*>*(*)())((::PBYTE)hIl2Cpp + IKGOIPNFDBB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGOIPNFDBB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IKGOIPNFDBB* Clone()
		{
			return ((::IKGOIPNFDBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGOIPNFDBB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EBPKBBDOBNC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGOIPNFDBB_EBPKBBDOBNC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKGOIPNFDBB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IKGOIPNFDBB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IKGOIPNFDBB*))((::PBYTE)hIl2Cpp + IKGOIPNFDBB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGOIPNFDBB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGOIPNFDBB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IKGOIPNFDBB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGOIPNFDBB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IKGOIPNFDBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKGOIPNFDBB*))((::PBYTE)hIl2Cpp + IKGOIPNFDBB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IKGOIPNFDBB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
