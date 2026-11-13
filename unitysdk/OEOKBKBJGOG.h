#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPOIHCAEPIP.h"
#include "unitysdk/System/Object.h"
class EAJEMNNNEBM;
class FCHMJNONHPE;
class NPDKKNACMHC;
class OEOKBKBJGOG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OEOKBKBJGOG_ALKDCANAIOH_OFFSET UNITYSDK_OFFSET(0x1FB67050)
#define OEOKBKBJGOG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F1F4880)
#define OEOKBKBJGOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1F4DB0)
#define OEOKBKBJGOG_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB66FD0)
#define OEOKBKBJGOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB66EB0)
#define OEOKBKBJGOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB66E30)
#define OEOKBKBJGOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F1F4470)
#define OEOKBKBJGOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F1F4440)
#define OEOKBKBJGOG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FB67020)
#define OEOKBKBJGOG_FBFKAMDDMHL_OFFSET UNITYSDK_OFFSET(0x1FB67040)
#define OEOKBKBJGOG_FGKHPIHODAM_OFFSET UNITYSDK_OFFSET(0x1FB67000)
#define OEOKBKBJGOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F1F4550)
#define OEOKBKBJGOG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB66DF0)
#define OEOKBKBJGOG_KHOKANPMAMP_OFFSET UNITYSDK_OFFSET(0x1F1F4430)
#define OEOKBKBJGOG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F1F4C40)
#define OEOKBKBJGOG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F1F4AE0)
#define OEOKBKBJGOG_MPDCJCAILOI_OFFSET UNITYSDK_OFFSET(0x1FB67030)
#define OEOKBKBJGOG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FB67010)
#define OEOKBKBJGOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB66E20)
#define OEOKBKBJGOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F1F4610)
#define OEOKBKBJGOG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F1F4670)

inline static constexpr unsigned int OEOKBKBJGOG_TypeDefinitionIndex = 30642;

	class OEOKBKBJGOG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::EAJEMNNNEBM*>* DMCJFOLDMOD; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::FCHMJNONHPE*>* HCDNMDOKDIG; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::NPDKKNACMHC*>* KNIMBIFALMJ; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::FPOIHCAEPIP OLOMHPFGGJI; // 0x30
		::System::UInt32 NAEACGPKNNH; // 0x34
		static ::Google::Protobuf::FieldCodec_1<::NPDKKNACMHC*>** StaticGet_HPMHAKDGNBA()
		{
			return (::Google::Protobuf::FieldCodec_1<::NPDKKNACMHC*>**)UnitySDK::FromName("", "OEOKBKBJGOG")->GetStaticField(0x10580);
		}

		static ::Google::Protobuf::FieldCodec_1<::FCHMJNONHPE*>** StaticGet_DCGPNGNPPHG()
		{
			return (::Google::Protobuf::FieldCodec_1<::FCHMJNONHPE*>**)UnitySDK::FromName("", "OEOKBKBJGOG")->GetStaticField(0x10588);
		}

		static ::Google::Protobuf::FieldCodec_1<::EAJEMNNNEBM*>** StaticGet_DAOGJCCJBII()
		{
			return (::Google::Protobuf::FieldCodec_1<::EAJEMNNNEBM*>**)UnitySDK::FromName("", "OEOKBKBJGOG")->GetStaticField(0x10590);
		}

		static ::Google::Protobuf::MessageParser_1<::OEOKBKBJGOG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OEOKBKBJGOG*>**)UnitySDK::FromName("", "OEOKBKBJGOG")->GetStaticField(0x10598);
		}

		// static const ::System::Object GLOHHIIGNFG; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object KGCNGDEJFKI; // 0x0
		// static const ::System::Object ACDBHAJCAJL; // 0x0
		// static const ::System::Object COJJAEJPODD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOKBKBJGOG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OEOKBKBJGOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEOKBKBJGOG*))((::PBYTE)hIl2Cpp + OEOKBKBJGOG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEOKBKBJGOG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OEOKBKBJGOG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OEOKBKBJGOG*>*(*)())((::PBYTE)hIl2Cpp + OEOKBKBJGOG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOKBKBJGOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OEOKBKBJGOG* Clone()
		{
			return ((::OEOKBKBJGOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOKBKBJGOG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FCHMJNONHPE*>* FGKHPIHODAM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FCHMJNONHPE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOKBKBJGOG_FGKHPIHODAM_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOKBKBJGOG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OEOKBKBJGOG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::FPOIHCAEPIP MPDCJCAILOI()
		{
			return ((::FPOIHCAEPIP(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOKBKBJGOG_MPDCJCAILOI_OFFSET))(this);
		}

		::System::Void FBFKAMDDMHL(::FPOIHCAEPIP a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPOIHCAEPIP))((::PBYTE)hIl2Cpp + OEOKBKBJGOG_FBFKAMDDMHL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NPDKKNACMHC*>* ALKDCANAIOH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NPDKKNACMHC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOKBKBJGOG_ALKDCANAIOH_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EAJEMNNNEBM*>* KHOKANPMAMP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EAJEMNNNEBM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOKBKBJGOG_KHOKANPMAMP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OEOKBKBJGOG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OEOKBKBJGOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OEOKBKBJGOG*))((::PBYTE)hIl2Cpp + OEOKBKBJGOG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOKBKBJGOG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOKBKBJGOG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OEOKBKBJGOG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOKBKBJGOG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OEOKBKBJGOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEOKBKBJGOG*))((::PBYTE)hIl2Cpp + OEOKBKBJGOG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OEOKBKBJGOG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
