#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBMOHEFENME_OLAPONLEDAK.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class AFLMFFKACMJ;
class BONGEDMOKEL;
class FBMOHEFENME;
class MJOGAHHOJMH;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class FateBattleShowArcherUI; }
namespace RPG::GameCore { class FateBattleShowRiderUI; }
namespace System { class Object; }

#define AODPLOPNOMJ_AONMNEIGKFA_OFFSET UNITYSDK_OFFSET(0x1A842390)
#define AODPLOPNOMJ_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A843150)
#define AODPLOPNOMJ_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1A8432B0)
#define AODPLOPNOMJ_CBCLLPAIBDI_OFFSET UNITYSDK_OFFSET(0x1A8428B0)
#define AODPLOPNOMJ_CDKDJNIJMIN_OFFSET UNITYSDK_OFFSET(0x1A8422A0)
#define AODPLOPNOMJ_CHKKEEOBBLM_OFFSET UNITYSDK_OFFSET(0x1A8420B0)
#define AODPLOPNOMJ_CLONLEBHGBK_OFFSET UNITYSDK_OFFSET(0x1A842C10)
#define AODPLOPNOMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8433E0)
#define AODPLOPNOMJ_EMDBODMHGEN_OFFSET UNITYSDK_OFFSET(0x1A841E80)
#define AODPLOPNOMJ_FDLJJHJIEMC_OFFSET UNITYSDK_OFFSET(0x1A842EA0)
#define AODPLOPNOMJ_IKNCENIEAPM_OFFSET UNITYSDK_OFFSET(0x1A841FF0)
#define AODPLOPNOMJ_IMILNJKAONO_OFFSET UNITYSDK_OFFSET(0x1A8429F0)
#define AODPLOPNOMJ_JJBGNJFCHPL_OFFSET UNITYSDK_OFFSET(0x1A842550)
#define AODPLOPNOMJ_LFLBNPHOGFJ_OFFSET UNITYSDK_OFFSET(0x1A841D10)
#define AODPLOPNOMJ_LHANCLKOGJI_OFFSET UNITYSDK_OFFSET(0x1A842730)
#define AODPLOPNOMJ_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1A841C80)
#define AODPLOPNOMJ_OFICPGKCFJK_OFFSET UNITYSDK_OFFSET(0x1A8425B0)
#define AODPLOPNOMJ_OJNEDCHFAAP_OFFSET UNITYSDK_OFFSET(0x1A843090)
#define AODPLOPNOMJ_PHEAIENMGLG_OFFSET UNITYSDK_OFFSET(0x1A842990)
#define AODPLOPNOMJ_PJKOPMMMMNG_OFFSET UNITYSDK_OFFSET(0x1A842FD0)
#define AODPLOPNOMJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A841BD0)
#define AODPLOPNOMJ__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1A841B50)

inline static constexpr unsigned int AODPLOPNOMJ_TypeDefinitionIndex = 74296;

	class AODPLOPNOMJ : public ::FMPCODLIOLG
	{
	public:
		::AFLMFFKACMJ* PNDBAIKEIPJ; // 0x60
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x68
		::MJOGAHHOJMH* EFFECMFPIHE; // 0x70
		::BONGEDMOKEL* NHDDDCLEGAL; // 0x78
		::FBMOHEFENME_OLAPONLEDAK LCPELAJLCAF; // 0x80
		::FBMOHEFENME* LMLNMBIKDAE; // 0x90
		::System::Boolean ODONAHEHEEB; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODPLOPNOMJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + AODPLOPNOMJ__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODPLOPNOMJ__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODPLOPNOMJ_NKPPGDENJAE_OFFSET))(this);
		}

		::System::Void JJBGNJFCHPL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AODPLOPNOMJ_JJBGNJFCHPL_OFFSET))(this, a1);
		}

		::System::Void LFLBNPHOGFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODPLOPNOMJ_LFLBNPHOGFJ_OFFSET))(this);
		}

		::System::Void EMDBODMHGEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODPLOPNOMJ_EMDBODMHGEN_OFFSET))(this);
		}

		::System::Void AONMNEIGKFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODPLOPNOMJ_AONMNEIGKFA_OFFSET))(this);
		}

		::System::Boolean CBCLLPAIBDI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AODPLOPNOMJ_CBCLLPAIBDI_OFFSET))(this);
		}

		::System::Void IKNCENIEAPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODPLOPNOMJ_IKNCENIEAPM_OFFSET))(this);
		}

		::System::Void CHKKEEOBBLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODPLOPNOMJ_CHKKEEOBBLM_OFFSET))(this);
		}

		::System::Void PHEAIENMGLG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AODPLOPNOMJ_PHEAIENMGLG_OFFSET))(this, a1);
		}

		::System::Void CDKDJNIJMIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODPLOPNOMJ_CDKDJNIJMIN_OFFSET))(this);
		}

		::System::Void OFICPGKCFJK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AODPLOPNOMJ_OFICPGKCFJK_OFFSET))(this, a1);
		}

		::System::Void IMILNJKAONO(::RPG::GameCore::FateBattleShowRiderUI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateBattleShowRiderUI*))((::PBYTE)hIl2Cpp + AODPLOPNOMJ_IMILNJKAONO_OFFSET))(this, a1);
		}

		::System::Void CLONLEBHGBK(::RPG::GameCore::FateBattleShowArcherUI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateBattleShowArcherUI*))((::PBYTE)hIl2Cpp + AODPLOPNOMJ_CLONLEBHGBK_OFFSET))(this, a1);
		}

		::System::Void LHANCLKOGJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AODPLOPNOMJ_LHANCLKOGJI_OFFSET))(this, a1);
		}

		::System::Void FDLJJHJIEMC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AODPLOPNOMJ_FDLJJHJIEMC_OFFSET))(this, a1);
		}

		::System::Void PJKOPMMMMNG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AODPLOPNOMJ_PJKOPMMMMNG_OFFSET))(this, a1);
		}

		::System::Void OJNEDCHFAAP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AODPLOPNOMJ_OJNEDCHFAAP_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODPLOPNOMJ_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODPLOPNOMJ_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
