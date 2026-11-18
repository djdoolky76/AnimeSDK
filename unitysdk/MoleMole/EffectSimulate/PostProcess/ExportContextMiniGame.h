#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/PostProcess/ExportContextBase.h"

namespace System { class String; }

#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMINIGAME_DIOBEHNNDPM_OFFSET UNITYSDK_OFFSET(0x19B65F60)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMINIGAME_EGMJCKHCDDP_OFFSET UNITYSDK_OFFSET(0x19B660F0)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMINIGAME_HEEJMEPNOPK_OFFSET UNITYSDK_OFFSET(0x19B66070)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMINIGAME_JLFLBPABKHM_OFFSET UNITYSDK_OFFSET(0x19B65D70)
#define MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMINIGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x19B660E0)

namespace MoleMole::EffectSimulate::PostProcess
{
	inline static constexpr unsigned int ExportContextMiniGame_TypeDefinitionIndex = 80879;

	class ExportContextMiniGame : public ::MoleMole::EffectSimulate::PostProcess::ExportContextBase
	{
	public:
		::System::String* gameName; // 0x18
		::System::String* str; // 0x20
		::MoleMole::Config::ScreenEffectType moduleType; // 0x28
		::System::Int32 markID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMINIGAME__CTOR_OFFSET))(this);
		}

		::System::String* JLFLBPABKHM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMINIGAME_JLFLBPABKHM_OFFSET))(this);
		}

		::System::String* DIOBEHNNDPM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMINIGAME_DIOBEHNNDPM_OFFSET))(this);
		}

		::System::String* HEEJMEPNOPK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMINIGAME_HEEJMEPNOPK_OFFSET))(this);
		}

		::System::Boolean EGMJCKHCDDP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_POSTPROCESS_EXPORTCONTEXTMINIGAME_EGMJCKHCDDP_OFFSET))(this);
		}
	};
}
