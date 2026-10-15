#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNOHHOEPFHC.h"
#include "unitysdk/System/Object.h"
class NGHMPPEHAIL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define NGHMPPEHAIL_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1EAE3590)
#define NGHMPPEHAIL_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1EAE35A0)
#define NGHMPPEHAIL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAE3BB0)
#define NGHMPPEHAIL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE3FA0)
#define NGHMPPEHAIL_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAE3560)
#define NGHMPPEHAIL_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1EAE35E0)
#define NGHMPPEHAIL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAE3490)
#define NGHMPPEHAIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE3440)
#define NGHMPPEHAIL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAE3690)
#define NGHMPPEHAIL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAE3600)
#define NGHMPPEHAIL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EAE35D0)
#define NGHMPPEHAIL_FCOBDHNFGHL_OFFSET UNITYSDK_OFFSET(0x1EAE35B0)
#define NGHMPPEHAIL_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1EAE35F0)
#define NGHMPPEHAIL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAE3850)
#define NGHMPPEHAIL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAE3400)
#define NGHMPPEHAIL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAE3E50)
#define NGHMPPEHAIL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAE3D90)
#define NGHMPPEHAIL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EAE35C0)
#define NGHMPPEHAIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAE3430)
#define NGHMPPEHAIL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAE39B0)
#define NGHMPPEHAIL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAE3A10)

inline static constexpr unsigned int NGHMPPEHAIL_TypeDefinitionIndex = 26406;

	class NGHMPPEHAIL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BCFMDHGOMPO; // 0x18
		::Proto::ItemList* JDAFJANAEBG; // 0x20
		::HNOHHOEPFHC LJDBCGPFFDH; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NMGKHPKFIOL()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NGHMPPEHAIL")->GetStaticField(0x63C60);
		}

		static ::Google::Protobuf::MessageParser_1<::NGHMPPEHAIL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NGHMPPEHAIL*>**)UnitySDK::FromName("", "NGHMPPEHAIL")->GetStaticField(0x63C68);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object NCJJKFFCAGI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHMPPEHAIL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NGHMPPEHAIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGHMPPEHAIL*))((::PBYTE)hIl2Cpp + NGHMPPEHAIL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGHMPPEHAIL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NGHMPPEHAIL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NGHMPPEHAIL*>*(*)())((::PBYTE)hIl2Cpp + NGHMPPEHAIL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHMPPEHAIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NGHMPPEHAIL* Clone()
		{
			return ((::NGHMPPEHAIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHMPPEHAIL_CLONE_OFFSET))(this);
		}

		::HNOHHOEPFHC AENLBGLIBJL()
		{
			return ((::HNOHHOEPFHC(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHMPPEHAIL_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::HNOHHOEPFHC a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNOHHOEPFHC))((::PBYTE)hIl2Cpp + NGHMPPEHAIL_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FCOBDHNFGHL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHMPPEHAIL_FCOBDHNFGHL_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHMPPEHAIL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGHMPPEHAIL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHMPPEHAIL_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + NGHMPPEHAIL_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGHMPPEHAIL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NGHMPPEHAIL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGHMPPEHAIL*))((::PBYTE)hIl2Cpp + NGHMPPEHAIL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHMPPEHAIL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHMPPEHAIL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NGHMPPEHAIL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHMPPEHAIL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NGHMPPEHAIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGHMPPEHAIL*))((::PBYTE)hIl2Cpp + NGHMPPEHAIL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NGHMPPEHAIL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
