#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class OMMAEOLAAPD_FEGNKCMCKME;
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define OMMAEOLAAPD_BHBJPNFIHAK_OFFSET UNITYSDK_OFFSET(0xC82F7E0)
#define OMMAEOLAAPD_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xC82F3E0)
#define OMMAEOLAAPD_CTOR_OFFSET UNITYSDK_OFFSET(0xC82FA50)
#define OMMAEOLAAPD_DCBJGLJNGGG_OFFSET UNITYSDK_OFFSET(0xC82F9C0)
#define OMMAEOLAAPD_DHFBDMHFNIK_OFFSET UNITYSDK_OFFSET(0xC82F1C0)
#define OMMAEOLAAPD_EKMBDDNPDLG_OFFSET UNITYSDK_OFFSET(0xC82F4B0)
#define OMMAEOLAAPD_FOEKGKCINKG_OFFSET UNITYSDK_OFFSET(0xC82F910)
#define OMMAEOLAAPD_GET_ISDISABLED_OFFSET UNITYSDK_OFFSET(0xC82FA30)
#define OMMAEOLAAPD_GNLBGIPJNLB_OFFSET UNITYSDK_OFFSET(0xC82F780)
#define OMMAEOLAAPD_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xC82F0A0)
#define OMMAEOLAAPD_MJDBIFMKAHN_OFFSET UNITYSDK_OFFSET(0xC82F2B0)
#define OMMAEOLAAPD_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC82EF60)
#define OMMAEOLAAPD_PHIMKHKMNOH_OFFSET UNITYSDK_OFFSET(0xC82F690)
#define OMMAEOLAAPD_SET_ISDISABLED_OFFSET UNITYSDK_OFFSET(0xC82FA40)
#define OMMAEOLAAPD__ONBIND_OFFSET UNITYSDK_OFFSET(0xC82ED10)
#define OMMAEOLAAPD__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC82F460)

inline static constexpr unsigned int OMMAEOLAAPD_TypeDefinitionIndex = 74179;

	class OMMAEOLAAPD : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* FCDDMEAANPH; // 0x60
		::OMMAEOLAAPD_FEGNKCMCKME* APPIHABBCGK; // 0x68
		::RPG::Client::RPGAnimationEvent* DDCODMNKPIP; // 0x70
		::UnityEngine::UI::Text* CPCCPIKCBAP; // 0x78
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x80
		::UnityEngine::UI::Image* HPCAJDKDMEI; // 0x88
		::System::Boolean _IsDisabled_k__BackingField; // 0x90
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMAEOLAAPD_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMAEOLAAPD__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::OMMAEOLAAPD_FEGNKCMCKME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMMAEOLAAPD_FEGNKCMCKME*))((::PBYTE)hIl2Cpp + OMMAEOLAAPD_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void DHFBDMHFNIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMAEOLAAPD_DHFBDMHFNIK_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMAEOLAAPD__ONDISPOSE_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMAEOLAAPD_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void EKMBDDNPDLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMAEOLAAPD_EKMBDDNPDLG_OFFSET))(this);
		}

		::System::Void PHIMKHKMNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMAEOLAAPD_PHIMKHKMNOH_OFFSET))(this);
		}

		::System::Void GNLBGIPJNLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMAEOLAAPD_GNLBGIPJNLB_OFFSET))(this);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OMMAEOLAAPD_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::System::Void FOEKGKCINKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMAEOLAAPD_FOEKGKCINKG_OFFSET))(this);
		}

		::System::Void DCBJGLJNGGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMAEOLAAPD_DCBJGLJNGGG_OFFSET))(this);
		}

		::System::Boolean get_IsDisabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMAEOLAAPD_GET_ISDISABLED_OFFSET))(this);
		}

		::System::Void set_IsDisabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMMAEOLAAPD_SET_ISDISABLED_OFFSET))(this, a1);
		}

		::System::String* BHBJPNFIHAK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMAEOLAAPD_BHBJPNFIHAK_OFFSET))(this);
		}

		::System::String* MJDBIFMKAHN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMAEOLAAPD_MJDBIFMKAHN_OFFSET))(this);
		}

	};
