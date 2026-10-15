#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMKNOLPFJDN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NMKNOLPFJDN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB4B5B0)
#define NMKNOLPFJDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB4B910)
#define NMKNOLPFJDN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB4AFB0)
#define NMKNOLPFJDN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB4AEC0)
#define NMKNOLPFJDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB4AE30)
#define NMKNOLPFJDN_DAPHKHADEEM_OFFSET UNITYSDK_OFFSET(0x1EB4B030)
#define NMKNOLPFJDN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB4B0C0)
#define NMKNOLPFJDN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB4B060)
#define NMKNOLPFJDN_FIOPHGELICM_OFFSET UNITYSDK_OFFSET(0x1EB4B050)
#define NMKNOLPFJDN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB4B1F0)
#define NMKNOLPFJDN_IIKHGENLAKC_OFFSET UNITYSDK_OFFSET(0x1EB4B040)
#define NMKNOLPFJDN_IMDEOJGJGFF_OFFSET UNITYSDK_OFFSET(0x1EB4B010)
#define NMKNOLPFJDN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB4ADC0)
#define NMKNOLPFJDN_KKANFACJMFE_OFFSET UNITYSDK_OFFSET(0x1EB4B020)
#define NMKNOLPFJDN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB4B7C0)
#define NMKNOLPFJDN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB4B750)
#define NMKNOLPFJDN_OKECKNHEEIK_OFFSET UNITYSDK_OFFSET(0x1EB4B000)
#define NMKNOLPFJDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB4AE20)
#define NMKNOLPFJDN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB4B3C0)
#define NMKNOLPFJDN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB4B420)

inline static constexpr unsigned int NMKNOLPFJDN_TypeDefinitionIndex = 31916;

	class NMKNOLPFJDN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PIBJFKKFPKE; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KFOLOJFCEAD; // 0x20
		::System::UInt32 FNJGGEKFHNB; // 0x28
		::System::UInt32 GMFJOJOKPIA; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PHPPGNJGKGB()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NMKNOLPFJDN")->GetStaticField(0x6AB00);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PCDBICAIHIH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NMKNOLPFJDN")->GetStaticField(0x6AB08);
		}

		static ::Google::Protobuf::MessageParser_1<::NMKNOLPFJDN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NMKNOLPFJDN*>**)UnitySDK::FromName("", "NMKNOLPFJDN")->GetStaticField(0x6AB10);
		}

		// static const ::System::Object CCIMENMMCCC; // 0x0
		// static const ::System::Object BDMKGFJPPMA; // 0x0
		// static const ::System::Object BALMPJBFKFE; // 0x0
		// static const ::System::Object PFBEFKJPPPC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKNOLPFJDN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NMKNOLPFJDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMKNOLPFJDN*))((::PBYTE)hIl2Cpp + NMKNOLPFJDN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMKNOLPFJDN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NMKNOLPFJDN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NMKNOLPFJDN*>*(*)())((::PBYTE)hIl2Cpp + NMKNOLPFJDN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKNOLPFJDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NMKNOLPFJDN* Clone()
		{
			return ((::NMKNOLPFJDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKNOLPFJDN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OKECKNHEEIK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKNOLPFJDN_OKECKNHEEIK_OFFSET))(this);
		}

		::System::Void IMDEOJGJGFF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMKNOLPFJDN_IMDEOJGJGFF_OFFSET))(this, a1);
		}

		::System::UInt32 KKANFACJMFE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKNOLPFJDN_KKANFACJMFE_OFFSET))(this);
		}

		::System::Void DAPHKHADEEM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMKNOLPFJDN_DAPHKHADEEM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IIKHGENLAKC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKNOLPFJDN_IIKHGENLAKC_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FIOPHGELICM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKNOLPFJDN_FIOPHGELICM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMKNOLPFJDN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NMKNOLPFJDN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NMKNOLPFJDN*))((::PBYTE)hIl2Cpp + NMKNOLPFJDN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKNOLPFJDN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKNOLPFJDN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NMKNOLPFJDN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKNOLPFJDN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NMKNOLPFJDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMKNOLPFJDN*))((::PBYTE)hIl2Cpp + NMKNOLPFJDN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NMKNOLPFJDN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
