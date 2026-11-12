#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class MDDPDPLMNFN;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace UnityEngine::UI { class Text; }

#define EGGHMNCEMMM_CTOR_OFFSET UNITYSDK_OFFSET(0x152EEE20)
#define EGGHMNCEMMM_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x152EED80)
#define EGGHMNCEMMM__ONBIND_OFFSET UNITYSDK_OFFSET(0x152EEC80)

inline static constexpr unsigned int EGGHMNCEMMM_TypeDefinitionIndex = 74395;

	class EGGHMNCEMMM : public ::FMPCODLIOLG
	{
	public:
		::MDDPDPLMNFN* DOIGHMPHHIF; // 0x60
		::UnityEngine::UI::Text* IAANMCFCPIH; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGHMNCEMMM_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGHMNCEMMM__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + EGGHMNCEMMM_NKPPGDENJAE_OFFSET))(this, a1);
		}

	};
