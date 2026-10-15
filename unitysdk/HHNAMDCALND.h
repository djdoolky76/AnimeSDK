#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGEHGBKOBEF;
class FHEGNOPNICH;
class HHNAMDCALND;
class KHNBFDNKLHE;
class PKPICFPDHEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HHNAMDCALND_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E58C040)
#define HHNAMDCALND_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E58C4B0)
#define HHNAMDCALND_CLONE_OFFSET UNITYSDK_OFFSET(0x1E58B960)
#define HHNAMDCALND_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E58B860)
#define HHNAMDCALND_CTOR_OFFSET UNITYSDK_OFFSET(0x1E58B850)
#define HHNAMDCALND_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E58BA60)
#define HHNAMDCALND_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E58BA30)
#define HHNAMDCALND_FAAJLIEJCCO_OFFSET UNITYSDK_OFFSET(0x1E58B9C0)
#define HHNAMDCALND_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E58B9A0)
#define HHNAMDCALND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E58BD40)
#define HHNAMDCALND_HGAGGIFCLAA_OFFSET UNITYSDK_OFFSET(0x1E58BA00)
#define HHNAMDCALND_IPFDMFDOKHJ_OFFSET UNITYSDK_OFFSET(0x1E58BA20)
#define HHNAMDCALND_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0x1E58B9D0)
#define HHNAMDCALND_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E58B810)
#define HHNAMDCALND_JNHIJCFBJLE_OFFSET UNITYSDK_OFFSET(0x1E58B9F0)
#define HHNAMDCALND_MDGINAIKHBE_OFFSET UNITYSDK_OFFSET(0x1E58B9B0)
#define HHNAMDCALND_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E58C330)
#define HHNAMDCALND_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E58C1B0)
#define HHNAMDCALND_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0x1E58B9E0)
#define HHNAMDCALND_NDGJGMEFMLH_OFFSET UNITYSDK_OFFSET(0x1E58BA10)
#define HHNAMDCALND_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E58B990)
#define HHNAMDCALND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E58B840)
#define HHNAMDCALND_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E58BDF0)
#define HHNAMDCALND_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E58BE50)

inline static constexpr unsigned int HHNAMDCALND_TypeDefinitionIndex = 32702;

	class HHNAMDCALND : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FHEGNOPNICH* ICCCGPOGDIO; // 0x18
		::PKPICFPDHEO* MNJNMPKLFAI; // 0x20
		::KHNBFDNKLHE* CHFNJJAMCCO; // 0x28
		::AGEHGBKOBEF* GIGAAAKGAHL; // 0x30
		::System::UInt32 NAEACGPKNNH; // 0x38
		static ::Google::Protobuf::MessageParser_1<::HHNAMDCALND*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HHNAMDCALND*>**)UnitySDK::FromName("", "HHNAMDCALND")->GetStaticField(0x3A500);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IPBKHFKCFJB; // 0x0
		// static const ::System::Object KBMGGGHELJP; // 0x0
		// static const ::System::Object ODMJKLKBCOO; // 0x0
		// static const ::System::Object CJDOLCNNPKL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNAMDCALND_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HHNAMDCALND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHNAMDCALND*))((::PBYTE)hIl2Cpp + HHNAMDCALND_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHNAMDCALND_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HHNAMDCALND*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HHNAMDCALND*>*(*)())((::PBYTE)hIl2Cpp + HHNAMDCALND_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNAMDCALND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HHNAMDCALND* Clone()
		{
			return ((::HHNAMDCALND*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNAMDCALND_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNAMDCALND_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HHNAMDCALND_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::FHEGNOPNICH* MDGINAIKHBE()
		{
			return ((::FHEGNOPNICH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNAMDCALND_MDGINAIKHBE_OFFSET))(this);
		}

		::System::Void FAAJLIEJCCO(::FHEGNOPNICH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHEGNOPNICH*))((::PBYTE)hIl2Cpp + HHNAMDCALND_FAAJLIEJCCO_OFFSET))(this, a1);
		}

		::PKPICFPDHEO* JIFPIGBJFEH()
		{
			return ((::PKPICFPDHEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNAMDCALND_JIFPIGBJFEH_OFFSET))(this);
		}

		::System::Void MIILIPJBOKO(::PKPICFPDHEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKPICFPDHEO*))((::PBYTE)hIl2Cpp + HHNAMDCALND_MIILIPJBOKO_OFFSET))(this, a1);
		}

		::AGEHGBKOBEF* JNHIJCFBJLE()
		{
			return ((::AGEHGBKOBEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNAMDCALND_JNHIJCFBJLE_OFFSET))(this);
		}

		::System::Void HGAGGIFCLAA(::AGEHGBKOBEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGEHGBKOBEF*))((::PBYTE)hIl2Cpp + HHNAMDCALND_HGAGGIFCLAA_OFFSET))(this, a1);
		}

		::KHNBFDNKLHE* NDGJGMEFMLH()
		{
			return ((::KHNBFDNKLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNAMDCALND_NDGJGMEFMLH_OFFSET))(this);
		}

		::System::Void IPFDMFDOKHJ(::KHNBFDNKLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + HHNAMDCALND_IPFDMFDOKHJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HHNAMDCALND_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HHNAMDCALND* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HHNAMDCALND*))((::PBYTE)hIl2Cpp + HHNAMDCALND_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNAMDCALND_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNAMDCALND_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HHNAMDCALND_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNAMDCALND_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HHNAMDCALND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHNAMDCALND*))((::PBYTE)hIl2Cpp + HHNAMDCALND_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HHNAMDCALND_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
