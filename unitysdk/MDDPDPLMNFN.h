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

#define MDDPDPLMNFN_AABHECKHFJP_OFFSET UNITYSDK_OFFSET(0xB89AE90)
#define MDDPDPLMNFN_AECJBKKEALK_OFFSET UNITYSDK_OFFSET(0xB8994E0)
#define MDDPDPLMNFN_APCIIPDCHFN_OFFSET UNITYSDK_OFFSET(0xB89A170)
#define MDDPDPLMNFN_BPFNFDLBINP_OFFSET UNITYSDK_OFFSET(0xB899CB0)
#define MDDPDPLMNFN_CFDKEINHHJB_OFFSET UNITYSDK_OFFSET(0xB8998A0)
#define MDDPDPLMNFN_COPGACEDIEI_OFFSET UNITYSDK_OFFSET(0xB89ABC0)
#define MDDPDPLMNFN_CTOR_OFFSET UNITYSDK_OFFSET(0xB89AEE0)
#define MDDPDPLMNFN_DPGHDBPBMHA_OFFSET UNITYSDK_OFFSET(0xB89A520)
#define MDDPDPLMNFN_ECOLOMAGPBP_OFFSET UNITYSDK_OFFSET(0xB89A0C0)
#define MDDPDPLMNFN_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB89AC90)
#define MDDPDPLMNFN_EPNPACLPADL_OFFSET UNITYSDK_OFFSET(0xB89A3F0)
#define MDDPDPLMNFN_FFHFCAMOKBH_OFFSET UNITYSDK_OFFSET(0xB89A5B0)
#define MDDPDPLMNFN_FHFPNOCGGPL_OFFSET UNITYSDK_OFFSET(0xB899220)
#define MDDPDPLMNFN_IILIABMPCNB_OFFSET UNITYSDK_OFFSET(0xB89A2D0)
#define MDDPDPLMNFN_JCNLMKLHJDG_OFFSET UNITYSDK_OFFSET(0xB899550)
#define MDDPDPLMNFN_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xB89AC30)
#define MDDPDPLMNFN_LDAIPNHKBOB_OFFSET UNITYSDK_OFFSET(0xB89A4B0)
#define MDDPDPLMNFN_LKBAGOHIIDL_OFFSET UNITYSDK_OFFSET(0xB89AD70)
#define MDDPDPLMNFN_MKANPGIBAHL_OFFSET UNITYSDK_OFFSET(0xB899FE0)
#define MDDPDPLMNFN_NALDJLBEGDI_OFFSET UNITYSDK_OFFSET(0xB899740)
#define MDDPDPLMNFN_NPGELNKHPAI_OFFSET UNITYSDK_OFFSET(0xB899A60)
#define MDDPDPLMNFN_ODAJLGLJIIG_OFFSET UNITYSDK_OFFSET(0xB899470)
#define MDDPDPLMNFN_OFFMEIEPEPM_OFFSET UNITYSDK_OFFSET(0xB899180)
#define MDDPDPLMNFN_OKPJDBLEEOL_OFFSET UNITYSDK_OFFSET(0xB8991D0)
#define MDDPDPLMNFN_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB89A110)
#define MDDPDPLMNFN__ONBIND_OFFSET UNITYSDK_OFFSET(0xB89A610)

inline static constexpr unsigned int MDDPDPLMNFN_TypeDefinitionIndex = 71527;

	class MDDPDPLMNFN : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Text* HCPKJEKHAPF; // 0x60
		::System::Action_1<::System::Object*>* FBDAMFNLEPK; // 0x68
		::UnityEngine::RectTransform* HACIPINNIOG; // 0x70
		::UnityEngine::UI::Image* HPCAJDKDMEI; // 0x78
		::UnityEngine::UI::Button* FCIOPHJPDPG; // 0x80
		::UnityEngine::Transform* DGNBGCHECOB; // 0x88
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x90
		::RPG::GameCore::TurnBasedModifierInstance* NMBAMGFCCHP; // 0x98
		::UnityEngine::Transform* MACEILOIEKA; // 0xA0
		::System::Object* MFGAGCOCPDP; // 0xA8
		::UnityEngine::Transform* JIFPALLIGIA; // 0xB0
		::UnityEngine::UI::Image* OKCIHECIMEC; // 0xB8
		::UnityEngine::UI::Text* BKIJBCHJDOH; // 0xC0
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
