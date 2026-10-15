#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABOIDFLIHMB;
class BHJEBMOOJED;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ABOIDFLIHMB_APMDEBKMBMA_OFFSET UNITYSDK_OFFSET(0x1DDD1F90)
#define ABOIDFLIHMB_BCJDHEHJPJD_OFFSET UNITYSDK_OFFSET(0x1DDD2000)
#define ABOIDFLIHMB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDD2450)
#define ABOIDFLIHMB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD2980)
#define ABOIDFLIHMB_CFHOFNAJBKG_OFFSET UNITYSDK_OFFSET(0x1DDD1FA0)
#define ABOIDFLIHMB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDD1F30)
#define ABOIDFLIHMB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDD1E70)
#define ABOIDFLIHMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD1E20)
#define ABOIDFLIHMB_DEGNNCMEBAE_OFFSET UNITYSDK_OFFSET(0x1DDD1FF0)
#define ABOIDFLIHMB_ECIICJHDEDG_OFFSET UNITYSDK_OFFSET(0x1DDD1F60)
#define ABOIDFLIHMB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDD2040)
#define ABOIDFLIHMB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDD2010)
#define ABOIDFLIHMB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DDD1F80)
#define ABOIDFLIHMB_FGGBMGCGCKF_OFFSET UNITYSDK_OFFSET(0x1DDD1FC0)
#define ABOIDFLIHMB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDD20E0)
#define ABOIDFLIHMB_JAOPBIKPOMI_OFFSET UNITYSDK_OFFSET(0x1DDD1FB0)
#define ABOIDFLIHMB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDD1DE0)
#define ABOIDFLIHMB_LNMJPHEJMHB_OFFSET UNITYSDK_OFFSET(0x1DDD1FD0)
#define ABOIDFLIHMB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDD2840)
#define ABOIDFLIHMB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDD2760)
#define ABOIDFLIHMB_NLJNGPKOCDN_OFFSET UNITYSDK_OFFSET(0x1DDD1FE0)
#define ABOIDFLIHMB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DDD1F70)
#define ABOIDFLIHMB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDD1E10)
#define ABOIDFLIHMB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDD2170)
#define ABOIDFLIHMB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDD21D0)

inline static constexpr unsigned int ABOIDFLIHMB_TypeDefinitionIndex = 26614;

	class ABOIDFLIHMB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BHJEBMOOJED*>* AJHHDDGIMGE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 FJNPLEMGDCC; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		::System::UInt32 AENFHPAGFOI; // 0x28
		::System::UInt32 LLCBPGAHNKN; // 0x2C
		::System::UInt32 KKBMGBDOFNE; // 0x30
		static ::Google::Protobuf::FieldCodec** StaticGet_GFBOCBIFBEB()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "ABOIDFLIHMB")->GetStaticField(0x2AF80);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ABOIDFLIHMB")->GetStaticField(0x2AF88);
		}

		// static const ::System::Object JCOAKBICJBD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object AIGLBIMILHL; // 0x0
		// static const ::System::Object HLGEDBNIHII; // 0x0
		// static const ::System::Object HIKBNIPHDIF; // 0x0
		// static const ::System::Object MJOMDHKDGKN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOIDFLIHMB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ABOIDFLIHMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABOIDFLIHMB*))((::PBYTE)hIl2Cpp + ABOIDFLIHMB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABOIDFLIHMB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ABOIDFLIHMB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOIDFLIHMB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ABOIDFLIHMB* Clone()
		{
			return ((::ABOIDFLIHMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOIDFLIHMB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BHJEBMOOJED*>* ECIICJHDEDG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BHJEBMOOJED*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOIDFLIHMB_ECIICJHDEDG_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOIDFLIHMB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABOIDFLIHMB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 APMDEBKMBMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOIDFLIHMB_APMDEBKMBMA_OFFSET))(this);
		}

		::System::Void CFHOFNAJBKG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABOIDFLIHMB_CFHOFNAJBKG_OFFSET))(this, a1);
		}

		::System::UInt32 JAOPBIKPOMI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOIDFLIHMB_JAOPBIKPOMI_OFFSET))(this);
		}

		::System::Void FGGBMGCGCKF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABOIDFLIHMB_FGGBMGCGCKF_OFFSET))(this, a1);
		}

		::System::UInt32 LNMJPHEJMHB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOIDFLIHMB_LNMJPHEJMHB_OFFSET))(this);
		}

		::System::Void NLJNGPKOCDN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABOIDFLIHMB_NLJNGPKOCDN_OFFSET))(this, a1);
		}

		::System::UInt32 DEGNNCMEBAE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOIDFLIHMB_DEGNNCMEBAE_OFFSET))(this);
		}

		::System::Void BCJDHEHJPJD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABOIDFLIHMB_BCJDHEHJPJD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABOIDFLIHMB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ABOIDFLIHMB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABOIDFLIHMB*))((::PBYTE)hIl2Cpp + ABOIDFLIHMB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOIDFLIHMB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOIDFLIHMB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ABOIDFLIHMB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOIDFLIHMB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ABOIDFLIHMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABOIDFLIHMB*))((::PBYTE)hIl2Cpp + ABOIDFLIHMB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ABOIDFLIHMB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
