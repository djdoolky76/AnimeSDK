#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class MDDPDPLMNFN;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace UnityEngine::UI { class Text; }

#define EGGHMNCEMMM_CTOR_OFFSET UNITYSDK_OFFSET(0x145154C0)
#define EGGHMNCEMMM_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x14515420)
#define EGGHMNCEMMM__ONBIND_OFFSET UNITYSDK_OFFSET(0x14515380)

inline static constexpr unsigned int EGGHMNCEMMM_TypeDefinitionIndex = 72317;

	class EGGHMNCEMMM : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Text* IAANMCFCPIH; // 0x60
		::MDDPDPLMNFN* DOIGHMPHHIF; // 0x68
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
