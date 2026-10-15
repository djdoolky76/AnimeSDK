#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MDDPDPLMNFN_AABHECKHFJP_OFFSET UNITYSDK_OFFSET(0xB8A1BF0)
#define MDDPDPLMNFN_AECJBKKEALK_OFFSET UNITYSDK_OFFSET(0xB8A0270)
#define MDDPDPLMNFN_APCIIPDCHFN_OFFSET UNITYSDK_OFFSET(0xB8A0ED0)
#define MDDPDPLMNFN_BPFNFDLBINP_OFFSET UNITYSDK_OFFSET(0xB8A0A20)
#define MDDPDPLMNFN_CFDKEINHHJB_OFFSET UNITYSDK_OFFSET(0xB8A0620)
#define MDDPDPLMNFN_COPGACEDIEI_OFFSET UNITYSDK_OFFSET(0xB8A1920)
#define MDDPDPLMNFN_CTOR_OFFSET UNITYSDK_OFFSET(0xB8A1C40)
#define MDDPDPLMNFN_DPGHDBPBMHA_OFFSET UNITYSDK_OFFSET(0xB8A1280)
#define MDDPDPLMNFN_ECOLOMAGPBP_OFFSET UNITYSDK_OFFSET(0xB8A0E20)
#define MDDPDPLMNFN_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB8A19F0)
#define MDDPDPLMNFN_EPNPACLPADL_OFFSET UNITYSDK_OFFSET(0xB8A1150)
#define MDDPDPLMNFN_FFHFCAMOKBH_OFFSET UNITYSDK_OFFSET(0xB8A1310)
#define MDDPDPLMNFN_FHFPNOCGGPL_OFFSET UNITYSDK_OFFSET(0xB89FFC0)
#define MDDPDPLMNFN_IILIABMPCNB_OFFSET UNITYSDK_OFFSET(0xB8A1030)
#define MDDPDPLMNFN_JCNLMKLHJDG_OFFSET UNITYSDK_OFFSET(0xB8A02E0)
#define MDDPDPLMNFN_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xB8A1990)
#define MDDPDPLMNFN_LDAIPNHKBOB_OFFSET UNITYSDK_OFFSET(0xB8A1210)
#define MDDPDPLMNFN_LKBAGOHIIDL_OFFSET UNITYSDK_OFFSET(0xB8A1AD0)
#define MDDPDPLMNFN_MKANPGIBAHL_OFFSET UNITYSDK_OFFSET(0xB8A0D40)
#define MDDPDPLMNFN_NALDJLBEGDI_OFFSET UNITYSDK_OFFSET(0xB8A04D0)
#define MDDPDPLMNFN_NPGELNKHPAI_OFFSET UNITYSDK_OFFSET(0xB8A07D0)
#define MDDPDPLMNFN_ODAJLGLJIIG_OFFSET UNITYSDK_OFFSET(0xB8A0200)
#define MDDPDPLMNFN_OFFMEIEPEPM_OFFSET UNITYSDK_OFFSET(0xB89FF40)
#define MDDPDPLMNFN_OKPJDBLEEOL_OFFSET UNITYSDK_OFFSET(0xB89FF80)
#define MDDPDPLMNFN_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB8A0E70)
#define MDDPDPLMNFN__ONBIND_OFFSET UNITYSDK_OFFSET(0xB8A1370)

	class MDDPDPLMNFN : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* DGNBGCHECOB; // 0x60
		::UnityEngine::UI::Image* OKCIHECIMEC; // 0x68
		::UnityEngine::UI::Button* FCIOPHJPDPG; // 0x70
		::RPG::GameCore::TurnBasedModifierInstance* NMBAMGFCCHP; // 0x78
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x80
		::UnityEngine::Transform* JIFPALLIGIA; // 0x88
		::UnityEngine::UI::Text* BKIJBCHJDOH; // 0x90
		::UnityEngine::UI::Text* HCPKJEKHAPF; // 0x98
		::System::Object* MFGAGCOCPDP; // 0xA0
		::UnityEngine::UI::Image* HPCAJDKDMEI; // 0xA8
		::System::Action* FBDAMFNLEPK; // 0xB0
		::UnityEngine::RectTransform* HACIPINNIOG; // 0xB8
		::UnityEngine::Transform* MACEILOIEKA; // 0xC0
		::System::Int32 BPNKIBPILOC; // 0xC8
		::System::Single IJJIEEHPFHI; // 0xCC
		::UnityEngine::Vector3 MIFKHBDOGLN; // 0xD0
		::System::Int32 MPKKKBKDKNK; // 0xDC
		// static const ::System::String* BDACPPLKLGL; // 0x0
		// static const ::System::String* OHHFEDFJJNO; // 0x0
		// static const ::System::String* GDMPEFBDLOK; // 0x0
		// static const ::System::String* KGPDDIOADMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDPLMNFN_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::TurnBasedModifierInstance* OFFMEIEPEPM()
		{
			return ((::RPG::GameCore::TurnBasedModifierInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDPLMNFN_OFFMEIEPEPM_OFFSET))(this);
		}

		::UnityEngine::UI::Button* OKPJDBLEEOL()
		{
			return ((::UnityEngine::UI::Button*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDPLMNFN_OKPJDBLEEOL_OFFSET))(this);
		}

		::System::Void FHFPNOCGGPL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + MDDPDPLMNFN_FHFPNOCGGPL_OFFSET))(this, a1);
		}

		::System::Void MKANPGIBAHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDPLMNFN_MKANPGIBAHL_OFFSET))(this);
		}

		::System::Boolean ECOLOMAGPBP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDPLMNFN_ECOLOMAGPBP_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDPLMNFN_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void EPNPACLPADL(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MDDPDPLMNFN_EPNPACLPADL_OFFSET))(this, a1);
		}

		::System::Void IILIABMPCNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDPLMNFN_IILIABMPCNB_OFFSET))(this);
		}

		::System::Void FFHFCAMOKBH(::System::Action* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Object*))((::PBYTE)hIl2Cpp + MDDPDPLMNFN_FFHFCAMOKBH_OFFSET))(this, a1, a2);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDPLMNFN__ONBIND_OFFSET))(this);
		}

		::System::Void COPGACEDIEI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDDPDPLMNFN_COPGACEDIEI_OFFSET))(this, a1);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDDPDPLMNFN_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDPLMNFN_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void LKBAGOHIIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDPLMNFN_LKBAGOHIIDL_OFFSET))(this);
		}

		::System::Void AABHECKHFJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDPLMNFN_AABHECKHFJP_OFFSET))(this);
		}

		::System::Void BPFNFDLBINP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDPLMNFN_BPFNFDLBINP_OFFSET))(this);
		}

		::System::Void APCIIPDCHFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDPLMNFN_APCIIPDCHFN_OFFSET))(this);
		}

		::System::Void JCNLMKLHJDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDPLMNFN_JCNLMKLHJDG_OFFSET))(this);
		}

		::System::Void NALDJLBEGDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDPLMNFN_NALDJLBEGDI_OFFSET))(this);
		}

		::System::Void CFDKEINHHJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDPLMNFN_CFDKEINHHJB_OFFSET))(this);
		}

		::System::Int32 ODAJLGLJIIG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDPLMNFN_ODAJLGLJIIG_OFFSET))(this);
		}

		::System::Int32 AECJBKKEALK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDPLMNFN_AECJBKKEALK_OFFSET))(this);
		}

		::System::Void NPGELNKHPAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDPLMNFN_NPGELNKHPAI_OFFSET))(this);
		}

		::System::Void DPGHDBPBMHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDPLMNFN_DPGHDBPBMHA_OFFSET))(this);
		}

		::System::Void LDAIPNHKBOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDPLMNFN_LDAIPNHKBOB_OFFSET))(this);
		}

	};
