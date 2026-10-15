#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELHLCFBPAMO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ELHLCFBPAMO_ACOPGEADOMN_OFFSET UNITYSDK_OFFSET(0x1E2A4990)
#define ELHLCFBPAMO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2A4DE0)
#define ELHLCFBPAMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A5070)
#define ELHLCFBPAMO_CHMCFLAIMPM_OFFSET UNITYSDK_OFFSET(0x1E2A4980)
#define ELHLCFBPAMO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2A4950)
#define ELHLCFBPAMO_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E2A49A0)
#define ELHLCFBPAMO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A48C0)
#define ELHLCFBPAMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A4870)
#define ELHLCFBPAMO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2A4A50)
#define ELHLCFBPAMO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2A49D0)
#define ELHLCFBPAMO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2A4B50)
#define ELHLCFBPAMO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2A4830)
#define ELHLCFBPAMO_KCCKLEBFHDG_OFFSET UNITYSDK_OFFSET(0x1E2A49C0)
#define ELHLCFBPAMO_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E2A49B0)
#define ELHLCFBPAMO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2A4FA0)
#define ELHLCFBPAMO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2A4F40)
#define ELHLCFBPAMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2A4860)
#define ELHLCFBPAMO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2A4C50)
#define ELHLCFBPAMO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2A4CB0)

inline static constexpr unsigned int ELHLCFBPAMO_TypeDefinitionIndex = 33664;

	class ELHLCFBPAMO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PPIMAJIDODP; // 0x18
		::System::UInt32 KMLIKNNALPB; // 0x20
		::System::UInt32 DNKADAFBILN; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EFFODMMMKLH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "ELHLCFBPAMO")->GetStaticField(0x517C0);
		}

		static ::Google::Protobuf::MessageParser_1<::ELHLCFBPAMO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ELHLCFBPAMO*>**)UnitySDK::FromName("", "ELHLCFBPAMO")->GetStaticField(0x517C8);
		}

		// static const ::System::Object GLHOIPCCHAH; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object EPBHAEEJDGG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHLCFBPAMO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ELHLCFBPAMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELHLCFBPAMO*))((::PBYTE)hIl2Cpp + ELHLCFBPAMO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELHLCFBPAMO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ELHLCFBPAMO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ELHLCFBPAMO*>*(*)())((::PBYTE)hIl2Cpp + ELHLCFBPAMO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHLCFBPAMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ELHLCFBPAMO* Clone()
		{
			return ((::ELHLCFBPAMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHLCFBPAMO_CLONE_OFFSET))(this);
		}

		::System::UInt32 CHMCFLAIMPM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHLCFBPAMO_CHMCFLAIMPM_OFFSET))(this);
		}

		::System::Void ACOPGEADOMN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ELHLCFBPAMO_ACOPGEADOMN_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHLCFBPAMO_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ELHLCFBPAMO_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KCCKLEBFHDG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHLCFBPAMO_KCCKLEBFHDG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ELHLCFBPAMO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ELHLCFBPAMO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ELHLCFBPAMO*))((::PBYTE)hIl2Cpp + ELHLCFBPAMO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHLCFBPAMO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHLCFBPAMO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ELHLCFBPAMO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHLCFBPAMO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ELHLCFBPAMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELHLCFBPAMO*))((::PBYTE)hIl2Cpp + ELHLCFBPAMO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ELHLCFBPAMO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
