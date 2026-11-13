#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHHJNCOAIJF;
class GHHJNCOAIJF_KKHGKLOBDFN;
class IHGIENOHBMJ;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Net::Http { class HttpMethod; }

#define GHHJNCOAIJF_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x1B4BCAC0)
#define GHHJNCOAIJF_AFFMBPJJMGP_OFFSET UNITYSDK_OFFSET(0x1B4BE380)
#define GHHJNCOAIJF_AFPJKIGBFCD_OFFSET UNITYSDK_OFFSET(0x1B4BE5C0)
#define GHHJNCOAIJF_AMFEFIDDMDA_OFFSET UNITYSDK_OFFSET(0x1B4BD430)
#define GHHJNCOAIJF_BHEGPAJAJPB_OFFSET UNITYSDK_OFFSET(0x1B4BD570)
#define GHHJNCOAIJF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4BE670)
#define GHHJNCOAIJF_CLMNLLDMMCA_OFFSET UNITYSDK_OFFSET(0x1B4BDEA0)
#define GHHJNCOAIJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4BCBE0)
#define GHHJNCOAIJF_DHPNOPLKIMD_OFFSET UNITYSDK_OFFSET(0x1B4BDFA0)
#define GHHJNCOAIJF_DIOBAIFJLCK_OFFSET UNITYSDK_OFFSET(0x1B4BD6C0)
#define GHHJNCOAIJF_EAGMMONDLPP_OFFSET UNITYSDK_OFFSET(0x1B4BE330)
#define GHHJNCOAIJF_GET_BASEURL_OFFSET UNITYSDK_OFFSET(0x1B4BE560)
#define GHHJNCOAIJF_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1B4BE5A0)
#define GHHJNCOAIJF_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1B4BE570)
#define GHHJNCOAIJF_GET_RAWBODY_OFFSET UNITYSDK_OFFSET(0x1B4BE580)
#define GHHJNCOAIJF_IDOCGNIBDFE_OFFSET UNITYSDK_OFFSET(0x1B4BD880)
#define GHHJNCOAIJF_ILCNHCNOHMM_OFFSET UNITYSDK_OFFSET(0x1B4BDF50)
#define GHHJNCOAIJF_JHMOBDBNAEO_OFFSET UNITYSDK_OFFSET(0x1B4BDC60)
#define GHHJNCOAIJF_NFPOGGJPJCJ_OFFSET UNITYSDK_OFFSET(0x1B4BD760)
#define GHHJNCOAIJF_OGFJPEGHALI_OFFSET UNITYSDK_OFFSET(0x1B4BE4F0)
#define GHHJNCOAIJF_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1B4BE5B0)
#define GHHJNCOAIJF_SET_RAWBODY_OFFSET UNITYSDK_OFFSET(0x1B4BE590)

inline static constexpr unsigned int GHHJNCOAIJF_TypeDefinitionIndex = 71303;

	class GHHJNCOAIJF : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* LHPFMJGEFKH; // 0x10
		::Il2CppArray<::System::Byte>* _RawBody_k__BackingField; // 0x18
		::System::String* _BaseUrl_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* NIGJPLGBKAM; // 0x28
		::System::Net::Http::HttpMethod* _Method_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LADKLBIOMNC; // 0x38
		::System::String* _ContentType_k__BackingField; // 0x40
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_KNFOMCANJNH()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)UnitySDK::FromName("", "GHHJNCOAIJF")->GetStaticField(0x69860);
		}

		static ::System::String** StaticGet_JCOPHLOOHFO()
		{
			return (::System::String**)UnitySDK::FromName("", "GHHJNCOAIJF")->GetStaticField(0x69868);
		}

		::System::Void _ctor(::System::String* a1, ::System::Net::Http::HttpMethod* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::Http::HttpMethod*))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHHJNCOAIJF_CCTOR_OFFSET))();
		}

		static ::GHHJNCOAIJF* ACMKLFOMPFC(::System::String* a1)
		{
			return ((::GHHJNCOAIJF*(*)(::System::String*))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_ACMKLFOMPFC_OFFSET))(a1);
		}

		static ::GHHJNCOAIJF* AMFEFIDDMDA(::System::String* a1, ::System::Object* a2)
		{
			return ((::GHHJNCOAIJF*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_AMFEFIDDMDA_OFFSET))(a1, a2);
		}

		::System::Void DIOBAIFJLCK(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_DIOBAIFJLCK_OFFSET))(this, a1);
		}

		::System::Void NFPOGGJPJCJ(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_NFPOGGJPJCJ_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>* IDOCGNIBDFE(::GHHJNCOAIJF_KKHGKLOBDFN* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>*(*)(::PVOID, ::GHHJNCOAIJF_KKHGKLOBDFN*))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_IDOCGNIBDFE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>* JHMOBDBNAEO(::System::UInt32 a1, ::GHHJNCOAIJF_KKHGKLOBDFN* a2)
		{
			return ((::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>*(*)(::PVOID, ::System::UInt32, ::GHHJNCOAIJF_KKHGKLOBDFN*))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_JHMOBDBNAEO_OFFSET))(this, a1, a2);
		}

		::System::Void BHEGPAJAJPB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_BHEGPAJAJPB_OFFSET))(this, a1);
		}

		::System::String* ILCNHCNOHMM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_ILCNHCNOHMM_OFFSET))(this);
		}

		::System::String* EAGMMONDLPP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_EAGMMONDLPP_OFFSET))(this);
		}

		::System::Void AFFMBPJJMGP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_AFFMBPJJMGP_OFFSET))(this, a1);
		}

		::System::String* DHPNOPLKIMD(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_DHPNOPLKIMD_OFFSET))(this, a1);
		}

		::System::String* get_BaseUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_GET_BASEURL_OFFSET))(this);
		}

		::System::Net::Http::HttpMethod* get_Method()
		{
			return ((::System::Net::Http::HttpMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_GET_METHOD_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_RawBody()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_GET_RAWBODY_OFFSET))(this);
		}

		::System::Void set_RawBody(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_SET_RAWBODY_OFFSET))(this, a1);
		}

		::System::String* get_ContentType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Void set_ContentType(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_SET_CONTENTTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* AFPJKIGBFCD()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_AFPJKIGBFCD_OFFSET))(this);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* CLMNLLDMMCA()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_CLMNLLDMMCA_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* OGFJPEGHALI()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_OGFJPEGHALI_OFFSET))(this);
		}

	};
