#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBGNOBLIAGL.h"
#include "unitysdk/AFLELOJKGHN.h"
#include "unitysdk/KJFIKOKBCCA.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class IGroup; }
namespace RPG::GameCore { class BaseScrollGameBlockConfig; }

#define MMNMMKNDPGN_ABJJBLHEPMA_OFFSET UNITYSDK_OFFSET(0xB9DE300)
#define MMNMMKNDPGN_ACBJKFPFMAI_OFFSET UNITYSDK_OFFSET(0xB9DBAC0)
#define MMNMMKNDPGN_ADHFLFMPAGO_OFFSET UNITYSDK_OFFSET(0xB9DB040)
#define MMNMMKNDPGN_BADJCIBELAP_OFFSET UNITYSDK_OFFSET(0xB9DBE20)
#define MMNMMKNDPGN_BPIDCNGDIKN_OFFSET UNITYSDK_OFFSET(0xB9DE350)
#define MMNMMKNDPGN_CDNNJHPJNIK_OFFSET UNITYSDK_OFFSET(0xB9DD580)
#define MMNMMKNDPGN_CTOR_OFFSET UNITYSDK_OFFSET(0xB9DA530)
#define MMNMMKNDPGN_EAFADNEDDOJ_OFFSET UNITYSDK_OFFSET(0xB9DC8D0)
#define MMNMMKNDPGN_ELEBFCEAMOC_OFFSET UNITYSDK_OFFSET(0xB9DD2A0)
#define MMNMMKNDPGN_ENFLFDJNIME_OFFSET UNITYSDK_OFFSET(0xB9DE0A0)
#define MMNMMKNDPGN_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB9DB1C0)
#define MMNMMKNDPGN_FKPHGBEIJGC_OFFSET UNITYSDK_OFFSET(0xB9DC0C0)
#define MMNMMKNDPGN_GJLBCDMALJP_OFFSET UNITYSDK_OFFSET(0xB9DC6C0)
#define MMNMMKNDPGN_HAPFLBLBMGP_OFFSET UNITYSDK_OFFSET(0xB9DB750)
#define MMNMMKNDPGN_IHFOJLLJBPH_OFFSET UNITYSDK_OFFSET(0xB9DCE50)
#define MMNMMKNDPGN_ILDKDDGOGEJ_OFFSET UNITYSDK_OFFSET(0xB9DC180)
#define MMNMMKNDPGN_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB9DA6D0)
#define MMNMMKNDPGN_IOEKHDKEKLC_OFFSET UNITYSDK_OFFSET(0xB9DE1B0)
#define MMNMMKNDPGN_JFMCHCMLABG_OFFSET UNITYSDK_OFFSET(0xB9DE2A0)
#define MMNMMKNDPGN_JMADNGFCECD_OFFSET UNITYSDK_OFFSET(0xB9DC580)
#define MMNMMKNDPGN_KFJJEJIFLEE_OFFSET UNITYSDK_OFFSET(0xB9DBDE0)
#define MMNMMKNDPGN_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0xB9DB5F0)
#define MMNMMKNDPGN_LCINCJMOOEH_OFFSET UNITYSDK_OFFSET(0xB9DE020)
#define MMNMMKNDPGN_LIGAEAPHFMM_OFFSET UNITYSDK_OFFSET(0xB9DC1C0)
#define MMNMMKNDPGN_MDCLGHJCFCJ_OFFSET UNITYSDK_OFFSET(0xB9DCCC0)
#define MMNMMKNDPGN_MHKAFGGBAPF_OFFSET UNITYSDK_OFFSET(0xB9DBEE0)
#define MMNMMKNDPGN_MKBNJGMPLLN_OFFSET UNITYSDK_OFFSET(0xB9DB940)
#define MMNMMKNDPGN_NGGHLBDENKP_OFFSET UNITYSDK_OFFSET(0xB9DDD70)
#define MMNMMKNDPGN_NLKOHJCMKJH_OFFSET UNITYSDK_OFFSET(0xB9DE160)
#define MMNMMKNDPGN_NMDACNFGFHP_OFFSET UNITYSDK_OFFSET(0xB9DE100)
#define MMNMMKNDPGN_OABDJEBKACD_OFFSET UNITYSDK_OFFSET(0xB9DB5B0)
#define MMNMMKNDPGN_PAMGIMGPEFB_OFFSET UNITYSDK_OFFSET(0xB9DCEB0)
#define MMNMMKNDPGN_PBJNGGLDAGE_OFFSET UNITYSDK_OFFSET(0xB9DCB10)
#define MMNMMKNDPGN_PJJKDBGLNJE_OFFSET UNITYSDK_OFFSET(0xB9DB6A0)
#define MMNMMKNDPGN_POOLDMKLJLJ_OFFSET UNITYSDK_OFFSET(0xB9DBCB0)
#define MMNMMKNDPGN_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB9DA670)

	class MMNMMKNDPGN : public ::BBGNOBLIAGL
	{
	public:
		::Entitas::IGroup* GHPEBGJJDMC; // 0x20
		::Entitas::IGroup* HMMMHIDEFCA; // 0x28
		::System::Boolean ABKMPGNDAHO; // 0x30
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_TEARDOWN_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_EXECUTE_OFFSET))(this);
		}

		::System::Void OABDJEBKACD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_OABDJEBKACD_OFFSET))(this);
		}

		::System::Void LateExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_LATEEXECUTE_OFFSET))(this);
		}

		::System::Void PJJKDBGLNJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_PJJKDBGLNJE_OFFSET))(this);
		}

		::System::Void HAPFLBLBMGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_HAPFLBLBMGP_OFFSET))(this);
		}

		::System::Void POOLDMKLJLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_POOLDMKLJLJ_OFFSET))(this);
		}

		::System::Void KFJJEJIFLEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_KFJJEJIFLEE_OFFSET))(this);
		}

		::System::Void BADJCIBELAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_BADJCIBELAP_OFFSET))(this);
		}

		::System::Void MHKAFGGBAPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_MHKAFGGBAPF_OFFSET))(this);
		}

		::System::Void FKPHGBEIJGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_FKPHGBEIJGC_OFFSET))(this);
		}

		::System::Void ILDKDDGOGEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_ILDKDDGOGEJ_OFFSET))(this);
		}

		::System::Void LIGAEAPHFMM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_LIGAEAPHFMM_OFFSET))(this, a1);
		}

		::System::Void EAFADNEDDOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_EAFADNEDDOJ_OFFSET))(this);
		}

		::System::Boolean PBJNGGLDAGE(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_PBJNGGLDAGE_OFFSET))(this, a1);
		}

		::System::Boolean MDCLGHJCFCJ(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_MDCLGHJCFCJ_OFFSET))(this, a1);
		}

		::System::Void IHFOJLLJBPH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_IHFOJLLJBPH_OFFSET))(this, a1);
		}

		::System::Void PAMGIMGPEFB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_PAMGIMGPEFB_OFFSET))(this, a1);
		}

		::System::Void ELEBFCEAMOC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_ELEBFCEAMOC_OFFSET))(this, a1);
		}

		::System::Void NGGHLBDENKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_NGGHLBDENKP_OFFSET))(this);
		}

		::System::Boolean ACBJKFPFMAI(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_ACBJKFPFMAI_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean LCINCJMOOEH(::System::Int32 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_LCINCJMOOEH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CDNNJHPJNIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_CDNNJHPJNIK_OFFSET))(this);
		}

		::System::Void GJLBCDMALJP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_GJLBCDMALJP_OFFSET))(this, a1);
		}

		::HIOEAKHGILF* JMADNGFCECD()
		{
			return ((::HIOEAKHGILF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_JMADNGFCECD_OFFSET))(this);
		}

		::HIOEAKHGILF* ENFLFDJNIME()
		{
			return ((::HIOEAKHGILF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_ENFLFDJNIME_OFFSET))(this);
		}

		::System::Single NMDACNFGFHP(::HIOEAKHGILF* a1, ::RPG::GameCore::BaseScrollGameBlockConfig* a2)
		{
			return ((::System::Single(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::BaseScrollGameBlockConfig*))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_NMDACNFGFHP_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 NLKOHJCMKJH()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_NLKOHJCMKJH_OFFSET))(this);
		}

		::UnityEngine::Vector3 IOEKHDKEKLC(::AFLELOJKGHN a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::AFLELOJKGHN))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_IOEKHDKEKLC_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 JFMCHCMLABG(::System::Single a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_JFMCHCMLABG_OFFSET))(this, a1);
		}

		::System::Single ABJJBLHEPMA(::AFLELOJKGHN a1)
		{
			return ((::System::Single(*)(::PVOID, ::AFLELOJKGHN))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_ABJJBLHEPMA_OFFSET))(this, a1);
		}

		::System::Single BPIDCNGDIKN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_BPIDCNGDIKN_OFFSET))(this);
		}

		::KJFIKOKBCCA ADHFLFMPAGO()
		{
			return ((::KJFIKOKBCCA(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_ADHFLFMPAGO_OFFSET))(this);
		}

		::KJFIKOKBCCA MKBNJGMPLLN()
		{
			return ((::KJFIKOKBCCA(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNMMKNDPGN_MKBNJGMPLLN_OFFSET))(this);
		}

	};
