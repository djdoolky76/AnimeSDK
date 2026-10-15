#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBPDACMBHGL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class AABPMMILMLE;
class HHMGCCNGECJ;
class MLNOEMIDHME;
class POBLGKIGINE;
namespace RPG::Client::SocialPlay { class SocialPlayMapInfo; }
namespace RPG::Client::SocialPlay { class SocialPlayMapUIBridge; }
namespace System { class String; }

#define KHBEIDOCBCN_BOMAFICLJGJ_OFFSET UNITYSDK_OFFSET(0xB3FC670)
#define KHBEIDOCBCN_CTOR_OFFSET UNITYSDK_OFFSET(0xB3EC7B0)
#define KHBEIDOCBCN_DJHOMJHONLP_OFFSET UNITYSDK_OFFSET(0xB3FC6C0)
#define KHBEIDOCBCN_FPDPGHDAIFC_OFFSET UNITYSDK_OFFSET(0xB3FC750)
#define KHBEIDOCBCN_GET_MAPINFO_OFFSET UNITYSDK_OFFSET(0xB3FC7B0)
#define KHBEIDOCBCN_GOLDALDKCEO_OFFSET UNITYSDK_OFFSET(0xB3ED300)
#define KHBEIDOCBCN_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB3FC630)
#define KHBEIDOCBCN_JKBMMFFGKDN_OFFSET UNITYSDK_OFFSET(0xB3FC7C0)
#define KHBEIDOCBCN_KOLNCFIJCKH_OFFSET UNITYSDK_OFFSET(0xB3EC9B0)
#define KHBEIDOCBCN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB3FC5F0)
#define KHBEIDOCBCN_NNICOCFHCBJ_OFFSET UNITYSDK_OFFSET(0xB3FC710)

inline static constexpr unsigned int KHBEIDOCBCN_TypeDefinitionIndex = 74493;

	class KHBEIDOCBCN : public ::System::Object
	{
	public:
		::RPG::Client::SocialPlay::SocialPlayMapUIBridge* OMKPPEBPDPE; // 0x10
		::RPG::Client::SocialPlay::SocialPlayMapInfo* _MapInfo_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHBEIDOCBCN_CTOR_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBEIDOCBCN_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBEIDOCBCN_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KOLNCFIJCKH(::HHMGCCNGECJ* a1, ::CBPDACMBHGL a2)
		{
			return ((::System::Void(*)(::PVOID, ::HHMGCCNGECJ*, ::CBPDACMBHGL))((::PBYTE)hIl2Cpp + KHBEIDOCBCN_KOLNCFIJCKH_OFFSET))(this, a1, a2);
		}

		::System::Void BOMAFICLJGJ(::POBLGKIGINE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POBLGKIGINE*))((::PBYTE)hIl2Cpp + KHBEIDOCBCN_BOMAFICLJGJ_OFFSET))(this, a1);
		}

		::System::Void DJHOMJHONLP(::MLNOEMIDHME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLNOEMIDHME*))((::PBYTE)hIl2Cpp + KHBEIDOCBCN_DJHOMJHONLP_OFFSET))(this, a1);
		}

		::System::Void NNICOCFHCBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBEIDOCBCN_NNICOCFHCBJ_OFFSET))(this);
		}

		::System::Boolean GOLDALDKCEO(::System::UInt32 a1, ::AABPMMILMLE* a2, ::RPG::Client::TextID a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::AABPMMILMLE*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + KHBEIDOCBCN_GOLDALDKCEO_OFFSET))(this, a1, a2, a3);
		}

		::System::String* FPDPGHDAIFC(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHBEIDOCBCN_FPDPGHDAIFC_OFFSET))(this, a1);
		}

		::RPG::Client::SocialPlay::SocialPlayMapInfo* get_MapInfo()
		{
			return ((::RPG::Client::SocialPlay::SocialPlayMapInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBEIDOCBCN_GET_MAPINFO_OFFSET))(this);
		}

		::RPG::Client::SocialPlay::SocialPlayMapUIBridge* JKBMMFFGKDN()
		{
			return ((::RPG::Client::SocialPlay::SocialPlayMapUIBridge*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBEIDOCBCN_JKBMMFFGKDN_OFFSET))(this);
		}

	};
