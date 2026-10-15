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

#define GBHIPKDIMMH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3FE920)
#define GBHIPKDIMMH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3FEC10)
#define GBHIPKDIMMH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3FE490)
#define GBHIPKDIMMH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3FE400)
#define GBHIPKDIMMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3FE3B0)
#define GBHIPKDIMMH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3FE5F0)
#define GBHIPKDIMMH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3FE4F0)
#define GBHIPKDIMMH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3FE4D0)
#define GBHIPKDIMMH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3FE6E0)
#define GBHIPKDIMMH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3FE370)
#define GBHIPKDIMMH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3FEA50)
#define GBHIPKDIMMH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3FEA00)
#define GBHIPKDIMMH_MKGGFJLECGJ_OFFSET UNITYSDK_OFFSET(0x1E3FE4E0)
#define GBHIPKDIMMH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3FE4C0)
#define GBHIPKDIMMH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3FE3A0)
#define GBHIPKDIMMH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3FE7E0)
#define GBHIPKDIMMH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3FE840)

inline static constexpr unsigned int GBHIPKDIMMH_TypeDefinitionIndex = 34694;

	class GBHIPKDIMMH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JLLKKPOPNEC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GBHIPKDIMMH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GBHIPKDIMMH*>**)UnitySDK::FromName("", "GBHIPKDIMMH")->GetStaticField(0xC870);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BBBDHEACGFL()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GBHIPKDIMMH")->GetStaticField(0xC878);
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
