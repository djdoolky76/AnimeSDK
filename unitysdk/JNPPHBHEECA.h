#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class DOBHGKLLBEA;
class KCEOHCCIPIE;
class PMCKIIMPIIA;
namespace RPG::Client { class BattleSilverWolf999CustomUIData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define JNPPHBHEECA_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB28D5A0)
#define JNPPHBHEECA_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB28D670)
#define JNPPHBHEECA_CTOR_OFFSET UNITYSDK_OFFSET(0xB28D710)
#define JNPPHBHEECA_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB28D170)
#define JNPPHBHEECA_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB28D1D0)
#define JNPPHBHEECA_EMJLEJCLNLP_OFFSET UNITYSDK_OFFSET(0xB28D370)
#define JNPPHBHEECA_HIEIOKHNMPB_OFFSET UNITYSDK_OFFSET(0xB28D320)
#define JNPPHBHEECA_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xB28D2B0)
#define JNPPHBHEECA_LKHFOAPIEHF_OFFSET UNITYSDK_OFFSET(0xB28D4E0)
#define JNPPHBHEECA_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB28CFF0)
#define JNPPHBHEECA__ONBIND_OFFSET UNITYSDK_OFFSET(0xB28CDB0)

inline static constexpr unsigned int JNPPHBHEECA_TypeDefinitionIndex = 71939;

	class JNPPHBHEECA : public ::FMPCODLIOLG
	{
	public:
		::PMCKIIMPIIA* MOHBBJBMNFF; // 0x60
		::RPG::Client::BattleSilverWolf999CustomUIData* APPIHABBCGK; // 0x68
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x70
		::KCEOHCCIPIE* KKPMEGLFAPM; // 0x78
		::DOBHGKLLBEA* FPGCONDGEHH; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPPHBHEECA_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPPHBHEECA__ONBIND_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPPHBHEECA_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + JNPPHBHEECA_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPPHBHEECA_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPPHBHEECA_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void HIEIOKHNMPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPPHBHEECA_HIEIOKHNMPB_OFFSET))(this);
		}

		::System::Void EMJLEJCLNLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPPHBHEECA_EMJLEJCLNLP_OFFSET))(this);
		}

		::System::Void LKHFOAPIEHF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JNPPHBHEECA_LKHFOAPIEHF_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPPHBHEECA_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPPHBHEECA_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
