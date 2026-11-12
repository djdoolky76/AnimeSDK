#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define GHNDHIKGIFB_CTOR_OFFSET UNITYSDK_OFFSET(0x16965430)
#define GHNDHIKGIFB_HJPCBAMPHPC_OFFSET UNITYSDK_OFFSET(0x169652D0)
#define GHNDHIKGIFB_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x16965050)
#define GHNDHIKGIFB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x16965280)
#define GHNDHIKGIFB__ONBIND_OFFSET UNITYSDK_OFFSET(0x16964E60)
#define GHNDHIKGIFB__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x16965000)
#define GHNDHIKGIFB__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x16964F70)
#define GHNDHIKGIFB__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x169650E0)

inline static constexpr unsigned int GHNDHIKGIFB_TypeDefinitionIndex = 74327;

	class GHNDHIKGIFB : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::UIStateCtrl* JINLLOBAGML; // 0x60
		::RPG::GameCore::BattleGridFightAvatarData* OAEOLANBFMB; // 0x68
		::UnityEngine::Transform* MNLKGBMNIBH; // 0x70
		::System::String* LEGDNFGIKLA; // 0x78
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* PGOLNGFHMGH; // 0x0
		// static const ::System::String* EMOCHLJIGOL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNDHIKGIFB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNDHIKGIFB__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + GHNDHIKGIFB__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNDHIKGIFB__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNDHIKGIFB__SETUPVIEW_OFFSET))(this);
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
