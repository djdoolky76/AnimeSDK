#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIEBEHJKOAG_PMHGHLKJPKA;
class SerializedWarmupPSO;
namespace System { class String; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class HttpWebResponse; }
namespace System::Net { class WebException; }

#define EIEBEHJKOAG_AMFEFIDDMDA_OFFSET UNITYSDK_OFFSET(0x154C0650)
#define EIEBEHJKOAG_APGPMMBLLNP_OFFSET UNITYSDK_OFFSET(0x154BF8D0)
#define EIEBEHJKOAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x154C0CF0)
#define EIEBEHJKOAG_CFOLLMCLOBJ_OFFSET UNITYSDK_OFFSET(0x154C03F0)
#define EIEBEHJKOAG_CTOR_OFFSET UNITYSDK_OFFSET(0x154C0CE0)
#define EIEBEHJKOAG_DCGCIEGDBJO_OFFSET UNITYSDK_OFFSET(0x154BF730)
#define EIEBEHJKOAG_GHBGNOBACBI_OFFSET UNITYSDK_OFFSET(0x154C0230)
#define EIEBEHJKOAG_IEOKAEMPACM_OFFSET UNITYSDK_OFFSET(0x154BFDF0)
#define EIEBEHJKOAG_JCINCNGPMMO_OFFSET UNITYSDK_OFFSET(0x154C0500)
#define EIEBEHJKOAG_MGMPKMBFILH_OFFSET UNITYSDK_OFFSET(0x154BF7C0)
#define EIEBEHJKOAG_PGIBIIAJNKJ_OFFSET UNITYSDK_OFFSET(0x154BF6A0)

inline static constexpr unsigned int EIEBEHJKOAG_TypeDefinitionIndex = 47405;

	class EIEBEHJKOAG : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_IPGDLIEPIJA()
		{
			return (::System::String**)UnitySDK::FromName("", "EIEBEHJKOAG")->GetStaticField(0x36840);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEBEHJKOAG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIEBEHJKOAG_CCTOR_OFFSET))();
		}

		static ::System::String* PGIBIIAJNKJ()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + EIEBEHJKOAG_PGIBIIAJNKJ_OFFSET))();
		}

		static ::System::String* DCGCIEGDBJO()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + EIEBEHJKOAG_DCGCIEGDBJO_OFFSET))();
		}

		::System::Net::HttpWebResponse* MGMPKMBFILH(::System::Net::HttpWebRequest* a1)
		{
			return ((::System::Net::HttpWebResponse*(*)(::PVOID, ::System::Net::HttpWebRequest*))((::PBYTE)hIl2Cpp + EIEBEHJKOAG_MGMPKMBFILH_OFFSET))(this, a1);
		}

		::System::Void APGPMMBLLNP(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EIEBEHJKOAG_APGPMMBLLNP_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::SerializedWarmupPSO*>* JCINCNGPMMO(::System::String* a1, ::System::String* a2)
		{
			return ((::Il2CppArray<::SerializedWarmupPSO*>*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EIEBEHJKOAG_JCINCNGPMMO_OFFSET))(this, a1, a2);
		}

		::System::Net::HttpWebRequest* AMFEFIDDMDA(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Net::HttpWebRequest*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EIEBEHJKOAG_AMFEFIDDMDA_OFFSET))(this, a1, a2, a3);
		}

		::System::Net::HttpWebRequest* IEOKAEMPACM(::System::String* a1, ::EIEBEHJKOAG_PMHGHLKJPKA* a2)
		{
			return ((::System::Net::HttpWebRequest*(*)(::PVOID, ::System::String*, ::EIEBEHJKOAG_PMHGHLKJPKA*))((::PBYTE)hIl2Cpp + EIEBEHJKOAG_IEOKAEMPACM_OFFSET))(this, a1, a2);
		}

		::System::String* GHBGNOBACBI(::System::Net::HttpWebResponse* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Net::HttpWebResponse*))((::PBYTE)hIl2Cpp + EIEBEHJKOAG_GHBGNOBACBI_OFFSET))(this, a1);
		}

		::System::Void CFOLLMCLOBJ(::System::String* a1, ::System::Net::WebException* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::WebException*))((::PBYTE)hIl2Cpp + EIEBEHJKOAG_CFOLLMCLOBJ_OFFSET))(this, a1, a2);
		}

	};
