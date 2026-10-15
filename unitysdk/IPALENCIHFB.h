#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALIOECIFDKK;
class GEGKPEHKGCB;
class IPALENCIHFB;
class KHNBFDNKLHE;
class PKPICFPDHEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IPALENCIHFB_ALHMOJMJOKN_OFFSET UNITYSDK_OFFSET(0x1E6DC160)
#define IPALENCIHFB_CAEHAPGJBIP_OFFSET UNITYSDK_OFFSET(0x1E6DC150)
#define IPALENCIHFB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6DC790)
#define IPALENCIHFB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6DCCF0)
#define IPALENCIHFB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6DC0D0)
#define IPALENCIHFB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6DBF70)
#define IPALENCIHFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DBF30)
#define IPALENCIHFB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6DC1C0)
#define IPALENCIHFB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6DC190)
#define IPALENCIHFB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E6DC180)
#define IPALENCIHFB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6DC450)
#define IPALENCIHFB_IPFDMFDOKHJ_OFFSET UNITYSDK_OFFSET(0x1E6DC110)
#define IPALENCIHFB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6DBEF0)
#define IPALENCIHFB_KNAPCHCBNKH_OFFSET UNITYSDK_OFFSET(0x1E6DC140)
#define IPALENCIHFB_LCKKGPFEKHM_OFFSET UNITYSDK_OFFSET(0x1E6DC120)
#define IPALENCIHFB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6DCB20)
#define IPALENCIHFB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6DC970)
#define IPALENCIHFB_NDGJGMEFMLH_OFFSET UNITYSDK_OFFSET(0x1E6DC100)
#define IPALENCIHFB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E6DC170)
#define IPALENCIHFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6DBF20)
#define IPALENCIHFB_PCMILGJDBHF_OFFSET UNITYSDK_OFFSET(0x1E6DC130)
#define IPALENCIHFB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6DC500)
#define IPALENCIHFB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6DC560)

inline static constexpr unsigned int IPALENCIHFB_TypeDefinitionIndex = 26798;

	class IPALENCIHFB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::ALIOECIFDKK* FGOINBLCEJK; // 0x18
		::KHNBFDNKLHE* CHFNJJAMCCO; // 0x20
		::GEGKPEHKGCB* DJHECKEIEBP; // 0x28
		::Google::Protobuf::Collections::RepeatedField_1<::PKPICFPDHEO*>* MDELKGNPIOF; // 0x30
		::System::UInt32 NAEACGPKNNH; // 0x38
		static ::Google::Protobuf::MessageParser_1<::IPALENCIHFB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IPALENCIHFB*>**)UnitySDK::FromName("", "IPALENCIHFB")->GetStaticField(0x5A960);
		}

		static ::Google::Protobuf::FieldCodec_1<::PKPICFPDHEO*>** StaticGet_GAINFCCDPFB()
		{
			return (::Google::Protobuf::FieldCodec_1<::PKPICFPDHEO*>**)UnitySDK::FromName("", "IPALENCIHFB")->GetStaticField(0x5A968);
		}

		// static const ::System::Object CJDOLCNNPKL; // 0x0
		// static const ::System::Object EFEMONKDOCM; // 0x0
		// static const ::System::Object ACACECPPJBJ; // 0x0
		// static const ::System::Object DJMNEFOAEEE; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPALENCIHFB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IPALENCIHFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPALENCIHFB*))((::PBYTE)hIl2Cpp + IPALENCIHFB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPALENCIHFB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IPALENCIHFB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IPALENCIHFB*>*(*)())((::PBYTE)hIl2Cpp + IPALENCIHFB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPALENCIHFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IPALENCIHFB* Clone()
		{
			return ((::IPALENCIHFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPALENCIHFB_CLONE_OFFSET))(this);
		}

		::KHNBFDNKLHE* NDGJGMEFMLH()
		{
			return ((::KHNBFDNKLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPALENCIHFB_NDGJGMEFMLH_OFFSET))(this);
		}

		::System::Void IPFDMFDOKHJ(::KHNBFDNKLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + IPALENCIHFB_IPFDMFDOKHJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PKPICFPDHEO*>* LCKKGPFEKHM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PKPICFPDHEO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPALENCIHFB_LCKKGPFEKHM_OFFSET))(this);
		}

		::GEGKPEHKGCB* PCMILGJDBHF()
		{
			return ((::GEGKPEHKGCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPALENCIHFB_PCMILGJDBHF_OFFSET))(this);
		}

		::System::Void KNAPCHCBNKH(::GEGKPEHKGCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEGKPEHKGCB*))((::PBYTE)hIl2Cpp + IPALENCIHFB_KNAPCHCBNKH_OFFSET))(this, a1);
		}

		::ALIOECIFDKK* CAEHAPGJBIP()
		{
			return ((::ALIOECIFDKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPALENCIHFB_CAEHAPGJBIP_OFFSET))(this);
		}

		::System::Void ALHMOJMJOKN(::ALIOECIFDKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALIOECIFDKK*))((::PBYTE)hIl2Cpp + IPALENCIHFB_ALHMOJMJOKN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPALENCIHFB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IPALENCIHFB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IPALENCIHFB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IPALENCIHFB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IPALENCIHFB*))((::PBYTE)hIl2Cpp + IPALENCIHFB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPALENCIHFB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPALENCIHFB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IPALENCIHFB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPALENCIHFB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IPALENCIHFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPALENCIHFB*))((::PBYTE)hIl2Cpp + IPALENCIHFB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IPALENCIHFB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
