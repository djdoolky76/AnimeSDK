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

#define NOIKIEBDOEB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBCF0F70)
#define NOIKIEBDOEB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBCF1040)
#define NOIKIEBDOEB_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF10E0)
#define NOIKIEBDOEB_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xBCF08F0)
#define NOIKIEBDOEB_DJBCNEKOFAJ_OFFSET UNITYSDK_OFFSET(0xBCF0BF0)
#define NOIKIEBDOEB_GHDLILPJIBI_OFFSET UNITYSDK_OFFSET(0xBCF0CF0)
#define NOIKIEBDOEB_INLCFJGBCLJ_OFFSET UNITYSDK_OFFSET(0xBCF0DF0)
#define NOIKIEBDOEB_LHGJAJLNBPE_OFFSET UNITYSDK_OFFSET(0xBCF0E70)
#define NOIKIEBDOEB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBCF0A10)
#define NOIKIEBDOEB_OLFLGNAFPJK_OFFSET UNITYSDK_OFFSET(0xBCF0A70)
#define NOIKIEBDOEB__ONBIND_OFFSET UNITYSDK_OFFSET(0xBCF0970)

inline static constexpr unsigned int NOIKIEBDOEB_TypeDefinitionIndex = 72236;

	class NOIKIEBDOEB : public ::FMPCODLIOLG
	{
	public:
		::FBMOHEFENME* LMLNMBIKDAE; // 0x60
		::FBMOHEFENME_OLAPONLEDAK LCPELAJLCAF; // 0x68
		::CIEMCICGAEM* BMGKGDNDHHO; // 0x78
		::IBELNHPNBEC* HHJDJDIMIEA; // 0x80
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x88
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
