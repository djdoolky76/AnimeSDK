#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDOEDOEBFAJ;
class FDDNKPJEMJE;
class PJFEPJKONAA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PJFEPJKONAA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2055E920)
#define PJFEPJKONAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x2055ED50)
#define PJFEPJKONAA_CLONE_OFFSET UNITYSDK_OFFSET(0x2055E2D0)
#define PJFEPJKONAA_CMEANFEPEMN_OFFSET UNITYSDK_OFFSET(0x2055E360)
#define PJFEPJKONAA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2055E1B0)
#define PJFEPJKONAA_CTOR_OFFSET UNITYSDK_OFFSET(0x2055E160)
#define PJFEPJKONAA_DLBOHJMBFJI_OFFSET UNITYSDK_OFFSET(0x2055E320)
#define PJFEPJKONAA_EIADLPFELIP_OFFSET UNITYSDK_OFFSET(0x2055E300)
#define PJFEPJKONAA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2055E3C0)
#define PJFEPJKONAA_EQUALS_OFFSET UNITYSDK_OFFSET(0x2055E390)
#define PJFEPJKONAA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x2055E380)
#define PJFEPJKONAA_FCJHGHLBPFG_OFFSET UNITYSDK_OFFSET(0x2055E330)
#define PJFEPJKONAA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2055E590)
#define PJFEPJKONAA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2055E120)
#define PJFEPJKONAA_JMCOCLJNDPI_OFFSET UNITYSDK_OFFSET(0x2055E340)
#define PJFEPJKONAA_KKDKANBNLEG_OFFSET UNITYSDK_OFFSET(0x2055E350)
#define PJFEPJKONAA_MEKFOMNFMDC_OFFSET UNITYSDK_OFFSET(0x2055E310)
#define PJFEPJKONAA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2055EC00)
#define PJFEPJKONAA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2055EAF0)
#define PJFEPJKONAA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x2055E370)
#define PJFEPJKONAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2055E150)
#define PJFEPJKONAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2055E6D0)
#define PJFEPJKONAA_WRITETO_OFFSET UNITYSDK_OFFSET(0x2055E730)

inline static constexpr unsigned int PJFEPJKONAA_TypeDefinitionIndex = 27611;

	class PJFEPJKONAA : public ::System::Object
	{
	public:
		::FDDNKPJEMJE* MBIKIHENEPK; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NLKMPGCBMNN; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::BDOEDOEBFAJ* PAALOHCEIPF; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x30
		::System::UInt32 KDNFLMOFHID; // 0x34
		static ::Google::Protobuf::MessageParser_1<::PJFEPJKONAA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PJFEPJKONAA*>**)UnitySDK::FromName("", "PJFEPJKONAA")->GetStaticField(0x3EC10);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JDDBOEGDPIE()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PJFEPJKONAA")->GetStaticField(0x3EC18);
		}

		// static const ::System::Object IGGNGGDMEAI; // 0x0
		// static const ::System::Object PBJBKNPOKBA; // 0x0
		// static const ::System::Object IHNJIPCMLNP; // 0x0
		// static const ::System::Object LAHMLCOBLAP; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFEPJKONAA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PJFEPJKONAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJFEPJKONAA*))((::PBYTE)hIl2Cpp + PJFEPJKONAA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJFEPJKONAA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PJFEPJKONAA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PJFEPJKONAA*>*(*)())((::PBYTE)hIl2Cpp + PJFEPJKONAA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFEPJKONAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PJFEPJKONAA* Clone()
		{
			return ((::PJFEPJKONAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFEPJKONAA_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIADLPFELIP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFEPJKONAA_EIADLPFELIP_OFFSET))(this);
		}

		::System::Void MEKFOMNFMDC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJFEPJKONAA_MEKFOMNFMDC_OFFSET))(this, a1);
		}

		::BDOEDOEBFAJ* DLBOHJMBFJI()
		{
			return ((::BDOEDOEBFAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFEPJKONAA_DLBOHJMBFJI_OFFSET))(this);
		}

		::System::Void FCJHGHLBPFG(::BDOEDOEBFAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDOEDOEBFAJ*))((::PBYTE)hIl2Cpp + PJFEPJKONAA_FCJHGHLBPFG_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JMCOCLJNDPI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFEPJKONAA_JMCOCLJNDPI_OFFSET))(this);
		}

		::FDDNKPJEMJE* KKDKANBNLEG()
		{
			return ((::FDDNKPJEMJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFEPJKONAA_KKDKANBNLEG_OFFSET))(this);
		}

		::System::Void CMEANFEPEMN(::FDDNKPJEMJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDDNKPJEMJE*))((::PBYTE)hIl2Cpp + PJFEPJKONAA_CMEANFEPEMN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFEPJKONAA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJFEPJKONAA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJFEPJKONAA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PJFEPJKONAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PJFEPJKONAA*))((::PBYTE)hIl2Cpp + PJFEPJKONAA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFEPJKONAA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFEPJKONAA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PJFEPJKONAA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFEPJKONAA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PJFEPJKONAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJFEPJKONAA*))((::PBYTE)hIl2Cpp + PJFEPJKONAA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PJFEPJKONAA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
