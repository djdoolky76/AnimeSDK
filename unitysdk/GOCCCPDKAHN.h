#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IDKNGJGGMOI.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define GOCCCPDKAHN_AMNEAKAGBOF_OFFSET UNITYSDK_OFFSET(0x15B1D490)
#define GOCCCPDKAHN_CFDKEINHHJB_OFFSET UNITYSDK_OFFSET(0x15B1CD40)
#define GOCCCPDKAHN_CTOR_OFFSET UNITYSDK_OFFSET(0x15B1DB30)
#define GOCCCPDKAHN_ECOLOMAGPBP_OFFSET UNITYSDK_OFFSET(0x15B1CF50)
#define GOCCCPDKAHN_EHFFGDOPBFG_OFFSET UNITYSDK_OFFSET(0x15B1CE60)
#define GOCCCPDKAHN_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15B1DA10)
#define GOCCCPDKAHN_HICECOIALPG_OFFSET UNITYSDK_OFFSET(0x15B1D2F0)
#define GOCCCPDKAHN_ILEHFMLMMMP_OFFSET UNITYSDK_OFFSET(0x15B1D350)
#define GOCCCPDKAHN_JCNLMKLHJDG_OFFSET UNITYSDK_OFFSET(0x15B1CAB0)
#define GOCCCPDKAHN_JDFHKNNINKJ_OFFSET UNITYSDK_OFFSET(0x15B1C710)
#define GOCCCPDKAHN_LDAIPNHKBOB_OFFSET UNITYSDK_OFFSET(0x15B1D0B0)
#define GOCCCPDKAHN_LFFPGNIDFEI_OFFSET UNITYSDK_OFFSET(0x15B1C9F0)
#define GOCCCPDKAHN_LOAGOEGHNNK_OFFSET UNITYSDK_OFFSET(0x15B1C6A0)
#define GOCCCPDKAHN_MKANPGIBAHL_OFFSET UNITYSDK_OFFSET(0x15B1D180)
#define GOCCCPDKAHN_NALDJLBEGDI_OFFSET UNITYSDK_OFFSET(0x15B1CC40)
#define GOCCCPDKAHN_OLCFPEPOLCI_OFFSET UNITYSDK_OFFSET(0x15B1D010)
#define GOCCCPDKAHN_OMOGOMNAFIH_OFFSET UNITYSDK_OFFSET(0x15B1D120)
#define GOCCCPDKAHN_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x15B1CFA0)
#define GOCCCPDKAHN__ONBIND_OFFSET UNITYSDK_OFFSET(0x15B1D620)
#define GOCCCPDKAHN__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x15B1DAD0)

inline static constexpr unsigned int GOCCCPDKAHN_TypeDefinitionIndex = 71726;

	class GOCCCPDKAHN : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
		::UnityEngine::Transform* MACEILOIEKA; // 0x68
		::UnityEngine::Transform* JIFPALLIGIA; // 0x70
		::UnityEngine::RectTransform* HACIPINNIOG; // 0x78
		::UnityEngine::Transform* DGNBGCHECOB; // 0x80
		::UnityEngine::UI::Image* OKCIHECIMEC; // 0x88
		::UnityEngine::UI::Image* HPCAJDKDMEI; // 0x90
		::UnityEngine::UI::Text* HCPKJEKHAPF; // 0x98
		::System::Nullable_1<::IDKNGJGGMOI> DFFADPOICGE; // 0xA0
		::System::Byte _padding0[0x20];
		::UnityEngine::UI::Text* BKIJBCHJDOH; // 0xC8
		::RPG::Client::UIStateCtrl* GIMAEGBDOBL; // 0xD0
		::UnityEngine::Vector2 MIFKHBDOGLN; // 0xD8
		// static const ::System::String* HLGPGJCBJJP; // 0x0
		// static const ::System::String* MCBEEMAAMFB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCCCPDKAHN_CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::IDKNGJGGMOI> LOAGOEGHNNK()
		{
			return ((::System::Nullable_1<::IDKNGJGGMOI>(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCCCPDKAHN_LOAGOEGHNNK_OFFSET))(this);
		}

		::System::Void JDFHKNNINKJ(::IDKNGJGGMOI a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDKNGJGGMOI))((::PBYTE)hIl2Cpp + GOCCCPDKAHN_JDFHKNNINKJ_OFFSET))(this, a1);
		}

		::System::Boolean ECOLOMAGPBP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCCCPDKAHN_ECOLOMAGPBP_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCCCPDKAHN_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void OLCFPEPOLCI(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + GOCCCPDKAHN_OLCFPEPOLCI_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* OMOGOMNAFIH()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCCCPDKAHN_OMOGOMNAFIH_OFFSET))(this);
		}

		::System::Void MKANPGIBAHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCCCPDKAHN_MKANPGIBAHL_OFFSET))(this);
		}

		::System::Void ILEHFMLMMMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCCCPDKAHN_ILEHFMLMMMP_OFFSET))(this);
		}

		::System::Void AMNEAKAGBOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCCCPDKAHN_AMNEAKAGBOF_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCCCPDKAHN__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCCCPDKAHN_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCCCPDKAHN__ONDISPOSE_OFFSET))(this);
		}

		::System::Boolean LFFPGNIDFEI(::IDKNGJGGMOI a1, ::IDKNGJGGMOI a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDKNGJGGMOI, ::IDKNGJGGMOI))((::PBYTE)hIl2Cpp + GOCCCPDKAHN_LFFPGNIDFEI_OFFSET))(this, a1, a2);
		}

		::System::Void JCNLMKLHJDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCCCPDKAHN_JCNLMKLHJDG_OFFSET))(this);
		}

		::System::Void CFDKEINHHJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCCCPDKAHN_CFDKEINHHJB_OFFSET))(this);
		}

		::System::Void NALDJLBEGDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCCCPDKAHN_NALDJLBEGDI_OFFSET))(this);
		}

		::System::Void LDAIPNHKBOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCCCPDKAHN_LDAIPNHKBOB_OFFSET))(this);
		}

		::System::Void EHFFGDOPBFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCCCPDKAHN_EHFFGDOPBFG_OFFSET))(this);
		}

		::System::String* HICECOIALPG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCCCPDKAHN_HICECOIALPG_OFFSET))(this);
		}

	};
