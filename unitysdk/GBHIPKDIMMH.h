#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBHIPKDIMMH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GBHIPKDIMMH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E42C010)
#define GBHIPKDIMMH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E42C300)
#define GBHIPKDIMMH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E42BB80)
#define GBHIPKDIMMH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E42BAF0)
#define GBHIPKDIMMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E42BAA0)
#define GBHIPKDIMMH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E42BCE0)
#define GBHIPKDIMMH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E42BBE0)
#define GBHIPKDIMMH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E42BBC0)
#define GBHIPKDIMMH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E42BDD0)
#define GBHIPKDIMMH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E42BA60)
#define GBHIPKDIMMH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E42C140)
#define GBHIPKDIMMH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E42C0F0)
#define GBHIPKDIMMH_MKGGFJLECGJ_OFFSET UNITYSDK_OFFSET(0x1E42BBD0)
#define GBHIPKDIMMH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E42BBB0)
#define GBHIPKDIMMH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E42BA90)
#define GBHIPKDIMMH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E42BED0)
#define GBHIPKDIMMH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E42BF30)

inline static constexpr unsigned int GBHIPKDIMMH_TypeDefinitionIndex = 34694;

	class GBHIPKDIMMH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JLLKKPOPNEC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_BBBDHEACGFL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GBHIPKDIMMH")->GetStaticField(0xD000);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GBHIPKDIMMH")->GetStaticField(0xD008);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object GEIJLLIDHFJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHIPKDIMMH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GBHIPKDIMMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBHIPKDIMMH*))((::PBYTE)hIl2Cpp + GBHIPKDIMMH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBHIPKDIMMH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GBHIPKDIMMH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHIPKDIMMH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GBHIPKDIMMH* Clone()
		{
			return ((::GBHIPKDIMMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHIPKDIMMH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHIPKDIMMH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GBHIPKDIMMH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MKGGFJLECGJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHIPKDIMMH_MKGGFJLECGJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBHIPKDIMMH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GBHIPKDIMMH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GBHIPKDIMMH*))((::PBYTE)hIl2Cpp + GBHIPKDIMMH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHIPKDIMMH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHIPKDIMMH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GBHIPKDIMMH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHIPKDIMMH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GBHIPKDIMMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBHIPKDIMMH*))((::PBYTE)hIl2Cpp + GBHIPKDIMMH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GBHIPKDIMMH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
