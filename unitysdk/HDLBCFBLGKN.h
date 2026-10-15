#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class HDLBCFBLGKN;
namespace RPG::Client { class LocalizationManager; }
namespace RPG::Client { class SimpleText; }
namespace System { class String; }
namespace UnityEngine { class Font; }

#define HDLBCFBLGKN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15C2EE20)
#define HDLBCFBLGKN_CTOR_OFFSET UNITYSDK_OFFSET(0x15C2EF00)
#define HDLBCFBLGKN_DIKJJCNDDDN_OFFSET UNITYSDK_OFFSET(0x15C2F610)
#define HDLBCFBLGKN_ECPBHNICCMF_OFFSET UNITYSDK_OFFSET(0x15C2F460)
#define HDLBCFBLGKN_ENPCPOJHIKC_OFFSET UNITYSDK_OFFSET(0x15C2F4C0)
#define HDLBCFBLGKN_GPPHPLFMKAM_OFFSET UNITYSDK_OFFSET(0x15C2F530)
#define HDLBCFBLGKN_HDHBJNPMAJC_OFFSET UNITYSDK_OFFSET(0x15C2F3A0)
#define HDLBCFBLGKN_HFNACPOHGKM_OFFSET UNITYSDK_OFFSET(0x15C2EF10)
#define HDLBCFBLGKN_HHPFPEEFABB_OFFSET UNITYSDK_OFFSET(0x15C2EFB0)
#define HDLBCFBLGKN_ILDGAPGLKDE_OFFSET UNITYSDK_OFFSET(0x15C2F220)
#define HDLBCFBLGKN_LPCJNIPHNGK_OFFSET UNITYSDK_OFFSET(0x15C2F5B0)
#define HDLBCFBLGKN_ONJFJFJHOOF_OFFSET UNITYSDK_OFFSET(0x15C2F290)

inline static constexpr unsigned int HDLBCFBLGKN_TypeDefinitionIndex = 72373;

	class HDLBCFBLGKN : public ::System::Object
	{
	public:
		::UnityEngine::Font* CIBBGLJLLDP; // 0x10
		::UnityEngine::Font* NAGEODHOMEO; // 0x18
		::RPG::Client::SimpleText* OPOGIAMONAF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLBCFBLGKN_CTOR_OFFSET))(this);
		}

		static ::HDLBCFBLGKN* BPLPBPMEODA(::RPG::Client::SimpleText* a1)
		{
			return ((::HDLBCFBLGKN*(*)(::RPG::Client::SimpleText*))((::PBYTE)hIl2Cpp + HDLBCFBLGKN_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void HFNACPOHGKM(::UnityEngine::Font* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + HDLBCFBLGKN_HFNACPOHGKM_OFFSET))(this, a1);
		}

		::System::Void HHPFPEEFABB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLBCFBLGKN_HHPFPEEFABB_OFFSET))(this);
		}

		::System::Void ONJFJFJHOOF(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + HDLBCFBLGKN_ONJFJFJHOOF_OFFSET))(this, a1);
		}

		::System::Void ECPBHNICCMF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HDLBCFBLGKN_ECPBHNICCMF_OFFSET))(this, a1);
		}

		::System::String* ENPCPOJHIKC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLBCFBLGKN_ENPCPOJHIKC_OFFSET))(this);
		}

		::System::Void GPPHPLFMKAM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HDLBCFBLGKN_GPPHPLFMKAM_OFFSET))(this, a1);
		}

		::System::Single LPCJNIPHNGK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLBCFBLGKN_LPCJNIPHNGK_OFFSET))(this);
		}

		::System::Void DIKJJCNDDDN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HDLBCFBLGKN_DIKJJCNDDDN_OFFSET))(this, a1);
		}

		::System::Boolean HDHBJNPMAJC(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HDLBCFBLGKN_HDHBJNPMAJC_OFFSET))(this, a1);
		}

		::RPG::Client::LocalizationManager* ILDGAPGLKDE()
		{
			return ((::RPG::Client::LocalizationManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLBCFBLGKN_ILDGAPGLKDE_OFFSET))(this);
		}

	};
