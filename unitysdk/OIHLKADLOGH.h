#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace UnityEngine::UI { class Image; }

#define OIHLKADLOGH_CTOR_OFFSET UNITYSDK_OFFSET(0x19490ED0)
#define OIHLKADLOGH_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x19490D40)
#define OIHLKADLOGH__ONBIND_OFFSET UNITYSDK_OFFSET(0x19490BE0)

inline static constexpr unsigned int OIHLKADLOGH_TypeDefinitionIndex = 74307;

	class OIHLKADLOGH : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::MonoUIColorSwitcher* MIALHNKKOED; // 0x60
		::UnityEngine::UI::Image* LPMHMLOGPPN; // 0x68
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHLKADLOGH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHLKADLOGH__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + OIHLKADLOGH_NKPPGDENJAE_OFFSET))(this, a1);
		}

	};
