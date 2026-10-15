#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEHOBDGMMJM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HEHOBDGMMJM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E55AB10)
#define HEHOBDGMMJM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E55AE70)
#define HEHOBDGMMJM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E55A600)
#define HEHOBDGMMJM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E55A570)
#define HEHOBDGMMJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E55A520)
#define HEHOBDGMMJM_EBPKBBDOBNC_OFFSET UNITYSDK_OFFSET(0x1E55A650)
#define HEHOBDGMMJM_EMNEFBFCKDJ_OFFSET UNITYSDK_OFFSET(0x1E55A670)
#define HEHOBDGMMJM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E55A7B0)
#define HEHOBDGMMJM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E55A680)
#define HEHOBDGMMJM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E55A8A0)
#define HEHOBDGMMJM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E55A4B0)
#define HEHOBDGMMJM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E55AC90)
#define HEHOBDGMMJM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E55AC40)
#define HEHOBDGMMJM_MNBHLAJGKOH_OFFSET UNITYSDK_OFFSET(0x1E55A660)
#define HEHOBDGMMJM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E55A510)
#define HEHOBDGMMJM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E55A9A0)
#define HEHOBDGMMJM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E55AA00)

inline static constexpr unsigned int HEHOBDGMMJM_TypeDefinitionIndex = 29300;

	class HEHOBDGMMJM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IPHOFPDFOLJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 MJIMFDKFGDE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HEHOBDGMMJM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HEHOBDGMMJM*>**)UnitySDK::FromName("", "HEHOBDGMMJM")->GetStaticField(0x33250);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PMCJBHIIPDN()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "HEHOBDGMMJM")->GetStaticField(0x33258);
		}

		// static const ::System::Object MPGNKBCIMDA; // 0x0
		// static const ::System::Object MJJGNBCFCOH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHOBDGMMJM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HEHOBDGMMJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEHOBDGMMJM*))((::PBYTE)hIl2Cpp + HEHOBDGMMJM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEHOBDGMMJM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HEHOBDGMMJM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HEHOBDGMMJM*>*(*)())((::PBYTE)hIl2Cpp + HEHOBDGMMJM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHOBDGMMJM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HEHOBDGMMJM* Clone()
		{
			return ((::HEHOBDGMMJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHOBDGMMJM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EBPKBBDOBNC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHOBDGMMJM_EBPKBBDOBNC_OFFSET))(this);
		}

		::System::UInt32 MNBHLAJGKOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHOBDGMMJM_MNBHLAJGKOH_OFFSET))(this);
		}

		::System::Void EMNEFBFCKDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HEHOBDGMMJM_EMNEFBFCKDJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEHOBDGMMJM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HEHOBDGMMJM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HEHOBDGMMJM*))((::PBYTE)hIl2Cpp + HEHOBDGMMJM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHOBDGMMJM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHOBDGMMJM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HEHOBDGMMJM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHOBDGMMJM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HEHOBDGMMJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEHOBDGMMJM*))((::PBYTE)hIl2Cpp + HEHOBDGMMJM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HEHOBDGMMJM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
