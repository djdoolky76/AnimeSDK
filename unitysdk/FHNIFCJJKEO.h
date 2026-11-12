#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHNIFCJJKEO;
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

#define FHNIFCJJKEO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F696E40)
#define FHNIFCJJKEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6971E0)
#define FHNIFCJJKEO_CIHIACBANKF_OFFSET UNITYSDK_OFFSET(0x1F6967E0)
#define FHNIFCJJKEO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F696760)
#define FHNIFCJJKEO_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1F6967B0)
#define FHNIFCJJKEO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F696680)
#define FHNIFCJJKEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F696630)
#define FHNIFCJJKEO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F696930)
#define FHNIFCJJKEO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F696800)
#define FHNIFCJJKEO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F6967A0)
#define FHNIFCJJKEO_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1F6967C0)
#define FHNIFCJJKEO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F696AE0)
#define FHNIFCJJKEO_HAHFLCFONPK_OFFSET UNITYSDK_OFFSET(0x1F6967F0)
#define FHNIFCJJKEO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F6965F0)
#define FHNIFCJJKEO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F6970A0)
#define FHNIFCJJKEO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F696FE0)
#define FHNIFCJJKEO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F696790)
#define FHNIFCJJKEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F696620)
#define FHNIFCJJKEO_PIFMOLBCDFJ_OFFSET UNITYSDK_OFFSET(0x1F6967D0)
#define FHNIFCJJKEO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F696C50)
#define FHNIFCJJKEO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F696CB0)

inline static constexpr unsigned int FHNIFCJJKEO_TypeDefinitionIndex = 34617;

	class FHNIFCJJKEO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JODMIOEBHIA; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		::System::UInt32 GJJDLFJNHFJ; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::FHNIFCJJKEO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FHNIFCJJKEO*>**)UnitySDK::FromName("", "FHNIFCJJKEO")->GetStaticField(0x44110);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_ONFCFPLLBCK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FHNIFCJJKEO")->GetStaticField(0x44118);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object IHIJGJDKHKH; // 0x0
		// static const ::System::Object ACLKHKBOAIH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIFCJJKEO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FHNIFCJJKEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHNIFCJJKEO*))((::PBYTE)hIl2Cpp + FHNIFCJJKEO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHNIFCJJKEO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FHNIFCJJKEO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FHNIFCJJKEO*>*(*)())((::PBYTE)hIl2Cpp + FHNIFCJJKEO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIFCJJKEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FHNIFCJJKEO* Clone()
		{
			return ((::FHNIFCJJKEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIFCJJKEO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIFCJJKEO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHNIFCJJKEO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIFCJJKEO_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + FHNIFCJJKEO_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PIFMOLBCDFJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIFCJJKEO_PIFMOLBCDFJ_OFFSET))(this);
		}

		::System::UInt32 CIHIACBANKF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIFCJJKEO_CIHIACBANKF_OFFSET))(this);
		}

		::System::Void HAHFLCFONPK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHNIFCJJKEO_HAHFLCFONPK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHNIFCJJKEO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FHNIFCJJKEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHNIFCJJKEO*))((::PBYTE)hIl2Cpp + FHNIFCJJKEO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIFCJJKEO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIFCJJKEO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FHNIFCJJKEO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIFCJJKEO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FHNIFCJJKEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHNIFCJJKEO*))((::PBYTE)hIl2Cpp + FHNIFCJJKEO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FHNIFCJJKEO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
