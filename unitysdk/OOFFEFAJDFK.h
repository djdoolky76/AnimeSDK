#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/IGKFNIEJGLM.h"
class HDPEJIGDNJB;
class JGMMCGIBKFM;
class KNOCJADNCOA;
class LKMBOENPIKK;
class NBHMOHHHPNL;
class NMNIJNNFPGP;
class PGNGFJMEPMM;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define OOFFEFAJDFK_AJFDLJJCFGA_OFFSET UNITYSDK_OFFSET(0xBF73E10)
#define OOFFEFAJDFK_AJOANIFICMB_OFFSET UNITYSDK_OFFSET(0xBF73CE0)
#define OOFFEFAJDFK_AMIDDICOBDE_OFFSET UNITYSDK_OFFSET(0xBF741C0)
#define OOFFEFAJDFK_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBF74570)
#define OOFFEFAJDFK_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBF746B0)
#define OOFFEFAJDFK_BCBOLOABJCC_OFFSET UNITYSDK_OFFSET(0xBF73B70)
#define OOFFEFAJDFK_CBHGEGECCDH_OFFSET UNITYSDK_OFFSET(0xBF73D50)
#define OOFFEFAJDFK_CTOR_OFFSET UNITYSDK_OFFSET(0xBF747D0)
#define OOFFEFAJDFK_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xBF73140)
#define OOFFEFAJDFK_DMDJPPDPFLL_OFFSET UNITYSDK_OFFSET(0xBF73AF0)
#define OOFFEFAJDFK_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xBF739E0)
#define OOFFEFAJDFK_EMLOCDDJNOK_OFFSET UNITYSDK_OFFSET(0xBF742B0)
#define OOFFEFAJDFK_FHAFKAOAHMC_OFFSET UNITYSDK_OFFSET(0xBF74360)
#define OOFFEFAJDFK_HBBLJKMBFAI_OFFSET UNITYSDK_OFFSET(0xBF73F70)
#define OOFFEFAJDFK_IFEKAHNLAOE_OFFSET UNITYSDK_OFFSET(0xBF73F10)
#define OOFFEFAJDFK_IKANLMKJEIO_OFFSET UNITYSDK_OFFSET(0xBF73430)
#define OOFFEFAJDFK_JCNMBNPEECB_OFFSET UNITYSDK_OFFSET(0xBF743B0)
#define OOFFEFAJDFK_JHPOMOBIMHN_OFFSET UNITYSDK_OFFSET(0xBF74120)
#define OOFFEFAJDFK_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xBF73A40)
#define OOFFEFAJDFK_KNJAAMIDHOB_OFFSET UNITYSDK_OFFSET(0xBF738C0)
#define OOFFEFAJDFK_MDDHHMKMAKJ_OFFSET UNITYSDK_OFFSET(0xBF74420)
#define OOFFEFAJDFK_MELBAMPBLKI_OFFSET UNITYSDK_OFFSET(0xBF744E0)
#define OOFFEFAJDFK_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBF73C60)
#define OOFFEFAJDFK_PIFKMBDGCKG_OFFSET UNITYSDK_OFFSET(0xBF74090)
#define OOFFEFAJDFK_PNJKFOILFOB_OFFSET UNITYSDK_OFFSET(0xBF73EC0)
#define OOFFEFAJDFK__ONBIND_OFFSET UNITYSDK_OFFSET(0xBF73350)

inline static constexpr unsigned int OOFFEFAJDFK_TypeDefinitionIndex = 71974;

	class OOFFEFAJDFK : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::LKMBOENPIKK* DJBGECNBDBP; // 0x68
		::System::Collections::Generic::Dictionary_2<::RPG::Client::UISkillIndex, ::NMNIJNNFPGP*>* OMBMEAGNBNL; // 0x70
		::UnityEngine::Animator* APPGGMLEPLN; // 0x78
		::JGMMCGIBKFM* CHAPCPPJAAK; // 0x80
		::PGNGFJMEPMM* CAICEMLCJMI; // 0x88
		::UnityEngine::Transform* MACEILOIEKA; // 0x90
		::NBHMOHHHPNL* INAKMLEEPKG; // 0x98
		::HDPEJIGDNJB* PNPNGCLCCNP; // 0xA0
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0xA8
		::System::Int32 LABMJKHBCAG; // 0xB0
		::System::Int32 IGMOLKIDPFC; // 0xB4
		::System::Boolean DLOBMONPOIO; // 0xB8
		::System::Boolean EINNACFPAEN; // 0xB9
		::System::Boolean EMDEPKMDKDP; // 0xBA
		// static const ::System::Object JBJANMBJNIG; // 0x0
		// static const ::System::Object DGJHCCJJOLF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFFEFAJDFK_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + OOFFEFAJDFK_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFFEFAJDFK__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFFEFAJDFK_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::KNOCJADNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNOCJADNCOA*))((::PBYTE)hIl2Cpp + OOFFEFAJDFK_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>* CBHGEGECCDH(::RPG::Client::UISkillIndex a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>*(*)(::PVOID, ::RPG::Client::UISkillIndex, ::System::Boolean))((::PBYTE)hIl2Cpp + OOFFEFAJDFK_CBHGEGECCDH_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>* AJFDLJJCFGA()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFFEFAJDFK_AJFDLJJCFGA_OFFSET))(this);
		}

		::RPG::Client::UISkillIndex PNJKFOILFOB(::RPG::Client::UISkillIndex a1)
		{
			return ((::RPG::Client::UISkillIndex(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + OOFFEFAJDFK_PNJKFOILFOB_OFFSET))(this, a1);
		}

		::System::Void IKANLMKJEIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFFEFAJDFK_IKANLMKJEIO_OFFSET))(this);
		}

		::System::Void KNJAAMIDHOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFFEFAJDFK_KNJAAMIDHOB_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFFEFAJDFK_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void IFEKAHNLAOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFFEFAJDFK_IFEKAHNLAOE_OFFSET))(this);
		}

		::System::Void AJOANIFICMB(::KNOCJADNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNOCJADNCOA*))((::PBYTE)hIl2Cpp + OOFFEFAJDFK_AJOANIFICMB_OFFSET))(this, a1);
		}

		::System::Void HBBLJKMBFAI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OOFFEFAJDFK_HBBLJKMBFAI_OFFSET))(this, a1);
		}

		::System::Void JHPOMOBIMHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFFEFAJDFK_JHPOMOBIMHN_OFFSET))(this);
		}

		::System::Void PIFKMBDGCKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFFEFAJDFK_PIFKMBDGCKG_OFFSET))(this);
		}

		::System::Void BCBOLOABJCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFFEFAJDFK_BCBOLOABJCC_OFFSET))(this);
		}

		::System::Void DMDJPPDPFLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFFEFAJDFK_DMDJPPDPFLL_OFFSET))(this);
		}

		::System::Void AMIDDICOBDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFFEFAJDFK_AMIDDICOBDE_OFFSET))(this);
		}

		::System::Void EMLOCDDJNOK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OOFFEFAJDFK_EMLOCDDJNOK_OFFSET))(this, a1);
		}

		::System::Void FHAFKAOAHMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFFEFAJDFK_FHAFKAOAHMC_OFFSET))(this);
		}

		::System::Void JCNMBNPEECB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFFEFAJDFK_JCNMBNPEECB_OFFSET))(this);
		}

		::System::Void MDDHHMKMAKJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OOFFEFAJDFK_MDDHHMKMAKJ_OFFSET))(this, a1);
		}

		::System::Void MELBAMPBLKI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OOFFEFAJDFK_MELBAMPBLKI_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFFEFAJDFK_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFFEFAJDFK_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
