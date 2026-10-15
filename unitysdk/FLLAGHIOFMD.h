#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class ShowAttackTimeParam; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define FLLAGHIOFMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1583DA80)
#define FLLAGHIOFMD_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x1583DA30)
#define FLLAGHIOFMD_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1583D940)
#define FLLAGHIOFMD__ONBIND_OFFSET UNITYSDK_OFFSET(0x1583D8C0)

inline static constexpr unsigned int FLLAGHIOFMD_TypeDefinitionIndex = 71232;

	class FLLAGHIOFMD : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Text* GEPFFDDHPAI; // 0x60
		::UnityEngine::UI::Image* LPMHMLOGPPN; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLAGHIOFMD_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLAGHIOFMD__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::Client::ShowAttackTimeParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ShowAttackTimeParam*))((::PBYTE)hIl2Cpp + FLLAGHIOFMD_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void KGJAMKFPOAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLAGHIOFMD_KGJAMKFPOAB_OFFSET))(this);
		}

	};
