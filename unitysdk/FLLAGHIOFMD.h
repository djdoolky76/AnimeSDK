#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class ShowAttackTimeParam; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define FLLAGHIOFMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1896CD70)
#define FLLAGHIOFMD_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x1896CD20)
#define FLLAGHIOFMD_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1896CC30)
#define FLLAGHIOFMD__ONBIND_OFFSET UNITYSDK_OFFSET(0x1896CB00)

inline static constexpr unsigned int FLLAGHIOFMD_TypeDefinitionIndex = 73210;

	class FLLAGHIOFMD : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* LPMHMLOGPPN; // 0x60
		::UnityEngine::UI::Text* GEPFFDDHPAI; // 0x68
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
