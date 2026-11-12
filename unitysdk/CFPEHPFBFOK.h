#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFPEHPFBFOK;
class HNBJHMCGEDK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CFPEHPFBFOK_AFBHFGBKPJN_OFFSET UNITYSDK_OFFSET(0x1F36FD00)
#define CFPEHPFBFOK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F3701A0)
#define CFPEHPFBFOK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F370510)
#define CFPEHPFBFOK_CLONE_OFFSET UNITYSDK_OFFSET(0x1F36FCD0)
#define CFPEHPFBFOK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F36FC10)
#define CFPEHPFBFOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F36FBC0)
#define CFPEHPFBFOK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F36FDA0)
#define CFPEHPFBFOK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F36FD70)
#define CFPEHPFBFOK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F36FEE0)
#define CFPEHPFBFOK_HFOKLPOEFJM_OFFSET UNITYSDK_OFFSET(0x1F36FD20)
#define CFPEHPFBFOK_HMPGKPMHEDF_OFFSET UNITYSDK_OFFSET(0x1F36FD10)
#define CFPEHPFBFOK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F36FB80)
#define CFPEHPFBFOK_JMNLBDEAPIO_OFFSET UNITYSDK_OFFSET(0x1F36FD60)
#define CFPEHPFBFOK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F370410)
#define CFPEHPFBFOK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F370350)
#define CFPEHPFBFOK_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1F36FD40)
#define CFPEHPFBFOK_NHNBLJJMCKI_OFFSET UNITYSDK_OFFSET(0x1F36FD50)
#define CFPEHPFBFOK_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1F36FD30)
#define CFPEHPFBFOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F36FBB0)
#define CFPEHPFBFOK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F36FF50)
#define CFPEHPFBFOK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F36FFB0)

inline static constexpr unsigned int CFPEHPFBFOK_TypeDefinitionIndex = 27468;

	class CFPEHPFBFOK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::HNBJHMCGEDK*>* CFIJFIGPFPI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 OIJAOMMHCDA; // 0x20
		::System::UInt32 ABPDPMHFFNN; // 0x24
		::System::Boolean PNKAHGEALAE; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::HNBJHMCGEDK*>** StaticGet_FNOEGGFHIPL()
		{
			return (::Google::Protobuf::FieldCodec_1<::HNBJHMCGEDK*>**)UnitySDK::FromName("", "CFPEHPFBFOK")->GetStaticField(0xAB50);
		}

		static ::Google::Protobuf::MessageParser_1<::CFPEHPFBFOK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CFPEHPFBFOK*>**)UnitySDK::FromName("", "CFPEHPFBFOK")->GetStaticField(0xAB58);
		}

		// static const ::System::Object CDMJFFFHGCB; // 0x0
		// static const ::System::Object HLMDHFNCJGJ; // 0x0
		// static const ::System::Object EDGGGCNOFHI; // 0x0
		// static const ::System::Object NJLAOBJPNKB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPEHPFBFOK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CFPEHPFBFOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFPEHPFBFOK*))((::PBYTE)hIl2Cpp + CFPEHPFBFOK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFPEHPFBFOK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CFPEHPFBFOK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CFPEHPFBFOK*>*(*)())((::PBYTE)hIl2Cpp + CFPEHPFBFOK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPEHPFBFOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CFPEHPFBFOK* Clone()
		{
			return ((::CFPEHPFBFOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPEHPFBFOK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HNBJHMCGEDK*>* AFBHFGBKPJN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HNBJHMCGEDK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPEHPFBFOK_AFBHFGBKPJN_OFFSET))(this);
		}

		::System::UInt32 HMPGKPMHEDF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPEHPFBFOK_HMPGKPMHEDF_OFFSET))(this);
		}

		::System::Void HFOKLPOEFJM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CFPEHPFBFOK_HFOKLPOEFJM_OFFSET))(this, a1);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPEHPFBFOK_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CFPEHPFBFOK_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::System::Boolean NHNBLJJMCKI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPEHPFBFOK_NHNBLJJMCKI_OFFSET))(this);
		}

		::System::Void JMNLBDEAPIO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFPEHPFBFOK_JMNLBDEAPIO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CFPEHPFBFOK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CFPEHPFBFOK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFPEHPFBFOK*))((::PBYTE)hIl2Cpp + CFPEHPFBFOK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPEHPFBFOK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPEHPFBFOK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CFPEHPFBFOK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPEHPFBFOK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CFPEHPFBFOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFPEHPFBFOK*))((::PBYTE)hIl2Cpp + CFPEHPFBFOK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CFPEHPFBFOK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
