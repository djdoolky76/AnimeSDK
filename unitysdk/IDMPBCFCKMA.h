#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDMPBCFCKMA;
class JJJOADIAEOH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IDMPBCFCKMA_BAJOEMAGMKD_OFFSET UNITYSDK_OFFSET(0x1F94E4B0)
#define IDMPBCFCKMA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F94E920)
#define IDMPBCFCKMA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F94ECA0)
#define IDMPBCFCKMA_CLONE_OFFSET UNITYSDK_OFFSET(0x1F94E460)
#define IDMPBCFCKMA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F94E3D0)
#define IDMPBCFCKMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F94E390)
#define IDMPBCFCKMA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F94E610)
#define IDMPBCFCKMA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F94E4C0)
#define IDMPBCFCKMA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F94E4A0)
#define IDMPBCFCKMA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F94E740)
#define IDMPBCFCKMA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F94E350)
#define IDMPBCFCKMA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F94EAD0)
#define IDMPBCFCKMA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F94EA30)
#define IDMPBCFCKMA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F94E490)
#define IDMPBCFCKMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F94E380)
#define IDMPBCFCKMA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F94E7B0)
#define IDMPBCFCKMA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F94E810)

inline static constexpr unsigned int IDMPBCFCKMA_TypeDefinitionIndex = 35113;

	class IDMPBCFCKMA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JJJOADIAEOH*>* NKHPMNAOJNO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::JJJOADIAEOH*>** StaticGet_FBBOHMFNNPB()
		{
			return (::Google::Protobuf::FieldCodec_1<::JJJOADIAEOH*>**)UnitySDK::FromName("", "IDMPBCFCKMA")->GetStaticField(0x4DD00);
		}

		static ::Google::Protobuf::MessageParser_1<::IDMPBCFCKMA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IDMPBCFCKMA*>**)UnitySDK::FromName("", "IDMPBCFCKMA")->GetStaticField(0x4DD08);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object MBIADGLJHFN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMPBCFCKMA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IDMPBCFCKMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDMPBCFCKMA*))((::PBYTE)hIl2Cpp + IDMPBCFCKMA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDMPBCFCKMA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IDMPBCFCKMA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IDMPBCFCKMA*>*(*)())((::PBYTE)hIl2Cpp + IDMPBCFCKMA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMPBCFCKMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IDMPBCFCKMA* Clone()
		{
			return ((::IDMPBCFCKMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMPBCFCKMA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMPBCFCKMA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IDMPBCFCKMA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JJJOADIAEOH*>* BAJOEMAGMKD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JJJOADIAEOH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMPBCFCKMA_BAJOEMAGMKD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDMPBCFCKMA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IDMPBCFCKMA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDMPBCFCKMA*))((::PBYTE)hIl2Cpp + IDMPBCFCKMA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMPBCFCKMA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMPBCFCKMA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IDMPBCFCKMA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMPBCFCKMA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IDMPBCFCKMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDMPBCFCKMA*))((::PBYTE)hIl2Cpp + IDMPBCFCKMA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IDMPBCFCKMA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
