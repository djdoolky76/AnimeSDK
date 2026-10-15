#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBMOHEFENME_OLAPONLEDAK.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/BattleScoringDisplayType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class CIEMCICGAEM;
class FBMOHEFENME;
class IBELNHPNBEC;
namespace RPG::GameCore { class BattleInstance; }
namespace System { class Object; }

#define NOIKIEBDOEB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBCE9DA0)
#define NOIKIEBDOEB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBCE9E70)
#define NOIKIEBDOEB_CTOR_OFFSET UNITYSDK_OFFSET(0xBCE9F10)
#define NOIKIEBDOEB_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xBCE9720)
#define NOIKIEBDOEB_DJBCNEKOFAJ_OFFSET UNITYSDK_OFFSET(0xBCE9A20)
#define NOIKIEBDOEB_GHDLILPJIBI_OFFSET UNITYSDK_OFFSET(0xBCE9B20)
#define NOIKIEBDOEB_INLCFJGBCLJ_OFFSET UNITYSDK_OFFSET(0xBCE9C20)
#define NOIKIEBDOEB_LHGJAJLNBPE_OFFSET UNITYSDK_OFFSET(0xBCE9CA0)
#define NOIKIEBDOEB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBCE9840)
#define NOIKIEBDOEB_OLFLGNAFPJK_OFFSET UNITYSDK_OFFSET(0xBCE98A0)
#define NOIKIEBDOEB__ONBIND_OFFSET UNITYSDK_OFFSET(0xBCE97A0)

inline static constexpr unsigned int NOIKIEBDOEB_TypeDefinitionIndex = 72235;

	class NOIKIEBDOEB : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x60
		::FBMOHEFENME* LMLNMBIKDAE; // 0x68
		::IBELNHPNBEC* HHJDJDIMIEA; // 0x70
		::FBMOHEFENME_OLAPONLEDAK LCPELAJLCAF; // 0x78
		::CIEMCICGAEM* BMGKGDNDHHO; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIKIEBDOEB_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + NOIKIEBDOEB_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIKIEBDOEB__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIKIEBDOEB_NKPPGDENJAE_OFFSET))(this);
		}

		::System::Void DJBCNEKOFAJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOIKIEBDOEB_DJBCNEKOFAJ_OFFSET))(this, a1);
		}

		::System::Void OLFLGNAFPJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIKIEBDOEB_OLFLGNAFPJK_OFFSET))(this);
		}

		::RPG::GameCore::BattleScoringDisplayType GHDLILPJIBI()
		{
			return ((::RPG::GameCore::BattleScoringDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIKIEBDOEB_GHDLILPJIBI_OFFSET))(this);
		}

		::System::Void INLCFJGBCLJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOIKIEBDOEB_INLCFJGBCLJ_OFFSET))(this, a1);
		}

		::System::Void LHGJAJLNBPE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NOIKIEBDOEB_LHGJAJLNBPE_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIKIEBDOEB_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIKIEBDOEB_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
