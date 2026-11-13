#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MDDPDPLMNFN_AABHECKHFJP_OFFSET UNITYSDK_OFFSET(0x183D81D0)
#define MDDPDPLMNFN_AECJBKKEALK_OFFSET UNITYSDK_OFFSET(0x183D65D0)
#define MDDPDPLMNFN_APCIIPDCHFN_OFFSET UNITYSDK_OFFSET(0x183D7250)
#define MDDPDPLMNFN_BPFNFDLBINP_OFFSET UNITYSDK_OFFSET(0x183D6D90)
#define MDDPDPLMNFN_CFDKEINHHJB_OFFSET UNITYSDK_OFFSET(0x183D6980)
#define MDDPDPLMNFN_COPGACEDIEI_OFFSET UNITYSDK_OFFSET(0x183D7F00)
#define MDDPDPLMNFN_CTOR_OFFSET UNITYSDK_OFFSET(0x183D8220)
#define MDDPDPLMNFN_DPGHDBPBMHA_OFFSET UNITYSDK_OFFSET(0x183D7600)
#define MDDPDPLMNFN_ECOLOMAGPBP_OFFSET UNITYSDK_OFFSET(0x183D71A0)
#define MDDPDPLMNFN_EPNPACLPADL_OFFSET UNITYSDK_OFFSET(0x183D74D0)
#define MDDPDPLMNFN_FFHFCAMOKBH_OFFSET UNITYSDK_OFFSET(0x183D7690)
#define MDDPDPLMNFN_FHFPNOCGGPL_OFFSET UNITYSDK_OFFSET(0x183D6310)
#define MDDPDPLMNFN_IILIABMPCNB_OFFSET UNITYSDK_OFFSET(0x183D73B0)
#define MDDPDPLMNFN_JCNLMKLHJDG_OFFSET UNITYSDK_OFFSET(0x183D6640)
#define MDDPDPLMNFN_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x183D7F70)
#define MDDPDPLMNFN_LDAIPNHKBOB_OFFSET UNITYSDK_OFFSET(0x183D7590)
#define MDDPDPLMNFN_LKBAGOHIIDL_OFFSET UNITYSDK_OFFSET(0x183D80B0)
#define MDDPDPLMNFN_MKANPGIBAHL_OFFSET UNITYSDK_OFFSET(0x183D70C0)
#define MDDPDPLMNFN_NALDJLBEGDI_OFFSET UNITYSDK_OFFSET(0x183D6830)
#define MDDPDPLMNFN_NPGELNKHPAI_OFFSET UNITYSDK_OFFSET(0x183D6B40)
#define MDDPDPLMNFN_ODAJLGLJIIG_OFFSET UNITYSDK_OFFSET(0x183D6560)
#define MDDPDPLMNFN_OFFMEIEPEPM_OFFSET UNITYSDK_OFFSET(0x183D6280)
#define MDDPDPLMNFN_OKPJDBLEEOL_OFFSET UNITYSDK_OFFSET(0x183D62D0)
#define MDDPDPLMNFN_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x183D71F0)
#define MDDPDPLMNFN__ONBIND_OFFSET UNITYSDK_OFFSET(0x183D76F0)
#define MDDPDPLMNFN__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x183D7FD0)

inline static constexpr unsigned int MDDPDPLMNFN_TypeDefinitionIndex = 73512;

	class MDDPDPLMNFN : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Button* FCIOPHJPDPG; // 0x60
		::UnityEngine::RectTransform* HACIPINNIOG; // 0x68
		::UnityEngine::Transform* MACEILOIEKA; // 0x70
		::UnityEngine::UI::Image* HPCAJDKDMEI; // 0x78
		::UnityEngine::Transform* DGNBGCHECOB; // 0x80
		::RPG::GameCore::TurnBasedModifierInstance* NMBAMGFCCHP; // 0x88
		::UnityEngine::UI::Image* OKCIHECIMEC; // 0x90
		::System::Object* MFGAGCOCPDP; // 0x98
		::UnityEngine::UI::Text* HCPKJEKHAPF; // 0xA0
		::UnityEngine::Transform* JIFPALLIGIA; // 0xA8
		::UnityEngine::Animation* JPHOOFFIAAH; // 0xB0
		::System::Action_1<::System::Object*>* FBDAMFNLEPK; // 0xB8
		::UnityEngine::UI::Text* BKIJBCHJDOH; // 0xC0
		::UnityEngine::Vector3 MIFKHBDOGLN; // 0xC8
		::System::Single IJJIEEHPFHI; // 0xD4
		::System::Int32 MPKKKBKDKNK; // 0xD8
		::System::Int32 BPNKIBPILOC; // 0xDC
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

		::System::Void FFHFCAMOKBH(::System::Action_1<::System::Object*>* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + MDDPDPLMNFN_FFHFCAMOKBH_OFFSET))(this, a1, a2);
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

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDPDPLMNFN__SETUPVIEW_OFFSET))(this);
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
