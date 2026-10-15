#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIMCAMJABNA.h"
#include "unitysdk/AMEIKAGDIFC.h"
#include "unitysdk/System/Object.h"
class CGMCMAKMJDK;
class OHKCDFGPCKM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OHKCDFGPCKM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE63E60)
#define OHKCDFGPCKM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE64280)
#define OHKCDFGPCKM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE63970)
#define OHKCDFGPCKM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE638D0)
#define OHKCDFGPCKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE63890)
#define OHKCDFGPCKM_DIEHCNJKJKE_OFFSET UNITYSDK_OFFSET(0x1DE639F0)
#define OHKCDFGPCKM_EJDIMEGMAKG_OFFSET UNITYSDK_OFFSET(0x1DE639A0)
#define OHKCDFGPCKM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE63A40)
#define OHKCDFGPCKM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE63A10)
#define OHKCDFGPCKM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE63B80)
#define OHKCDFGPCKM_GOIACKBBPOD_OFFSET UNITYSDK_OFFSET(0x1DE639B0)
#define OHKCDFGPCKM_IFBMOPKDPBJ_OFFSET UNITYSDK_OFFSET(0x1DE639D0)
#define OHKCDFGPCKM_JCPDLCEMDBC_OFFSET UNITYSDK_OFFSET(0x1DE63A00)
#define OHKCDFGPCKM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE63850)
#define OHKCDFGPCKM_KACJKJJDAKD_OFFSET UNITYSDK_OFFSET(0x1DE639C0)
#define OHKCDFGPCKM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE641A0)
#define OHKCDFGPCKM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE640E0)
#define OHKCDFGPCKM_NAHFLJDEOHC_OFFSET UNITYSDK_OFFSET(0x1DE639E0)
#define OHKCDFGPCKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE63880)
#define OHKCDFGPCKM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE63C00)
#define OHKCDFGPCKM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE63C60)

inline static constexpr unsigned int OHKCDFGPCKM_TypeDefinitionIndex = 27423;

	class OHKCDFGPCKM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::CGMCMAKMJDK*>* IJBPFEJMAOB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 GDNNKAAPOBM; // 0x20
		::AIMCAMJABNA EMHBAOIIKLC; // 0x24
		::AMEIKAGDIFC PBIFKHKNAHM; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OHKCDFGPCKM")->GetStaticField(0x1B1E0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_EKGIINENDAM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OHKCDFGPCKM")->GetStaticField(0x1B1E8);
		}

		// static const ::System::Object NINHOJDICNH; // 0x0
		// static const ::System::Object DLAAOCPMHEH; // 0x0
		// static const ::System::Object MBAGKFANLCH; // 0x0
		// static const ::System::Object NDDAKDFJBOD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKCDFGPCKM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OHKCDFGPCKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHKCDFGPCKM*))((::PBYTE)hIl2Cpp + OHKCDFGPCKM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHKCDFGPCKM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OHKCDFGPCKM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKCDFGPCKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OHKCDFGPCKM* Clone()
		{
			return ((::OHKCDFGPCKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKCDFGPCKM_CLONE_OFFSET))(this);
		}

		::AIMCAMJABNA EJDIMEGMAKG()
		{
			return ((::AIMCAMJABNA(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKCDFGPCKM_EJDIMEGMAKG_OFFSET))(this);
		}

		::System::Void GOIACKBBPOD(::AIMCAMJABNA a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIMCAMJABNA))((::PBYTE)hIl2Cpp + OHKCDFGPCKM_GOIACKBBPOD_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CGMCMAKMJDK*>* KACJKJJDAKD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CGMCMAKMJDK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKCDFGPCKM_KACJKJJDAKD_OFFSET))(this);
		}

		::AMEIKAGDIFC IFBMOPKDPBJ()
		{
			return ((::AMEIKAGDIFC(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKCDFGPCKM_IFBMOPKDPBJ_OFFSET))(this);
		}

		::System::Void NAHFLJDEOHC(::AMEIKAGDIFC a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMEIKAGDIFC))((::PBYTE)hIl2Cpp + OHKCDFGPCKM_NAHFLJDEOHC_OFFSET))(this, a1);
		}

		::System::UInt32 DIEHCNJKJKE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKCDFGPCKM_DIEHCNJKJKE_OFFSET))(this);
		}

		::System::Void JCPDLCEMDBC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OHKCDFGPCKM_JCPDLCEMDBC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OHKCDFGPCKM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OHKCDFGPCKM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OHKCDFGPCKM*))((::PBYTE)hIl2Cpp + OHKCDFGPCKM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKCDFGPCKM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKCDFGPCKM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OHKCDFGPCKM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKCDFGPCKM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OHKCDFGPCKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHKCDFGPCKM*))((::PBYTE)hIl2Cpp + OHKCDFGPCKM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OHKCDFGPCKM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
