#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGELADNAOL;
class PDGEJKAMNJO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PDGEJKAMNJO_BIOOHPIHADO_OFFSET UNITYSDK_OFFSET(0x1DF0E670)
#define PDGEJKAMNJO_BMDGCNADLKC_OFFSET UNITYSDK_OFFSET(0x1DF0E660)
#define PDGEJKAMNJO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF0EB50)
#define PDGEJKAMNJO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF0EF80)
#define PDGEJKAMNJO_CLCNPIJOIBL_OFFSET UNITYSDK_OFFSET(0x1DF0E680)
#define PDGEJKAMNJO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF0E610)
#define PDGEJKAMNJO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF0E570)
#define PDGEJKAMNJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF0E530)
#define PDGEJKAMNJO_EEBLEFFIHBP_OFFSET UNITYSDK_OFFSET(0x1DF0E650)
#define PDGEJKAMNJO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF0E7F0)
#define PDGEJKAMNJO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF0E690)
#define PDGEJKAMNJO_FLBBKCLCCNN_OFFSET UNITYSDK_OFFSET(0x1DF0E640)
#define PDGEJKAMNJO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF0E920)
#define PDGEJKAMNJO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF0E4F0)
#define PDGEJKAMNJO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF0EDA0)
#define PDGEJKAMNJO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF0ECF0)
#define PDGEJKAMNJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF0E520)
#define PDGEJKAMNJO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF0E990)
#define PDGEJKAMNJO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF0E9F0)

inline static constexpr unsigned int PDGEJKAMNJO_TypeDefinitionIndex = 32410;

	class PDGEJKAMNJO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::CAGELADNAOL*>* BOODOGENLJC; // 0x18
		::System::UInt32 PLKGEBACJMA; // 0x20
		::System::UInt32 MGPCOLIAECE; // 0x24
		static ::Google::Protobuf::FieldCodec** StaticGet_JIOPMDOLJGA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PDGEJKAMNJO")->GetStaticField(0x36C20);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PDGEJKAMNJO")->GetStaticField(0x36C28);
		}

		// static const ::System::Object PADIHFGJFIP; // 0x0
		// static const ::System::Object OEAKKPCOOJF; // 0x0
		// static const ::System::Object BOGFCKKNGJB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGEJKAMNJO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PDGEJKAMNJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDGEJKAMNJO*))((::PBYTE)hIl2Cpp + PDGEJKAMNJO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDGEJKAMNJO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PDGEJKAMNJO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGEJKAMNJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PDGEJKAMNJO* Clone()
		{
			return ((::PDGEJKAMNJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGEJKAMNJO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CAGELADNAOL*>* FLBBKCLCCNN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CAGELADNAOL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGEJKAMNJO_FLBBKCLCCNN_OFFSET))(this);
		}

		::System::UInt32 EEBLEFFIHBP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGEJKAMNJO_EEBLEFFIHBP_OFFSET))(this);
		}

		::System::Void BMDGCNADLKC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDGEJKAMNJO_BMDGCNADLKC_OFFSET))(this, a1);
		}

		::System::UInt32 BIOOHPIHADO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGEJKAMNJO_BIOOHPIHADO_OFFSET))(this);
		}

		::System::Void CLCNPIJOIBL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDGEJKAMNJO_CLCNPIJOIBL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PDGEJKAMNJO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PDGEJKAMNJO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PDGEJKAMNJO*))((::PBYTE)hIl2Cpp + PDGEJKAMNJO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGEJKAMNJO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGEJKAMNJO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PDGEJKAMNJO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGEJKAMNJO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PDGEJKAMNJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDGEJKAMNJO*))((::PBYTE)hIl2Cpp + PDGEJKAMNJO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PDGEJKAMNJO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
