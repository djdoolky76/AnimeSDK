#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBHIPKDIMMH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GBHIPKDIMMH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F719CB0)
#define GBHIPKDIMMH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F719FA0)
#define GBHIPKDIMMH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F719820)
#define GBHIPKDIMMH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F719790)
#define GBHIPKDIMMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F719740)
#define GBHIPKDIMMH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F719980)
#define GBHIPKDIMMH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F719880)
#define GBHIPKDIMMH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F719860)
#define GBHIPKDIMMH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F719A70)
#define GBHIPKDIMMH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F719700)
#define GBHIPKDIMMH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F719DE0)
#define GBHIPKDIMMH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F719D90)
#define GBHIPKDIMMH_MKGGFJLECGJ_OFFSET UNITYSDK_OFFSET(0x1F719870)
#define GBHIPKDIMMH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F719850)
#define GBHIPKDIMMH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F719730)
#define GBHIPKDIMMH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F719B70)
#define GBHIPKDIMMH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F719BD0)

inline static constexpr unsigned int GBHIPKDIMMH_TypeDefinitionIndex = 35622;

	class GBHIPKDIMMH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JLLKKPOPNEC; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GBHIPKDIMMH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GBHIPKDIMMH*>**)UnitySDK::FromName("", "GBHIPKDIMMH")->GetStaticField(0x55600);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BBBDHEACGFL()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GBHIPKDIMMH")->GetStaticField(0x55608);
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

		static ::Google::Protobuf::MessageParser_1<::GBHIPKDIMMH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GBHIPKDIMMH*>*(*)())((::PBYTE)hIl2Cpp + GBHIPKDIMMH_JJGHOBBFNJD_OFFSET))();
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
