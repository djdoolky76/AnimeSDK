#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FlipMode.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class UIAutoFlipMonoPlugin; }
namespace RPG::Client { class UIPageTurnMonoPlugin; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_UIPAGETURNBEHAVIOR_AHNDAKPBKID_OFFSET UNITYSDK_OFFSET(0xE3D30D0)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_AMNDIFGLODB_OFFSET UNITYSDK_OFFSET(0xE3D6620)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_BMOJJOKNHLH_OFFSET UNITYSDK_OFFSET(0xE3D8180)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xE3CF0B0)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE3D8980)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_DDGBGDMFLKG_OFFSET UNITYSDK_OFFSET(0xE3CF460)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_EAHAGHICIKO_OFFSET UNITYSDK_OFFSET(0xE3D3B30)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_EKKJJLAODDB_OFFSET UNITYSDK_OFFSET(0xE3D2DB0)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_EPOPHNLHOCI_OFFSET UNITYSDK_OFFSET(0xE3D2490)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_GET_CURRENTPAPER_OFFSET UNITYSDK_OFFSET(0xE3CF290)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_GET_ENDBOTTOMLEFT_OFFSET UNITYSDK_OFFSET(0xE3CF250)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_GET_ENDBOTTOMRIGHT_OFFSET UNITYSDK_OFFSET(0xE3CF270)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xE3CF1D0)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_GNGLOJJBBAK_OFFSET UNITYSDK_OFFSET(0xE3D1AB0)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_HDAFABELHBN_OFFSET UNITYSDK_OFFSET(0xE3D3650)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_HHFKNABGFPA_OFFSET UNITYSDK_OFFSET(0xE3D86C0)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_JPKEHKKHCGL_OFFSET UNITYSDK_OFFSET(0xE3D8480)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xE3CF110)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_KCBDHFPIEON_OFFSET UNITYSDK_OFFSET(0xE3D2A90)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE3CE220)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xE3CF050)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_NBBEMNGKEFD_OFFSET UNITYSDK_OFFSET(0xE3D7B80)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_NNHPGMLGCBE_OFFSET UNITYSDK_OFFSET(0xE3D38C0)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xE3CE2F0)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_NPEOOKOIBFN_OFFSET UNITYSDK_OFFSET(0xE3D5BE0)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_ODDLNBNDIMH_OFFSET UNITYSDK_OFFSET(0xE3D8300)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_OGIJIEGFHGF_OFFSET UNITYSDK_OFFSET(0xE3D88D0)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xE3CF170)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_ONDGEHKJOEE_OFFSET UNITYSDK_OFFSET(0xE3D33E0)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xE3CE280)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_PFNBEBCABFH_OFFSET UNITYSDK_OFFSET(0xE3D4570)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_PPDBEMCCCKB_OFFSET UNITYSDK_OFFSET(0xE3D1E60)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_SET_CURRENTPAPER_OFFSET UNITYSDK_OFFSET(0xE3CF300)

namespace RPG::Client
{
	inline static constexpr unsigned int UIPageTurnBehavior_TypeDefinitionIndex = 71056;

	class UIPageTurnBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::RPG::Client::UIAutoFlipMonoPlugin* autoFlip; // 0x38
		::System::Single radius1; // 0x40
		::System::Single radius2; // 0x44
		::UnityEngine::Vector3 sb; // 0x48
		::UnityEngine::Vector3 st; // 0x54
		::UnityEngine::Vector3 c; // 0x60
		::UnityEngine::Vector3 ebr; // 0x6C
		::UnityEngine::Vector3 ebl; // 0x78
		::UnityEngine::Vector3 f; // 0x84
		::UnityEngine::UI::Image* Left; // 0x90
		::UnityEngine::UI::Image* Right; // 0x98
		::RPG::Client::FlipMode mode; // 0xA0
		::System::Single shadowPageHeight; // 0xA4
		::System::Boolean pageDragging; // 0xA8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::RPG::Client::UIPageTurnMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::UIPageTurnMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_EndBottomLeft()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_GET_ENDBOTTOMLEFT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_EndBottomRight()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_GET_ENDBOTTOMRIGHT_OFFSET))(this);
		}

		::System::Int32 get_CurrentPaper()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_GET_CURRENTPAPER_OFFSET))(this);
		}

		::System::Void set_CurrentPaper(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_SET_CURRENTPAPER_OFFSET))(this, a1);
		}

		::System::Void DDGBGDMFLKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_DDGBGDMFLKG_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void GNGLOJJBBAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_GNGLOJJBBAK_OFFSET))(this);
		}

		::System::Void KCBDHFPIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_KCBDHFPIEON_OFFSET))(this);
		}

		::System::Void EKKJJLAODDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_EKKJJLAODDB_OFFSET))(this);
		}

		::System::Void AHNDAKPBKID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_AHNDAKPBKID_OFFSET))(this);
		}

		::System::Boolean ONDGEHKJOEE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_ONDGEHKJOEE_OFFSET))(this);
		}

		::System::Boolean HDAFABELHBN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_HDAFABELHBN_OFFSET))(this);
		}

		::System::Boolean NNHPGMLGCBE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_NNHPGMLGCBE_OFFSET))(this);
		}

		::System::Void PPDBEMCCCKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_PPDBEMCCCKB_OFFSET))(this);
		}

		::System::Void EAHAGHICIKO(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_EAHAGHICIKO_OFFSET))(this, a1);
		}

		::System::Void NPEOOKOIBFN(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_NPEOOKOIBFN_OFFSET))(this, a1);
		}

		::System::Void NBBEMNGKEFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_NBBEMNGKEFD_OFFSET))(this);
		}

		::System::Void BMOJJOKNHLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_BMOJJOKNHLH_OFFSET))(this);
		}

		::System::Void ODDLNBNDIMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_ODDLNBNDIMH_OFFSET))(this);
		}

		::System::Void EPOPHNLHOCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_EPOPHNLHOCI_OFFSET))(this);
		}

		::System::Void PFNBEBCABFH(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_PFNBEBCABFH_OFFSET))(this, a1, a2);
		}

		::System::Void AMNDIFGLODB(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_AMNDIFGLODB_OFFSET))(this, a1, a2);
		}

		::System::Single HHFKNABGFPA(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_HHFKNABGFPA_OFFSET))(this, a1, a2, a3);
		}

		::System::Single OGIJIEGFHGF(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_OGIJIEGFHGF_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 JPKEHKKHCGL(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_JPKEHKKHCGL_OFFSET))(this, a1);
		}

	};
}
