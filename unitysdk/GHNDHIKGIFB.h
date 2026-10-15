#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define GHNDHIKGIFB_CTOR_OFFSET UNITYSDK_OFFSET(0x15A2AD10)
#define GHNDHIKGIFB_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15A2A920)
#define GHNDHIKGIFB_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15A2AA90)
#define GHNDHIKGIFB_HJPCBAMPHPC_OFFSET UNITYSDK_OFFSET(0x15A2ABB0)
#define GHNDHIKGIFB_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x15A2AA00)
#define GHNDHIKGIFB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x15A2AB60)
#define GHNDHIKGIFB__ONBIND_OFFSET UNITYSDK_OFFSET(0x15A2A890)
#define GHNDHIKGIFB__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x15A2A9B0)

	class GHNDHIKGIFB : public ::FMPCODLIOLG
	{
	public:
		::System::String* LEGDNFGIKLA; // 0x60
		::UnityEngine::Transform* MNLKGBMNIBH; // 0x68
		::RPG::GameCore::BattleGridFightAvatarData* OAEOLANBFMB; // 0x70
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNDHIKGIFB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNDHIKGIFB__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + GHNDHIKGIFB_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNDHIKGIFB__ONDISPOSE_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNDHIKGIFB_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::GameCore::BattleGridFightAvatarData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + GHNDHIKGIFB_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void HJPCBAMPHPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNDHIKGIFB_HJPCBAMPHPC_OFFSET))(this);
		}

		::System::Void KGJAMKFPOAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNDHIKGIFB_KGJAMKFPOAB_OFFSET))(this);
		}

	};
