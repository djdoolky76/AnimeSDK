#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOAHBHODMHG;
class PJLEILDLONN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PJLEILDLONN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F22E9D0)
#define PJLEILDLONN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F22ED60)
#define PJLEILDLONN_CLONE_OFFSET UNITYSDK_OFFSET(0x1F22E520)
#define PJLEILDLONN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F22E490)
#define PJLEILDLONN_CTOR_OFFSET UNITYSDK_OFFSET(0x1F22E450)
#define PJLEILDLONN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F22E6D0)
#define PJLEILDLONN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F22E580)
#define PJLEILDLONN_FGEGCGNCFMN_OFFSET UNITYSDK_OFFSET(0x1F22E550)
#define PJLEILDLONN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F22E7F0)
#define PJLEILDLONN_GJAHHJPLKII_OFFSET UNITYSDK_OFFSET(0x1F22E570)
#define PJLEILDLONN_GLFKMHKKEHM_OFFSET UNITYSDK_OFFSET(0x1F22E560)
#define PJLEILDLONN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F22E410)
#define PJLEILDLONN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F22EBA0)
#define PJLEILDLONN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F22EB00)
#define PJLEILDLONN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F22E440)
#define PJLEILDLONN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F22E860)
#define PJLEILDLONN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F22E8C0)

inline static constexpr unsigned int PJLEILDLONN_TypeDefinitionIndex = 32187;

	class PJLEILDLONN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::OOAHBHODMHG*>* MFKBNJMCODD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 GDPGCPKEFKH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PJLEILDLONN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PJLEILDLONN*>**)UnitySDK::FromName("", "PJLEILDLONN")->GetStaticField(0x3AAD0);
		}

		static ::Google::Protobuf::FieldCodec_1<::OOAHBHODMHG*>** StaticGet_HFOMHPDGAIK()
		{
			return (::Google::Protobuf::FieldCodec_1<::OOAHBHODMHG*>**)UnitySDK::FromName("", "PJLEILDLONN")->GetStaticField(0x3AAD8);
		}

		// static const ::System::Object NCOPBFNHNKJ; // 0x0
		// static const ::System::Object JIPLGBKNGHJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLEILDLONN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PJLEILDLONN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJLEILDLONN*))((::PBYTE)hIl2Cpp + PJLEILDLONN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJLEILDLONN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PJLEILDLONN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PJLEILDLONN*>*(*)())((::PBYTE)hIl2Cpp + PJLEILDLONN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLEILDLONN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PJLEILDLONN* Clone()
		{
			return ((::PJLEILDLONN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLEILDLONN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OOAHBHODMHG*>* FGEGCGNCFMN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OOAHBHODMHG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLEILDLONN_FGEGCGNCFMN_OFFSET))(this);
		}

		::System::UInt32 GLFKMHKKEHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLEILDLONN_GLFKMHKKEHM_OFFSET))(this);
		}

		::System::Void GJAHHJPLKII(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJLEILDLONN_GJAHHJPLKII_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJLEILDLONN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PJLEILDLONN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PJLEILDLONN*))((::PBYTE)hIl2Cpp + PJLEILDLONN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLEILDLONN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLEILDLONN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PJLEILDLONN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLEILDLONN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PJLEILDLONN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJLEILDLONN*))((::PBYTE)hIl2Cpp + PJLEILDLONN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PJLEILDLONN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
