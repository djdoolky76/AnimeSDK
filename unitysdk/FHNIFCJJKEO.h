#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHNIFCJJKEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define FHNIFCJJKEO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E391F70)
#define FHNIFCJJKEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3922F0)
#define FHNIFCJJKEO_CIHIACBANKF_OFFSET UNITYSDK_OFFSET(0x1E391970)
#define FHNIFCJJKEO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E391920)
#define FHNIFCJJKEO_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E3919A0)
#define FHNIFCJJKEO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E391860)
#define FHNIFCJJKEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E391810)
#define FHNIFCJJKEO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E391A50)
#define FHNIFCJJKEO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3919C0)
#define FHNIFCJJKEO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E391960)
#define FHNIFCJJKEO_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E3919B0)
#define FHNIFCJJKEO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E391C10)
#define FHNIFCJJKEO_HAHFLCFONPK_OFFSET UNITYSDK_OFFSET(0x1E391980)
#define FHNIFCJJKEO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3917D0)
#define FHNIFCJJKEO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3921C0)
#define FHNIFCJJKEO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E392100)
#define FHNIFCJJKEO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E391950)
#define FHNIFCJJKEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E391800)
#define FHNIFCJJKEO_PIFMOLBCDFJ_OFFSET UNITYSDK_OFFSET(0x1E391990)
#define FHNIFCJJKEO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E391D80)
#define FHNIFCJJKEO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E391DE0)

	class FHNIFCJJKEO : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JODMIOEBHIA; // 0x20
		::System::UInt32 GJJDLFJNHFJ; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x2C
		static ::Google::Protobuf::FieldCodec** StaticGet_ONFCFPLLBCK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "FHNIFCJJKEO")->GetStaticField(0x5FB20);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FHNIFCJJKEO")->GetStaticField(0x5FB28);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object ACLKHKBOAIH; // 0x0
		// static const ::System::Object IHIJGJDKHKH; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FHNIFCJJKEO_JJGHOBBFNJD_OFFSET))();
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

		::System::UInt32 CIHIACBANKF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIFCJJKEO_CIHIACBANKF_OFFSET))(this);
		}

		::System::Void HAHFLCFONPK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHNIFCJJKEO_HAHFLCFONPK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PIFMOLBCDFJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIFCJJKEO_PIFMOLBCDFJ_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIFCJJKEO_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + FHNIFCJJKEO_FJOCHFMKIKP_OFFSET))(this, a1);
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
